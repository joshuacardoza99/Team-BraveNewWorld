using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu()]
public class building_type : ScriptableObject
{
    [Space(5)]                                // 5 pixels of spacing here.
    [Header("Sprite being used for button")]  // Shows text in inspector
    public Sprite sprite;                     // Sprites being used to attach to button

    [Space(5)]                                // 5 pixels of spacing here.
    [Header("Prefab used for budiling")]      // Shows text in inspector
    public Transform asian;                   // Asian civ prefabs
    public Transform viking;                  // Viking civ prefabs
    public Transform greek;                   // Greek civ prefabs

    [Space(5)]                                // 5 pixels of spacing here.
    [Header("Preview used for budiling")]     // Shows text in inspector
    public Transform previewAsian;            // Asian civ prefabs
    public Transform previewViking;           // Viking civ prefabs
    public Transform previewGreek;            // Greek civ prefabs

    [Space(5)]                                // 5 pixels of spacing here.
    public BuildingType unitType = new BuildingType();
                                              // Adds drop down list for attack type

    [Space(5)]                                // 5 pixels of spacing here.
    [Header("Building Attributes")]           // Shows text in inspector
    public int   foodAmount;                  // Amount of food this building generates.
    public int   goldAmount;                  // Amount of gold this building generates.
    public int   buildCost;                   // Amount of gold it costs to build
    public string type = "not a building";    // String with the type of building

    public float resourceCooldown;            // Cooldown on resource

    public void print_message()
    {
    }

    public void print_attributes()
    {
      }

    // Return the correct transform for each civilization
    public Transform get_building_of_civilization(int civilization)
    {
        Transform selectedBuilding = null;

        if (civilization == 0)
        {
            selectedBuilding = asian;
        }
        else if (civilization == 1)
        {
            selectedBuilding = greek;
        }
        else if (civilization == 2)
        {
            selectedBuilding = viking;
        }

        return selectedBuilding;
    }
}

public enum BuildingType
{
    commandPost, // 0
    farm,        // 1
    mine         // 2
}
