using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;


public class unit_manager : MonoBehaviour
{
    // External Classes//
    import_manager import_manager;  // Import_Manager Class that facilitates cross class, player, and server function calls.
    map_manager map_manager;

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
        map_manager = GameObject.Find("Map").GetComponent<map_manager>();
    }

    // Update is called once per frame
    void Update()
    {
        // Check conditions for spawining a command post
        if (Input.GetMouseButtonDown(0) 
            && !EventSystem.current.IsPointerOverGameObject()
            && activeUnitType != null
            && (map_manager.get_current_tile().GetComponent<Tile>().walkable))
        {
            Vector3 tilePosition = map_manager.get_current_tile().transform.position;

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
