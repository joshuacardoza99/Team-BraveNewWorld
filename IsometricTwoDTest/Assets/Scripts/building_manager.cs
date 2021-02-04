using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class building_manager : MonoBehaviour
{
    // External Classes//
    import_manager import_manager;  // Import_Manager Class that facilitates cross class, player, and server function calls.
    Tile Tile;
    PlayerMove PlayerMove;
    map_manager map_manager;

    // Public Global Variables //
    public int civNumber;

    // Private Global Variables //
    private int randomTile = 0;

    [SerializeField]
    private building_type activeBuildingType;

    // Start is called before the first frame update
    void Start()
    {
        import_manager = GameObject.Find("network_manager").GetComponent<import_manager>(); // Connects to the import_manager.
        map_manager = GameObject.Find("Map").GetComponent<map_manager>(); // Connects to the import_manager.
    }

    public void Update()
    {
        if (Input.GetMouseButtonDown(0) && !EventSystem.current.IsPointerOverGameObject())
        {
            Vector3 tilePosition = map_manager.get_current().ground.transform.position;
            Instantiate(activeBuildingType.prefab, tilePosition, Quaternion.identity);
        }    
    }

    public void set_active_building_type(building_type building_Type)
    {
        activeBuildingType = building_Type;
    }

    

    // Public Functions //

 /*   // On click functions to call the instantiate functions
    public void mine_button()
    {
        int mine_number = 0;
        Vector3 tilePosition;
        tilePosition = new Vector3(0.0f, 1.0f, -5.0f);
        Debug.Log("Mine Button pushed");
        Instantiate(mine, tilePosition, Quaternion.Euler(new Vector3(60, 6, 7)));
    }

    public void command_post_button()
    {
        int command_post_number = 0;
        Vector3 tilePosition;
        tilePosition = new Vector3(0.0f, 1.0f, -5.0f);
        Debug.Log("Command Post Button pushed");

        if (civNumber == 1)
            Instantiate(greekCommandPost, tilePosition, Quaternion.Euler(new Vector3(30, 0, -45)));
        else if (civNumber == 2)
            Instantiate(vikingCommandPost, tilePosition, Quaternion.Euler(new Vector3(30, 0, -45)));
        else
            Instantiate(asianCommandPost, tilePosition, Quaternion.Euler(new Vector3(37, 120, -49)));
    }

    public void farm_button()
    {
        int farm_number = 0;
        Vector3 tilePosition;
        tilePosition = new Vector3(0.0f, 0.87f, -5.0f);
        Debug.Log("Farm Button pushed");
        Instantiate(farm, tilePosition, Quaternion.Euler(new Vector3(60, 150, -25)));
    }

    public void barracks_button()
    {
        int barracks_number = 0;
        Vector3 tilePosition;
        tilePosition = new Vector3(0.0f, 1.0f, 0.0f);
        Debug.Log("Barracks Button pushed");
        if (civNumber == 1)
            Instantiate(greekBarracks, tilePosition, Quaternion.Euler(new Vector3(30, 0, -45)));
        else if (civNumber == 2)
            Instantiate(vikingBarracks, tilePosition, Quaternion.Euler(new Vector3(30, 0, -45)));
        else
            Instantiate(asianBarracks, tilePosition, Quaternion.Euler(new Vector3(30, 0, -45)));

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
    }*/
}
