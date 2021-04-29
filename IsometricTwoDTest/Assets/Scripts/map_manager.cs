﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Text.RegularExpressions;
using System.Linq;

public class map_manager : MonoBehaviour
{
    // External Classes//
    import_manager import_manager;                 // Import_Manager Class that facilitates cross class, player, and server function calls.
    Tile Tile;                           // Importing the Tile class.

    // Public Global Variables //
    public int mapWidth = 10;              // The number of tiles across the width and height of the map is.
    public int cloudCover = 20;
    public GameObject water;                      // The water GroundType's GameObject.
    public GameObject sand;
    public GameObject cloud;
    public GameObject vikingLand;                 // The viking GroundType's GameObject.
    public GameObject greekLand;                  // The greek GroundType's GameObject.
    public GameObject asianLand;                  // The asian GroundType's GameObject.
    private GameObject currentSelectedTile = null; // stores what tile is currently selected
    public string currentCharacter = null;    // Character on current selected tile
    public map_item[,] map;                        // The games current map as a 2-dimintional array of map_items.
    public GroundTypes types;                       // Holds all of the materials for each ground item.
    public int treeAmount = 10;                 // The number of ground items that one will have a tree on.
    public tree_type typesOfTrees;


    // This class contains all of the details the map needs for each ground item.
    public class map_item
    {
        public int groundType;       // Type of ground like water, asian, etc.
        public int xVirtualPosition; // The x position on the virtual grid.
        public int yVirtualPosition; // The y posiiton on the virtual grid.
        public GameObject ground;       // The GameObject for the gorund.
        public bool hasTree;         // Determines if this map item has a tree on it.

        // Contructor for map_item class.
        public map_item(int groundType, int xVirtualPosition, int yVirtualPosition, bool hasTree)
        {
            this.groundType = groundType;
            this.xVirtualPosition = xVirtualPosition;
            this.yVirtualPosition = yVirtualPosition;
            this.hasTree = hasTree;
        }
    }

    // Start is called before the first frame update
    void Start()
    {
        import_manager = GameObject.Find("network_manager").GetComponent<import_manager>();
    }

    // Creates one ground object
    private void create_ground(float xPosition, float yPosition, float zPosition, map_item groundItem)
    {
        GameObject ground = water; // The GameObject for the ground prefab of the type of ground being created.

        // GroundType 0 is Asian groundType.
        if (groundItem.groundType == 0)
        {
            ground = asianLand;
        }
        // GroundType 1 is Greek groundType.
        else if (groundItem.groundType == 1)
        {
            ground = greekLand;
        }
        // GroundType 2 is Viking groundType.
        else if (groundItem.groundType == 2)
        {
            ground = vikingLand;
        }

        if (groundItem.groundType >= -1)
        {
            groundItem.ground = Instantiate(ground, new Vector3(xPosition, yPosition, zPosition), Quaternion.Euler(new Vector3(30, 0, -45)));//new Vector3(210, 0, 135)
            groundItem.ground.name = "map";
            groundItem.ground.GetComponent<Tile>().set_civilization(groundItem.groundType);
            groundItem.ground.GetComponent<Tile>().set_grid(groundItem.xVirtualPosition, groundItem.yVirtualPosition);

            if (groundItem.hasTree && groundItem.groundType >= 0)
            {
                groundItem.ground.GetComponent<Tile>().add_tree(Random.Range(0, typesOfTrees.get_trees_of_civilization(groundItem.groundType).Count));
            }
            else if (groundItem.groundType == -1)
            {
                Vector3 sandPosition = new Vector3(xPosition, yPosition, zPosition);
                sandPosition.z += 10;

                Instantiate(sand, sandPosition, Quaternion.Euler(new Vector3(30, 0, -45)));
            }

            Vector3 cloudPosition = new Vector3(xPosition, yPosition, zPosition);
            cloudPosition.z -= 20;

            groundItem.ground.GetComponent<Tile>().set_cloud(Instantiate(cloud, cloudPosition, Quaternion.Euler(new Vector3(30, 0, -45))));
        }
        else if (groundItem.groundType == -2)
        {
            Vector3 cloudPosition = new Vector3(xPosition, yPosition, zPosition);
            cloudPosition.z -= 20;

            Instantiate(cloud, cloudPosition, Quaternion.Euler(new Vector3(30, 0, -45)));
        }
    }

    // Checks the surrounding grounds for being the same type as the given one.
    private int near_ground_type(int type, int xCoordinate, int yCoordinate)
    {
        int nearGroundType = 0; // Counts the number of surrounding grounds are of the same type.

        try
        {
            nearGroundType += (map[xCoordinate - 1, yCoordinate].groundType == type) ? 1 : 0;
        }
        catch { }
        try
        {
            nearGroundType += (map[xCoordinate - 1, yCoordinate - 1].groundType == type) ? 1 : 0;
        }
        catch { }
        try
        {
            nearGroundType += (map[xCoordinate, yCoordinate - 1].groundType == type) ? 1 : 0;
        }
        catch { }
        try
        {
            nearGroundType += (map[xCoordinate + 1, yCoordinate - 1].groundType == type) ? 1 : 0;
        }
        catch { }
        try
        {
            nearGroundType += (map[xCoordinate + 1, yCoordinate].groundType == type) ? 1 : 0;
        }
        catch { }
        try
        {
            nearGroundType += (map[xCoordinate + 1, yCoordinate + 1].groundType == type) ? 1 : 0;

        }
        catch { }
        try
        {
            nearGroundType += (map[xCoordinate, yCoordinate + 1].groundType == type) ? 1 : 0;

        }
        catch { }
        try
        {
            nearGroundType += (map[xCoordinate - 1, yCoordinate + 1].groundType == type) ? 1 : 0;

        }
        catch { }

        return nearGroundType;
    }

    // Checks the surrounding grounds for not being the same type as the given one.
    private int not_near_ground_type(int[] set, int type, int xCoordinate, int yCoordinate)
    {
        int notNearGroundType = 0; // // Counts the number of surrounding grounds are not of the same type.

        foreach (int item in set)
        {
            if (item != type)
            {
                notNearGroundType += near_ground_type(item, xCoordinate, yCoordinate);
            }
        }

        return notNearGroundType;
    }

    // Generate a map topography plan.
    // where the first prefab in grounditems is the water prefab and the string is the name of the prefab in the prefab folder
    private void generate_map(int width, int height, int[] groundItems, int landPercentage, int seed)
    {
        int water = groundItems[0];                           // Holds the water water "civ" name.
        List<int> preLand = new List<int>(groundItems);               // This is a placeholder for the land until the first item gets removed.
        preLand.RemoveAt(0);
        int[] land = preLand.ToArray();                        // Holds all the ground items given.
        int numberOfGroundItems = cloudCover * cloudCover;                           // Total number of ground items for all civs and for water.
        int numberOfLandItems = (int)(((float)numberOfGroundItems) *     // Total number of ground items for all civs.
                                           ((float)landPercentage / 100f));
        int numberOfWaterItems = numberOfGroundItems - numberOfLandItems;  // Total number of ground items for the water.
        int mapStartingVirtualPosition = (cloudCover / 2) - (mapWidth / 2);
        int mapEndingVirtualPosition = mapStartingVirtualPosition + mapWidth;
        map = new map_item[cloudCover, cloudCover];  // Holds the finished map.

        Random.InitState(seed);

        for (int localWidth = mapStartingVirtualPosition - 2; localWidth < mapEndingVirtualPosition + 2; localWidth++)
        {
            for (int localHeight = mapStartingVirtualPosition - 2; localHeight < mapEndingVirtualPosition + 2; localHeight++)
            {
                map[localWidth, localHeight] = new map_item(water, localWidth, localHeight, Random.Range(1, treeAmount) == ((int)(treeAmount / 2)));
            }
        }

        foreach (int type in land)
        {
            int localWidth = Random.Range(mapStartingVirtualPosition, (mapEndingVirtualPosition - 2));
            int localHeight = Random.Range(mapStartingVirtualPosition, (mapEndingVirtualPosition - 2));

            while ((map[localWidth, localHeight].groundType != water) &&
                   (map[localWidth + 1, localHeight].groundType != water))
            {
                localWidth = Random.Range(mapStartingVirtualPosition + 1, (mapEndingVirtualPosition - 2));
                localHeight = Random.Range(mapStartingVirtualPosition + 1, (mapEndingVirtualPosition - 2));
            }

            map[localWidth, localHeight].groundType = type;
            map[localWidth + 1, localHeight].groundType = type;

            for (int numberOfLandForThisType = (numberOfLandItems / land.Length) - 2; numberOfLandForThisType > 0; numberOfLandForThisType--)
            {
                for (int localXCoordinate = mapStartingVirtualPosition; localXCoordinate < mapEndingVirtualPosition; localXCoordinate++)
                {
                    for (int localYCoordinate = mapStartingVirtualPosition; localYCoordinate < mapEndingVirtualPosition; localYCoordinate++)
                    {
                        if ((near_ground_type(type, localXCoordinate, localYCoordinate) >= Random.Range(2, 4)) &&
                            (not_near_ground_type(land, type, localXCoordinate, localYCoordinate) >= Random.Range(0, 4)) &&
                           (map[localXCoordinate, localYCoordinate].groundType == water) &&
                           (numberOfLandForThisType != 0))
                        {
                            map[localXCoordinate, localYCoordinate].groundType = type;
                            numberOfLandForThisType--;
                        }
                    }
                }
            }
        }

        for (int xVirtualPosition = 0; xVirtualPosition < cloudCover; xVirtualPosition++)
        {
            for (int yVirtualPosition = 0; yVirtualPosition < cloudCover; yVirtualPosition++)
            {
                if (map[xVirtualPosition, yVirtualPosition] == null)
                {
                   map[xVirtualPosition, yVirtualPosition] = new map_item(-2, 0, 0, false);
                }
            }
        }
    }

    // Loads a map for the game from a seed.
    // Parameter = [int seed]
    public void load_map(string[] parameters)
    {
        generate_map(cloudCover, cloudCover, new int[4] { -1, 0, 1, 2 }, 90, int.Parse(parameters[0])); // Stores the square paderian for the map.
        //generate_cloud_map();
        
        int referencePossition = 0;                                                                            // Reference point for the map placement.                    
        float ySparatedDistance = (vikingLand.GetComponent<Renderer>().bounds.size.y / 1.65f);                       // Separation distance on the y-axis.
        float xSparatedDistance = ySparatedDistance * 2.3f;                                                     // Separation distance on the x-axis.
        float xCoordinate = referencePossition;                                                           // X-Coordinate for the next square.
        float yCoordinate = referencePossition;                                                           // Y-Coordinate for the next square.      
        float zCoordinate = referencePossition;                                                           // Z-Coordinate for the next square.
        float rowWidthIncreaser = 1f;                                                                           // The distance to increae the row width by.
        int mapDiagonal = (int) Mathf.Ceil(Mathf.Sqrt((cloudCover * cloudCover) + (cloudCover + cloudCover)));
        int[] rowCompletionStatus = new int[cloudCover];

        for (int level = 0; level < (mapDiagonal * 2); level++)
        {
            int newRowStarted = 0;

            for (int index = 0; index < rowCompletionStatus.Length; index++)
            {
                if (rowCompletionStatus[index] == 0 && newRowStarted == 0)
                {
                    create_ground(xCoordinate, yCoordinate, zCoordinate, map[index, rowCompletionStatus[index]]);

                    xCoordinate -= xSparatedDistance;
                    rowCompletionStatus[index]++;
                    newRowStarted++;
                }
                else if (rowCompletionStatus[index] != 0 && rowCompletionStatus[index] < cloudCover)
                {
                    create_ground(xCoordinate, yCoordinate, zCoordinate, map[index, rowCompletionStatus[index]]);

                    xCoordinate -= xSparatedDistance;
                    rowCompletionStatus[index]++;
                }
            }

            if (level >= (cloudCover - 1))
            {
                rowWidthIncreaser = (cloudCover - (level + 1.5f)) * 2;
            }

            yCoordinate -= ySparatedDistance;
            xCoordinate = referencePossition + (xSparatedDistance * ((level + rowWidthIncreaser) * 0.5f));
            zCoordinate -= 1;
        }
    }

    // Removes the map.
    // Parameters = []
    public void remove_map(string[] parameters)
    {
        foreach (map_item item in map)
        {
            Destroy(item.ground);
        }
    }

    // Gets a list of all land of a certain type
    public List<GameObject> get_land(int landType)
    {
        List<GameObject> landOfType = new List<GameObject>(); // List of tiles being selected of the given GroundType.

        foreach (map_item land in map)
        {
            if (land.groundType == landType)
            {
                landOfType.Add(land.ground);
            }
        }

        return landOfType;
    }

    // Finds the wanted map item and runs the given function on it.
    // Parameter = [int xVirtualPosition, int yVirtualPosition, string functionName, string[] parameter].
    public void run_on_map_item(string[] parameter)
    {
        int xVirtualPosition = int.Parse(parameter[0]);     // The x position on the virtual of the map_item needing selected.
        int yVirtualPosition = int.Parse(parameter[1]);     // The y position on the virtual of the map_item needing selected.
        string functionName = parameter[2];                // The name of the function that is to be ran on the select tile.
        List<string> parameterList = new List<string>(parameter); // The parameters for the function that will run on the selected tile.

        parameterList.RemoveAt(0);
        parameterList.RemoveAt(0);
        parameterList.RemoveAt(0);

        map[xVirtualPosition, yVirtualPosition].ground.SendMessage(functionName, parameterList.ToArray());
    }

    // Gets a list of map_items that make up the border of the map.
    public List<map_item> get_map_border()
    {
        List<map_item> mapBorder = new List<map_item>(); // List of map_items on the border of the map.

        foreach (map_item item in map)
        {
            if (item.xVirtualPosition == (mapWidth - 1) ||
                item.xVirtualPosition == 0              ||
                item.yVirtualPosition == (mapWidth - 1) ||
                item.yVirtualPosition == 0)
            {
                mapBorder.Add(item);
            }
        }

        return mapBorder;
    }
}