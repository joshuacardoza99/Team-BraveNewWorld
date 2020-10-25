using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// 
public class import_manager : MonoBehaviour
{
    // Global Variables //
    server_manager serverManager; // Import_Manager Class that facilitates cross class, player, and server function calls.

    // Unity Triggured Functions //

    // Start is called before the first frame update (this is called by Unity).
    // Style Exception: This function's name must be styled like this so Unity will run it.
    void Start()
    {
        serverManager = GameObject.Find("network_manager").GetComponent<server_manager>(); // Connects to the import_manager.
    }

    // Public Funtions //

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