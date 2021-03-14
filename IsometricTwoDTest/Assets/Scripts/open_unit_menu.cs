using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class open_unit_menu : MonoBehaviour
{
    menu_manager menu_manager;

    // Use this for initialization.
    void Start()
    {
        menu_manager = GameObject.Find("MenuManager").GetComponent<menu_manager>();
    }

    // Start is called before the first frame update
    public void OnMouseDown()
    {
        menu_manager.open_unit_menu();
    }
}
