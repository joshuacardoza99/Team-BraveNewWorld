using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;


public class unit_manager : MonoBehaviour
{
    // External Classes//
    import_manager import_manager;  // Import_Manager Class that facilitates cross class, player, and server function calls.

    // Public Global Variables //
    public int civNumber;

    [SerializeField]
    private unit_type activeUnitType; // Make varibale public and attach it to unit_type

    // Private Global Variables //
    private string championName = "champion";
    private int randomTile = 0;

    // Start is called before the first frame update
    void Start()
    {
        import_manager = GameObject.Find("network_manager").GetComponent<import_manager>(); // Connects to the import_manager.
    }

    // This runs when the character is enabled.
    void OnEnable()
    {
        Tile.OnSelected += add_unit;
    }


    // This runs when the tile is disabled.
    void OnDisable()
    {
        Tile.OnSelected -= add_unit;
    }

    // Update is called once per frame
    void add_unit(Tile tile, PlayerMove character)
    {
        // Check conditions for spawining a command post
        if (!EventSystem.current.IsPointerOverGameObject()
            && activeUnitType != null
            && (tile.is_walkable()))
        {
            Vector3 tilePosition = tile.transform.position;

            // Choose prefab depeding on which civ user choose
            if (civNumber == 0)
                Instantiate(activeUnitType.asian, tilePosition, Quaternion.identity);
            else if (civNumber == 1)
                Instantiate(activeUnitType.greek, tilePosition, Quaternion.identity);
            else
                Instantiate(activeUnitType.viking, tilePosition, Quaternion.identity);

            activeUnitType = null;
        }
    }


    //  Set active building to which ever the user selected
    public void set_active_unit_type(unit_type unit_Type)
    {
        activeUnitType = unit_Type;
    }
}
