using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class character_selection : MonoBehaviour
{
    public GameObject[] characters;
    public int selectedCharacter = 0;

    [SerializeField]
    private civ_description description;

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
}
