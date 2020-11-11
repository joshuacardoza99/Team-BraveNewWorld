using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class unit_maker : MonoBehaviour
{
    // External Classes//
    import_manager import_manager;  // Import_Manager Class that facilitates cross class, player, and server function calls.

    // Public Global Variables //
    public GameObject asianChampion;
    public GameObject greeceChampion;
    public GameObject vikingChampion;

    // Private Global Variables //
    private string championName = "champion";

    // Start is called before the first frame update
    void Start()
    {
        import_manager = GameObject.Find("network_manager").GetComponent<import_manager>(); // Connects to the import_manager.
    }

    // Private Functions //

    // tiles = and array of tile names.
    private void finalize_champion(string[] tiles)
    {
        GameObject tile = GameObject.Find(tiles[Random.Range(0, tiles.Length - 1)]);
        Vector3 tilePosition = tile.transform.position;
        tilePosition.y += tile.GetComponent<Renderer>().bounds.size.y /1.5f;

        if (tile.name.Split('_')[0] == "asian")
        {
            Instantiate(asianChampion, tilePosition, Quaternion.identity);
            //import_manager.run_function("asianChampion", "set_current_tile", new string[1] { tile.name });

        }
        else if (tile.name.Split('_')[0] == "viking")
        {
            Instantiate(vikingChampion, tilePosition, Quaternion.identity);
        }
        else if (tile.name.Split('_')[0] == "greece")
        {
            Instantiate(greeceChampion, tilePosition, Quaternion.identity);
        }

        Vector3 cameraPosition = GameObject.Find("Directional Light").transform.position;
        cameraPosition.y = 10;
        cameraPosition.x = tilePosition.x;
        cameraPosition.z = tilePosition.z;
        var cameraDirection = GameObject.Find("Directional Light").transform.rotation.eulerAngles;
        cameraDirection.x = 60;


        GameObject.Find("Main Camera").transform.position = cameraPosition;
        GameObject.Find("Main Camera").transform.rotation = Quaternion.Euler(cameraDirection);
    }

    // Public Functions //

    // Parameters = [string civilization, string championName]
    public void add_champion(string[] parameters)
    {
        championName = parameters[1] + "_" + parameters[0];
        import_manager.run_function("map", "get_land", new string[3] { parameters[0], "unit_manager", "finalize_champion" });
    }


}