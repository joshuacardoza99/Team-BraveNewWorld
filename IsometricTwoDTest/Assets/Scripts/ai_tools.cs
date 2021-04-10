using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AI
{
    public class ai_tools
    {
        // External Classes //
        import_manager import_manager;
        match_manager match_manager;
        preview_object preview_object;

        // Start is called before the first frame update
        void Start()
        {
            import_manager = GameObject.Find("network_manager").GetComponent<import_manager>();
            match_manager = GameObject.Find("network_manager").GetComponent<match_manager>();
            preview_object = GameObject.Find("preview_object").GetComponent<preview_object>();
        }

        // Adds an AI to the game.
        public void join_match(int civilization)
        {
            string championName = "ai_" + civilization;
            if (import_manager == null)
            {
                import_manager = GameObject.Find("network_manager").GetComponent<import_manager>();
            }

            if (match_manager == null)
            {
                match_manager = GameObject.Find("network_manager").GetComponent<match_manager>();
            }

            import_manager.run_function_all("network_manager", "add_player", new string[1] { civilization.ToString() });
            import_manager.run_function_all("unit_manager", "add_champion", new string[2] { civilization.ToString(), Random.Range(1000, 2000).ToString() });
            
            if (match_manager.get_type() == "network")
            {
                import_manager.run_function_all("network_manager", "vote_ready", new string[0] { });
            }
        }

        // Moves the units for the AI.
        public void move_unit(Tile tile, PlayerMove unit, int civilization)
        {
            if (!tile.is_occupied() && tile.is_walkable() && (civilization == unit.get_civilization()))
            {
                // Ensures the import_manager pagackage is imported befor the function starts.
                if (import_manager == null)
                {
                    import_manager = GameObject.Find("network_manager").GetComponent<import_manager>();
                }

                import_manager.run_function_all("Map", "run_on_map_item", new string[3] { unit.get_grid()[0].ToString(), unit.get_grid()[1].ToString(), "set_unoccupied" });

                import_manager.run_function_all(unit.gameObject.name, "move", new string[2] { tile.get_grid()[0].ToString(), tile.get_grid()[1].ToString() });

                import_manager.run_function_all("Map", "run_on_map_item", new string[4] { tile.get_grid()[0].ToString(), tile.get_grid()[1].ToString(), "set_occupied", unit.gameObject.name });
            }
        }

        // Builds buildings for the AI.
        public void build_building(Tile tile, building_type type, int civilization)
        {
            GameObject building = null;  // Building to be built.

            // Ensures the match_manager pagackage is imported befor the function starts.
            if (match_manager == null)
            {
                match_manager = GameObject.Find("network_manager").GetComponent<match_manager>();
            }

            // Ensures the import_manager pagackage is imported befor the function starts.
            if (import_manager == null)
            {
                import_manager = GameObject.Find("network_manager").GetComponent<import_manager>();
            }

            if (!tile.has_building() && tile.is_walkable() && match_manager.choose_player(civilization).gold >= type.buildCost)
            {
                if (type.unitType == 0 && !tile.is_in_city())
                {
                    import_manager.run_function_all("preview_object", "build_building", new string[4] { type.get_building_of_civilization(civilization).name, tile.get_grid()[0].ToString(), tile.get_grid()[1].ToString(), civilization.ToString() });
                    building     = tile.get_buidling();
                    building.tag = "commandPost";

                    if (building.GetComponent<City>() == null)
                    {
                        building.AddComponent<City>();
                    }
                }
                else if (type.unitType != 0 && tile.is_in_city())
                {
                    import_manager.run_function_all("preview_object", "build_building", new string[4] { type.get_building_of_civilization(civilization).name, tile.get_grid()[0].ToString(), tile.get_grid()[1].ToString(), civilization.ToString() });
                    building = tile.get_buidling();

                    if (building.name == "farm(Clone)")
                    {
                        building.tag = "Farm";
                    }
                    else if (building.name == "mine(Clone)")
                    {
                        building.tag = "Mine";
                    }
                }

                if (building != null)
                {
                    if (building.GetComponent<Building>() == null)
                    {
                        building.AddComponent<Building>();
                    }

                    building.AddComponent<BoxCollider>();
                    building.GetComponent<Building>().building_type = match_manager.buildingTypeList[((int)type.unitType)];
                    building.GetComponent<Building>().set_current_tile(tile);
                    type.print_message();
                }

            }

            
        }

        // Builds new units for the AI.
        public void build_units(Tile tile, unit_type type, int civilization)
        {
            // Ensures the match_manager pagackage is imported befor the function starts.
            if (match_manager == null)
            {
                match_manager = GameObject.Find("network_manager").GetComponent<match_manager>();
            }

            // Ensures the import_manager pagackage is imported befor the function starts.
            if (import_manager == null)
            {
                import_manager = GameObject.Find("network_manager").GetComponent<import_manager>();
            }

            if (!tile.is_occupied() && tile.is_walkable() && tile.is_in_city() && match_manager.choose_player(civilization).food >= type.food)
            {
                import_manager.run_function_all("network_manager", "subtract_player_resources", new string[3] { type.food.ToString(), "0", match_manager.choose_player(civilization).civilization.ToString() });
                import_manager.run_function_all("unit_manager", "add_unit", new string[5] { tile.get_grid()[0].ToString(), tile.get_grid()[1].ToString(), type.get_unit_of_civilization(civilization).gameObject.name, match_manager.choose_player(civilization).civilization.ToString(), ((int)type.unitType).ToString() });
            }
        }

        public void attack_unit(Tile tile, int damage, int civilization)
        {

        }
    }
}
