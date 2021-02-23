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

    public void update_resources()
    {
        resourcesText.text = "FOOD: " + civilization.amountFood + "\nGOLD: " + civilization.amountGold;
    }



    //  private void update_resources()
    //  {
    //     transform.Find("GOLD").GetComponent<Text>().text = "GOLD: " + game_resources.get_resource_amount(game_resources.resource_type.gold);
    //     transform.Find("FOOD").GetComponent<Text>().text = "FOOD: " + game_resources.get_resource_amount(game_resources.resource_type.gold);
    //  }
}
