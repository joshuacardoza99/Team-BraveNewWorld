using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering;
using UnityEngine.Windows.WebCam;

public class match_manager : MonoBehaviour
{
    // External Classes//
    import_manager import_manager;

    // Private Global Variables.
    match currentMatch = null;

    // Private Classes //
    // Class that holds the data for a match.
    private class match
    {
        private int  matchId;
        private bool isHost;

        // Returns the match Id.
        public int getId ()
        {
            return matchId;
        }

        // Determins if the player is the match host.
        public bool isMatchHost()
        {
            return isHost;
        }

        // Contructor function for the match class.
        public match(int id, bool isHost)
        {
            this.matchId = id;
            this.isHost  = isHost;
        }
    }

    // Start is called before the first frame update
    void Start()
    {
        import_manager = GameObject.Find("network_manager").GetComponent<import_manager>();
    }

    // this is only for testing purposes before the menu UI is in place.
    void Update()
    {
        // Easter egg to test the nextworking with.
        if (Input.GetKeyDown(KeyCode.Space))
        {
            start_network_game(new string[2] { "ElijahHero", "Asian" });

            import_manager.run_function_all("server_functions", "get_player", new string[2] {"match_manager", "receive_test_data"});
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
        if (currentMatch == null)
        {
            currentMatch = new match(1, true);
            import_manager.run_function("Map", "load_map", parameters);
        }
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

    // Sets the match data from the server for network games.
    // Parameters = [int id, bool isHost]
    public void set_match (string[] parameters)
    {
        currentMatch = new match(int.Parse(parameters[0]), bool.Parse(parameters[1]));
        Debug.Log("Match is set to " + parameters[0]);
    }
}
