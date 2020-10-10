using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class match_manager : MonoBehaviour
{
    // Global Variables //
    import_manager importManager;

    // Start is called before the first frame update
    void Start()
    {
        importManager = GameObject.Find("network_manager").GetComponent<import_manager>();
    }

    void Update()
    {
        // Easter egg to test the nextworking with.
        if (Input.GetKeyDown(KeyCode.Space))
        {
            start_network_game(new string[2] { "ElijahHero", "Asian" });
        }
    }
  
    // Public Functions //

    // Starts a multiplayer game over the network.
    // parameters = [string name, string civilization]
    public void start_network_game(string[] parameters)
    {
        importManager.run_function_all("server_functions", "add_player", parameters);
    }

    // Starts a single player game locally.
    // parameters = [string name, string civilization]
    public void start_local_game(string[] parameters)
    {

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
}
