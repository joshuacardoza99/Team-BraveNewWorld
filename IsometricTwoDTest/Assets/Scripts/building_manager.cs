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
    Building Building;

    // Public Global Variables 
    public int civNumber;                                         // Number of the civilization
    bool canPlace = false;                                        // Can building be placed
    public List<Tile> showPreview = new List<Tile>();             // List of tiles with building previews
    public List<Tile> listCommandPostTiles = new List<Tile>();    // List of tiles with Command Posts
    public List<Tile> previews = new List<Tile>();                // Liat of preview made on tiles
    public List<GameObject> commandPost = new List<GameObject>(); // List of command post 
    public Tile currentTile = null;                               // The tile this character is currently on.
    public Tile playerTile = null;                                // The tile the champion is currently on.

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

                GameObject addScript;        // using this variable to add missing scripts

                set_current_tile(tile);
                can_place();

                playerTile = GameObject.FindWithTag("Player").GetComponent<PlayerMove>().currentTile;

                    if (!tile.is_in_city()
                        && (activeBuildingType.unitType == 0)
                        && canPlace
                        && !tile.has_building())
                    {
                        addScript = preview_object.place(activeBuildingType.get_building_of_civilization(match_manager.get_local_player().civilization), tile, (int)activeBuildingType.unitType);

                        if (addScript.GetComponent<Building>() == null)
                            addScript.AddComponent<Building>();

                        if (addScript.GetComponent<City>() == null)
                            addScript.AddComponent<City>();

                        newBuilding = addScript.GetComponent<Building>();
                        newBuilding.tag = "commandPost";
                        newBuilding.set_current_tile(tile);
                        activeBuildingType.print_message();
                        Debug.Log(activeBuildingType.asian.name);
                    }
                    else if (tile.is_in_city()
                             && canPlace
                             && !tile.has_building())
                    {
                        addScript = preview_object.place(activeBuildingType.asian, tile, (int)activeBuildingType.unitType);

                        if (addScript.GetComponent<Building>() == null)
                            newBuilding = addScript.AddComponent<Building>();
                            
                        newBuilding = addScript.GetComponent<Building>();
                        newBuilding.set_current_tile(tile);
                        activeBuildingType.print_message();
                    }
                    else
                    {
                        Debug.Log("Building cannot be placed here, destroying previews");
                        preview_object.destroy_previews();
                    }

                if (newBuilding != null)
                {
                    import_manager.run_function_all("network_manager", "subtract_player_resources", new string[3] { "0", activeBuildingType.buildCost.ToString(), civNumber.ToString() });
                    newBuilding.building_type = match_manager.buildingTypeList[((int)activeBuildingType.unitType)];
                    newBuilding.gameObject.AddComponent<BoxCollider>();
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

        // after a building is placed, attach it to its city (by updating all the cities building lists)
        foreach (GameObject icity in GameObject.FindGameObjectsWithTag("commandPost"))
        {
            City city = icity.GetComponent<City>();
            import_manager.run_function_all(city.name, "get_buildings", new string[0]);
        }
    }

    //  Set active building to which ever the user selected
    public void set_active_building_type(building_type building_Type)
    {
        activeBuildingType = building_Type;
    }

    public void place_previews(Transform aPrefab)
    {
        preview_object preview;

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
            foreach (Building commandPost in match_manager.choose_player(civNumber).buildings)
            {
                if(((int)commandPost.building_type.unitType) == 0)
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
        foreach (Tile preview in showPreview)
        {
            if (currentTile == preview)
            {
                canPlace = true;
            }
        }
    }

    public void set_current_tile(Tile tile)
    {
        currentTile = tile;
    }
}
