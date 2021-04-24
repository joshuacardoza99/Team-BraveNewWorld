using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class civilization : MonoBehaviour
{
    // External Classes
    match_manager  match_manager;
    import_manager import_manager;

    public GameObject goldPopUp;        // Pop up for the Gold
    public string goldToDisplay;        // string of gold amount that has been put into the users resources
    public Tile currentTile = null;     // The tile this character is currently on.

    // External Classes
    civ_resources_display civ_resources_display;  // Import_Manager Class that facilitates cross class, player, and server function calls.
    Building Building;

    // Start is called before the first frame update
    void Start()
    {
        civ_resources_display = GameObject.Find("civManager").GetComponent<civ_resources_display>();
        Building = GameObject.Find("civManager").GetComponent<Building>();
        match_manager = GameObject.Find("network_manager").GetComponent<match_manager>();
        import_manager = GameObject.Find("network_manager").GetComponent<import_manager>();
    }

    public void Update()
    {
        if (match_manager.game_status())
        {
            match_manager.for_each_player((player) =>
            {
                if (player != null)
                {
                    Debug.LogError("This civilization is available " + player.civilization + " civilizaiton");
                    update_resources(player.civilization);
                }
            });
        }
    }

    // Updates the resource based on the buildings the given civilization owns.
    public void update_resources(int civilization)
    {
        match_manager.choose_player(civilization).buildings.ForEach((Building building) =>
        {
            if (((int)building.building_type.unitType) != 0)
            {
                if (building.status == false)
                {
                    match_manager.choose_player(civilization).gold += building.building_type.goldAmount;
                    match_manager.choose_player(civilization).food += building.building_type.foodAmount;

                    if (match_manager.get_local_player().civilization == civilization)
                    {
                        resource_pop_up(building);
                        civ_resources_display.update_resources();
                    }
                    building.status = true;
                }
            }
        });
    }

    // The gold and food pop ups
    public void resource_pop_up(Building building)
    {
        if (building.building_type.goldAmount > 0)
        {
            Vector3 tilePosition = building.currentTile.transform.position;                        // Get the tile position of the mine
            GameObject goldInstance = Instantiate(goldPopUp, tilePosition, Quaternion.identity);   // Instantiate the prefab
            goldInstance.transform.GetChild(0).GetComponent<TextMeshPro>().text = "+ " + building.building_type.goldAmount.ToString(); // Display the string
        }
        
        if (building.building_type.foodAmount > 0)
        {
            Vector3 tilePosition = building.currentTile.transform.position;                        // Get the tile position of the mine
            GameObject goldInstance = Instantiate(goldPopUp, tilePosition, Quaternion.identity);   // Instantiate the prefab
            goldInstance.transform.GetChild(0).GetComponent<TextMeshPro>().text = "+ " + building.building_type.foodAmount.ToString(); // Display the string
        }
    }
}