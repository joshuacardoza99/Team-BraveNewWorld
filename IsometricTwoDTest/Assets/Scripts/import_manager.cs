using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// 
public class import_manager : MonoBehaviour
{
    // Global Variables //
    server_manager serverManager; // Import_Manager Class that facilitates cross class, player, and server function calls.

    // Start is called before the first frame update (this is called by Unity).
    // Style Exception: This function's name must be styled like this so Unity will run it.
    void Start()
    {
        serverManager = GameObject.Find("network_manager").GetComponent<server_manager>(); // Connects to the import_manager.
    }

    // This runs when the character is enabled.
  /*  void OnEnable()
    {
        Tile.OnSelected   += onselected_network_event;
        Tile.OnUnselected += onunselected_network_event;
    }


    // This runs when the tile is disabled.
    void OnDisable()
    {
        Tile.OnSelected   -= onselected_network_event;
        Tile.OnUnselected -= onunselected_network_event;
    }

    // Listens for and projects all OnSelected events across the network.
    public void onselected_network_event(Tile tile, PlayerMove character)
    {
        run_function_all("network_manager", "invoke_event", new string[5] { tile.get_grid()[0], tile.get_grid[1], character.get_grid[0], character.get_grid[1] });
    }

    // Listens for and projects all OnUnselected events across the network.
    public void onunselected_network_event(Tile tile, PlayerMove character)
    {
        run_function_all("network_manager", "invoke_event", new string[5] { tile.get_grid()[0], tile.get_grid[1] });
    }

    // Invokes OnSelected events with the given tile and character.
    // Parameters = [int xTilePosition, int yTilePosition, int xCharacterPosition, ing yCharacterPosition]
    public void invoke_onselected_event(string[] parameters)
    {
        if (Tile.OnSelected != null)
        {
            Tile.OnSelected(map_manager.map[parameters[0], parameters[1]].ground, map_manager[parameters[2], parameters[3]].ground.get_current_character());
        }
    }

    // Invokes OnUnselected events with the given tile and character.
    // Parameters = [int xTilePosition, int yTilePosition, int xCharacterPosition, ing yCharacterPosition, string eventName]
    public void invoke_onunselected_event(string[] parameters)
    {
        if (Tile.OnUnselected != null)
        {
            Tile.OnUnselected(map_manager.map[parameters[0], parameters[1]].ground, map_manager[parameters[2], parameters[3]].ground.get_current_character());
        }
    }*/

    // Runs the given function on the local machine.
    public void run_function(string gameObject, string function, string[] parameters)
    {
        try
        {
            GameObject.Find(gameObject).SendMessage(function, parameters);
        }
        catch
        {
            Debug.Log(gameObject + "." + function + " is not a local function.");
        }
    }

    // Runs the given function on the local machine and all machines in the current match.
    public void run_function_all(string gameObject, string function, string[] parameters)
    {
        if (gameObject != "server_functions")
        {
            run_function(gameObject, function, parameters);
        }
        serverManager.send(gameObject, function, parameters);
    }
}