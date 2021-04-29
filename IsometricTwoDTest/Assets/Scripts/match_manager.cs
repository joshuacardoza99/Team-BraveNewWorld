﻿using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.EventSystems;
using System.Text.RegularExpressions;
using AI;
using AI;

// This class facilitates connected to and interacting with a match.
public class match_manager : MonoBehaviour
{
    // External Classes//
    import_manager import_manager;  // Import_Manager Class that facilitates cross class, player, and server function calls.
    change_scene change_scene;
    ai_tools tools = new ai_tools();
    civ_resources_display civ_resources_display;
    menu_manager menu_manager;

    // Private Custom Classes //

    // The Player class will hold all the game relevant information for a player.
    public class Player
    {
        public int civilization = 0;
        public PlayerMove champion;      
        public List<PlayerMove> units = new List<PlayerMove>();
        public List<Building> buildings = new List<Building>();
        public int food = 2000;
        public int gold = 2000;

        // Finds the unit/champion from the name.
        public PlayerMove get_unit (string name)
        {
            PlayerMove unit = null;

            if (champion != null && champion.gameObject.name == name)
            {
                unit = champion;
            }
            else
            {
                unit = units.FindAll(nextUnit => nextUnit.gameObject.name == name)[0];
            }

            return unit;
        }

        public Player(int newCivilization)
        {
            civilization = newCivilization;
        }

        public Player(int newCivilization, PlayerMove newChampion)
        {
            civilization = newCivilization;
            champion = newChampion;
        }
    }

    // Private Global Variables //
    private int matchId;                           // Id for the current match.
    public bool isHost;                            // Determines if the player's computer is hosting the match.
    private string type;                              // Type of game the match consist of.
    private int map;                               // Holds the seed for the map design for the game's map.
    public string championName = "  ";
    [SerializeField] private Player asianPlayer;
    [SerializeField] private Player greekPlayer;
    [SerializeField] private Player vikingPlayer;
    private bool asianIsTaken = false;
    private bool greekIsTaken = false;
    private bool vikingIsTaken = false;
    public int    localPlayer;
    private List<ai_thought_process> aiList = new List<ai_thought_process>();
    public List<building_type> buildingTypeList; // List of SO, connects any building type being scripted
    public List<unit_type> unitTypeList; // List of SO, connects any unit type being scripted

    // Private Global Variables //
    private int numberOfPlayers = 1000; // The number of current players in the game.
    List<bool> isReady;                 // List of players ready to play.
    private bool isPlaying = false;

    // Start is called before the first frame update
    void Start()
    {
        import_manager = GameObject.Find("network_manager").GetComponent<import_manager>(); // Connects to the import_manager.
        change_scene = GameObject.Find("Canvas").GetComponentInChildren<change_scene>();
        civ_resources_display = GameObject.Find("civManager").GetComponent<civ_resources_display>();
        menu_manager = GameObject.Find("MenuManager").GetComponent<menu_manager>();
    }

    // Parameter = [int matchId]
    public void set_id(string[] parameters)
    {
        this.matchId = int.Parse(parameters[0]);
    }

    // Sets the player's computer to host the current match.
    // Parameters = []
    public void set_host(string[] parameters)
    {
        this.isHost = true;
    }

    // Gets the type of game the match is managing.
    public string get_type()
    {
        return this.type;
    }

    // Sets the game's map for this match.
    // Parameters = [int mapSeed]
    public void set_map(string[] parameters)
    {
        this.map = int.Parse(parameters[0]);
    }

    // Starts a multiplayer game over the network.
    public void set_network_game()
    {
        this.type = "network";
    }

    // Starts a single player game locally.
    public void set_local_game()
    {
        this.type = "local";
    }

    // Starts a multiplayer game over a private host.
    public void set_host_game()
    {
        this.type = "host";
    }

    // Choses the correct player from a civilizaiton.
    public Player choose_player (int civilization)
    {
        Player chosenPlayer = null;

        switch (civilization)
        {
            case 0:
                chosenPlayer = asianPlayer;
                break;
            case 1:
                chosenPlayer = greekPlayer;
                break;
            case 2:
                chosenPlayer = vikingPlayer;
                break;
        }

        return chosenPlayer;
    }

    // Is last player.
    public bool is_last_player()
    {
        int numberOfActivePlayers = 0;

        if (asianPlayer.champion != null)
        {
            numberOfActivePlayers++;
        }

        if (greekPlayer.champion != null)
        {
            numberOfActivePlayers++;
        }

        if (vikingPlayer.champion != null)
        {
            numberOfActivePlayers++;
        }

        return numberOfActivePlayers <= 1;
    }

    // Destroy every thing a civilization has.
    // Parameters = [int civilization]
    public void destroy_civilization (string[] parameters)
    {
        Player player = choose_player(int.Parse(parameters[0]));

        aiList.ForEach((ai_thought_process ai) =>
        {
            if (ai.get_civilization() == player.civilization)
            {
                ai.stop();
            }
        });

        if (player.champion != null)
        {
            Destroy(player.champion.gameObject);
            player.champion = null;
        }

        player.units.ForEach((PlayerMove unit) =>
        {
            Destroy(unit.gameObject);
        });
        player.units = new List<PlayerMove>();

        player.buildings.ForEach((Building building) =>
        {
            Destroy(building.gameObject);
        });
        player.buildings = new List<Building>();

        player.food = 0;
        player.gold = 0;
    }

    // Adds the player's data to the current match.
    // Paramater = [int civilization]
    public void add_player(string[] parameter)
    {
        int civilization = int.Parse(parameter[0]);

        switch (civilization)
        {
            case 0:
                asianPlayer = new Player(civilization);
                break;
            case 1:
                greekPlayer = new Player(civilization);
                break;
            case 2:
                vikingPlayer = new Player(civilization);
                break;
        }

    }

    // Update a player's champion.
    // Parameter = [int civilizaiton, string championName]
    public void update_player_champion (int civilization, GameObject champion)
    {
        choose_player(civilization).champion = champion.GetComponent<PlayerMove>();
    }

    // Subtract a player's resources over the network
    // Parameters = [int foodAmount, int goldAmount, int civilization]
    public void subtract_player_resources(string[] parameters)
    {
        Player player = choose_player(int.Parse(parameters[2]));

        player.food -= int.Parse(parameters[0]);
        player.gold -= int.Parse(parameters[1]);

        if (player.civilization == localPlayer)
        {
            civ_resources_display.update_resources();
        }
    }

    // Removes the given unit/champion from the given player.
    // Parameter = [int civilizaiton, string (unit/champion)Name]
    public void remove_player_unit(string[] parameters)
    {
        Player chosenPlayer = choose_player(int.Parse(parameters[0]));
        string unitName = parameters[1];
        PlayerMove unit = chosenPlayer.get_unit(unitName);

        if (chosenPlayer.champion != null && chosenPlayer.champion.gameObject.name == unitName)
        {
            chosenPlayer.champion = null;
        }
        else
        {
            chosenPlayer.units.Remove(unit);
        }

        
        Destroy(unit.gameObject);

        check_end_conditions();
    }

    // Updates the health of a unit/champion.
    // Parameters = [int civilization, string (unit/champion)Name, int removeHealthAmount]
    public void update_unit_health(string[] parameters)
    {
        choose_player(int.Parse(parameters[0])).get_unit(parameters[1]).update_health(int.Parse(parameters[2]));
    }

    // Play pop up animations
    // Parameters = [int civilization, string (unit/champion)Name, string damageToRemove]
    public void update_popUp(string[] parameters)
    {
        choose_player(int.Parse(parameters[0])).get_unit(parameters[1]).play_damage_popup(parameters[2]);
    }
    
    // Play punch animations
    // Parameters = [int civilization, string (unit/champion)Name, int removeHealthAmount]
    public void update_punch_anim(string[] parameters)
    {
        choose_player(int.Parse(parameters[0])).get_unit(parameters[1]).play_punch();
    }

    // Play receive hit animations
    // Parameters = [int civilization, string (unit/champion)Name, int removeHealthAmount]
    public void update_receive_hit_anim(string[] parameters)
    {
        choose_player(int.Parse(parameters[0])).get_unit(parameters[1]).play_recieve_hit();
    }


    // Controls the conditions for the player leaving the game.
    public void check_end_conditions()
    {
        if (get_local_player().champion == null)
        {
           import_manager.run_function_all("network_manager", "destroy_civilization", new string[1] { get_local_player().civilization.ToString() });
           menu_manager.end_screen("Lose");
        }
        else if (is_last_player())
        {
            menu_manager.end_screen("Win");
        }
        else if (this.type == "local")
        {
            if (asianPlayer.champion == null)
            {
                import_manager.run_function_all("network_manager", "destroy_civilization", new string[1] { "0" });
            }
            else if (greekPlayer.champion == null)
            {
                import_manager.run_function_all("network_manager", "destroy_civilization", new string[1] { "1" });
            }
            else if (vikingPlayer.champion == null)
            {
                import_manager.run_function_all("network_manager", "destroy_civilization", new string[1] { "2" });
            }
        }
    }

    // Runs the given function with each player being passed in.
    public void for_each_player(Action<Player> runWith)
    {
        runWith(asianPlayer);
        runWith(greekPlayer);
        runWith(vikingPlayer);
    }

    // Sets the local player.
    // Parameter = [int civilization]
    public void set_local_player(string[] parameter)
    {
        int civilization = int.Parse(parameter[0]);
        add_player(parameter);

        localPlayer = civilization;
    }

    // Gets the local player.
    public Player get_local_player()
    {
        return choose_player(localPlayer);
    }

    // Defines the game's map's topography.
    // Parameters = the topography design for the game's map.
    public void set_match_map(string[] parameters)
    {
        set_map(parameters);
    }

    // Sets the number of players that their will be in this match.
    // Parameter = [int numberOfPlayers]
    public void set_numberOfPlayers(string[] parameters)
    {
        this.numberOfPlayers = int.Parse(parameters[0]);
    }

    // Adds all the needed AI's to the current match.
    public void add_all_ai()
    {
        if (!asianIsTaken)
        {
            add_ai(0);
        }

        if (!greekIsTaken)
        {
            add_ai(1);
        }

        if (!vikingIsTaken)
        {
            add_ai(2);
        }
    }

    // Adds an AI to the current match.
    public void add_ai(int civilization)
    {
        aiList.Add(Instantiate((GameObject)Resources.Load("AI/AI"), new Vector3(0, 0, 0), Quaternion.Euler(new Vector3(0, 0, 0))).GetComponent<ai_thought_process>());
        aiList[aiList.Count - 1].set_civilization(civilization);
    }

    // Starts the AI playing in the match.
    public void start_ai()
    {
        foreach (ai_thought_process ai in aiList)
        {
            ai.start_ai();
        }
    }

    // Sets up the match class data for the current game.
    // parameters = [int id, bool host, int map]
    public void setup_match(string[] parameters)
    {
        this.matchId = int.Parse(parameters[0]);
        this.isHost = bool.Parse(parameters[1]);

        if (this.isHost)
        {
            isReady = new List<bool>();
            this.map = UnityEngine.Random.Range(1000, 2000);

            // Add the map seed to the database.

            import_manager.run_function_all("server_functions", "set_match_map", new string[1] { this.map.ToString() });
        }
        else
        {
            this.map = int.Parse(parameters[2]);
        }

        import_manager.run_function("Map", "load_map", new string[1] { this.map.ToString() });
        import_manager.run_function_all("network_manager", "vote_ready", new string[1] { localPlayer.ToString() });
    }

    // Sets up the match class data for the current game.
    // parameters = [int id, bool host, int map]
    public void resume_match(string[] parameters)
    {
        this.matchId = int.Parse(parameters[0]);
        this.isHost = bool.Parse(parameters[1]);
        this.map = int.Parse(parameters[2]);

        //GameObject.Find("Main Camera").GetComponent<pan_zoom>().enabled = true;
        import_manager.run_function("Map", "load_map", new string[1] { this.map.ToString() });
        import_manager.run_function_all("unit_manager", "add_champion", new string[2] { get_local_player().civilization.ToString(), UnityEngine.Random.Range(1000, 2000).ToString() });
        import_manager.run_function("MenuManager", "removeWaitPanel", new string[0] { });
        //import_manager.run_function_all("server_function", "get_characters", new string[2]{"network_manager", "load_characters"});
    }

    // Loads the characters for resuming the match.
    // Parameters = [json characters]
    /* public void load_characters (string[] parameters)
     {
          var message = JsonUtility.FromJson<update_message>(System.Text.Encoding.UTF8.GetString(bytes));

     }*/

    // Registers a player as being ready to play.
    // Parameters = [int civilization]
    public void vote_ready(string[] parameters)
    {
        if (this.isHost)
        {
            int civilization = int.Parse(parameters[0]);

            if (civilization == 0)
            {
                asianIsTaken = true;
            }
            else if (civilization == 1)
            {
                greekIsTaken = true;
            }
            else if (civilization == 2)
            {
                vikingIsTaken = true;
            }

            isReady.Add(true);

            if ((isReady.Count == this.numberOfPlayers) || this.type != "network")
            {
                import_manager.run_function_all("network_manager", "start_playing", new string[0] { });
            }
            else if ((isReady.Count != this.numberOfPlayers) && this.type == "network")
            {
                StartCoroutine(handles_no_one_joining());
            }
        }
    }

    IEnumerator handles_no_one_joining()
    {
        yield return new WaitForSeconds(menu_manager.secondsTillStart);

        if (isReady.Count < this.numberOfPlayers)
        {
            add_all_ai();
            start_ai();
        }
    }

    // Starts the match.
    public void start_match()
    {
        if (this.type == "network")
        {
            import_manager.run_function_all("server_functions", "add_player", new string[2] { this.championName, localPlayer.ToString() });
        }
        else if (this.type == "local")
        {
            setup_match(new string[3] { "0", "true", "1000" });
        }

    }

    // Lets everyone begin playing the game
    // Parameters = []
    public void start_playing(string[] parameters)
    {
        if (this.type == "local")
        {
            add_all_ai();
            start_ai();
        }

        import_manager.run_function_all("network_manager", "add_player", new string[1] { localPlayer.ToString() });

        civ_resources_display.update_resources();
        
        import_manager.run_function_all("unit_manager", "add_champion", new string[2] { get_local_player().civilization.ToString(), UnityEngine.Random.Range(1000, 2000).ToString() });
        import_manager.run_function("MenuManager", "removeWaitPanel", new string[0] { });

        isPlaying = true;
    }

    // Leave the match
    public void leave_match()
    {
        this.matchId = 0;
        this.isHost = false;
        this.type = null;
        this.map = 0;
        this.championName = "startName";
        this.numberOfPlayers = 1000;
        this.isReady = null;

        import_manager.run_function("Map", "remove_map", new string[0] { });
        import_manager.run_function("unit_manager", "remove_all_units", new string[0] { });
        import_manager.run_function("network_manager", "reset", new string[0] { });
    }

    public bool game_status()
    {
        return isPlaying;
    }
}
