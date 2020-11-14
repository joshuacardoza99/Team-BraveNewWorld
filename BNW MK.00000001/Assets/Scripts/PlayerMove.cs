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

        import_manager.run_function("network_manager", "get_player_civilization", new string[2]{this.gameObject.name, "GetCurrentTile"});
    }

    // if the current tile is occupied, highlight all surrounding tiles
    public void set_selectable()
    {
        // if the tile is current and occupied
        if (currentTile.current && currentTile.occupied)
        {
            // prepare to move this character
            import_manager.run_function("map", "set_current_char", new string[1] { this.name });

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

    public void move(string[] location)
    {   
        GameObject nextTile = GameObject.Find(location[0]);
        targetPosition = nextTile.transform.position;

        currentTile.currentchar = null;
        import_manager.run_function_all(currentTile.name, "set_unoccupied", new string[1] { "parameters" });
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

        this.transform.LookAt(targetPosition);

        this.transform.position = new Vector3(targetPosition.x, this.transform.position.y, targetPosition.z);

        this.transform.rotation = Quaternion.identity;

        currentTile = nextTile.GetComponent<Tile>();

        //moving = false;
    }

    // parameter = [string civilization]
    public void GetCurrentTile(string[] parameter)
    {
        if (this.gameObject.name.Split('_')[0] == parameter[0])
        {
            RaycastHit hit;

            if (Physics.Raycast(this.transform.position, Vector3.down, out hit, 2))
            {
                currentTile = hit.collider.GetComponent<Tile>();
            }
            import_manager.run_function_all(currentTile.name, "set_occupied", new string[1] { "parameters" });
            import_manager.run_function(currentTile.name, "set_current_char", new string[1] { this.name });
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