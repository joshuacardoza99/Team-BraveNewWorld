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
                match_manager.buildingTypeList.ForEach((building_type type) =>
                {
                    if (!tile.has_building() && tile.is_walkable() && match_manager.choose_player(civilization).gold >= type.buildCost)
                    {
                        if (type.type == "commandPost" && !tile.is_in_city())
                        {
                            newBuildsList.Add(() =>
                            {
                                tools.build_building(tile, type, civilization);
                            });
                        }
                        else if (type.type != "commandPost" && tile.is_in_city())
                        {
                            newBuildsList.Add(() =>
                            {
                                tools.build_building(tile, type, civilization);
                            });
                        }
                    }
                });
            });

            return newBuildsList;
        }

        // Finds all possible units a player of the given civilization can build.
        public List<Action> find_new_units(int civilization)
        {
            if (match_manager == null)
            {
                match_manager = GameObject.Find("network_manager").GetComponent<match_manager>();
            }

            if (map_manager == null)
            {
                map_manager = GameObject.Find("Map").GetComponent<map_manager>();
            }
            List<Tile> tilesToBuildOn = new List<Tile>();
            List<Action> newUnitsList = new List<Action>();

            match_manager.choose_player(civilization).buildings.ForEach((Building building) =>
            {
                tilesToBuildOn.Add(building.currentTile);

                building.currentTile.get_walkable_tiles(1).ForEach((Tile tile) =>
                {
                    tilesToBuildOn.Add(tile);
                });
            });

            tilesToBuildOn.ForEach((Tile tile) =>
            {
                if (!tile.is_occupied() && tile.is_in_city())
                {
                    match_manager.unitTypeList.ForEach((unit_type type) =>
                    {
                        if (match_manager.choose_player(civilization).food >= type.food)
                        {
                            newUnitsList.Add(() =>
                            {
                                tools.build_units(tile, type, civilization);
                            });
                        }
                    });
                }
            });

            return newUnitsList;
        }

        // Finds all possible moves a player of the given civilization can make.
        public List<Action> find_player_actions(int civilization)
        {
            List<Action> playerActionList = new List<Action>();

            playerActionList.AddRange(find_unit_moves(civilization));
            playerActionList.AddRange(find_new_builds(civilization));
            playerActionList.AddRange(find_new_units(civilization));

            return playerActionList;
        }
    }
}
