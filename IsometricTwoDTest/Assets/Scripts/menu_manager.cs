using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class menu_manager : MonoBehaviour
{
    public GameObject[] groups; // Array of Gameobjects being used for the menu scenes

    public GameObject currentGroup; // Current menu scene being displayed


    private int nextCharacterToDisplay = 0;
    private int secondsWaitPanelHasBeenShowingFor = 0;

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

    // Starts the wait panel.
    public void update_wait_panel()
    {

    }

    IEnumerator show_next_character()
    {
        yield return new WaitForSeconds(10);

        
    }

    IEnumerator count_the_seconds()
    {
        yield return new WaitForSeconds(1);

        
    }


    // Removes the wait panel blocking the game.
    // Parameter = []
    public void removeWaitPanel(string[] parameter)
    {
        ChangeGroup(GameObject.Find("Canvas").transform.GetChild(3).gameObject);
    }

    // Removes the wait panel blocking the game.
    // Parameter = []
    public void close_menus()
    {
        ChangeGroup(groups[2]);
    }
    
    // Display the end Screen
    // Parameter = [] win/lose condition
    public void end_screen(string condition)
    {
        if (condition == "Win" || condition == "win")
            groups[6].GetComponent<Text>().text = "Congragulations , you have conguered the map! \n " + "You " + condition;
        else
            groups[6].GetComponent<Text>().text = "Your Civilaztion has fallen, better luck next time! \n " + "You " + condition;

        ChangeGroup(groups[6]);
    }


    public void quit_game()
    {
        Application.Quit();
    }
}
