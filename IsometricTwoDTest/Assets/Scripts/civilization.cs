using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class civilization : MonoBehaviour
{
    public building_type[] building_type;
    public int numberOfFarms;
    public int numberOfMines;

    public int amountFood;
    public int amountGold;

    public float timeRemanining = 10;

    // External Classes
    civ_resources_display civ_resources_display;  // Import_Manager Class that facilitates cross class, player, and server function calls.

    // Start is called before the first frame update
    void Start()
    {
        civ_resources_display = GameObject.Find("civManager").GetComponent<civ_resources_display>(); // Connects to the import_manager.
    }

    public void Awake()
    {
        amountGold = 1000;
        Debug.Log("Civ Resources init to--> \n Civ Gold: " + amountGold + "\n Civ Food: " + amountFood);
    }

    public void Update()
    {
        numberOfFarms = GameObject.FindGameObjectsWithTag("Farm").Length;
        numberOfMines = GameObject.FindGameObjectsWithTag("Mine").Length;

        civ_resources_display.update_resources();

        if (timeRemanining > 0)
        {
            timeRemanining -= Time.deltaTime;
            // Debug.Log(timeRemanining);
        }
        else
        {
            Debug.Log("Resources Added");
            timeRemanining = 10;

            if (building_type[0])
            {
                amountFood += (numberOfFarms * building_type[0].resourcesAmount);
            }

            if (building_type[1])
            {
                amountGold += (numberOfMines * building_type[1].resourcesAmount);
            }

            Debug.Log("Civ Resources init to--> \n Civ Gold: " + amountGold + "\n Civ Food: " + amountFood);
   
        }
    }

    public void deduct_cost(int buildingNumber)
    {
        amountGold = amountGold - building_type[buildingNumber].buildCost;
    }
}


