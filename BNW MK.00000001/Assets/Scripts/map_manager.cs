using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Text.RegularExpressions;

public class map_manager : MonoBehaviour
{
    // External Classes//
    import_manager import_manager;

    // Public Global Variables //
    public int mapWidth = 10;
    public GameObject water;
    public GameObject vikingLand;
    public GameObject greekLand;
    public GameObject asianLand;
    public string currentSelected; // stores what tile is currently selected
    public string CurrentChar = null; // Character on current selected tile

    // Private Global Variables //
    //private string currentSelected; // stores what tile is currently selected

    // Start is called before the first frame update
    void Start()
    {
        import_manager = GameObject.Find("network_manager").GetComponent<import_manager>();
    }

    

    // Private Functions //

    // Creates one ground object
    private void create_ground(float xPosition, float zPosition, string prefabName)
    {
        GameObject ground = water;

        if (prefabName == "viking")
        {
            ground = vikingLand;
        }
        else if (prefabName == "greek")
        {
            ground = greekLand;
        }
        else if (prefabName == "asian")
        {
            ground = asianLand;
        }
        
        ground.name = prefabName + "_" + xPosition.ToString() + "_0_" + zPosition.ToString();
        Instantiate(ground,new Vector3(xPosition, 0, zPosition), Quaternion.identity);
    }

    // Tells if the ground borders land.
    private int near_ground_type(string[,] map, string type, int xCoordinate, int yCoordinate)
    {
        int nearGroundType = 0;

        try
        {
            nearGroundType += (map[xCoordinate - 1, yCoordinate    ] == type) ? 1 : 0;
        }catch{}
        try
        {
            nearGroundType += (map[xCoordinate - 1, yCoordinate - 1] == type) ? 1 : 0;
        }catch{}
        try
        {
            nearGroundType += (map[xCoordinate    , yCoordinate - 1] == type) ? 1 : 0;
        }catch{}
        try
        {
            nearGroundType += (map[xCoordinate + 1, yCoordinate - 1] == type) ? 1 : 0;
        }catch{}
        try
        {
            nearGroundType += (map[xCoordinate + 1, yCoordinate    ] == type) ? 1 : 0;
        }catch{}
        try
        {
            nearGroundType += (map[xCoordinate + 1, yCoordinate + 1] == type) ? 1 : 0;

        }catch{}
        try
        {
            nearGroundType += (map[xCoordinate    , yCoordinate + 1] == type) ? 1 : 0;

        }catch{}
        try
        {
            nearGroundType += (map[xCoordinate - 1, yCoordinate + 1] == type) ? 1 : 0;

        }catch{}
        
        return nearGroundType;
    }

    // Not near.
    private int not_near_ground_type(string[,] map, string[] set, string type, int xCoordinate, int yCoordinate)
    {
        int notNearGroundType = 0;

        foreach (string item in set)
        {
            if (item != type)
            {
                notNearGroundType += near_ground_type(map, item, xCoordinate, yCoordinate);
            }
        }

        return notNearGroundType;
    }

    // Generate a map topography plan.
    // where the first prefab in grounditems is the water prefab and the string is the name of the prefab in the prefab folder
    private string[,] generate_map(int width, int height, string[] groundItems, int landPercentage, int seed)
    {
        string water = groundItems[0];
        List<string> preLand = new List<string>(groundItems);
        preLand.RemoveAt(0);
        string[] land = preLand.ToArray();
        int numberOfGroundItems = width * height;
        int numberOfLandItems = (int)(((float) numberOfGroundItems) * ((float)landPercentage / 100f));
        int numberOfWaterItems = numberOfGroundItems - numberOfLandItems;
        string[,] map = new string[width, height];
        int centerXCoordinate = (int)(width / 2);
        int centerYCoordinate = (int)(height / 2);

        Random.InitState(seed);

        for (int localWidth = 0; localWidth < width; localWidth++)
        {
            for (int localHeight = 0; localHeight < width; localHeight++)
            {
                map[localWidth, localHeight] = water;
            }
        }

        for (int index = 0; index < land.Length; index++)
        {
             int localWidth = 0;
             int localHeight = 0;

            while (map[localWidth, localHeight] != water)
            {
                localWidth  = Random.Range((centerXCoordinate - 2), (centerXCoordinate + (land.Length)));
                localHeight = Random.Range((centerYCoordinate - 2), (centerYCoordinate + (land.Length)));
            }

                map[localWidth, localHeight] = land[index];
        }


        foreach (string type in land)
        {
            int numberOfLandForThisType = (numberOfLandItems / land.Length) - 1;
            
           while (numberOfLandForThisType > 0)
            {
                for (int localWidth = 0; localWidth < width; localWidth++)
                {
                    for (int localHeight = 0; localHeight < width; localHeight++)
                    {
                        if ((near_ground_type(map, type, localWidth, localHeight) >= Random.Range(1, 2)) &&
                            (not_near_ground_type(map, land, type, localWidth, localHeight) >= Random.Range(0, 4)) &&
                           (map[localWidth, localHeight] == water) &&
                           (numberOfLandForThisType != 0) )
                        {
                            map[localWidth, localHeight] = type;
                            numberOfLandForThisType--;
                        }
                    }
                }
            }
        }

        return map;
    }

    // Generate a map topography plan.
    // where the first prefab in grounditems is the water prefab and the string is the name of the prefab in the prefab folder
    private string[,] generate_map2(int width, int height, string[] groundItems, int landPercentage, int seed)
    {
        string water = groundItems[0];
        List<string> preLand = new List<string>(groundItems);
        preLand.RemoveAt(0);
        string[] land = preLand.ToArray();
        int numberOfGroundItems = width * height;
        int numberOfLandItems = (int)(((float) numberOfGroundItems) * ((float)landPercentage / 100f));
        int numberOfWaterItems = numberOfGroundItems - numberOfLandItems;
        string[,] map = new string[width, height];
        int centerXCoordinate = (int)(width / 2);
        int centerYCoordinate = (int)(height / 2);

        Random.InitState(seed);

        for (int localWidth = 0; localWidth < width; localWidth++)
        {
            for (int localHeight = 0; localHeight < width; localHeight++)
            {
                map[localWidth, localHeight] = water;
            }
        }

        foreach (string type in land)
        {
             int localWidth  = Random.Range(1, (width - 2));
             int localHeight = Random.Range(1, (width - 2));

            while ((map[localWidth, localHeight] != water) &&
                   (map[localWidth + 1, localHeight] != water))
            {
                localWidth  = Random.Range(1, (width - 2));
                localHeight = Random.Range(1, (width - 2));
            }

            map[localWidth, localHeight]     = type;
            map[localWidth + 1, localHeight] = type;

            for (int numberOfLandForThisType = (numberOfLandItems / land.Length) - 2; numberOfLandForThisType > 0; numberOfLandForThisType--)
            {
                for (int localXCoordinate = 0; localXCoordinate < width; localXCoordinate++)
                {
                    for (int localYCoordinate = 0; localYCoordinate < width; localYCoordinate++)
                    {
                        if ((near_ground_type(map, type, localXCoordinate, localYCoordinate) >= Random.Range(2, 4)) &&
                            (not_near_ground_type(map, land, type, localXCoordinate, localYCoordinate) >= Random.Range(0, 4)) &&
                           (map[localXCoordinate, localYCoordinate] == water) &&
                           (numberOfLandForThisType != 0) )
                        {
                            map[localXCoordinate, localYCoordinate] = type;
                            numberOfLandForThisType--;
                        }
                    }
                }
            }
        }

        return map;
    }

    // Public Functions //

    // Loads a map for the game from a seed.
    // Parameter = [int seed]
    public void load_map(string[] parameters)
    {
        string[,] map = generate_map2(mapWidth, mapWidth, new string[4]{ "water", "viking", "greek", "asian" }, 80, int.Parse(parameters[0]));
        int xCoordinate = 0 - mapWidth;
        int yCoordinate = 0 - mapWidth;
        int sparatedDistance = (int)water.GetComponent<Renderer>().bounds.size.x;
        int currentWidthLength = 0;

        foreach (string ground in map)
        {
            create_ground(xCoordinate, yCoordinate, ground);

            xCoordinate        += sparatedDistance;
            currentWidthLength += 1;

            if (currentWidthLength >= mapWidth)
            {
                yCoordinate        += sparatedDistance;
                xCoordinate         = 0 - (mapWidth);
                currentWidthLength  = 0;
            }
        }
    }

    // Removes the map.
    // Parameters = []
    public void remove_map (string[] parameters)
    {
        object[] sceneGameObjects = GameObject.FindSceneObjectsOfType(typeof (GameObject));

        foreach (GameObject sceneObject in sceneGameObjects)
        {
            if (Regex.IsMatch(sceneObject.name.ToLower(), "water_*_*_*", RegexOptions.IgnoreCase) ||
                Regex.IsMatch(sceneObject.name.ToLower(), "asian_*_*_*", RegexOptions.IgnoreCase) ||
                Regex.IsMatch(sceneObject.name.ToLower(), "greek_*_*_*", RegexOptions.IgnoreCase) ||
                Regex.IsMatch(sceneObject.name.ToLower(), "viking_*_*_*", RegexOptions.IgnoreCase))
            {
                Destroy(sceneObject);
            }
        }
    }

    // Get the name of the current selected tile
    // Parameters = []
    public string get_current(string[] parameters)
    {
        return currentSelected;
    }

    // Set current selected tile
    // parameters = setcurrent(this.name)
    public void set_current(string[] input)
    {
        this.currentSelected = input[0];
    }

    //Unselect previously selected tile
    // string parameter = empty (not used)
    public void unselect_tile(string[] parameters)
    {
        import_manager.run_function(get_current(new string[0] {}), "unselect", new string[0] {});
    }

    // Gets a list of all land of a certain type
    // Parameter = [string landType, string gameObject, string function];
    public void get_land(string[] parameters)
    {
        string type = parameters[0].ToLower();
        List<string> landOfType = new List<string>();

        foreach (GameObject land in GameObject.FindObjectsOfType<GameObject>())
        {
            if (Regex.IsMatch(land.name, type + "_*_*_*", RegexOptions.IgnoreCase))
            {
                landOfType.Add(land.name);
            }
        }

        import_manager.run_function(parameters[1], parameters[2], landOfType.ToArray());
    }

    // Set the current character to a given character object
    public void set_current_char(string[] character)
    {
        CurrentChar = character[0];
    }

    // sends the string currentChar to the calling script
    public void get_current_char(string[] reciever)
    {
        string[] temp = new string[1] { CurrentChar };

        import_manager.run_function(reciever[0], "set_current_char",  temp );
    }
}
