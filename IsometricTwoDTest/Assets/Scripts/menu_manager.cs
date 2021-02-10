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
    public void removeWaitPanel (string[] parameter)
    {
        ChangeGroup(GameObject.Find("Canvas").transform.GetChild(3).gameObject);
    }
}
