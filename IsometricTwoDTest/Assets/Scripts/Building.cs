using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

// This script should be attached to all city buildings, and facilitates building functions and whatnot
public class Building : MonoBehaviour
{
    // External Classes//
    import_manager import_manager;  // Import_Manager Class that facilitates cross class, player, and server function calls.
    map_manager map_manager;     // Importing the map_manager class.

    // Variables      //
    public Tile currentTile = null; // The tile this character is currently on.

    // Start is called before the first frame update
    void Start()
    {
        Debug.Log("A building has been placed!");
    }

    public void set_current_tile(Tile tile)
    {
        currentTile = tile;
    }

    public Tile get_current_tile()
    {
        return currentTile;
    }
}
