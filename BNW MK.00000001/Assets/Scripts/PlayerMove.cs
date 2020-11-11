using JetBrains.Annotations;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using UnityEngine;

public class PlayerMove : MonoBehaviour
{
    // External Classes//
    import_manager import_manager;  // Import_Manager Class that facilitates cross class, player, and server function calls.

    List<Tile> selectableTiles = new List<Tile>();
    GameObject[] tiles;

    Stack<Tile> path = new Stack<Tile>();
    Tile currentTile = null;

    //public bool moving = false;
    public int moves = 3;
    //public float jumpHeight = 2;
    public float moveSpeed = 2;
    public Tile actualTargetTile;

    //Vector3 velocity = new Vector3();
    //Vector3 heading = new Vector3();

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

        while (currentTile == null)
        {
            Debug.Log("looking for current tile");
            GetCurrentTile();
        }
    }

    // Update is called once per frame
    void Update()
    {
        /*if (currentTile == null)
        {
            Debug.Log("Updating current tile");
            GetCurrentTile();
            
        }*/

        if (currentTile.current && currentTile.occupied)
        {
            import_manager.run_function("map", "set_current_char", new string[1] { this.name });

            foreach (Tile tile in currentTile.adjacencyList)
            {
                if (tile.occupied == false)
                {
                    tile.selectable = true;
                }
            }
        }
     
    }

    public void move(string[] location)
    {
        Debug.Log("starting move to " + location[0]);
        
        GameObject nextTile = GameObject.Find(location[0]);
        targetPosition = nextTile.transform.position;

        currentTile.currentchar = null;
        currentTile.occupied = false;
        foreach (Tile tile in currentTile.adjacencyList)
        {
            tile.selectable = false;
        }

        this.transform.LookAt(targetPosition);

        this.transform.position = new Vector3(targetPosition.x, this.transform.position.y, targetPosition.z);

        this.transform.rotation = Quaternion.identity;

        currentTile = nextTile.GetComponent<Tile>();

        Debug.Log("Ending move to " + location[0]);

        //moving = false;
    }



    public void GetCurrentTile()
    {
        RaycastHit hit;

        if (Physics.Raycast(this.transform.position, Vector3.down, out hit, 2))
        {
            currentTile = hit.collider.GetComponent<Tile>();
        }
        currentTile.occupied = true;
        currentTile.currentchar = this.gameObject;
    }


    // set the current tile of this character
    // parameters = tile.name
    public void set_current_tile(string[] parameters)
    {
        Debug.Log("setting current tile for" + this.name);
        GameObject temp = GameObject.Find(parameters[0]);
        Tile tile = temp.GetComponent<Tile>();
        currentTile = tile;
    }
}