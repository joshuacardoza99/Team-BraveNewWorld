using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// 
public class import_manager : MonoBehaviour
{
    // External Classes //
    server_manager serverManager; // Import_Manager Class that facilitates cross class, player, and server function calls.

    // Public Variable //
    public string[] lastDatabaseResponse = new string[3] { "", "", "" };

    // Start is called before the first frame update (this is called by Unity).
    // Style Exception: This function's name must be styled like this so Unity will run it.
    void Start()
    {
        serverManager = GameObject.Find("network_manager").GetComponent<server_manager>(); // Connects to the import_manager.
    }

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
    
    // Runs database functions that return values.
    public void run_database_function(string function, string[] parameters, int civilization)
    {
        string[] functionParameters = new string[parameters.Length + 3];
        functionParameters[0] = "network_manager";
        functionParameters[1] = "receives_database_results";
        functionParameters[2] = civilization.ToString();

        for (int index = 0; index < parameters.Length; index++)
        {
            functionParameters[index + 3] = parameters[0];
        }

        run_function_all("server_function", function, functionParameters);
    }

    // Receives results from the database.
    // Parameters = [int civilization, string results]
    public void receives_database_results (string[] parameters)
    {
        lastDatabaseResponse[int.Parse(parameters[0])] = parameters[1];
    }
}