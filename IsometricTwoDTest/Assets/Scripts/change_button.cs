using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class change_button : MonoBehaviour
{
    public Sprite spriteOff; // Sprtie shown when button is "turned off"
    public Sprite spriteOn;  // Sprtie shown when button is "turned on"
    public Button button;    // Current button being used for this script

    // Change button sprite when clicked
    public void change_sprite()
    {
        if (button.image.sprite == spriteOn)
            button.image.sprite = spriteOff;
        else
            button.image.sprite = spriteOn;
    }
}

