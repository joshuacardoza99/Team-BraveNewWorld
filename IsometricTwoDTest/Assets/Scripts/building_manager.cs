using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class building_manager : MonoBehaviour
{
    // External Classes
    import_manager import_manager;  // Import_Manager Class that facilitates cross class, player, and server function calls.
    civilization civilization;

    // Public Global Variables 
    public int civNumber;          // Number of the civilization

    [SerializeField]
    private building_type activeBuildingType; // Make varibale public and attach it to building_type

    [SerializeField]
    private building_select building_select;   // Makes varible visible in inspector and connect it to building_manager

    // Start is called before the first frame update
    void Start()
    {
        import_manager = GameObject.Find("network_manager").GetComponent<import_manager>(); // Connects to the import_manager.
        civilization = GameObject.Find("civManager").GetComponent<civilization>(); // Connects to the import_manager.
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
    public void add_building(Tile tile, PlayerMove character)
    {
        // Check conditions for spawining a command post
        if (!EventSystem.current.IsPointerOverGameObject()
            && activeBuildingType != null
            && (tile.is_walkable()))
        {
            if (civilization.amountGold >= activeBuildingType.buildCost)
            {
                Vector3 tilePosition = tile.transform.position;

                // Choose prefab depeding on which civ user choose
                if (civNumber == 0)
                    Instantiate(activeBuildingType.asian, tilePosition, Quaternion.identity);
                else if (civNumber == 1)
                    Instantiate(activeBuildingType.greek, tilePosition, Quaternion.identity);
                else
                    Instantiate(activeBuildingType.viking, tilePosition, Quaternion.identity);

                civilization.deduct_cost(building_select.buildingNumber);

                activeBuildingType.print_message();
                activeBuildingType = null;
            }
            else
                Debug.Log("Don't have enough Gold");
        }
    }

    //  Set active building to which ever the user selected
    public void set_active_building_type(building_type building_Type)
    {
        activeBuildingType = building_Type;
    }
}

