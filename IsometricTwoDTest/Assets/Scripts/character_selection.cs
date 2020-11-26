using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class character_selection : MonoBehaviour
{
     // External Classes//
    import_manager import_manager;  // Import_Manager Class that facilitates cross class, player, and server function calls.

    public GameObject[] characters;
    public int selectedCharacter = 0;

    [SerializeField]
    private civ_description description;

    // Start is called before the first frame update
    void Start()
    {
        import_manager = GameObject.Find("network_manager").GetComponent<import_manager>(); // Connects to the import_manager.
    }

    public void NextCharacter()
    {
        characters[selectedCharacter].SetActive(false);
        selectedCharacter = (selectedCharacter + 1) % characters.Length;
        characters[selectedCharacter].SetActive(true);
        description.selectedCiv = selectedCharacter;
    }

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
    }


    // Gives the Civilization
    public void get_civilization ()
    {
        import_manager.run_function("network_manager", "set_player_civilization", new string[1] {description.descriptionText.text});
    }
}
