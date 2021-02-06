using System.Collections;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Transactions;
using UnityEngine;
using UnityEngine.Assertions.Must;
using UnityEngine.Serialization;
using UnityEngine.UIElements;


public class Tile : MonoBehaviour
{

    // External Classes//
    import_manager import_manager;  // Import_Manager Class that facilitates cross class, player, and server function calls.
    map_manager map_manager;

    public bool walkable = true;
    public bool current = false; // if the player is currently using this tile
    public bool occupied = false; // if there is a character currently on this tile
    public bool target = false;
    private bool selectable = false;
    public List<Tile> adjacencyList = new List<Tile>();
    public GameObject currentchar = null; // the character currently on this tile. Or about to be moved to this tile.

    public float nextAttack = 0;
    bool isAttacking = false;
    public float cooldown = 3;

    // Private Variables //
    private Color  realColor;    // The color the tile should be without any highlights.
    private string civilization; // The number associated with the civ that owns this land. -1 = water, 0 = asian, 1 = greek, 2 = viking
    private int[]  grid;         // Stores the position of the Tile in the virtual grid. [x position, y position]

    // Use this for initialization
    void Start () 
	{
        import_manager = GameObject.Find("network_manager").GetComponent<import_manager>(); // Connects to the import_manager.
        map_manager = GameObject.Find("Map").GetComponent<map_manager>();

        realColor = this.GetComponent<Renderer>().material.color;

        //FindNeighbors();

    }

    // Update is whenever needed
    public void Updateme()
    {
        // determine if there is a character currently on the tile.
        if (currentchar != null)
        {
            occupied = true;
        }
        else
        {
            occupied = false;
        }

        if (current && occupied)
        {
            this.GetComponent<Renderer>().material.color = Color.magenta;
        }
        else if (current)
        {
            this.GetComponent<Renderer>().material.color = Color.cyan;
        }
        else if (occupied)
        {
            this.GetComponent<Renderer>().material.color = Color.red;
             //this.GetComponent<Renderer>().material.color = realColor;
        }
        else if (target)
        {
            this.GetComponent<Renderer>().material.color = Color.white;
        }
        else if (selectable)
        {
            this.GetComponent<Renderer>().material.color = Color.blue;
             //this.GetComponent<Renderer>().material.color = realColor;
        }
        else
        {
            this.GetComponent<Renderer>().material.color = realColor;
        }
    }

    // Set current to this tile when it gets clicked
    public void OnMouseDown()
    {
        // If the tile is selectable and open, then move the current character to this tile
        if (selectable && (occupied == false))
        {
            map_manager.get_current_char(new string[2] {grid[0].ToString(), grid[1].ToString()});
            map_manager.set_current(new string[2] { grid[0].ToString(), grid[1].ToString() });
            import_manager.run_function_all(currentchar.name, "move", new string[2] {grid[0].ToString(), grid[1].ToString()});
        }
        else if(occupied && Time.time > nextAttack) // and in range, and not a friendly civ
        {
            select(new string[1] { currentchar.GetComponent<PlayerMove>().moveRange.ToString()});
            // check if this characters civ is the same as the character clicking on it
            if(Input.GetMouseButtonDown(0))
            {
                currentchar.GetComponent<PlayerMove>().health -= currentchar.GetComponent<PlayerMove>().damage;
                Debug.Log("Health equals " + currentchar.GetComponent<PlayerMove>().health);
                if (currentchar.GetComponent<PlayerMove>().health <= 0)
                {
                    Debug.Log("YOUR SOLDIER HAS FALLEN !!");
                }
                Debug.Log("IN COOLDOWN WAIT");
                nextAttack = Time.time + cooldown;
            }



        }
         
        map_manager.set_current(new string[2] { grid[0].ToString(), grid[1].ToString() });
        current = true;

        Updateme();
       // PlayerMove temp = currentchar.GetComponent<PlayerMove>(); 
       // temp.set_selectable(); // this allows you to move right after youve moved, this will be disabled when we set cooldowns.
    }

    public List<Tile> GetAdjacenctTiles(int range)
    {
        List<Tile> inrange       = new List<Tile>();
        List<Tile> adjacentTiles = new List<Tile>();

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

            if (range > 1)
            {
                foreach (Tile item in inrange)
                {
                    adjacencyList.AddRange(item.GetAdjacenctTiles(range - 1));
                }
            }

            foreach (Tile item in inrange)
            {
                if (item.walkable)
                {
                    adjacentTiles.Add(item);
                   // item.set_selectable(new string[0] { }); // this is curently doing what line 72 in player move should be doing.
                        // this line shouldnt be here because it is messing with the unselect function.
                }
            }

            adjacencyList.AddRange(inrange);
        }

        return adjacentTiles;
    }


    // Set and get functions

    // Unselect this tile and the surounding tiles based on the player move.
    // parameter = [int range]
    public void unselect(string[] parameter)
    {
        int range = int.Parse(parameter[0]);
        current = false;
        Updateme();

        if (occupied)
        {
            this.set_unselectable(new string[0] { });

            foreach (Tile tile in GetAdjacenctTiles(range))
            {
                tile.set_unselectable(new string[0] { });
            }
        }
    }

    // Select this tile and the surounding tiles based on the player move.
    // parameter = [int range]
    public void select(string[] parameter)
    {
        int range = int.Parse(parameter[0]);
        current = true;
        Updateme();

        if (occupied)
        {
            this.set_selectable(new string[0] { });

            foreach (Tile tile in GetAdjacenctTiles(range))
            {
                tile.set_selectable(new string[0] { });
            }
        }
    }

    // Get and Set Functions //

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

    public bool is_current()
    {
        return current;
    }

    public void set_occupied(string[] parameter)
    {
        occupied = true;
        Updateme();
    }
    public void set_unoccupied(string[] parameter)
    {
        occupied = false;
        Updateme();
    }
    public void set_selectable(string[] parameter)
    {
        selectable = true;
        Updateme();
    }

    public void set_unselectable(string[] parameter)
    {
        selectable = false;
        Updateme();
    }

    public void set_current_char(string[] newcurrentChar)
    {
        if (newcurrentChar[0] != "")
        {
            currentchar = GameObject.Find(newcurrentChar[0]);
        }
        
        Updateme();
    }

   public void Reset()
    {
        current = false;
        target = false;
        selectable = false;

        //visited = false;
        Updateme();
    }
}
