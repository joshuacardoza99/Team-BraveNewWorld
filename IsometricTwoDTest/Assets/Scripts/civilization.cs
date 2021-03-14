using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class civilization : MonoBehaviour
{
    public GameObject goldPopUp;          // Pop up for the Gold
    public string goldToDisplay;          // string of gold amount that has been put into the users resources
    public building_type[] building_type; // Array of building types
    public GameObject[]   numberOfFarms;  // Number of farms the user owns
    public GameObject[]   numberOfMines;  // Number of mines the user owns
    public int   amountFood;              // The amount of food the user owns
    public int   amountGold;              // The amount of gold the user owns
    public float timeRemanining = 10;     // The amount of time it takes to refresh resources
    public Tile  currentTile = null;      // The tile this character is currently on.

    // External Classes
    civ_resources_display civ_resources_display;  // Import_Manager Class that facilitates cross class, player, and server function calls.
    Building Building;
    // Start is called before the first frame update
    void Start()
    {
        civ_resources_display = GameObject.Find("civManager").GetComponent<civ_resources_display>(); // Connects to the import_manager.
        Building = GameObject.Find("civManager").GetComponent<Building>();
    }

    public void Awake()
    {
        amountFood = 2000;
        amountGold = 2000;
    }

    public void Update()
    {
        numberOfFarms = GameObject.FindGameObjectsWithTag("Farm"); // Find the farm tag
        numberOfMines = GameObject.FindGameObjectsWithTag("Mine"); // Find the mine tag

        civ_resources_display.update_resources();

        if (timeRemanining > 0)
        {
            timeRemanining -= Time.deltaTime;
        }
        else
        {
            timeRemanining = 10;

            // Pop up for Food
            if (building_type[0])
            {
                amountFood += (numberOfFarms.Length * (building_type[0].resourcesAmount + 5)); // Increment the food amount
                resource_pop_up(numberOfFarms);
            }

            // Pop for Gold
            if (building_type[1])
            {
                amountGold += (numberOfMines.Length * building_type[1].resourcesAmount); //Increment the gold amount
                resource_pop_up(numberOfMines);
            }
        }
    }
    // Deduct the cost of the specific building from the amount of resources the user owns.
    public void deduct_cost(int buildingNumber)
    {
        amountGold = amountGold - building_type[buildingNumber].buildCost;
    }

    public void resource_pop_up(GameObject[] buildings)
    {
        //GameObject[] numberOfFarms = GameObject.FindGameObjectsWithTag("Farm");

        foreach (GameObject building in buildings)
        {
            Vector3 tilePosition = building.GetComponent<Building>().currentTile.transform.position;

            GameObject goldInstance = Instantiate(goldPopUp, tilePosition, Quaternion.identity);   // Instantiate the prefab
            goldInstance.transform.GetChild(0).GetComponent<TextMeshPro>().SetText(goldToDisplay); // Display the string
        }        
    }
}