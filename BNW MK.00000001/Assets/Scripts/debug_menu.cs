using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class debug_menu : MonoBehaviour
{
    UnityEvent debugMenu = new UnityEvent();
    // Start is called before the first frame update
    void Start()
    {
        //Add a listener to the new Event. Calls MyAction method when invoked
        debugMenu.AddListener(generateMenu);
    }

    // Update is called once per frame
    void Update()
    {

    }

    public KeyDownEvent();
    {
        if (Input.GetKeyDown("p") && m_MyEvent != null)
        {
            Debug.Log("Menu");
            debugMenu.RemoveListener(generateMenu);
        }
    }
