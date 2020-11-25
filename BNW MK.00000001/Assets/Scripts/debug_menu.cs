using UnityEngine;
using UnityEngine.Events;
using System.Collections;

public class ExampleClass : MonoBehaviour
{
    UnityEvent m_MyEvent;

    void Start()
    {
        if (m_MyEvent == null)
            m_MyEvent = new UnityEvent();

        m_MyEvent.AddListener(Ping);
        Debug.Log("Debug script is running!");
    }

    void Update()
    {
        if (Input.anyKeyDown && m_MyEvent != null)
        {
            m_MyEvent.Invoke();
        }
    }

    void Ping()
    {
        Debug.Log("Ping");
    }
}

/*using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class debug_menu : MonoBehaviour
{
    UnityEvent m_MyEvent = new UnityEvent();
    // Start is called before the first frame update
    void Start()
    {
        //Add a listener to the new Event. Calls MyAction method when invoked
        m_MyEvent.AddListener(generateMenu);
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.P) && m_MyEvent != null)
        {
            m_MyEvent.Invoke();
        }
    }

    public void generateMenu()
    {
        Debug.Log("Menu generated");
    }
}*/