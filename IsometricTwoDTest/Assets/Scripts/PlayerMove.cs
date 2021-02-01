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
    map_manager    map_manager;


    List<Tile> selectableTiles = new List<Tile>();

    // Unit attribiutes //
    public int health = 10;
    public int attackRange = 4;
    public int moveRange = 3;
    public float cooldown = 3;
    public float nextAttack = 0;
    public bool isAttacking = false;

    

    // Varibles for movement 
    public Tile actualTargetTile;
    float halfHeight = 0;
    Vector3 targetPosition;
    private Ray ray;
    private RaycastHit hit;
    public Tile currentTile = null;
    GameObject[] tiles;


    private string civilization; // The number associated with the civ that owns this land. -1 = water, 0 = asian, 1 = greek, 2 = viking
    private int[] grid;         // Stores the position of the Tile in the virtual grid. [x position, y position]


    // Use this for initialization
    void Start()
    {
        tiles = GameObject.FindGameObjectsWithTag("Tile");

        halfHeight = GetComponent<Collider>().bounds.extents.y;
        //FindSelectableTiles();

        import_manager = GameObject.Find("network_manager").GetComponent<import_manager>(); // Connects to the import_manager.
        map_manager = GameObject.Find("Map").GetComponent<map_manager>();

        import_manager.run_function_all("network_manager", "get_player_civilization", new string[2]{this.gameObject.name, "GetCurrentTile"});
    }
    
    // if the current tile is occupied, highlight all surrounding tiles
    public void set_selectable()
    {
        // if this unit is on the current tile
        if (currentTile.current)
        {
            // prepare to move this character
            Debug.Log("In Set_selectable() name = " + this.name);
            map_manager.set_current_char(new string[1] { this.name });
            import_manager.run_function_all("Map", "run_on_map_item", new string[4] { currentTile.get_grid()[0].ToString(), currentTile.get_grid()[1].ToString(), "set_current_char", this.name});

            // set all tiles in range to selectable
            if (moveRange >= 1) // if the character can move at least once
            {
                foreach (Tile tile in currentTile.adjacencyList) // get the adjacent tiles
                {
                    if (tile.occupied == false) // if the tile is open
                    {
                        tile.selectable = true;
                        tile.Updateme();

                        if (moveRange >= 2)
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

    // Handles the Tile status change for movement.
    // parameter = []
    public void switch_selectable_tile(string[] parameter)
    {
        currentTile.currentchar = null;
        import_manager.run_function_all(currentTile.name, "set_unoccupied", new string[1] { "" });
        foreach (Tile tile in currentTile.adjacencyList)
        {
            tile.selectable = false;
            tile.Updateme();
            if (moveRange >= 2)
                foreach (Tile tile2 in tile.adjacencyList)
                {
                    tile2.selectable = false;
                    tile2.Updateme();
                }
        }
    }

    public void move(string[] location)
    {
        grid[0] = int.Parse(location[0]);
        grid[1] = int.Parse(location[1]);

        targetPosition = map_manager.map[grid[0], grid[1]].ground.transform.position;
        currentTile    = map_manager.map[grid[0], grid[1]].ground.GetComponent<Tile>();
        
       // switch_selectable_tile(new string[0] {});

        this.transform.LookAt(targetPosition);

        this.transform.position = new Vector3(targetPosition.x, targetPosition.y, targetPosition.z - currentTile.GetComponent<Renderer>().bounds.size.z);

        this.transform.rotation = Quaternion.identity;

        import_manager.run_function_all("Map", "run_on_map_item", new string[3] { currentTile.get_grid()[0].ToString(), currentTile.get_grid()[1].ToString(), "set_occupied" });

        // import_manager.run_function_all("server_function", "update_character_position", new string[2] {this.gameObject.name, location[0]});

        //moving = false;
    }


    // parameter = [string civilization]
    public void GetCurrentTile(string[] parameter)
    {
        currentTile = map_manager.map[grid[0], grid[1]].ground.GetComponent<Tile>();

        import_manager.run_function_all("Map", "run_on_map_item", new string[3] { currentTile.get_grid()[0].ToString(), currentTile.get_grid()[1].ToString(), "set_occupied" });
        map_manager.set_current_char(new string[1] { this.name });
        import_manager.run_function_all("Map", "run_on_map_item", new string[4] { currentTile.get_grid()[0].ToString(), currentTile.get_grid()[1].ToString(), "set_current_char", this.name});
    }

    public void set_civilization(string civ)
    {
        civilization = civ;
    }

    public string get_civilization()
    {
        return civilization;
    }

    public void set_grid(int xPosition, int yPosition)
    {
        grid = new int[2] { xPosition, yPosition };
    }

    public int[] get_grid()
    {
        return grid;
    }

    // Send clicks to the current tile
    private void OnMouseDown()
    {
        currentTile.OnMouseDown();
    }
    public void Update()
    {
        if (Time.time > nextAttack)
        {
            if (Input.GetKeyDown(KeyCode.I))
            {
                Debug.Log("You attacked, cooldown intiated");
                nextAttack = Time.time + cooldown;
            }
        }
    }
}