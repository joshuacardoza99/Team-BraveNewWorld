using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.Windows.WebCam;

// This class facilitates connected to and interacting with a match.
public class match_manager : MonoBehaviour
{
    // External Classes//
    import_manager import_manager;  // Import_Manager Class that facilitates cross class, player, and server function calls.

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
            //start_network_game(new string[2] { "ElijahHero", "Asian" });
            import_manager.run_function("Map", "generate_map", new string[0]{ });
            //import_manager.run_function_all("server_functions", "get_player", new string[2] {"match_manager", "receive_test_data"});

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
        import_manager.run_function("server_functions", "add_player", parameters);
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
       // currentMatch = new match(int.Parse(parameters[0]), bool.Parse(parameters[1]), parameters[2]);
       // Debug.Log(JsonUtility.ToJson(currentMatch));
    }
}
