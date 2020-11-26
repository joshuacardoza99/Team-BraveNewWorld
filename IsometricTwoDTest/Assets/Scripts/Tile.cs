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

    public bool walkable = true;
    public bool current = false; // if the player is currently using this tile
    public bool occupied = false; // if there is a character currently on this tile
    public bool target = false;
    public bool selectable = false;

    
    public GameObject map; // this should be set to the map gameobject
    public GameObject currentchar = null; // the character currently on this tile. Or about to be moved to this tile.
    public List<Tile> adjacencyList = new List<Tile>();

    //Needed BFS (breadth first search)
    public bool visited = false;
    public Tile parent = null;
    public int distance = 0;

    //For A*
    public float f = 0;
    public float g = 0;
    public float h = 0;

    // Private Variables //
    private Color realColor; // The color the tile should be without any highlights.

	// Use this for initialization
	void Start () 
	{
        import_manager = GameObject.Find("network_manager").GetComponent<import_manager>(); // Connects to the import_manager.
    
        realColor = this.GetComponent<Renderer>().material.color;

        map = GameObject.Find("map");

        FindNeighbors();

    }
	
	// Update is whenever needed
	public void Updateme () 
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
            import_manager.run_function("map", "get_current_char", new string[1] { this.name });
            import_manager.run_function_all(currentchar.name, "switch_selectable_tile", new string[0] { });
            import_manager.run_function_all(currentchar.name, "move", new string[1] { this.name });
        }
        else if(occupied) // and in range, and not a friendly civ
        {
            // check if this characters civ is the same as the character clicking on it
            
        }
           
        import_manager.run_function("map", "unselect_tile", new string[0] { });
        import_manager.run_function("map", "set_current", new string[1] { this.name });
        current = true;

        Updateme();
        PlayerMove temp = currentchar.GetComponent<PlayerMove>();
        temp.set_selectable();
    }
    

    public void FindNeighbors()
    {
        //Reset();

        CheckTile( Vector3.forward);
        CheckTile(-Vector3.forward);
        CheckTile( Vector3.right);
        CheckTile(-Vector3.right);

        CheckTile( Vector3.forward +  Vector3.right);
        CheckTile(-Vector3.forward +  Vector3.right);
        CheckTile( Vector3.forward + -Vector3.right);
        CheckTile(-Vector3.forward + -Vector3.right);
    }

    public void CheckTile(Vector3 direction)
    {

        Vector3 halfExtents = new Vector3(0.25f, 0.25f, 0.25f);
        Collider[] colliders = Physics.OverlapBox(transform.position + direction, halfExtents);

        foreach (Collider item in colliders)
        {
            Tile tile = item.GetComponent<Tile>();
            if (tile != null && tile.walkable && !tile.occupied)
            {
                RaycastHit hit;

                if (!Physics.Raycast(tile.transform.position, Vector3.up, out hit, 1) || (tile == target))
                {
                    adjacencyList.Add(tile);
                }
            }
        }
    }


    // Set and get functions

    // Unselect this tile
    // parameter = empty array (not used)
    public void unselect(string[] parameter)
    {
        current = false;
        Updateme();

        // if the tile being unselected is occupied, also unselect all nearby tiles
        if (occupied)
        {
            foreach (Tile tile in adjacencyList)
            {
                tile.selectable = false;
                tile.Updateme();
                
                    foreach (Tile tile2 in tile.adjacencyList)
                    {
                        tile2.selectable = false;
                        tile2.Updateme();
                    }
            }
        }
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
    public void set_selectable()
    {
        selectable = true;
        Updateme();
    }

    public void set_current_char(string[] newcurrentChar)
    {
        currentchar = GameObject.Find(newcurrentChar[0]);
        Updateme();
    }
    public void Reset()
    {
        adjacencyList.Clear();

        current = false;
        target = false;
        selectable = false;

        //visited = false;
        parent = null;
        distance = 0;

        f = g = h = 0;
        Updateme();
    }
}
