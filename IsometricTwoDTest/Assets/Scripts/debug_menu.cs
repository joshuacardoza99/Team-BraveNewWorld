using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class debug_menu : MonoBehaviour
{
    UnityEvent debugMenu = new UnityEvent();

    void Start()
    {
        debugMenu.AddListener(Menu);
    }

    void Update()
    {
        if (Input.GetKeyDown("p") && debugMenu != null)
        {
            debugMenu.Invoke();
        }
    }

    void Menu()
    {
        Debug.Log("Menu");
    }

    // Start is called before the first frame update
    /*void Start()
    {
        //Add a listener to the new Event. Calls MyAction method when invoked
        debugMenu.AddListener(generateMenu);
        Debug.Log("Menu started");
    }

    // Update is called once per frame
    void Update()
    {

    }

    publipc void KeyDownEvent()
    {
        if (Input.GetKeyDown("p"))
        {
            Debug.Log("Menu");
            debugMenu.RemoveListener(generateMenu);
        }
    }

    public void generateMenu()
    {
        Debug.Log("Menu generated!");
    }*/
}
