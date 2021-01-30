using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Text.RegularExpressions;

public class unit_maker : MonoBehaviour
{
    // External Classes//
    import_manager import_manager;  // Import_Manager Class that facilitates cross class, player, and server function calls.

    // Public Global Variables //
    public GameObject asianBarracks;
    public GameObject asianChampion;
    public GameObject asianCommandPost;
    public GameObject asianDefenseTower;
    public GameObject asianMelee;
    public GameObject asianRanged;
    public GameObject asianTank;
    public GameObject farm;
    public GameObject greekBarracks;
    public GameObject greekChampion;
    public GameObject greekCommandPost;
    public GameObject greekDefenseTower;
    public GameObject greekMelee;
    public GameObject greekRanged;
    public GameObject greekTank;
    public GameObject mine;
    public GameObject vikingBarracks;
    public GameObject vikingChampion;
    public GameObject vikingCommandPost;
    public GameObject vikingDefenseTower;
    public GameObject vikingMelee;
    public GameObject vikingRanged;
    public GameObject vikingTank;
    public int civNumber;

    // Private Global Variables //
    private string championName = "champion";
    private int    randomTile   = 0;

    private 

    // Start is called before the first frame update
    void Start()
    {
        import_manager = GameObject.Find("network_manager").GetComponent<import_manager>(); // Connects to the import_manager.
    }

    // Private Functions //

    // tiles = and array of tile names.
    private void finalize_champion(string[] tiles)
    {
        Debug.Log("Tile Index: " + this.randomTile + " / " + tiles.Length);
        GameObject tile = GameObject.Find(tiles[(int)(this.randomTile / tiles.Length)]);
        Vector3 tilePosition = tile.transform.position;
        tilePosition.z -= tile.GetComponent<Renderer>().bounds.size.z;

        if (tile.name.Split('_')[0] == "asian")
        {
            asianChampion.name = championName;
            Instantiate(asianChampion, tilePosition, Quaternion.identity);
            //import_manager.run_function("asianChampion", "set_current_tile", new string[1] { tile.name });

        }
        else if (tile.name.Split('_')[0] == "viking")
        {
            vikingChampion.name = championName;
            Instantiate(vikingChampion, tilePosition, Quaternion.identity);
        }
        else if (tile.name.Split('_')[0] == "greek")
        {
            greekChampion.name = championName;
            Instantiate(greekChampion, tilePosition, Quaternion.identity);
        }

        Vector3 cameraPosition = GameObject.Find("Main Camera").transform.position;
        cameraPosition.y = tilePosition.y;
        cameraPosition.x = tilePosition.x;

        GameObject.Find("Main Camera").transform.position = cameraPosition;
    }

    // Public Functions //

    // On click functions to call the instantiate functions
    public void mine_button()
    {
        int mine_number = 0;
        Vector3 tilePosition;
        tilePosition = new Vector3(0.0f, 1.0f, 0.0f);
        Debug.Log("Mine Button pushed");
        /*string[] buildingType = new string[] { "mine", " ", mine_number.ToString() };
        mine_number++;
        add_building(buildingType);*/
        Instantiate(mine, tilePosition, Quaternion.Euler(new Vector3(30, 0, -45)));
    }

    public void command_post_button()
    {
        int command_post_number = 0;
        Vector3 tilePosition;
        tilePosition = new Vector3(0.0f, 1.0f, 0.0f);
        Debug.Log("Command Post Button pushed");
        /*string[] buildingType = new string[] { "mine", " ", mine_number.ToString() };
        mine_number++;
        add_building(buildingType);*/

        if (civNumber == 1)
            Instantiate(greekCommandPost, tilePosition, Quaternion.Euler(new Vector3(30, 0, -45)));
        else if (civNumber == 2)
            Instantiate(vikingCommandPost, tilePosition, Quaternion.Euler(new Vector3(30, 0, -45)));
        else
            Instantiate(asianCommandPost, tilePosition, Quaternion.Euler(new Vector3(30, 0, -45)));
    }

    public void farm_button()
    {
        int farm_number = 0;
        Vector3 tilePosition;
        tilePosition = new Vector3(0.0f, 1.0f, 0.0f);
        Debug.Log("Farm Button pushed");
        /*string[] buildingType = new string[] { "mine", " ", mine_number.ToString() };
        mine_number++;
        add_building(buildingType);*/
        Instantiate(farm, tilePosition, Quaternion.Euler(new Vector3(30, 0, -45)));
    }

    public void barracks_button()
    {
        int barracks_number = 0;
        Vector3 tilePosition;
        tilePosition = new Vector3(0.0f, 1.0f, 0.0f);
        Debug.Log("Barracks Button pushed");
        /*string[] buildingType = new string[] { "mine", " ", mine_number.ToString() };
        mine_number++;
        add_building(buildingType);*/
        if (civNumber == 1)
            Instantiate(greekBarracks, tilePosition, Quaternion.Euler(new Vector3(30, 0, -45)));
        else if (civNumber == 2)
            Instantiate(vikingBarracks, tilePosition, Quaternion.Euler(new Vector3(30, 0, -45)));
        else
            Instantiate(asianBarracks, tilePosition, Quaternion.Euler(new Vector3(30, 0, -45)));

    }

    // Parameters = [string civilization, string championName, int randomTile]
    public void add_champion(string[] parameters)
    {
        this.randomTile = int.Parse(parameters[2]);
        championName = parameters[0] + "_" + parameters[1];
        import_manager.run_function("Map", "get_land", new string[3] { parameters[0], "unit_manager", "finalize_champion" });
    }

    // Parameters = [string civilization, string unitType, string unitNumber]
    public void add_unit(string[] parameters)
    {
        //    public string get_current(string[] parameters)
        // for tile coordinates, also figure out scaling for buildings
        GameObject tile = GameObject.Find(parameters[0]);
        Vector3 tilePosition = tile.transform.position;
        tilePosition.y += tile.GetComponent<Renderer>().bounds.size.y;

        if (parameters[0] == "asian")
        {
            if (parameters[1] == "Melee")
            {
                asianMelee.name = parameters[0] + "_" + parameters[1] + "_" + parameters[2];
                Instantiate(asianMelee, tilePosition, Quaternion.identity);
            }
            else if (parameters[1] == "Ranged")
            {
                asianRanged.name = parameters[0] + "_" + parameters[1] + "_" + parameters[2];
                Instantiate(asianRanged, tilePosition, Quaternion.identity);
            }
            else if (parameters[1] == "Tank")
            {
                asianTank.name = parameters[0] + "_" + parameters[1] + "_" + parameters[2];
                Instantiate(asianTank, tilePosition, Quaternion.identity);
            }
        }
        else if (parameters[0] == "greek")
        {
            if (parameters[1] == "Melee")
            {
                greekMelee.name = parameters[0] + "_" + parameters[1] + "_" + parameters[2];
                Instantiate(greekMelee, tilePosition, Quaternion.identity);
            }
            else if (parameters[1] == "Ranged")
            {
                greekRanged.name = parameters[0] + "_" + parameters[1] + "_" + parameters[2];
                Instantiate(greekRanged, tilePosition, Quaternion.identity);
            }
            else if (parameters[1] == "Tank")
            {
                greekTank.name = parameters[0] + "_" + parameters[1] + "_" + parameters[2];
                Instantiate(greekTank, tilePosition, Quaternion.identity);
            }
        }
        else if (parameters[0] == "viking")
        {
            if (parameters[1] == "Melee")
            {
                vikingMelee.name = parameters[0] + "_" + parameters[1] + "_" + parameters[2];
                Instantiate(vikingMelee, tilePosition, Quaternion.identity);
            }
            else if (parameters[1] == "Ranged")
            {
                vikingRanged.name = parameters[0] + "_" + parameters[1] + "_" + parameters[2];
                Instantiate(vikingRanged, tilePosition, Quaternion.identity);
            }
            else if (parameters[1] == "Tank")
            {
                vikingTank.name = parameters[0] + "_" + parameters[1] + "_" + parameters[2];
                Instantiate(vikingTank, tilePosition, Quaternion.identity);
            }
        }
    }

    // Parameters = [string civilization, string buildingType, string unitNumber]
    // Adds buildings to the map
    public void add_building(string[] parameters)
    {
        //    public string get_current(string[] parameters)
        // for tile coordinates, also figure out scaling for buildings
        GameObject tile = GameObject.Find(parameters[0]);
        Vector3 tilePosition = tile.transform.position;
        tilePosition.y += tile.GetComponent<Renderer>().bounds.size.y;


        if (parameters[0] == "asian")
        {
            if (parameters[1] == "Barracks")
            {
                asianBarracks.name = parameters[0] + "_" + parameters[1] + "_" + parameters[2];
                Instantiate(asianBarracks, tilePosition, Quaternion.identity);
            }
            else if (parameters[1] == "CommandPost")
            {
                asianCommandPost.name = parameters[0] + "_" + parameters[1] + "_" + parameters[2];
                Instantiate(asianCommandPost, tilePosition, Quaternion.identity);
            }
            else if (parameters[1] == "DefenseTower")
            {
                asianDefenseTower.name = parameters[0] + "_" + parameters[1] + "_" + parameters[2];
                Instantiate(asianDefenseTower, tilePosition, Quaternion.identity);
            }
        }
        else if (parameters[0] == "greek")
        {
            if (parameters[1] == "Barracks")
            {
                greekBarracks.name = parameters[0] + "_" + parameters[1] + "_" + parameters[2];
                Instantiate(greekBarracks, tilePosition, Quaternion.identity);
            }
            else if (parameters[1] == "CommandPost")
            {
                greekCommandPost.name = parameters[0] + "_" + parameters[1] + "_" + parameters[2];
                Instantiate(greekCommandPost, tilePosition, Quaternion.identity);
            }
            else if (parameters[1] == "DefenseTower")
            {
                greekDefenseTower.name = parameters[0] + "_" + parameters[1] + "_" + parameters[2];
                Instantiate(greekDefenseTower, tilePosition, Quaternion.identity);
            }
        }
        else if (parameters[0] == "viking")
        {
            if (parameters[1] == "Barracks")
            {
                vikingBarracks.name = parameters[0] + "_" + parameters[1] + "_" + parameters[2];
                Instantiate(vikingBarracks, tilePosition, Quaternion.identity);
            }
            else if (parameters[1] == "CommandPost")
            {
                vikingCommandPost.name = parameters[0] + "_" + parameters[1] + "_" + parameters[2];
                Instantiate(vikingCommandPost, tilePosition, Quaternion.identity);
            }
            else if (parameters[1] == "DefenseTower")
            {
                vikingDefenseTower.name = parameters[0] + "_" + parameters[1] + "_" + parameters[2];
                Instantiate(vikingDefenseTower, tilePosition, Quaternion.identity);
            }
        }
        else if (parameters[0] == "farm")
        {
            farm.name = parameters[0] + "_" + parameters[1] + "_" + parameters[2];
            Instantiate(farm, tilePosition, Quaternion.identity);
        }
        else if (parameters[0] == "mine")
        {
            mine.name = parameters[0] + "_" + parameters[1] + "_" + parameters[2];
            Instantiate(mine, tilePosition, Quaternion.Euler(new Vector3(30, 0, -45)));
            Debug.Log("Mine");
        }
    }

    // Removes the all units on the map.
    // Parameters = []
    public void remove_all_units (string[] parameters)
    {
        object[] sceneGameObjects = GameObject.FindSceneObjectsOfType(typeof (GameObject));
        Debug.Log("Removing the units");
        foreach (GameObject sceneObject in sceneGameObjects)
        {
            if (Regex.IsMatch(sceneObject.name.ToLower(), "asian_*", RegexOptions.IgnoreCase) ||
                Regex.IsMatch(sceneObject.name.ToLower(), "greek_*", RegexOptions.IgnoreCase) ||
                Regex.IsMatch(sceneObject.name.ToLower(), "viking_*", RegexOptions.IgnoreCase))
            {
                Destroy(sceneObject);
            }
        }
    }
}