﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class hover_popup : MonoBehaviour, IPointerEnterHandler, IPointerExitHandler
{
    public GameObject currentHover;
   // public GameObject build;
   // public GameObject unit;

    //Detect if the Cursor starts to pass over the GameObject
    public void OnPointerEnter(PointerEventData pointerEventData)
    {
        //Output to console the GameObject's name and the following message
        if (pointerEventData.pointerCurrentRaycast.gameObject != null
            && pointerEventData.pointerCurrentRaycast.gameObject.name != "Background")
        {
            Debug.Log("Mouse Over: " + pointerEventData.pointerCurrentRaycast.gameObject.name);
            currentHover = pointerEventData.pointerCurrentRaycast.gameObject;
         //   build();
        }
    }

    //Detect when Cursor leaves the GameObject
    public void OnPointerExit(PointerEventData pointerEventData)
    {
        //Output the following message with the GameObject's name
        if (currentHover != null)
        {
            Debug.Log("Mouse Over: " + currentHover);
            currentHover = null;            
        }
    }

    //public void build()
    //{
      //  if (currentHover.name == "Build")
        //    build.SetActive(true);
    //}

//    public void unit()
  //  {
    //    if (currentHover.name == "Unit")
      //      unit.SetActive(true);
    //}
}
