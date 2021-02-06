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
    public int damage = 2;
    public int attackRange = 4;
    public int moveRange = 3;
    public float cooldown = 3;
    public float nextAttack = 0;
    bool isAttacking = false;

    

    // Varibles for movement 
    public Tile actualTargetTile;
    float halfHeight = 0;
    Vector3 targetPosition;
    private Ray ray;
    private RaycastHit hit;
    public Tile currentTile = null;
    GameObject[] tiles;

    // Animation Controller
    public Animator anim;

    private int civilization; // The number associated with the civ that owns this land. -1 = water, 0 = asian, 1 = greek, 2 = viking
    private int[] grid = new int[2] { 0, 0 };         // Stores the position of the Tile in the virtual grid. [x position, y position]


    // Use this for initialization
    void Start()
    {
        tiles = GameObject.FindGameObjectsWithTag("Tile");

        halfHeight = GetComponent<Collider>().bounds.extents.y;

        import_manager = GameObject.Find("network_manager").GetComponent<import_manager>(); // Connects to the import_manager.
        map_manager = GameObject.Find("Map").GetComponent<map_manager>();

        anim = this.GetComponent<Animator>();
    }
    
    // if the current tile is occupied, highlight all surrounding tiles
    public void set_selectable(string[] parameter)
    {
        // prepare to move this character
        import_manager.run_function_all("Map", "run_on_map_item", new string[4] { currentTile.get_grid()[0].ToString(), currentTile.get_grid()[1].ToString(), "set_current_char", this.name});

        // set all tiles in range to selectable
        if (moveRange >= 1) // if the character can move at least once
        {
            foreach (Tile tile in currentTile.GetAdjacenctTiles(moveRange)) // get the adjacent tiles
            {
                if (!tile.get_occupied())
                {
                    tile.set_selectable(new string[0] { }); // this is currently not doing anything
                }
            }
        }
    }

    public void move(string[] location)
    {
        grid[0] = int.Parse(location[0]);
        grid[1] = int.Parse(location[1]);
        Debug.Log("Moving");
        currentTile.unselect(new string[1] { moveRange.ToString()});
        import_manager.run_function_all("Map", "run_on_map_item", new string[3] { currentTile.get_grid()[0].ToString(), currentTile.get_grid()[1].ToString(), "set_unoccupied" });

        targetPosition = map_manager.map[grid[0], grid[1]].ground.transform.position;
        currentTile    = map_manager.map[grid[0], grid[1]].ground.GetComponent<Tile>();

        this.transform.LookAt(targetPosition);

        if (currentTile != actualTargetTile)
           anim.SetBool("isWalking", true);

        this.transform.position = new Vector3(targetPosition.x, targetPosition.y, targetPosition.z - currentTile.GetComponent<Renderer>().bounds.size.z);

        this.transform.rotation = Quaternion.identity;
        currentTile.select(new string[1] { moveRange.ToString() });
        Debug.Log("Move game object name = " + this.name);
        anim.SetBool("isWalking", false);
        import_manager.run_function_all("Map", "run_on_map_item", new string[4] { currentTile.get_grid()[0].ToString(), currentTile.get_grid()[1].ToString(), "set_occupied", this.name });
    }

    public void set_civilization(int civ)
    {
        civilization = civ;
    }

    public int get_civilization()
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

    public void update_cooldown()
    {
        if (Time.time > nextAttack)
        {
            if (Input.GetKeyDown(KeyCode.I))
            {
                nextAttack = Time.time + cooldown;
            }
        }
    }
}