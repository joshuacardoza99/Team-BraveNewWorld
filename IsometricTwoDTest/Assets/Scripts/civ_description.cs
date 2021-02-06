using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class civ_description : MonoBehaviour
{
    public Text descriptionText;
    public Text getText;
    public InputField inputText;
    public int selectedCiv;

    void Start()
    {
        getText = GetComponent<Text>();
    }
    
    public void show_text()
    {   
        getText.text = inputText.text;
    }

    void Update()
    {
        if (selectedCiv == 0)
        {
            descriptionText.text = "Selected Civilization: Asian";
        }
        else if (selectedCiv == 1)
        {
            descriptionText.text = "Selected Civilization: Greek";
        }
        else
        {
            descriptionText.text = "Selected Civilization: Viking";
        }
    }
}
