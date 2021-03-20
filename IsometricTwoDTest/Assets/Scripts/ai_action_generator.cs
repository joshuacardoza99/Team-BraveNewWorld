using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AI
{
    public class ai_action_generator
    {
        // External Classes //
        match_manager match_manager;
        map_manager map_manager;
        ai_tools tools = new ai_tools();

        // Finds all possible move any unit/champion of the given civilization can perform.
        public List<Action> find_unit_moves(int civilization)
        {
            if (match_manager == null)
            {
                match_manager = GameObject.Find("network_manager").GetComponent<match_manager>();
            }

            if (map_manager == null)
            {
                map_manager = GameObject.Find("Map").GetComponent<map_manager>();
            }

            List<PlayerMove> units = new List<PlayerMove>();
            List<Action> moves = new List<Action>();

            units.Add(match_manager.choose_player(civilization).champion);

            match_manager.choose_player(civilization).units.ForEach((PlayerMove unit) =>
            {
                units.Add(unit);
            });

            units.ForEach((PlayerMove unit) =>
            {
                List<Tile> useableTiles = map_manager.map[unit.get_grid()[0], unit.get_grid()[1]].ground.GetComponent<Tile>().get_walkable_tiles(unit.moveRange);

                useableTiles.ForEach((Tile tile) =>
                {
                    moves.Add(() =>
                    {
                        Debug.Log("Going to move");
                        tools.move_unit(tile, unit, civilization);
                    });
                });
            });

            return moves;
        }

        // Finds all possible buildings a player of the given civilization can build.
        public List<Action> find_new_builds(int civilization)
        {
            if (match_manager == null)
            {
                match_manager = GameObject.Find("network_manager").GetComponent<match_manager>();
            }

            if (map_manager == null)
            {
                map_manager = GameObject.Find("Map").GetComponent<map_manager>();
            }

            List<Action> newBuildsList = new List<Action>();
            PlayerMove champion = match_manager.choose_player(civilization).champion;

            map_manager.map[champion.get_grid()[0], champion.get_grid()[1]].ground.GetComponent<Tile>().get_walkable_tiles(1).ForEach((Tile tile) =>
            {
                newBuildsList.Add(() =>
                {
                    Debug.Log("AI is going to build a building");
                });
            });

            return newBuildsList;
        }

        // Finds all possible moves a player of the given civilization can make.
        public List<Action> find_player_actions(int civilization)
        {
            List<Action> playerActionList = new List<Action>();

            playerActionList.AddRange(find_unit_moves(civilization));
            playerActionList.AddRange(find_new_builds(civilization));

            return playerActionList;
        }
    }
}
