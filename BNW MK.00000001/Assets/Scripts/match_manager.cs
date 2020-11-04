using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

// This class facilitates connected to and interacting with a match.
public class match_manager : MonoBehaviour
{
    // External Classes//
    import_manager import_manager;  // Import_Manager Class that facilitates cross class, player, and server function calls.

    // Private Class //

    // This class holds all the match data.
    private class match
    {
        private int     matchId; // Id for the current match.
        private bool    host;    // Determines if the player's computer is hosting the match.
        private string  type;    // Type of game the match consist of.
        private string[] map;    // Holds the topography design for the game's map.

        // Returns the current match's id.
        public int get_id ()
        {
            return this.matchId;
        }

        // Determines if the player's computer is hosting the match.
        public bool is_host ()
        {
            return this.host;
        }

        // Sets the player's computer to host the current match.
        public void set_host ()
        {
            this.host = true;
        }

        // Gets the type of game the match is managing.
        public string get_type ()
        {
            return this.type;
        }

        // Sets the game's map for this match.
        public void set_map(string[] mapDesign)
        {
            this.map = mapDesign;
        }

        // Gets the game's map for this match.
        public string[] get_map()
        {
            return this.map;
        }

        // Constructor function for the match class.
        public match (int id, bool host, string type)
        {
            this.matchId = id;
            this.host    = host;
            this.type    = type;
        }
    }

    // Private Global Variables //
    match      currentMatch;    // The current match object storing the data for the current game.
    int        numberOfPlayers; // The number of current players in the game.
    List<bool> isReady;         // List of players ready to play.

    // Start is called before the first frame update
    void Start()
    {
        import_manager = GameObject.Find("network_manager").GetComponent<import_manager>(); // Connects to the import_manager.
    }

    // this is only for testing purposes before the menu UI is in place.
    void Update()
    {
        // Easter egg to test the nextworking with.
        if (Input.GetKeyDown(KeyCode.Space))
        {
            start_network_game(new string[2] { "ElijahHero", "Asian" });
            import_manager.run_function("map", "load_map", new string[1]{"1500"});
            //import_manager.run_function_all("server_functions", "get_player", new string[2] {"match_manager", "receive_test_data"});
            import_manager.run_function_all("add_character", "add", new string[] {"ground_1_0_1, ninja"});
        }
    }
  
    public void receive_test_data(string[] parameters)
    {
        Debug.Log(parameters[0]);
    }

    // Public Functions //

    // Starts a multiplayer game over the network.
    // parameters = [string name, string civilization]
    public void start_network_game(string[] parameters)
    {
        import_manager.run_function_all("server_functions", "add_player", parameters);
    }

    // Starts a single player game locally.
    // parameters = [string name, string civilization]
    public void start_local_game(string[] parameters)
    {
        currentMatch = new match(0, true, "local");
        import_manager.run_function("Map", "load_map", parameters);
    }

    // Starts a multiplayer game over a private host.
    // parameters = [string name, string civilization]
    public void start_host_game(string[] parameters)
    {

    }

    // Joins a multiplayer game over a private host.
    // parameters = [string name, string civilization, string hostIP]
    public void join_host_game(string[] parameters)
    {

    }

    // Defines the game's map's topography.
    // Parameters = the topography design for the game's map.
    public void set_match_map(string[] parameters)
    {
        currentMatch.set_map(parameters);
    }

    // Sets up the match class data for the current game.
    // parameters = [int id, bool host, string type]
    public void setup_match (string[] parameters)
    {
        Debug.Log(parameters[0]);
        currentMatch = new match(int.Parse(parameters[0]), bool.Parse(parameters[1]), parameters[2]);
        Debug.Log(JsonUtility.ToJson(currentMatch));
    }
    
    // Registers a player as being ready to play.
    public void vote_ready(string[] parameters)
    {
        if (currentMatch.is_host())
        {
            isReady.Add(true);

            if (isReady.Count == numberOfPlayers)
            {
                import_manager.run_function_all("network_manager", "start_match", new string[0]{});
            }
        }
    }

    // Starts the match.
    // Parameters = []
    public void start_match (string[] parameters)
    {
        if (currentMatch.is_host())
        {
           
        }
        else
        {
        }
    }
}
