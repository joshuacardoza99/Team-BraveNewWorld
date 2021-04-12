using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class civ_resources_display : MonoBehaviour
{
    public Text resourcesText;

    // External Classes
    civilization  civilization;  // Import_Manager Class that facilitates cross class, player, and server function calls.
    match_manager match_manager;

    // Start is called before the first frame update
    void Start()
    {
        civilization  = GameObject.Find("civManager").GetComponent<civilization>(); // Connects to the import_manager.
        match_manager = GameObject.Find("network_manager").GetComponent<match_manager>();
    }

    // Displays the amount of resources the user has on the screen
    public void update_resources()
    {
        if (match_manager == null)
        {
            match_manager = GameObject.Find("network_manager").GetComponent<match_manager>();
        }

        resourcesText.text = " " + match_manager.get_local_player().gold + "\n\n " + match_manager.get_local_player().food;
    }
}
