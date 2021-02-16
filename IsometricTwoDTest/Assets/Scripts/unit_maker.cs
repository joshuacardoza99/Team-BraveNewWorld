using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Text.RegularExpressions;

public class unit_maker : MonoBehaviour
{
    // External Classes//
    import_manager import_manager;  // Import_Manager Class that facilitates cross class, player, and server function calls.
    Tile           Tile;            // Importing the Tile class.
    PlayerMove     PlayerMove;      // Importing the PlayerMove class.
    map_manager    map_manager;     // Importing the map_manager class.

    // Public Global Variables //
    public GameObject asianChampion;
    public GameObject asianMelee;
    public GameObject asianRanged;
    public GameObject asianTank;
   
    public GameObject greekChampion;
    public GameObject greekMelee;
    public GameObject greekRanged;
    public GameObject greekTank;

    public GameObject vikingChampion;
    public GameObject vikingMelee;
    public GameObject vikingRanged;
    public GameObject vikingTank;

    // Start is called before the first frame update
    void Start()
    {
        import_manager = GameObject.Find("network_manager").GetComponent<import_manager>(); // Connects to the import_manager.
        map_manager    = GameObject.Find("Map").GetComponent<map_manager>();
    }

    // Parameters = [string civilization, string championName, int randomTile]
    public void add_champion(string[] parameters)
    {
        string           championName = parameters[0] + "_" + parameters[1];     // Holds the name for the champion.
        int              randomTile   = int.Parse(parameters[2]);                // Holds the random number that allows for the selection of the same random tile across the network.
        int              civilization = int.Parse(parameters[0]);                // The civilization of the champion needing created.
        GameObject       champion     = null;                                    // The champion GameObject.
        List<GameObject> tiles        = map_manager.get_land(civilization);      // The list of tiles that a random tile to place the champion on is chosen from.
        GameObject       tile         = tiles[(int)(randomTile / tiles.Count)];  // The randomly selected tile to add the champion to.
        int[]            tileGrid     = tile.GetComponent<Tile>().get_grid();    // The grid position of the selected tile.
        Vector3          tilePosition = tile.transform.position;                 // The actual position to of the selected tile.

        tilePosition.z -= tile.GetComponent<Renderer>().bounds.size.z;
            
        // Civilization 0 is Asian civilization.
        if (tile.GetComponent<Tile>().get_civilization() == 0)
        {
            champion = Instantiate(asianChampion, tilePosition, Quaternion.identity);
        }
        // Civilization 1 is Greek civilization.
        else if (tile.GetComponent<Tile>().get_civilization() == 1)
        {
            champion = Instantiate(greekChampion, tilePosition, Quaternion.identity);
        }
        // Civilization 2 is Viking civilization.
        else if (tile.GetComponent<Tile>().get_civilization() == 2)
         {
            champion = Instantiate(vikingChampion, tilePosition, Quaternion.identity);
         }
        
        champion.name = championName;
        champion.GetComponent<PlayerMove>().set_civilization(tile.GetComponent<Tile>().get_civilization());
        import_manager.run_function_all("Map", "run_on_map_item", new string[4] { tileGrid[0].ToString(), tileGrid[1].ToString(), "set_occupied", championName });
        Vector3 cameraPosition = GameObject.Find("Main Camera").transform.position;
        cameraPosition.y = tilePosition.y;
        cameraPosition.x = tilePosition.x;

        GameObject.Find("Main Camera").transform.position = cameraPosition;
    }

    // Parameters = [string civilization, string unitType, string unitNumber]
    public void add_unit(string[] parameters)
    {
        // for tile coordinates, also figure out scaling for buildings
        GameObject tile         = GameObject.Find(parameters[0]); // Selecting the given tile from its name.
        Vector3    tilePosition = tile.transform.position;        // The actual position of the select tile.

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

    // Removes the all units on the map.
    // Parameters = []
    public void remove_all_units (string[] parameters)
    {
        object[] sceneGameObjects = GameObject.FindSceneObjectsOfType(typeof (GameObject)); // List of all GameObjects the scene.
     
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