using System.Collections;
using System.Collections.Generic;
using UnityEngine;


// This script should be attached to all command posts and will handle what tiles are in the city
public class City : MonoBehaviour
{
    // Variables      //
    public Tile currentTile = null; // The tile this character is currently on.
    public List<Tile> in_city = new List<Tile>(); // A list of tiles that are within city borders

    // Start is called before the first frame update
    void Start()
    {
        currentTile = this.GetComponent<Building>().currentTile; // get the current tile from the building component
        Debug.Log("A City has been placed!");
        set_city_limits(1); // initially set the city bounderies to a radius of (1) tile
    }

    // Sets or expands the city borders
    void set_city_limits(int range)
    {
        currentTile.set_in_city();

        in_city = currentTile.get_adjacenct_tiles(range);
        currentTile.set_in_city();

        foreach (Tile tile in in_city)
        {
            tile.set_in_city();
        }
    }

    // Changes the ownership of the city and connected tiles/buildings
    void change_owner()
    {
        if (currentTile.get_current_character().GetComponent<PlayerMove>().civilization != this.GetComponent<Building>().civilization)
        {
            // initiate cooldown for changing buildings civilization

            this.GetComponent<Building>().civilization = currentTile.get_current_character().GetComponent<PlayerMove>().civilization;

            foreach (Tile tile in in_city)
            {
                tile.set_civilization(currentTile.get_current_character().GetComponent<PlayerMove>().civilization);
            }
        }
    }
}
