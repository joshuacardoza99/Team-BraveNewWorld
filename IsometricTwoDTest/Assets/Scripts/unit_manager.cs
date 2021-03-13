using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;


public class unit_manager : MonoBehaviour
{
    // External Classes//
    import_manager import_manager;  // Import_Manager Class that facilitates cross class, player, and server function calls.
    unit_maker unit_maker;
    match_manager match_manager;
    menu_manager menu_manager;

    // Public Global Variables //
    public int civNumber;
    public int counter = 0;

    [SerializeField]
    private unit_type activeUnitType; // Make varibale public and attach it to unit_type

    // Private Global Variables //
    private string championName = "champion";
    private int randomTile = 0;

    // Start is called before the first frame update
    void Start()
    {
        import_manager = GameObject.Find("network_manager").GetComponent<import_manager>(); // Connects to the import_manager.
        unit_maker = GameObject.Find("unit_manager").GetComponent<unit_maker>();
        match_manager = GameObject.Find("network_manager").GetComponent<match_manager>(); // Connects to the match_manager.
        menu_manager = GameObject.Find("MenuManager").GetComponent<menu_manager>(); // Connects to the match_manager.
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
    void add_unit(Tile tile, GameObject character)
    {
        // Check conditions for spawining a command post
        if (!EventSystem.current.IsPointerOverGameObject()
            && activeUnitType != null
            && (tile.is_walkable()))
        {
            GameObject unit = null;

            Vector3 tilePosition = tile.transform.position;

            if (tile.get_buidling() != null 
                && tile.get_buidling().tag == "commandPost")
            {
                // Choose prefab depeding on which civ user choose
                if (civNumber == 0)
                    unit = unit_maker.place_object(activeUnitType.asian.gameObject, tile);
                // Instantiate(activeUnitType.asian, tilePosition, Quaternion.identity);
                else if (civNumber == 1)
                    unit = unit_maker.place_object(activeUnitType.greek.gameObject, tile);
                else
                    unit = unit_maker.place_object(activeUnitType.viking.gameObject, tile);
            }

            activeUnitType = null;
            menu_manager.close_menus();

            if (unit != null)
            {
                unit.tag = "unit";
                unit.name = match_manager.get_local_player().civilization + "_" + unit.name + "_" + counter++;
                unit.GetComponent<PlayerMove>().set_civilization(match_manager.get_local_player().civilization);
                import_manager.run_function_all("Map", "run_on_map_item", new string[4] { tile.get_grid()[0].ToString(), tile.get_grid()[1].ToString(), "set_occupied", unit.name });
            }
        }
    }


    //  Set active building to which ever the user selected
    public void set_active_unit_type(unit_type unit_Type)
    {
        activeUnitType = unit_Type;
    }
}
