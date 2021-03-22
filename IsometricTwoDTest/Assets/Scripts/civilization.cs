﻿using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class civilization : MonoBehaviour
{
    // External Classes //
    match_manager match_manager;
    import_manager import_manager;

    public GameObject goldPopUp;          // Pop up for the Gold
    public string goldToDisplay;          // string of gold amount that has been put into the users resources
    public List<building_type> building_type; // Array of building types
    public GameObject[]   numberOfFarms;  // Number of farms the user owns
    public GameObject[]   numberOfMines;  // Number of mines the user owns
    private int   amountFood;              // The amount of food the user owns
    private int   amountGold;              // The amount of gold the user owns
    public float timeRemanining = 10;     // The amount of time it takes to refresh resources
    public Tile  currentTile = null;      // The tile this character is currently on.
    private List<int> playersNeededUpdated = new List<int>();

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

    public void Awake()
    {
        amountFood = 2000;
        amountGold = 2000;
    }

    public void Update()
    {

        if (timeRemanining > 0)
        {
            timeRemanining -= Time.deltaTime;
        }
        else
        {
            timeRemanining = 10;

            match_manager.for_each_player((player) =>
            {
                update_resources(player.civilization);
            });
        }
    }

    // Updates the resource based on the buildings the given civilization owns.
    public void update_resources(int civilization)
    {
        match_manager.choose_player(civilization).buildings.ForEach((Building building) =>
        {
            building_type.FindAll(buildingType => buildingType.type == building.gameObject.tag).ForEach((buildingType) =>
            {
                match_manager.choose_player(civilization).gold += buildingType.goldAmount;
                match_manager.choose_player(civilization).food += buildingType.foodAmount;

                if (match_manager.get_local_player().civilization == civilization)
                {
                    resource_pop_up(building, buildingType);
                    civ_resources_display.update_resources();
                }
            });
        });
    }

    public void resource_pop_up(Building building, building_type type)
    {
        //GameObject[] numberOfFarms = GameObject.FindGameObjectsWithTag("Farm");

        if (type.goldAmount > 0)
        {
            Vector3 tilePosition = building.currentTile.transform.position;

            GameObject goldInstance = Instantiate(goldPopUp, tilePosition, Quaternion.identity);   // Instantiate the prefab
            goldInstance.transform.GetChild(0).GetComponent<TextMeshPro>().SetText(goldToDisplay); // Display the string
        }
        
        if (type.foodAmount > 0)
        {
            // Shows the food pop up here.
        }
    }
}