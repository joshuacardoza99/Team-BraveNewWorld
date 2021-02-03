using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Text.RegularExpressions;

public class unit_maker : MonoBehaviour
{
    // External Classes//
    import_manager import_manager;  // Import_Manager Class that facilitates cross class, player, and server function calls.
    Tile           Tile;
    PlayerMove     PlayerMove;
    map_manager    map_manager;

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

    public int civNumber;

    // Private Global Variables //
    private string championName = "champion";
    private int    randomTile   = 0;

    private 

    // Start is called before the first frame update
    void Start()
    {
        import_manager = GameObject.Find("network_manager").GetComponent<import_manager>(); // Connects to the import_manager.
        map_manager    = GameObject.Find("Map").GetComponent<map_manager>();
    }

    // Private Functions //


    // Public Functions //

    // Parameters = [string civilization, string championName, int randomTile]
    public void add_champion(string[] parameters)
    {
        GameObject champion = null;

        this.randomTile = int.Parse(parameters[2]);
        championName = parameters[0] + "_" + parameters[1];
        List<GameObject> tiles = map_manager.get_land(parameters[0]);

        GameObject tile = tiles[(int)(this.randomTile / tiles.Count)];
        Vector3 tilePosition = tile.transform.position;
        tilePosition.z -= tile.GetComponent<Renderer>().bounds.size.z;

        if (tile.GetComponent<Tile>().get_civilization() == "asian")
        {
            champion = Instantiate(asianChampion, tilePosition, Quaternion.identity);
        }
        else if (tile.GetComponent<Tile>().get_civilization() == "viking")
        {
            champion = Instantiate(vikingChampion, tilePosition, Quaternion.identity);
        }
        else if (tile.GetComponent<Tile>().get_civilization() == "greek")
        {
            champion = Instantiate(greekChampion, tilePosition, Quaternion.identity);
        }

        champion.name = championName;
        champion.GetComponent<PlayerMove>().set_civilization(tile.GetComponent<Tile>().get_civilization());
        champion.GetComponent<PlayerMove>().set_grid(tile.GetComponent<Tile>().get_grid()[0], tile.GetComponent<Tile>().get_grid()[1]);

        tile.GetComponent<Tile>().set_current_char(new string[1] { championName });

        Vector3 cameraPosition = GameObject.Find("Main Camera").transform.position;
        cameraPosition.y = tilePosition.y;
        cameraPosition.x = tilePosition.x;

        GameObject.Find("Main Camera").transform.position = cameraPosition;
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