﻿using System.Collections;
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
        currentTile = this.GetComponent<Building>().currentTile;
        Debug.Log("A City has been placed!");
        set_city_limits(1);
    }

    // Sets or expands the city borders
    void set_city_limits(int range)
    {
        in_city = currentTile.get_adjacenct_tiles(range);

        foreach(Tile tile in in_city)
        {
            tile.set_in_city();
        }
    }
}
