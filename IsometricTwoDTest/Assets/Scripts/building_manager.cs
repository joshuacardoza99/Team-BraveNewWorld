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

    // Public Global Variables 
    public int civNumber;          // Number of the civilization
   // public GameObject player;
    public List<Tile> showPreview = new List<Tile>();
    //public Tile currentTile = null; // The tile this character is currently on.


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

        //player = GameObject.FindWithTag("Player");
      //  currentTile = player.GetComponent<PlayerMove>().currentTile;
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

    void Update()
    {
        if (Input.GetMouseButtonDown(0))
        {
            RaycastHit hit; 
            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);

            if (Physics.Raycast(ray, out hit))
            {
                BoxCollider bc = hit.collider as BoxCollider;
                if (bc.gameObject.tag == "previewBuilding")
                {
                    Destroy(bc.gameObject);
                }
            }
        }
    }

    // Champion Spawn command post (still need to figure out how to get this to work outside update function)
    public void add_building(Tile tile, GameObject character)
    {
        // Check conditions for spawining a command post
        if (//!EventSystem.current.IsPointerOverGameObject()
             activeBuildingType != null
            && (tile.is_walkable()))
        {
            if (civilization.amountGold >= activeBuildingType.buildCost)
            {
                Vector3 tilePosition = tile.transform.position;
                Building newBuilding; // Building that was just placed

                // Choose prefab depeding on which civ user choose
                if (civNumber == 0)
                {
                    if ((activeBuildingType.unitType == 0) && (!tile.is_in_city()))
                    {                       
                        newBuilding = Instantiate(activeBuildingType.asian, tilePosition, Quaternion.identity).GetComponent<Building>();
                        newBuilding.set_current_tile(tile);
                        civilization.deduct_cost(building_select.buildingNumber);
                        activeBuildingType.print_message();
                    }
                    else if (tile.is_in_city())
                    {
                        newBuilding = Instantiate(activeBuildingType.asian, tilePosition, Quaternion.identity).GetComponent<Building>();
                        newBuilding.set_current_tile(tile);
                        civilization.deduct_cost(building_select.buildingNumber);
                        activeBuildingType.print_message();
                    }
                    else
                        Debug.Log("Building cannot be placed Here");
                }
                else if (civNumber == 1)
                {
                    if ((activeBuildingType.unitType == 0) 
                        && (!tile.is_in_city())
                        )
                    {
                        place_previews(activeBuildingType.greek);
                      //  place_building(activeBuildingType.greek);

                       // newBuilding = Instantiate(activeBuildingType.greek, tilePosition, Quaternion.identity).GetComponent<Building>();
                       // newBuilding.set_current_tile(tile);
                       // civilization.deduct_cost(building_select.buildingNumber);
                       // activeBuildingType.print_message();
                    }
                    else if (tile.is_in_city())
                    {
                        newBuilding = Instantiate(activeBuildingType.greek, tilePosition, Quaternion.identity).GetComponent<Building>();
                        newBuilding.set_current_tile(tile);
                        civilization.deduct_cost(building_select.buildingNumber);
                        activeBuildingType.print_message();
                    }
                    else
                        Debug.Log("Building cannot be placed Here");
                }
                else
                {
                    if ((activeBuildingType.unitType == 0) && (!tile.is_in_city()))
                    {
                        newBuilding = Instantiate(activeBuildingType.viking, tilePosition, Quaternion.identity).GetComponent<Building>();
                        newBuilding.set_current_tile(tile);
                        civilization.deduct_cost(building_select.buildingNumber);
                        activeBuildingType.print_message();
                    }
                    else if (tile.is_in_city())
                    {
                        newBuilding = Instantiate(activeBuildingType.viking, tilePosition, Quaternion.identity).GetComponent<Building>();
                        newBuilding.set_current_tile(tile);
                        civilization.deduct_cost(building_select.buildingNumber);
                        activeBuildingType.print_message();
                    }
                    else
                        Debug.Log("Building cannot be placed Here");
                }
                activeBuildingType = null;
            }
            else
            {
                Debug.Log("Don't have enough Gold");
                activeBuildingType = null;
            }
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
        showPreview = GameObject.FindWithTag("Player").GetComponent<PlayerMove>().currentTile.get_walkable_tiles(1);

        foreach (Tile tile in showPreview)
        {
            Vector3 tilePosition = tile.transform.position;
            preview = preview_object.create_preview(aPrefab, tilePosition);
            preview.tag = "previewBuilding";
        }
    }
}

