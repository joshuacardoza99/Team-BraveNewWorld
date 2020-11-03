using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class preload : MonoBehaviour
{
    private CanvasGroup fadeGroup;
    private float loadTime;               // Load time
    private float minimumTextTime = 3.0f; // Minimum Time of that scene

    private void Start()
    {
        // Grab the only canvasGroup in the scene
        fadeGroup = FindObjectOfType<CanvasGroup>();

        // Start with a black screen
        fadeGroup.alpha = 1;

        // Pre Load the game

        // Get a timestamp of the completion time
        // if loadtime is super, give it a small buffer time so we can apreciate the logo
        if (Time.time < minimumTextTime)
            loadTime = minimumTextTime;
        else
            loadTime = Time.time;
    }

    private void Update()
    {
        // Fade in
        if(Time.time < minimumTextTime)
        {
            fadeGroup.alpha = 1 - Time.time;
        }

        // Fade out
        if(Time.time > minimumTextTime && loadTime !=0)
        {
            fadeGroup.alpha = Time.time - minimumTextTime;
            if(fadeGroup.alpha >= 1)
            {
                SceneManager.LoadScene("Start");
            }
        }
    }
}
