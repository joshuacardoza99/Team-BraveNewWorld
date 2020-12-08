using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class debug_menu : MonoBehaviour
{
    public GameObject buildingMenu;

    UnityEvent debugMenu = new UnityEvent();

    void Start()
    {
        buildingMenu.SetActive(false);
        debugMenu.AddListener(Menu);
    }

    void Update()
    {
        // When 'p' is pressed, this calls the menu function
        if (Input.GetKeyDown("p") && debugMenu != null)
            debugMenu.Invoke();
    }

    void Menu()
    {
        // Code for actually making the menu appear and be usable goes here
        if(buildingMenu.activeSelf == false)
           buildingMenu.SetActive(true);
        else
           buildingMenu.SetActive(false);
    }
}