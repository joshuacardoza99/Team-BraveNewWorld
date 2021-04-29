using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AI
{
    public enum ActionType
    {
        movement,
        build,
        recruit,
        attack,
        capture
    }

    public class ai_action_generator
    {
        // External Classes //
        match_manager match_manager;
        map_manager map_manager;
        ai_tools tools = new ai_tools();

        private List<Action> attackActions = new List<Action>();
        private List<Action> captureActions = new List<Action>();
        private List<Action> buildActions = new List<Action>();
        private List<Action> recruitActions = new List<Action>();
        private List<Action> movementActions = new List<Action>();
        int lastDecisionNumber = 0;

        // Finds all possible move any unit/champion of the given civilization can perform.
        public List<Action> find_unit_moves(int civilization)
        {
            // Ensures the match_manager pagackage is imported befor the function starts.
            if (match_manager == null)
            {
                match_manager = GameObject.Find("network_manager").GetComponent<match_manager>();
            }

            // Ensures the map_manager pagackage is imported befor the function starts.
            if (map_manager == null)
            {
                map_manager = GameObject.Find("Map").GetComponent<map_manager>();
            }

            List<PlayerMove> units = new List<PlayerMove>(); // List of units that can move.
            List<Action> moves = new List<Action>();         // List of move actions.

            units.Add(match_manager.choose_player(civilization).champion); // Adds champion to avaiable units to move.

            // Adds all units an AI player has to the avaible units to move.
            match_manager.choose_player(civilization).units.ForEach((PlayerMove unit) =>
            {
                units.Add(unit);
            });

            units.ForEach((PlayerMove unit) =>
            {
                if (unit != null)
                {
                    List<Tile> useableTiles = map_manager.map[unit.get_grid()[0], unit.get_grid()[1]].ground.GetComponent<Tile>().get_walkable_tiles(unit.moveRange);

                    useableTiles.ForEach((Tile tile) =>
                    {
                        moves.Add(() =>
                        {
                            tools.move_unit(tile, unit, civilization);
                        });
                    });
                }
            });

            return moves;
        }

        // Finds all possible buildings a player of the given civilization can build.
        public List<Action> find_new_builds(int civilization)
        {
            // Ensures the match_manager pagackage is imported befor the function starts.
            if (match_manager == null)
            {
                match_manager = GameObject.Find("network_manager").GetComponent<match_manager>();
            }

            // Ensures the map_manager pagackage is imported befor the function starts.
            if (map_manager == null)
            {
                map_manager = GameObject.Find("Map").GetComponent<map_manager>();
            }

            List<Action> newBuildsList = new List<Action>();   // List of build actions.
            PlayerMove champion = match_manager.choose_player(civilization).champion; // AI player's champion.

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
            // Ensures the match_manager pagackage is imported befor the function starts.
            if (match_manager == null)
            {
                match_manager = GameObject.Find("network_manager").GetComponent<match_manager>();
            }

            // Ensures the map_manager pagackage is imported befor the function starts.
            if (map_manager == null)
            {
                map_manager = GameObject.Find("Map").GetComponent<map_manager>();
            }
            List<Tile> tilesToBuildOn = new List<Tile>();   // List of tiles to put recruits on.
            List<Action> newUnitsList = new List<Action>(); // List of recruit action.

            match_manager.choose_player(civilization).buildings.ForEach((Building building) =>
            {
                if (building != null && building.gameObject.tag == "commandPost")
                {
                    tilesToBuildOn.Add(building.currentTile);

                    building.currentTile.get_walkable_tiles(1).ForEach((Tile tile) =>
                    {
                        tilesToBuildOn.Add(tile);
                    });
                }
            });

            tilesToBuildOn.ForEach((Tile tile) =>
            {
                if (!tile.is_occupied() && tile.is_in_city())
                {
                    match_manager.unitTypeList.ForEach((unit_type type) =>
                    {
                        if (((int)type.unitType) != 0 && match_manager.choose_player(civilization).food >= type.food)
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

        // Finds all possible attacks all the units of the given civilization can execute.
        public List<Action> find_unit_attacks(int civilization)
        {
            // Ensures the match_manager pagackage is imported befor the function starts.
            if (match_manager == null)
            {
                match_manager = GameObject.Find("network_manager").GetComponent<match_manager>();
            }

            // Ensures the map_manager pagackage is imported befor the function starts.
            if (map_manager == null)
            {
                map_manager = GameObject.Find("Map").GetComponent<map_manager>();
            }

            List<PlayerMove> units = new List<PlayerMove>(); // List of units that can attack.
            List<Action> attacks = new List<Action>();         // List of attack actions.

            units.Add(match_manager.choose_player(civilization).champion); // Adds champion to avaiable units to attack.

            // Adds all units an AI player has to the avaible units to attack.
            match_manager.choose_player(civilization).units.ForEach((PlayerMove unit) =>
            {
                units.Add(unit);
            });

            units.ForEach((PlayerMove unit) =>
            {
                if (unit != null)
                {
                    List<Tile> useableTiles = map_manager.map[unit.get_grid()[0], unit.get_grid()[1]].ground.GetComponent<Tile>().get_walkable_tiles(unit.attackRange);

                    useableTiles.ForEach((Tile tile) =>
                    {
                        if (tile.is_occupied() && tile.get_current_character().GetComponent<PlayerMove>().get_civilization() != civilization)
                        {
                            attacks.Add(() =>
                            {
                                tools.attack_unit(tile.get_current_character().GetComponent<PlayerMove>(), unit);
                            });
                        }
                    });
                }
            });

            return attacks;
        }

        // Finds all possible moves a player of the given civilization can make.
        public List<Action> find_player_actions(int civilization)
        {
            List<Action> playerActionList = new List<Action>(); // List of all possible actions the given civilization can make.

            playerActionList.AddRange(find_unit_attacks(civilization));
            playerActionList.AddRange(find_unit_moves  (civilization));
            playerActionList.AddRange(find_new_builds  (civilization));
            playerActionList.AddRange(find_new_units   (civilization));

            return playerActionList;
        }
       
        // Gets the all available actions of a given type
        public List<Action> get_actions(ActionType type, int civilization, int decisionNumber)
        {
            List<Action> actions =  new List<Action>();

            switch (type)
            {
                case ActionType.movement:
                    if (movementActions.Count < 0 || lastDecisionNumber != decisionNumber)
                    {
                        movementActions = find_unit_moves(civilization);
                    }
                    actions = movementActions;
                    break;
                case ActionType.build:
                    if (buildActions.Count < 0 || lastDecisionNumber != decisionNumber)
                    {
                        buildActions = find_new_builds(civilization);
                    }
                    actions = buildActions;
                    break;
                case ActionType.recruit:
                    if (recruitActions.Count < 0 || lastDecisionNumber != decisionNumber)
                    {
                        recruitActions = find_new_units(civilization);
                    }
                    actions = recruitActions;
                    break;
                case ActionType.attack:
                    if (attackActions.Count < 0 || lastDecisionNumber != decisionNumber)
                    {
                        attackActions = find_unit_attacks(civilization);
                    }
                    actions = attackActions;
                    break;
                case ActionType.capture:
                    break;

            }

            return actions;
        }
    }
}
