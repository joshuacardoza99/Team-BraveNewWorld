using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class menu_manager : MonoBehaviour
{
    // External Classes//
    import_manager import_manager;  // Import_Manager Class that facilitates cross class, player, and server function calls.
    match_manager match_manager;

    public GameObject[] groups; // Array of Gameobjects being used for the menu scenes

    public GameObject currentGroup; // Current menu scene being displayed


    private int nextCharacterToDisplay = 0;
    private int secondsWaitPanelHasBeenShowingFor = 0;
    public GameObject cloudBackground;
    private string[] civilizationName = new string[3] { "Asian", "Greek", "Viking" };
    public int[] civilizationsVisible = new int[3] {-1, -1, -1};
    private bool isLocalCiv = true;
    public int secondsTillStart = 20;
    public GameObject tillGameStart;
    private bool haveLobby = true;
    public Image endScreenWinImage;
    public Image endScreenLoseImage;

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
        if (match_manager == null)
        {
            match_manager = GameObject.Find("network_manager").GetComponent<match_manager>();
        }

        if (import_manager == null)
        {
            import_manager = GameObject.Find("network_manager").GetComponent<import_manager>();
        }

        import_manager.run_function_all("MenuManager", "show_character_in_lobby", new string[1] { match_manager.localPlayer.ToString() });
    }

    IEnumerator show_next_character()
    {
        yield return new WaitForSeconds(7);

        List<int> availableCivilizations = new List<int>();

        for (int civilization = 0; civilization < 3; civilization++)
        {
            if (civilizationsVisible[civilization] == -1)
            {
                availableCivilizations.Add(civilization);
            }
        }

        if (availableCivilizations.Count > 0)
        {
            int nextCivilization = availableCivilizations[UnityEngine.Random.Range(0, (availableCivilizations.Count - 1))];

            import_manager.run_function_all("MenuManager", "show_character_in_lobby", new string[1] { nextCivilization.ToString() });
        }
    }

    IEnumerator count_the_seconds()
    {
        yield return new WaitForSeconds(1);

        update_game_start_counter();
    }

    // Shows the civilization as having joined the game on the 
    // Parameter = [int civilization]
    public void show_character_in_lobby(string[] parameter)
    {
        if (haveLobby)
        {
            int civilization = int.Parse(parameter[0]);

            civilizationsVisible[civilization] = civilization;

            if (match_manager.isHost || isLocalCiv)
            {
                isLocalCiv = false;
                StartCoroutine(show_next_character());
            }

            Vector3 position = GameObject.Find(civilizationName[civilization] + " Sprite").transform.position;
            position.z = -190;

            GameObject.Find(civilizationName[civilization] + " Sprite").transform.position = position;
            GameObject.Find(civilizationName[civilization] + " Text").GetComponent<Text>().text = "   Ready";

            if (civilization != match_manager.localPlayer)
            {
                import_manager.run_function_all("MenuManager", "show_character_in_lobby", new string[1] { match_manager.localPlayer.ToString() });
            }
        }
    }

    // Updates the time till the game starts.
    public void update_game_start_counter ()
    {
        if (secondsTillStart > 0)
        {
            secondsTillStart--;

            if (tillGameStart.GetComponent<Text>() != null)
            {
                tillGameStart.GetComponent<Text>().text = "Game starting in " + secondsTillStart + " seconds";
            }

            StartCoroutine(count_the_seconds());
        }
    }

    // Pauses the Main menu background video.
    public void pause_background_video ()
    {
        GameObject.Find("Canvas").GetComponent<UnityEngine.Video.VideoPlayer>().enabled = false;

        Instantiate(cloudBackground, new Vector3(2.14f, -16.78f, 0), Quaternion.Euler(new Vector3(0, 0, -5.1f)));
        Instantiate(cloudBackground, new Vector3(2.14f, -107.2f, 0), Quaternion.Euler(new Vector3(0, 0, -5.1f)));
    }

    // Removes the wait panel blocking the game.
    // Parameter = []
    public void removeWaitPanel(string[] parameter)
    {
        haveLobby = false;
        ChangeGroup(GameObject.Find("Canvas").transform.GetChild(3).gameObject);
        GameObject.Find("Main Camera").GetComponent<pan_zoom>().enabled = true;
    }

    // Open or close the unit menu
    public void open_unit_menu()//Tile tile, GameObject Character)
    {
        if (currentGroup == groups[6])
        {
            ChangeGroup(groups[2]);
        }
        else
        {
            ChangeGroup(groups[6]);
        }
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
        Destroy(GameObject.Find("statPopup"));

        ChangeGroup(groups[7]);

        if (condition == "Win" || condition == "win")
        {
            groups[7].transform.GetChild(1).GetComponent<Text>().text = "Congragulations , you have conguered the map! \n " + "You " + condition;
            endScreenWinImage.enabled = true;
        }
        else
        {
            groups[7].transform.GetChild(1).GetComponent<Text>().text = "Your Civilaztion has fallen, better luck next time! \n " + "You " + condition;
            endScreenLoseImage.enabled = true;
        }

    }


    public void quit_game()
    {
        Application.Quit();
    }
}
