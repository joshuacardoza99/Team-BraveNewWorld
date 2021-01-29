using JetBrains.Annotations;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using TMPro;
using UnityEngine;

public class PlayerMove : MonoBehaviour
{
    // External Classes//
    import_manager import_manager;  // Import_Manager Class that facilitates cross class, player, and server function calls.

    public string civ = " ";

    List<Tile> selectableTiles = new List<Tile>();
    GameObject[] tiles;

    Stack<Tile> path = new Stack<Tile>();
    public Tile currentTile = null;

    
    public int moves = 3;
    public float moveSpeed = 2;

    public Tile actualTargetTile;
    float halfHeight = 0;
    Vector3 targetPosition;
    private Ray ray;
    private RaycastHit hit;
    private Camera cam;


    // Use this for initialization
    void Start()
    {
        tiles = GameObject.FindGameObjectsWithTag("Tile");

        halfHeight = GetComponent<Collider>().bounds.extents.y;
        //FindSelectableTiles();

        import_manager = GameObject.Find("network_manager").GetComponent<import_manager>(); // Connects to the import_manager.

        import_manager.run_function_all("network_manager", "get_player_civilization", new string[2]{this.gameObject.name, "GetCurrentTile"});
    }
    
    // if the current tile is occupied, highlight all surrounding tiles
    public void set_selectable()
    {
        // if the tile is current and occupied
        if (currentTile.current && currentTile.occupied)
        {
            // prepare to move this character
            import_manager.run_function_all("Map", "set_current_char", new string[1] { this.name });

            // set all tiles in range to selectable
            if (moves >= 1) // if the character can move at least once
            {
                foreach (Tile tile in currentTile.adjacencyList) // get the adjacent tiles
                {
                    if (tile.occupied == false)
                    {
                        tile.selectable = true;
                        tile.Updateme();

                        if (moves >= 2)
                            foreach (Tile tile2 in tile.adjacencyList)
                            {
                                if ((tile2.occupied == false) && (tile2.current == false))
                                {
                                    tile2.selectable = true;
                                    tile2.Updateme();
                                }
                            }
                    }
                }
            }
            
        }
     
    }

    private void OnMouseDown()
    {
        currentTile.OnMouseDown();
    }

    public void move(string[] location)
    {   
        GameObject nextTile = GameObject.Find(location[0]);
        targetPosition = nextTile.transform.position;
        
       // switch_selectable_tile(new string[0] {});

        this.transform.LookAt(targetPosition);

        this.transform.position = new Vector3(targetPosition.x, targetPosition.y, targetPosition.z - nextTile.GetComponent<Renderer>().bounds.size.z);

        this.transform.rotation = Quaternion.identity;

        currentTile = nextTile.GetComponent<Tile>();

        import_manager.run_function_all(currentTile.name, "set_occupied", new string[1] { "parameters" });
        
       // import_manager.run_function_all("server_function", "update_character_position", new string[2] {this.gameObject.name, location[0]});

        //moving = false;
    }

    // Handles the Tile status change for movement.
    // parameter = []
    public void switch_selectable_tile (string[] parameter)
    {
        currentTile.currentchar = null;
        import_manager.run_function_all(currentTile.name, "set_unoccupied", new string[1] { "" });
        foreach (Tile tile in currentTile.adjacencyList)
        {
            tile.selectable = false;
            tile.Updateme();
            if (moves >= 2)
                foreach (Tile tile2 in tile.adjacencyList)
                {
                    tile2.selectable = false;
                    tile2.Updateme();
                }
        }
    }

    // parameter = [string civilization]
    public void GetCurrentTile(string[] parameter)
    {
        if (this.gameObject.name.Split('_')[0] == parameter[0])
        {
            GameObject referenceTile = GameObject.Find("water_0_0_0(Clone)");
            GameObject tileGameObject = GameObject.Find(parameter[0] + "_" + this.transform.position.x + "_" + this.transform.position.y + "_" + (this.transform.position.z + referenceTile.GetComponent<Renderer>().bounds.size.z) + "(Clone)");
        
            currentTile = tileGameObject.GetComponent<Tile>();

            import_manager.run_function_all(currentTile.name, "set_occupied", new string[1] { "parameters" });
            import_manager.run_function_all(currentTile.name, "set_current_char", new string[1] { this.name });
        }
    }


    // set the current tile of this character
    // parameters = tile.name
    public void set_current_tile(string[] parameters)
    {
        GameObject temp = GameObject.Find(parameters[0]);
        Tile tile = temp.GetComponent<Tile>();
        currentTile = tile;
    }
}