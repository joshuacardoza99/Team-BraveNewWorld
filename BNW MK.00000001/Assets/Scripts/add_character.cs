using System.Collections;
using System.Collections.Generic;
using System.Dynamic;
using UnityEngine;

// this recieves a tile name, and character object, then places that character on that tile.
public class add_character : MonoBehaviour
{
    // External Classes//
    import_manager import_manager;  // Import_Manager Class that facilitates cross class, player, and server function calls.

    // model prefabs
    public GameObject ninja;

    // Start is called before the first frame update
    void Start()
    {
        import_manager = GameObject.Find("network_manager").GetComponent<import_manager>(); // Connects to the import_manager.
    }

    public void add(string[] parameters, Object character)
    {
        // get the x and y axis from the tile's name
        string[] tileName    = parameters[0].Split('_');
        float xAxis = float.Parse(parameters[1]);
        float zAxis = float.Parse(parameters[3]);

        // create the character object on the tile
        Instantiate(character, new Vector3(xAxis, 1, zAxis), Quaternion.identity);
    }

    string[] v = { "ground_4_0_4" }; // temp for testing
    void update()
    {
        if (Input.GetKeyDown(KeyCode.Space)) 
        {
            add(v, ninja);
        }
    }
}
