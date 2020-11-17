using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class panel_toggle : MonoBehaviour
{
    public GameObject panel;

    public void toggle_panel()
    {
        if (panel != null)
        {
            panel.SetActive(!panel.activeSelf);
        }
    }
}

