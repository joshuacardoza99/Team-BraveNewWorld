﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class building_select : MonoBehaviour
{
    // External classes
    match_manager match_manager;

    [SerializeField]
    public List<building_type> buildingTypeList; // List of SO, connects any building type being scripted

    [SerializeField]
    private building_manager building_manager;   // Makes varible visible in inspector and connect it to building_manager

    public int buildingNumber;                   

    // Start is called before the first frame update
    void Start()
    {
        match_manager = GameObject.Find("network_manager").GetComponent<match_manager>(); // Connects to the match_manager.
    }

    private void Awake()
    {
        Transform buildingTemplate = transform.Find("buildTemplate");  // Use the template button made in unity for the button creation
        buildingTemplate.gameObject.SetActive(false);

        int index = 0;                            // Index used to keep count of buttons

        // Loop processing creating buttons for each SO in buildingTypeList
        foreach (building_type building_type in buildingTypeList)
        {
            Transform buildingTransform = Instantiate(buildingTemplate, transform); // Instantiate button on the screen
            buildingTransform.gameObject.SetActive(true);

            // Set the position of the button and grab the sprite from the SO and attach it to the button
            buildingTransform.GetComponent<RectTransform>().anchoredPosition += new Vector2(index * 180, 0);
            buildingTransform.Find("Image").GetComponent<Image>().sprite = building_type.sprite;

            // Set which ever button clicked on to the active building to use
            buildingTransform.GetComponent<Button>().onClick.AddListener(() =>
            {
                building_manager.set_active_building_type(building_type);
                buildingNumber = buildingTypeList.IndexOf(building_type);

                if (match_manager.get_local_player().civilization == 0)
                {
                    building_manager.place_previews(building_type.previewAsian);
                }
                else if (match_manager.get_local_player().civilization == 1)
                {
                    building_manager.place_previews(building_type.previewGreek);
                }
                else
                {
                    building_manager.place_previews(building_type.previewViking);
                }
            });
            index++;            
        }
    }
}
