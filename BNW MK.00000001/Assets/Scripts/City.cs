using System.Collections;
using System.Collections.Generic;
using UnityEngine;


// This script should be attached to all command posts, it works out the logic to make cities function.
public class City : Building
{
    // External Classes//
    import_manager import_manager;  // Import_Manager Class that facilitates cross class, player, and server function calls.

    // Start is called before the first frame update
    void Start()
    {
        import_manager = GameObject.Find("network_manager").GetComponent<import_manager>(); // Connects to the import_manager.
    }

    // calculate which tiles are within this cities border
    void calculate_border()
    {
        // prototype just get the ajacent tiles
    }
}
