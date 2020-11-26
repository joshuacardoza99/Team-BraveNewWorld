using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class change_button : MonoBehaviour
{
    public Sprite spriteOff;
    public Sprite spriteOn;
    public Button button;

    public void change_sprite()
    {
        if (button.image.sprite == spriteOn)
            button.image.sprite = spriteOff;
        else
            button.image.sprite = spriteOn;
    }
}

