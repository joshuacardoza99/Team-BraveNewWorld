using System.Collections;
using System.Collections.Generic;
using UnityEngine;


// This script should be attached to all buildings
public class Building : MonoBehaviour
{
    // External Classes//
    import_manager import_manager;  // Import_Manager Class that facilitates cross class, player, and server function calls.

    // Public Variables//
    // variables concerning how this building affects the city (i.e. increased production, defense, etc.)

    // Start is called before the first frame update
    void Start()
    {
        import_manager = GameObject.Find("network_manager").GetComponent<import_manager>(); // Connects to the import_manager.
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
