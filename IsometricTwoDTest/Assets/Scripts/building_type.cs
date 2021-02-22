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
    public bool isConquered = false;          // Ability for building to spawn units


    [Space(5)]                                // 5 pixels of spacing here.
    public BuildingType unitType = new BuildingType(); // Adds drop down list for attack type

    [Space(5)]                                // 5 pixels of spacing here.
    [Header("Building Attributes")]           // Shows text in inspector
    public int   resourcesAmount;               // Amount of resources building generates
    public int   buildCost;

    public float resourceCooldown;              // Cooldown on resource

    public void print_message()
    {
        Debug.Log("A " + unitType + " has been spawned");
    }

    public void print_attributes()
    {
        Debug.Log("\nResource Cooldown: " + resourceCooldown + "\nResource Amount: " + resourcesAmount);
    }
}

public enum BuildingType
{
    commandPost,
    barracks,
    farm,
    mine
}
