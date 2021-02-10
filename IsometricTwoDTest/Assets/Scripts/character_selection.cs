using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class character_selection : MonoBehaviour
{
     // External Classes//
    import_manager import_manager;  // Import_Manager Class that facilitates cross class, player, and server function calls.

    public GameObject[] characters;   // Array of Gameobjects that used can select
    public int selectedCharacter = 0; // Currently selected Civ

    [SerializeField]
    private civ_description description; // Make varible visible in insector and connect it to civ_description
    
    [SerializeField]
    private building_manager civNumber; // Make varible visible in insector and connect it to building_manager


    // Start is called before the first frame update
    void Start()
    {
        import_manager = GameObject.Find("network_manager").GetComponent<import_manager>(); // Connects to the import_manager.
    }

    // Change to next Civ in array list
    public void NextCharacter()
    {
        characters[selectedCharacter].SetActive(false);
        selectedCharacter = (selectedCharacter + 1) % characters.Length;
        characters[selectedCharacter].SetActive(true);
        description.selectedCiv = selectedCharacter;
        civNumber.civNumber = selectedCharacter;
    }

    // Change to previous civ in array list
    public void PreviousCharacter()
    {
        characters[selectedCharacter].SetActive(false);
        selectedCharacter--;
        if (selectedCharacter < 0)
        {
            selectedCharacter += characters.Length;
            description.selectedCiv = selectedCharacter;
        }
        characters[selectedCharacter].SetActive(true);
        description.selectedCiv = selectedCharacter;
        civNumber.civNumber = selectedCharacter;
    }


    // Gives the Civilization
    public void get_civilization ()
    {
        import_manager.run_function("network_manager", "set_player_civilization", new string[1] { description.selectedCiv.ToString() });
        import_manager.run_function("network_manager", "set_champion_name",       new string[1] { description.inputText.text });
    }
}
