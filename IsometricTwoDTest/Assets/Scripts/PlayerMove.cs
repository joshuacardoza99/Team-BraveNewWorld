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
    map_manager    map_manager;     // Importing the map_manager class.

    // Unit attribiutes //
    public  int   health       = 10;                  // The current health of this character.
    public  int   damage       = 2;                   // The amount of damage this character gives in an attach.
    public  int   attackRange  = 4;                   // The range this character can attach from.
    public  int   moveRange    = 3;                   // The range this character can move to.
    public  float cooldown     = 3;                   // The seconds this player needs to wait between actions.
    public  float nextAttack   = 0;                   // Does not appear to be used.
    public  bool  isAttacking  = false;               // Determines if this player is currently attaching.
    public  int   civilization = 0;                   // The number associated with the civ that owns this land. -1 = water, 0 = asian, 1 = greek, 2 = viking
    private int[] grid         = new int[2] { 0, 0 }; // Stores the position of the Tile in the virtual grid. [x position, y position]

    // Varibles for movement 
    public Tile  actualTargetTile;        // Does not appear to be used.
    public float halfHeight       = 0;    // Apears to only be assigned half-of the height of this character.
    public Tile  currentTile      = null; // The tile this character is currently on.

    // Animation Controller
    public Animator anim; // Some kind of controler for the animations.

    // Use this for initialization.
    void Start()
    {
        halfHeight = GetComponent<Collider>().bounds.extents.y;

        import_manager = GameObject.Find("network_manager").GetComponent<import_manager>(); // Connects to the import_manager.
        map_manager = GameObject.Find("Map").GetComponent<map_manager>();

        anim = this.GetComponent<Animator>();
    }
    
    // if the current tile is occupied, highlight all surrounding tiles.
    public void set_selectable(string[] parameter)
    {
        // prepare to move this character
        Debug.Log("Trying to Set current character from set_selectable to " + this.name);
        //import_manager.run_function_all("Map", "run_on_map_item", new string[4] { currentTile.get_grid()[0].ToString(), currentTile.get_grid()[1].ToString(), "set_current_character", this.name});

        // set all tiles in range to selectable
        if (moveRange >= 1) // if the character can move at least once
        {
            foreach (Tile tile in currentTile.get_walkable_tiles(moveRange)) // get the adjacent tiles
            {
                if (!tile.is_occupied())
                {
                    tile.set_selectable(new string[0] { }); // this is currently not doing anything
                }
            }
        }
    }

    // Moves the player to the selected tile.
    public void move(string[] location)
    {
        Vector3 targetPosition; // The actual position of the tile this character is about to move to.

        grid[0] = int.Parse(location[0]);
        grid[1] = int.Parse(location[1]);
        Debug.Log("Moving");
        //currentTile.unselect(new string[1] { moveRange.ToString()});
        //urrentTile.set_unselectable(new string[0] { });
        import_manager.run_function_all("Map", "run_on_map_item", new string[3] { currentTile.get_grid()[0].ToString(), currentTile.get_grid()[1].ToString(), "set_unoccupied" });

        targetPosition = map_manager.map[grid[0], grid[1]].ground.transform.position;
        currentTile    = map_manager.map[grid[0], grid[1]].ground.GetComponent<Tile>();

        // Condition if character moved
        //if (currentTile.Position != targetPosition)
            try
            {
                anim.SetBool("isWalking", true);
            }
            catch { }

        this.transform.LookAt(targetPosition);


        this.transform.position = new Vector3(targetPosition.x, targetPosition.y, targetPosition.z - currentTile.GetComponent<Renderer>().bounds.size.z);

        this.transform.rotation = Quaternion.identity;
        currentTile.select(new string[1] { moveRange.ToString() });
        Debug.Log("Move game object name = " + this.name);

        try
        {
            if (anim.GetBool("isWalking"))
                anim.SetBool("isWalking", false);
        }
        catch { }
        import_manager.run_function_all("Map", "run_on_map_item", new string[4] { currentTile.get_grid()[0].ToString(), currentTile.get_grid()[1].ToString(), "set_occupied", this.name });

    }

    // Sets the civilization this character is apart of.
    public void set_civilization(int civ)
    {
        civilization = civ;
    }

    // Ges the civilization this character is apart of.
    public int get_civilization()
    {
        return civilization;
    }

    // Sets the virtual location of this character.
    public void set_grid(int xPosition, int yPosition)
    {
        grid = new int[2] { xPosition, yPosition };
    }

    // Gets the virtual location of this character.
    public int[] get_grid()
    {
        return grid;
    }

    // Send clicks to the current tile
    private void OnMouseDown()
    {
        currentTile.OnMouseDown();
    } 

}