using System.Collections;
using System.Collections.Generic;
using UnityEngine;


// This script should be attached to all command posts and will handle what tiles are in the city
public class City : MonoBehaviour
{
    // External Classes//
    map_manager map_manager;

    // Variables      //
    public Tile currentTile = null; // The tile this character is currently on.
    public List<Tile> in_city = new List<Tile>(); // A list of tiles that are within city borders

    // Start is called before the first frame update
    void Start()
    {
        map_manager = GameObject.Find("Map").GetComponent<map_manager>(); // Connects to the map_manager.

        currentTile = this.GetComponent<Building>().currentTile;
        Debug.Log("A City has been placed!");
        set_city_limits(1);
    }

    // Sets or expands the city borders
    void set_city_limits(int range)
    {
        in_city = currentTile.get_adjacenct_tiles(range);
        map_manager.run_on_map_item(new string[3] { currentTile.get_grid()[0].ToString(), currentTile.get_grid()[1].ToString(), "set_in_city" }); // set this tile to in city

        foreach(Tile tile in in_city)
        {
            map_manager.run_on_map_item(new string[3] { tile.get_grid()[0].ToString(), tile.get_grid()[1].ToString(), "set_in_city" }); // set all surrounding tiles to in city
        }
    }
}
