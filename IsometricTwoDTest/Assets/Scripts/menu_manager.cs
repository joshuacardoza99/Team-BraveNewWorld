using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class menu_manager : MonoBehaviour
{
    public GameObject[] groups; // Array of Gameobjects being used for the menu scenes

    public GameObject currentGroup; // Current menu scene being displayed


    void Awake()
    {
        //TrilleonAutomation.AutomationMaster.Initialize();
        ChangeGroup(currentGroup); // Change Scene to first selected (set in inspector)
    }

    // Change scene to next selected scene on button click (set in inspector)
    public void ChangeGroup(GameObject groupToActivate)
    {
        GameObject newGroup = groupToActivate;
        currentGroup = groupToActivate;

        foreach (GameObject group in groups)
        {
            if (group.name == newGroup.name)
            {
                group.SetActive(true);
            }
            else
            {
                group.SetActive(false);
            }
        }
    }

    // Removes the wait panel blocking the game.
    // Parameter = []
    public void removeWaitPanel(string[] parameter)
    {
        ChangeGroup(GameObject.Find("Canvas").transform.GetChild(3).gameObject);
    }

    // Open or close the unit menu
    public void open_unit_menu()//Tile tile, GameObject Character)
    {
        if (currentGroup == groups[6])
        {
            ChangeGroup(groups[2]);
            Debug.Log("Close Unit Menu");
        }
        else
        {
            ChangeGroup(groups[6]);
            Debug.Log("Open Unit Menu");
        }
    }

    // Removes the wait panel blocking the game.
    // Parameter = []
    public void close_menus()
    {
        ChangeGroup(groups[2]);
    }
}
