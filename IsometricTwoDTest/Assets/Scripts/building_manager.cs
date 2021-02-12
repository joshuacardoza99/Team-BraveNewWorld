using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class building_manager : MonoBehaviour
{
    // External Classes
    import_manager import_manager;  // Import_Manager Class that facilitates cross class, player, and server function calls.
    map_manager map_manager;
    Tile Tile;
    PlayerMove PlayerMove;

    // Public Global Variables 
    public int civNumber;          // Number of the civilization

    [SerializeField]
    private building_type activeBuildingType; // Make varibale public and attach it to building_type

    // Start is called before the first frame update
    void Start()
    {
        import_manager = GameObject.Find("network_manager").GetComponent<import_manager>(); // Connects to the import_manager.
        map_manager = GameObject.Find("Map").GetComponent<map_manager>();                   // Connects to the map_manager.
    } 


    // Champion Spawn command post (still need to figure out how to get this to work outside update function)
   /* public void Update()
    {
        // Check conditions for spawining a command post
        if (Input.GetMouseButtonDown(0) 
            && !EventSystem.current.IsPointerOverGameObject()
            && activeBuildingType != null
            && (map_manager.get_current_tile().GetComponent<Tile>().walkable))
        {
            Vector3 tilePosition = map_manager.get_current_tile().transform.position;

            // Choose prefab depeding on which civ user choose
            if (civNumber == 0)
                Instantiate(activeBuildingType.asian, tilePosition, Quaternion.identity);
            else if (civNumber == 1)
                Instantiate(activeBuildingType.greek, tilePosition, Quaternion.identity);
            else
                Instantiate(activeBuildingType.viking, tilePosition, Quaternion.identity);

            activeBuildingType = null;
        }    
    }
   */
    //  Set active building to which ever the user selected
    public void set_active_building_type(building_type building_Type)
    {
        activeBuildingType = building_Type;
    }
}
