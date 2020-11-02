using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class menu_scene : MonoBehaviour
{
    private CanvasGroup fadeGroup;
    private float fadeInSpeed = 0.33f; // Speed the scene fades in

    private void Start()
    {
        // Grab the only canvasGroup in the scene
        fadeGroup = FindObjectOfType<CanvasGroup>();

        // Start with a black screen
        fadeGroup.alpha = 1;
    }

    private void Update()
    {
        fadeGroup.alpha = 1 - Time.timeSinceLevelLoad * fadeInSpeed;
    }
}
