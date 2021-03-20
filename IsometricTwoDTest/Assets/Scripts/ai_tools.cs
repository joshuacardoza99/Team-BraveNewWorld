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

        // Start is called before the first frame update
        void Start()
        {
            
            match_manager = GameObject.Find("network_manager").GetComponent<match_manager>();
        }

        public void join_match(int civilization)
        {
            string championName = "ai_" + civilization;
            if (import_manager == null)
            {
                import_manager = GameObject.Find("network_manager").GetComponent<import_manager>();
            }

            import_manager.run_function_all("network_manager", "add_player", new string[1] { civilization.ToString() });
            import_manager.run_function_all("unit_manager", "add_champion", new string[3] { civilization.ToString(), championName, Random.Range(1000, 2000).ToString() });
        }

        public void move_unit(Tile tile, PlayerMove unit, int civilization)
        {
            Debug.Log("Tying to move in Tools");
            if (!tile.is_occupied() && tile.is_walkable() && (civilization == unit.get_civilization()))
            {
                if (import_manager == null)
                {
                    import_manager = GameObject.Find("network_manager").GetComponent<import_manager>();
                }

                import_manager.run_function_all("Map", "run_on_map_item", new string[3] { unit.get_grid()[0].ToString(), unit.get_grid()[1].ToString(), "set_unoccupied" });

                import_manager.run_function_all(unit.gameObject.name, "move", new string[2] { tile.get_grid()[0].ToString(), tile.get_grid()[1].ToString() });

                import_manager.run_function_all("Map", "run_on_map_item", new string[4] { tile.get_grid()[0].ToString(), tile.get_grid()[1].ToString(), "set_occupied", unit.gameObject.name });
            }
        }
    }
}
