using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

// This class facilitates connected to and interacting with a match.
public class match_manager : MonoBehaviour
{
    // External Classes//
    import_manager import_manager;  // Import_Manager Class that facilitates cross class, player, and server function calls.

    private int    matchId;            // Id for the current match.
    private bool    isHost;            // Determines if the player's computer is hosting the match.
    private string    type;            // Type of game the match consist of.
    private int        map;            // Holds the seed for the map design for the game's map.
    private string playerCivilization; // The civilization the local player is playing as in this match.
    private string championName = "start_name";       // The name of the players champion.
        
    // Private Global Variables //
    int        numberOfPlayers = 1000; // The number of current players in the game.
    List<bool> isReady;                // List of players ready to play.

    // Start is called before the first frame update
    void Start()
    {
        import_manager = GameObject.Find("network_manager").GetComponent<import_manager>(); // Connects to the import_manager.
    }
  
    public void receive_test_data(string[] parameters)
    {
        Debug.Log(parameters[0]);
    }

    // Public Functions //

    // Parameter = [int matchId]
    public void set_id (string[] parameters)
    {
        this.matchId = int.Parse(parameters[0]);
    }

    // Sets the player's computer to host the current match.
    // Parameters = []
    public void set_host (string[] parameters)
    {
        this.isHost = true;
    }

    // Gets the type of game the match is managing.
    // Parameters = []
    public string get_type (string[] parameters)
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
        //import_manager.run_function_all("server_functions", "add_player", new string[0]{});
    }

    // Starts a single player game locally.
    public void set_local_game()
    {
        this.type = "local";
        //currentMatch = new match(0, true, "local");
       // import_manager.run_function("Map", "load_map", parameters);
    }

    // Starts a multiplayer game over a private host.
    public void set_host_game()
    {
        this.type = "host";
        isReady = new List<bool>();
    }

    // Gets the civilization of the local player.
    // Parameter = [string gameObject, string function]
    public void get_player_civilization (string[] parameters)
    {
        import_manager.run_function(parameters[0], parameters[1], new string[1] {this.playerCivilization});
    }

    // Sets the civilization of the local player.
    // Parameter = [string civilization]
    public void set_player_civilization (string[] parameters)
    {
        this.playerCivilization = parameters[0];
    }

    // Defines the game's map's topography.
    // Parameters = the topography design for the game's map.
    public void set_match_map(string[] parameters)
    {
        //currentMatch.set_map(parameters);
    }

    // Sets the number of players that their will be in this match.
    // Parameter = [int numberOfPlayers]
    public void set_numberOfPlayers (string[] parameters)
    {
        this.numberOfPlayers = int.Parse(parameters[0]);
    }

    // Sets up the match class data for the current game.
    // parameters = [int id, bool host, int map]
    public void setup_match (string[] parameters)
    {
        Debug.Log("Setup_match is started");
        Debug.Log(parameters[0]);
        this.matchId = int.Parse(parameters[0]);
        this.isHost  = bool.Parse(parameters[1]);

        if (this.isHost)
        {
            isReady = new List<bool>();
            this.map = Random.Range(1000, 2000);
            import_manager.run_function_all("server_functions", "set_match_map", new string[1] {this.map.ToString()});
        }
        else
        {
            this.map     = int.Parse(parameters[2]);
        }
        import_manager.run_function("map", "load_map", new string[1] {this.map.ToString()});
        import_manager.run_function_all("network_manager", "vote_ready", new string[0] {});
    }
    
    // Registers a player as being ready to play.
    public void vote_ready(string[] parameters)
    {
        if (isHost)
        {
            isReady.Add(true);

            if ((isReady.Count == numberOfPlayers) || true)
            {
                GameObject.Find("Main Camera").GetComponent<PanZoom>().enabled = true;
                import_manager.run_function_all("MenuManager", "removeWaitPanel", new string[0] {});
            }
        }
    }

    // Starts the match.
    public void start_match ()
    {
        if (this.type == "network")
        {
            import_manager.run_function_all("server_functions", "add_player", new string[2]{this.championName, this.playerCivilization});
        }
        
    }

    // Leave the match
    public void leave_match ()
    {
        import_manager.run_function("network_manager", "reset", new string[0] {});
    }
}
