using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class building_manager : MonoBehaviour
{
    // External Classes
    import_manager import_manager;  // Import_Manager Class that facilitates cross class, player, and server function calls.
    civilization civilization;
    preview_object preview_object;
    menu_manager menu_manager;
    match_manager match_manager;

    // Public Global Variables 
    public int civNumber;                                   // Number of the civilization
    bool canPlace = false;                                  // Can building be placed
    public List<Tile> showPreview = new List<Tile>();       // List of tiles with building previews
    public List<Tile> listCommandPostTiles = new List<Tile>();  // List of tiles with Command Posts
    public List<Tile> previews = new List<Tile>();
    public List<GameObject> commandPost = new List<GameObject>();
    public Tile currentTile = null;                         // The tile this character is currently on.
    public Tile playerTile = null;                          // The tile the champion is currently on.

    [SerializeField]
    private building_type activeBuildingType; // Make varibale public and attach it to building_type

    [SerializeField]
    private building_select building_select;   // Makes varible visible in inspector and connect it to building_manager

    // Start is called before the first frame update
    void Start()
    {
        import_manager = GameObject.Find("network_manager").GetComponent<import_manager>(); // Connects to the import_manager.
        civilization = GameObject.Find("civManager").GetComponent<civilization>(); // Connects to the import_manager.
        preview_object = GameObject.Find("preview_object").GetComponent<preview_object>();
        menu_manager = GameObject.Find("MenuManager").GetComponent<menu_manager>(); // Connects to the match_manager.
        match_manager = GameObject.Find("network_manager").GetComponent<match_manager>();
    }

    // This runs when the character is enabled.
    void OnEnable()
    {
        Tile.OnSelected += add_building;
    }


    // This runs when the tile is disabled.
    void OnDisable()
    {
        Tile.OnSelected -= add_building;
    }

    // Champion Spawn command post (still need to figure out how to get this to work outside update function)
    public void add_building(Tile tile, GameObject character)
    {
        // Check conditions for spawining a command post
        if (!EventSystem.current.IsPointerOverGameObject()
            && activeBuildingType != null
            && (tile.is_walkable()))
        {
            if (match_manager.get_local_player().gold >= activeBuildingType.buildCost)
            {
                Vector3 tilePosition = tile.transform.position;
                Building newBuilding = null; // Building that was just placed
                GameObject addScript; 

                set_current_tile(tile);
                can_place();

               playerTile = GameObject.FindWithTag("Player").GetComponent<PlayerMove>().currentTile;

                // Choose prefab depeding on which civ user choose
                if (civNumber == 0)
                {
                    if (!tile.is_in_city()
                        && (activeBuildingType.unitType == 0)                        
                        && canPlace
                        && !tile.has_building())
                    {
                        newBuilding = preview_object.place(activeBuildingType.asian, tile).GetComponent<Building>();
                        newBuilding.tag = "commandPost";
                        newBuilding.set_current_tile(tile);
                        activeBuildingType.print_message();
                        Debug.Log(activeBuildingType.asian.name);
                    }
                    else if (tile.is_in_city()
                             && canPlace
                             && !tile.has_building())
                    {
                        //newBuilding = preview_object.place(activeBuildingType.asian, tile);
                        addScript = preview_object.place(activeBuildingType.asian, tile); // clean this up later
                        newBuilding = addScript.AddComponent<Building>();

                        if (newBuilding.name == "farm(Clone)")
                            newBuilding.tag = "Farm";
                        else if (newBuilding.name == "mine(Clone)")
                            newBuilding.tag = "Mine";

                        newBuilding.set_current_tile(tile);
                        activeBuildingType.print_message();
                    }
                    else
                    {
                        Debug.Log("Building cannot be placed here, destroying previews");
                        preview_object.destroy_previews();
                    }
                }
                else if (civNumber == 1)
                {
                    if ((activeBuildingType.unitType == 0)
                        && !tile.is_in_city()
                        && canPlace
                        && !tile.has_building())
                    {
                        addScript = preview_object.place(activeBuildingType.greek, tile);
                                      addScript.AddComponent<City>();
                        newBuilding = addScript.AddComponent<Building>();
                        newBuilding.tag = "commandPost";
                        newBuilding.set_current_tile(tile);
                        activeBuildingType.print_message();
                    }
                    else if (tile.is_in_city()
                             && canPlace
                             && !tile.has_building())
                    {
                        //newBuilding = preview_object.place(activeBuildingType.greek, tile).GetComponent<Building>();
                        addScript = preview_object.place(activeBuildingType.greek, tile); // clean this up later
                        newBuilding = addScript.AddComponent<Building>();

                        if (newBuilding.name == "farm(Clone)")
                            newBuilding.tag = "Farm";
                        else if (newBuilding.name == "mine(Clone)")
                            newBuilding.tag = "Mine";

                        newBuilding.set_current_tile(tile);
                        activeBuildingType.print_message();
                    }
                    else
                    {
                        Debug.Log("Building cannot be placed here, destroying previews");
                        preview_object.destroy_previews();
                    }
                }
                else
                {
                    if ((activeBuildingType.unitType == 0)
                        && !tile.is_in_city()
                        && canPlace
                        && !tile.has_building())
                    {
                        newBuilding = preview_object.place(activeBuildingType.viking, tile).GetComponent<Building>();
                        newBuilding.tag = "commandPost";
                        newBuilding.set_current_tile(tile);
                        activeBuildingType.print_message();
                    }
                    else if (tile.is_in_city()
                             && canPlace
                             && !tile.has_building())
                    {
                        //newBuilding = preview_object.place(activeBuildingType.viking, tile).GetComponent<Building>();

                        addScript = preview_object.place(activeBuildingType.viking, tile); // clean this up later
                        newBuilding = addScript.AddComponent<Building>();

                        if (newBuilding.name == "farm(Clone)")
                            newBuilding.tag = "Farm";
                        else if (newBuilding.name == "mine(Clone)")
                            newBuilding.tag = "Mine";

                        newBuilding.set_current_tile(tile);
                        activeBuildingType.print_message();
                    }
                    else
                    {
                        Debug.Log("Building cannot be placed here, destroying previews");
                        preview_object.destroy_previews();
                    }
                }      
                
                if (newBuilding != null)
                {
                    import_manager.run_function_all("network_manager", "subtract_player_resources", new string[3] { "0", activeBuildingType.buildCost.ToString(), civNumber.ToString() });
                    match_manager.choose_player(civNumber).buildings.Add(newBuilding);

                }
            }
            else
            {
                Debug.Log("Don't have enough Gold");
                preview_object.destroy_previews();
            }
        }
        showPreview.Clear();
        activeBuildingType = null;
        canPlace = false;
    }

    //  Set active building to which ever the user selected
    public void set_active_building_type(building_type building_Type)
    {
        activeBuildingType = building_Type;
    }

    public void place_previews(Transform aPrefab)
    {
        preview_object preview;
       // showPreview      = GameObject.FindWithTag("Player").GetComponent<PlayerMove>().currentTile.get_walkable_tiles(1);

        if (activeBuildingType.unitType == 0)
        {
            foreach (Tile tile in GameObject.FindWithTag("Player").GetComponent<PlayerMove>().currentTile.get_walkable_tiles(1))
            {
                if (!tile.has_building() 
                    && !tile.is_in_city())
                {
                    Vector3 tilePosition = tile.transform.position;
                    preview = preview_object.create_preview(aPrefab, tilePosition);
                    preview.tag = "previewBuilding";
                    showPreview.Add(tile);
                }
            }
        }
        else
        {
            foreach (GameObject commandPost in GameObject.FindGameObjectsWithTag("commandPost"))
            {
                foreach (Tile post in commandPost.GetComponent<Building>().currentTile.get_walkable_tiles(1))
                {
                    if (!post.has_building())
                    {
                        Vector3 tilePosition = post.transform.position;
                        preview = preview_object.create_preview(aPrefab, tilePosition);
                        preview.tag = "previewBuilding";
                       // canPlace = true;
                        showPreview.Add(post);
                    }
                }
            }
        }
    }

    public void can_place()
    {
      //  if (activeBuildingType.unitType == 0)
      //  {
            foreach (Tile preview in showPreview)
            {
                if (currentTile == preview)
                {
                    canPlace = true;
                }
            }
     //   }

    }

    public void set_current_tile(Tile tile)
    {
        currentTile = tile;
    }
}

