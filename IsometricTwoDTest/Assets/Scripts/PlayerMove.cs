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
    unit_maker     unit_maker;      // Importing the unit_maker class.

    // Unit attribiutes //
    public int health = 10;                  // The current health of this character.
    public int damage = 2;                   // The amount of damage this character gives in an attach.
    public int attackRange = 4;                   // The range this character can attach from.
    public int moveRange = 3;                   // The range this character can move to.
    public float cooldown = 3;                   // The seconds this player needs to wait between actions.
    public float nextAttack = 0;                   // Does not appear to be used.
    public bool isAttacking = false;               // Determines if this player is currently attaching.
    public int civilization = 0;                   // The number associated with the civ that owns this land. -1 = water, 0 = asian, 1 = greek, 2 = viking
    private int[] grid = new int[2] { 0, 0 }; // Stores the position of the Tile in the virtual grid. [x position, y position]

    // Varibles for movement 
    public Tile actualTargetTile;        // Does not appear to be used.
    public float halfHeight = 0;    // Apears to only be assigned half-of the height of this character.
    public Tile currentTile = null; // The tile this character is currently on.

    // Animation Controller
    public Animator anim; // Some kind of controler for the animations.

    // Use this for initialization.
    void Start()
    {
        halfHeight = GetComponent<Collider>().bounds.extents.y;

        import_manager = GameObject.Find("network_manager").GetComponent<import_manager>(); // Connects to the import_manager.
        map_manager = GameObject.Find("Map").GetComponent<map_manager>();
        unit_maker = GameObject.Find("unit_manager").GetComponent<unit_maker>();

        anim = this.GetComponent<Animator>();
    }

    // This runs when the character is enabled.
    void OnEnable()
    {
        Tile.OnSelected += handle_move;
    }


    // This runs when the character is disabled.
    void OnDisable()
    {
        Tile.OnSelected -= handle_move;
    }

    // Handles running the move on the current players computer and over the network.
    public void handle_move(Tile moveToTile, GameObject ususedCharacter)
    {
        if (!moveToTile.is_occupied() && moveToTile.is_selectable())
        {
            currentTile.unselect(currentTile, this.gameObject);
            import_manager.run_function_all("Map", "run_on_map_item", new string[3] { currentTile.get_grid()[0].ToString(), currentTile.get_grid()[1].ToString(), "set_unoccupied" });

            import_manager.run_function_all(this.gameObject.name, "move", new string[2] { moveToTile.get_grid()[0].ToString(), moveToTile.get_grid()[1].ToString() });
            move(new string[2] { moveToTile.get_grid()[0].ToString(), moveToTile.get_grid()[1].ToString() });

            import_manager.run_function_all("Map", "run_on_map_item", new string[4] { currentTile.get_grid()[0].ToString(), currentTile.get_grid()[1].ToString(), "set_occupied", this.name });
        }
    }

    // Moves the player to the selected tile.
    // Parameters = [int xTilePosition, int yTilePosition]
    public void move(string[] parameters)
    {
        Tile moveToTile = map_manager.map[int.Parse(parameters[0]), int.Parse(parameters[1])].ground.GetComponent<Tile>();
        Vector3 targetPosition; // The actual position of the tile this character is about to move to.

        targetPosition = map_manager.map[grid[0], grid[1]].ground.transform.position;
        currentTile = map_manager.map[grid[0], grid[1]].ground.GetComponent<Tile>();

        try
        {
            anim.SetBool("isWalking", true);
        }
        catch { }

        this.transform.position = new Vector3(targetPosition.x, targetPosition.y, targetPosition.z - currentTile.GetComponent<Renderer>().bounds.size.z);

        if ((moveToTile.get_grid()[0] > grid[0]) && (moveToTile.get_grid()[1] > grid[1]))
        {
            unit_maker.face_forward(this.gameObject);
        }
        else if ((moveToTile.get_grid()[0] < grid[0]) && (moveToTile.get_grid()[1] < grid[1]))
        {
            unit_maker.face_backward(this.gameObject);
        }
        else if ((moveToTile.get_grid()[0] > grid[0]) && (moveToTile.get_grid()[1] < grid[1]))
        {
            unit_maker.face_left(this.gameObject);
        }
        else if ((moveToTile.get_grid()[0] < grid[0]) && (moveToTile.get_grid()[1] > grid[1]))
        {
            unit_maker.face_right(this.gameObject);
        }
        else if ((moveToTile.get_grid()[0] > grid[0]) && (moveToTile.get_grid()[1] == grid[1]))
        {
            unit_maker.face_left_forward(this.gameObject);
        }
        else if ((moveToTile.get_grid()[0] == grid[0]) && (moveToTile.get_grid()[1] > grid[1]))
        {
            unit_maker.face_right_forward(this.gameObject);
        }
        else if ((moveToTile.get_grid()[0] == grid[0]) && (moveToTile.get_grid()[1] < grid[1]))
        {
            unit_maker.face_left_backward(this.gameObject);
        }
        else if ((moveToTile.get_grid()[0] < grid[0]) && (moveToTile.get_grid()[1] == grid[1]))
        {
            unit_maker.face_right_backward(this.gameObject);
        }

        if (moveToTile.get_grid()[0] < grid[0])
        {
            Debug.Log("The Tiles Y position is greater");
        }


        grid[0] = moveToTile.get_grid()[0];
        grid[1] = moveToTile.get_grid()[1];

        try
        {
            if (anim.GetBool("isWalking"))
                anim.SetBool("isWalking", false);
        }
        catch { }
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

    // Sets the current tile this character is occupying.
    public void set_current_tile(Tile tile)
    {
        currentTile = tile;
        //grid = tile.get_grid(); This line brakes set_unoccupied on the Tile script.
    }

    // Send clicks to the current tile
    private void OnMouseDown()
    {
        currentTile.OnMouseDown();
    }

}