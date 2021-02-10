using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu()]
public class building_type : ScriptableObject
{
    public Transform prefab; // Prefab being used for Building in the game
    public Sprite sprite;    // Sprites being used to attach to button

    public int civNumber;    // Number of the currently selected civ
}
