using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu()]
public class building_type : ScriptableObject
{
    [Header("Sprite being used for button")]  // Shows text in inspector
    public Sprite sprite;                     // Sprites being used to attach to button

    [Space(5)]                                // 5 pixels of spacing here.
    [Header("Prefab used for budiling")]      // Shows text in inspector
    public Transform asian;                   // Asian civ prefabs
    public Transform viking;                  // Viking civ prefabs
    public Transform greek;                   // Greek civ prefabs

    [Space(5)]                                // 5 pixels of spacing here.
    public bool canChampionSpawn = false;     // Ability for building to spawn units
}
