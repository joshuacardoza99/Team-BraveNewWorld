using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu()]
public class unit_type : ScriptableObject
{
    public Sprite sprite;     // Sprites being used to attach to button

    [Space(5)] // 5 pixels of spacing here.
    public Transform asian;  // Asian civ prefabs
    public Transform viking; // Viking civ prefabs
    public Transform greek;  // Greek civ prefabs

    [Space(5)] // 5 pixels of spacing here.
    public dropDownAttackType unitType = new dropDownAttackType(); // Adds drop down list for attack type
}


public enum dropDownAttackType
{
    range,
    meele,
    tank
}
