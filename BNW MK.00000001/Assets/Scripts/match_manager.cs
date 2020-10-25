using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.Windows.WebCam;

// This class facilitates connected to and interacting with a match.
public class match_manager : MonoBehaviour
{
    // External Classes//
    import_manager import_manager;  // Import_Manager Class that facilitates cross class, player, and server function calls.

    // Private Class //

    // This class holds all the match data.
    private class match
    {
        public int    matchId; // Id for the current match.
        public bool   host;    // Determines if the player's computer is hosting the match.
        public string type;    // Type of game the match consist of.

        // Returns the current match's id.
        public int getId ()
        {
            return this.matchId;
        }

        // Determines if the player's computer is hosting the match.
        public bool isHost ()
        {
            return this.host;
        }

        // Sets the player's computer to host the current match.
        public void setHost ()
        {
            this.host = true;
        }

        // Gets the type of game the match is managing.
        public string getType ()
        {
            return this.type;
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
    match currentMatch; // The current match object storing the data for the current game.

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
           // import_manager.run_function_all("server_functions", "get_player", new string[2] {"match_manager", "receive_test_data"});
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

    // Sets up the match class data for the current game.
    // parameters = [int id, bool host, string type]
    public void setup_match (string[] parameters)
    {
        Debug.Log(parameters[0]);
        currentMatch = new match(int.Parse(parameters[0]), bool.Parse(parameters[1]), parameters[2]);
        Debug.Log(JsonUtility.ToJson(currentMatch));
    }
}