using System.Collections;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Transactions;
using UnityEngine;
using UnityEngine.Assertions.Must;
using UnityEngine.Serialization;
using UnityEngine.UIElements;
using UnityEngine.UI;


public class Tile : MonoBehaviour
{
    // External Classes//
    import_manager import_manager;  // Import_Manager Class that facilitates cross class, player, and server function calls.
    map_manager map_manager;

    public bool walkable = true;


    public bool current = false;  // if the player is currently using this tile
    public bool occupied = false; // if there is a character currently on this tile
    private bool isCurrentlySelectedTile = false; // Tells when this tile is selected by the player.
    public bool target = false;
    private bool selectable = false; // Determins if the player can click on click on this tile.
    private bool attackable = false;
    public List<Tile> adjacencyList = new List<Tile>();
    public GameObject currentCharacter = null; // the character currently occupying this tile.

    public float nextAttack = 0;
    bool isAttacking = false;
    public float cooldown = 3;

    // Private Variables //
    private Color  realColor;    // The color the tile should be without any highlights.
    private int civilization; // The number associated with the civ that owns this land. -1 = water, 0 = asian, 1 = greek, 2 = viking
    private int[]  grid;         // Stores the position of the Tile in the virtual grid. [x position, y position]

    // Use this for initialization
    void Start () 
	{
        import_manager = GameObject.Find("network_manager").GetComponent<import_manager>(); // Connects to the import_manager.
        map_manager     = GameObject.Find("Map").GetComponent<map_manager>();

        realColor = this.GetComponent<Renderer>().material.color;
    }

    // Update is whenever needed
    public void Updateme()
    {
        // determine if there is a character currently on the tile.
        if (currentCharacter != null)
        {
            occupied = true;
        }
        else
        {
            occupied = false;
        }

        if (occupied)
        {
            this.GetComponent<Renderer>().material.color = Color.magenta;
        }
        else if (occupied)
        {
            this.GetComponent<Renderer>().material.color = Color.red;
        }
        else if (target)
        {
            this.GetComponent<Renderer>().material.color = Color.white;
        }
        else if (attackable)
        {
            this.GetComponent<Renderer>().material.color = Color.yellow;
        }
        else if (selectable)
        {
           this.GetComponent<Renderer>().material.color = Color.blue;
        }
        else if (!isCurrentlySelectedTile)
        {
                this.GetComponent<Renderer>().material.color = realColor;
        }
    }

    // Set current to this tile when it gets clicked
    public void OnMouseDown()
    {
        // If the tile is selectable and open, then move the current character to this tile
        if (selectable && !occupied)
        {
            Debug.Log("About to set current character from OnMouseDown to " + map_manager.get_current_character());
            set_occupied(new string[1] { map_manager.get_current_character()});
            Debug.Log("About to move " + currentCharacter.name);
            import_manager.run_function_all(currentCharacter.name, "move", new string[2] {grid[0].ToString(), grid[1].ToString()});
        }
        else if (selectable)
        {
            Debug.Log("Should set unselectable");
        }
        else if(occupied && Time.time > nextAttack && attackable) // and in range, and not a friendly civ
        {
            // This will make you able to walk on top of other players in multiplayer.
           // set_occupied(new string[1] { currentCharacter.name });
            select(new string[1] { currentCharacter.GetComponent<PlayerMove>().moveRange.ToString()});
            // check if this characters civ is the same as the character clicking on it
            if(Input.GetMouseButtonDown(0))
            {
                if(currentCharacter.GetComponent<PlayerMove>().civilization != currentCharacter.GetComponent<PlayerMove>().civilization)
                {
                    currentCharacter.GetComponent<PlayerMove>().health -= currentCharacter.GetComponent<PlayerMove>().damage;
                    Debug.Log("Health equals " + currentCharacter.GetComponent<PlayerMove>().health);
                    if (currentCharacter.GetComponent<PlayerMove>().health <= 0)
                    {
                        Debug.Log("YOUR SOLDIER HAS FALLEN !!");
                    }
                    Debug.Log("IN COOLDOWN WAIT");
                    nextAttack = Time.time + cooldown;
                }

            }



        }


        map_manager.set_current_tile(map_manager.map[grid[0], grid[1]].ground); // Sets this tile as being currently selected.
    }

    // Returns a List of Tiles with all tiles in the given range away from this tile.
    // Test Intructions: To test run this function with the given range. Then you can manually select with the map_manager.map to check the output.
    public List<Tile> get_adjacenct_tiles(int range)
    {
        List<Tile> inrange       = new List<Tile>(); // A list of tiles that directly border this tile.
        List<Tile> adjacentTiles = new List<Tile>(); // A list of all the tiles that border the tiles in the inrange list upto the range given.

        // Fills the inrange with the tiles that directly border this tile. Catches all the errors when a tile doesn't exist.
        if (range > 0)
        {
            try
            {
                inrange.Add(map_manager.map[grid[0], grid[1] + 1].ground.GetComponent<Tile>());
            } catch { }
            try
            {
                inrange.Add(map_manager.map[grid[0] + 1, grid[1]].ground.GetComponent<Tile>());
            }
            catch { }
            try
            {
                inrange.Add(map_manager.map[grid[0], grid[1] - 1].ground.GetComponent<Tile>());
            }
            catch { }
            try
            {
                inrange.Add(map_manager.map[grid[0] - 1, grid[1]].ground.GetComponent<Tile>());
            }
            catch { }
            try
            {
                inrange.Add(map_manager.map[grid[0] + 1, grid[1] + 1].ground.GetComponent<Tile>());
            }
            catch { }
            try
            {
                inrange.Add(map_manager.map[grid[0] + 1, grid[1] - 1].ground.GetComponent<Tile>());
            } catch { }
            try
            {
                inrange.Add(map_manager.map[grid[0] - 1, grid[1] + 1].ground.GetComponent<Tile>());
            }
            catch { }
            try
            {
                inrange.Add(map_manager.map[grid[0] - 1, grid[1] - 1].ground.GetComponent<Tile>());
            }
            catch { }

            adjacentTiles.AddRange(inrange);

            // The recursive case: Gets the tiles that border the inrange tiles.
            if (range > 1)
            {
                foreach (Tile item in inrange)
                {
                    adjacentTiles.AddRange(item.get_adjacenct_tiles(range - 1));
                }
            }
        }

        return adjacentTiles;
    }

    // Returns a List of Tiles with all tiles in the given range away from this tile that are walkable.
    // Test Instructions: To test run this function with the given range. Then you can manually select with the map_manager.map to check the output with predetermined walkable tiles.
    public List<Tile> get_walkable_tiles (int range) // use this to get attack range 
    {
        List<Tile> filteredList = new List<Tile>(); // A list of all the walkable tiles in the given range of this tile.

        foreach (Tile tile in get_adjacenct_tiles(range))
        {
            if (tile.walkable)
            {
                filteredList.Add(tile);
            }
        }

        return filteredList;
    }

    // Sets the surounding tiles in the given range to be selectable.
    // Test Instruction: Manually select the tile with map_manager.map and make sure the tile color is blue and if tile.selectable is true.
    // parameter = [int range]
    public void select(string[] parameter)// use this for attack range 
    {
        int range = int.Parse(parameter[0]); // The distance a needs to be away from this tile to select.

        foreach (Tile tile in get_walkable_tiles(range))
        {
            tile.set_selectable(new string[0] { });
        }
    }

    // Sets the surounding tiles in the given range to be unselectable.
    // Test Instruction: Manually select the tile with map_manager.map and make sure the tile color is its normal color and if tile.selectable is false.
    // parameter = [int range]
    public void unselect(string[] parameter)
    {
        int range = int.Parse(parameter[0]); // The distance a needs to be away from this tile to unselect.

        foreach (Tile tile in get_walkable_tiles(range))
        {
            tile.set_unselectable(new string[0] { });
        }
    }

    // Sets the civilization (groundType) of this tile.
    public void set_civilization(int civ)
    {
        civilization = civ;
    }

    // Gets the civilization (groundType) of this tile.
    public int get_civilization()
    {
        return civilization;
    }

    // Sets the grid of this tile. Grid = [int xPosition, int yPosition].
    public void set_grid(int xPosition, int yPosition)
    {
        grid = new int[2] { xPosition, yPosition };
    }

    // Gets the grid of this tile. Grid = [int xPosition, int yPosition].
    public int[] get_grid()
    {
        return grid;
    }

    // Sets this tile into occupied mode.
    // parameter = [string characterName]
    public void set_occupied(string[] parameter)
    {
        occupied    = true;
        selectable  = true;
        set_current_character(parameter);
    }

    // Sets this tile into unoccupied mode.
    // parameter = [] -- just to make it compatible with import_manager.run_function_all.
    public void set_unoccupied(string[] parameter)
    {
        Debug.Log("Setting Unoccupied");
        occupied    = false;
        selectable = false;
        unset_current_character(parameter);
    }

    // Determines if this tile is occupied.
    public bool is_occupied()
    {
        return occupied;
    }

    // Sets this tile to be selectable.
    public void set_selectable(string[] parameter)
    {
        selectable = true;
        Updateme();
    }

    // Sets his tile to be attackable 
    public void set_attackable(string[] parameter)
    {
        attackable = true;
        Updateme();
    }

    // Sets this tile to be unselectable.
    public void set_unselectable(string[] parameter)
    {
        selectable = false;
        Updateme();
    }

    // Sets the current character who is occupying this tile.
    public void set_current_character(string[] newcurrentChar)
    {
        if (map_manager == null)
        {
            map_manager = GameObject.Find("Map").GetComponent<map_manager>();
        }

        if (newcurrentChar[0] != "")
        {
            currentCharacter = GameObject.Find(newcurrentChar[0]);
            currentCharacter.GetComponent<PlayerMove>().currentTile = this;
            map_manager.set_current_character(new string[1] { currentCharacter.name });
            Updateme();
        }
    }

    // Unsets the current character who is occupying this tile.
    public void unset_current_character(string[] nothing)
    {
        currentCharacter.GetComponent<PlayerMove>().currentTile = null;
        currentCharacter = null;
        Updateme();
    }

    // Gets the range of tiles that are attackable 
    public void get_attack_range()
    {
        
        foreach (Tile tile in get_walkable_tiles(currentCharacter.GetComponent<PlayerMove>().attackRange))
        {
            if(tile.occupied)
            tile.set_attackable(new string[0] { });
        }

        
    }
    // Puts the tile into currently selected mode.
    public void set_as_current()
    {
        if (!isCurrentlySelectedTile)
        {
            this.isCurrentlySelectedTile = true;
            this.GetComponent<Renderer>().material.color = Color.cyan;
             
            if (is_occupied())
            {
                select(new string[1] { currentCharacter.GetComponent<PlayerMove>().moveRange.ToString() });
                get_attack_range();
            }
        }
    }

    // Puts the tile into normal mode.
    public void set_as_not_current()
    {
        if (isCurrentlySelectedTile)
        {
            this.isCurrentlySelectedTile = false;
            this.GetComponent<Renderer>().material.color = realColor;

            if (is_occupied())
            {
                unselect(new string[1] { currentCharacter.GetComponent<PlayerMove>().moveRange.ToString() });
            }
        }
    }
}
