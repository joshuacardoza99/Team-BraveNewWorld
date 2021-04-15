using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.EventSystems;
using System.Text.RegularExpressions;
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
            PlayerMove unit;

            if (champion.gameObject.name == name)
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
    private bool isHost;                            // Determines if the player's computer is hosting the match.
    private string type;                              // Type of game the match consist of.
    private int map;                               // Holds the seed for the map design for the game's map.
    public string championName = "  ";
    [SerializeField] private Player asianPlayer;
    [SerializeField] private Player greekPlayer;
    [SerializeField] private Player vikingPlayer;
    private int    localPlayer;
    private List<ai_thought_process> aiList = new List<ai_thought_process>();
    public List<building_type> buildingTypeList; // List of SO, connects any building type being scripted
    public List<unit_type> unitTypeList; // List of SO, connects any unit type being scripted
    public GameObject cloudBackground; 

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
        //Debug.Log("Choosing the player from " + civilization);

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
        int numberOfCurrentPlayers = 0;

        if (asianPlayer != null)
        {
            numberOfCurrentPlayers++;
        }
        else if (greekPlayer != null)
        {
            numberOfCurrentPlayers++;
        }
        else if (vikingPlayer != null)
        {
            numberOfCurrentPlayers++;
        }

        return numberOfCurrentPlayers == 1;
    }

    // Adds the player's data to the current match.
    // Paramater = [int civilization]
    public void add_player(string[] parameter)
    {
        int civilization = int.Parse(parameter[0]);
        Debug.Log("Adding Player " + civilization);

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
    public void update_player_champion (string[] parameters)
    {
        choose_player(int.Parse(parameters[0])).champion = GameObject.Find(parameters[1]).GetComponent<PlayerMove>();
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
        string unitName     = parameters[1];

        if (chosenPlayer.champion != null && chosenPlayer.champion.gameObject.name == unitName)
        {
            chosenPlayer.champion = null;
        }
        else
        {
            chosenPlayer.units = chosenPlayer.units.FindAll(unit => unit.gameObject.name != unitName);
        }

        check_end_conditions();
    }

    // Updates the health of a unit/champion.
    // Parameters = [int civilization, string (unit/champion)Name, int removeHealthAmount]
    public void update_unit_health(string[] parameters)
    {
        choose_player(int.Parse(parameters[0])).get_unit(parameters[1]).update_health(int.Parse(parameters[2]));
    }

    // Controls the conditions for the player leaving the game.
    public void check_end_conditions()
    {
        if (get_local_player().champion == null)
        {
            menu_manager.end_screen("Lose");
            //SceneManager.LoadScene("Main");
        }
        else if (is_last_player())
        {
            menu_manager.end_screen("Win");
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
        if (asianPlayer == null)
        {
            add_ai(0);
        }

        if (greekPlayer == null)
        {
            add_ai(1);
        }

        if (vikingPlayer == null)
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
        import_manager.run_function_all("network_manager", "add_player", new string[1] { get_local_player().civilization.ToString() });
        import_manager.run_function_all("network_manager", "vote_ready", new string[0] { });
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
    public void vote_ready(string[] parameters)
    {
        if (this.isHost)
        {
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
        yield return new WaitForSeconds(30);

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
            import_manager.run_function_all("server_functions", "add_player", new string[2] { this.championName, get_local_player().civilization.ToString() });
            GameObject.Find("Main Camera").GetComponent<pan_zoom>().enabled = true;
        }
        else if (this.type == "local")
        {
            setup_match(new string[3] { "0", "true", "1000" });
            GameObject.Find("Main Camera").GetComponent<pan_zoom>().enabled = true;
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

        civ_resources_display.update_resources();
        
        import_manager.run_function_all("unit_manager", "add_champion", new string[2] { get_local_player().civilization.ToString(), UnityEngine.Random.Range(1000, 2000).ToString() });

        Instantiate(cloudBackground, new Vector3(-5.58f, -16.78f, 0), Quaternion.Euler(new Vector3(0, 0, -5.1f)));
        Instantiate(cloudBackground, new Vector3(-13.6f, -107.2f, 0), Quaternion.Euler(new Vector3(0, 0, -5.1f)));

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
