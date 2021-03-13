using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class civ_resources_display : MonoBehaviour
{
    public Text resourcesText;

    // External Classes
    civilization civilization;  // Import_Manager Class that facilitates cross class, player, and server function calls.

    // Start is called before the first frame update
    void Start()
    {
        civilization = GameObject.Find("civManager").GetComponent<civilization>(); // Connects to the import_manager.
    }

    // Displays the amount of resources the user has on the screen
    public void update_resources()
    {
        resourcesText.text = "FOOD: " + civilization.amountFood + "\nGOLD: " + civilization.amountGold;
    }
}
