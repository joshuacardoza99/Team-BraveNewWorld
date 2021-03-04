using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// This script should be attached to all city buildings, and facilitates building functions and whatnot
public class Building : MonoBehaviour
{
    // External Classes//
    import_manager import_manager;  // Import_Manager Class that facilitates cross class, player, and server function calls.
    map_manager map_manager;     // Importing the map_manager class.

    // Variables      //
    public Tile currentTile = null; // The tile this character is currently on.
    public int civilization = 0;    // The number associated with the civ that owns this building. -1 = water, 0 = asian, 1 = greek, 2 = viking

    // Start is called before the first frame update
    void Start()
    {
        Debug.Log("A building has been placed!");

        // initially set the civ ownership
        if (this.name.Contains("asian"))
            civilization = 0;
        else if (this.name.Contains("greek"))
            civilization = 1;
        else if (this.name.Contains("viking"))
            civilization = 2;
    }

    private void Update()
    {
        civilization = currentTile.get_civilization();
    }
    public void set_current_tile(Tile tile)
    {
        currentTile = tile;
    }
}
