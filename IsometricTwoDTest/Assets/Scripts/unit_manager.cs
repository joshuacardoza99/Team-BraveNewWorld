﻿using System.Collections;
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
    map_manager map_manager;

    // Public Global Variables //
    public int civNumber;
    public int counter = 0;
    public List<Tile> previewUnits = new List<Tile>();                // Liat of preview made on tiles

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
        map_manager = GameObject.Find("Map").GetComponent<map_manager>(); // Connects to the map_manager.
    }

    // This runs when the character is enabled.
    void OnEnable()
    {
        Tile.OnSelected += handle_add_unit;
    }

    // This runs when the tile is disabled.
    void OnDisable()
    {
        Tile.OnSelected -= handle_add_unit;
    }

    // Handles the add units on selected action.
    void handle_add_unit(Tile tile, GameObject unusedCharacter)
    {
       // preview_units();


        // Check conditions for spawining a command post
        if (!EventSystem.current.IsPointerOverGameObject()
            && activeUnitType != null
            && (tile.is_walkable())
            && tile.is_in_city())
        {
            GameObject unitToCreate = null;

            switch (match_manager.get_local_player().civilization)
            {
                case 0:
                    unitToCreate = activeUnitType.asian.gameObject;
                    break;
                case 1:
                    unitToCreate = activeUnitType.greek.gameObject;
                    break;
                case 2:
                    unitToCreate = activeUnitType.viking.gameObject;
                    break;
            }

            

            if (match_manager.get_local_player().food >= activeUnitType.food)
            {
                import_manager.run_function_all("network_manager", "subtract_player_resources", new string[3] { activeUnitType.food.ToString(), "0", match_manager.get_local_player().civilization.ToString()});
                import_manager.run_function_all("unit_manager", "add_unit", new string[5] { tile.get_grid()[0].ToString(), tile.get_grid()[1].ToString(), unitToCreate.gameObject.name, match_manager.get_local_player().civilization.ToString(), ((int) activeUnitType.unitType).ToString() });
            }

            activeUnitType = null;
            menu_manager.close_menus();
            empty_preview_list();
        }
        else
            empty_preview_list();

    }

    // Update is called once per frame
    // Parameter = [int tileXPosition, int tileYPosition, string prefabName, int civilization, int unitType]
    void add_unit(string[] parameter)
    {
        Tile tile = map_manager.map[int.Parse(parameter[0]), int.Parse(parameter[1])].ground.GetComponent<Tile>();

        GameObject unit = (GameObject)Resources.Load("Units/" + parameter[2]);
        unit = unit_maker.place_object(unit, int.Parse(parameter[4]), tile);

        if (unit != null)
        {
            unit.tag = "unit";
            unit.name = parameter[3] + "_" + unit.name + "_" + counter++;
            unit.GetComponent<PlayerMove>().set_civilization(int.Parse(parameter[3]));
            tile.set_occupied(new string[1] { unit.name });
            match_manager.choose_player(int.Parse(parameter[3])).units.Add(unit.GetComponent<PlayerMove>());
        }
    }


    //  Set active building to which ever the user selected
    public void set_active_unit_type(unit_type unit_Type)
    {
        activeUnitType = unit_Type;
    }

    //  Set active building to which ever the user selected
    public void remove_active_unit_type()
    {
        activeUnitType = null;
    }

    public void preview_units()
    {
        foreach (Building commandPost in match_manager.get_local_player().buildings)
        {
            if (((int)commandPost.building_type.unitType) == 0)
                foreach (Tile preview in commandPost.GetComponent<Building>().currentTile.get_walkable_tiles(1))
                {
                    if (!preview.is_occupied())
                    {
                        previewUnits.Add(preview);
                        preview.GetComponent<Renderer>().material = map_manager.types.recruit;
                    }
                }
        }
    }

    public void empty_preview_list()
    {
        foreach (Tile clear in previewUnits)
            clear.GetComponent<Renderer>().material = map_manager.types.get_material(match_manager.get_local_player().civilization);
        previewUnits.Clear();
    }


}
