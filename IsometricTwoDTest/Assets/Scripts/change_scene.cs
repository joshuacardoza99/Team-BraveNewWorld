using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class change_scene : MonoBehaviour
{
    // Load new screen when a certain button is clicked
    public void buttonChangeScene(string sceneName)
    {
        SceneManager.LoadScene(sceneName);
    }
}
