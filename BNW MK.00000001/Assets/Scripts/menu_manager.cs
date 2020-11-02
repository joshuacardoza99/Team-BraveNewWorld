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
}
