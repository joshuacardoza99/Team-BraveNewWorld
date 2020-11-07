using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class menu_manager : MonoBehaviour
{
    public GameObject[] groups;

    public GameObject currentGroup;

    void Awake()
    {
        ChangeGroup(currentGroup);
    }

    public void ChangeGroup(GameObject groupToActivate)
    {

        GameObject newGroup = groupToActivate;
        Debug.Log(newGroup.name);
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
