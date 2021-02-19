using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu()]
public class unit_type : ScriptableObject
{
    [Space(5)]                                // 5 pixels of spacing here.
    [Header("Sprite being used for button")]  // Shows text in inspector
    public Sprite sprite;                     // Sprites being used to attach to button

    [Space(5)]                                // 5 pixels of spacing here.
    [Header("Prefab used for units")]         // Shows text in inspector
    public Transform asian;                   // Asian civ prefabs
    public Transform viking;                  // Viking civ prefabs
    public Transform greek;                   // Greek civ prefabs

    [Space(5)]                                // 5 pixels of spacing here.
    public AttackType unitType = new AttackType(); // Adds drop down list for attack type

    [Space(5)]                                // 5 pixels of spacing here.
    [Header("Unit Attributes")]               // Shows text in inspector
    public int health;                        // Unit health
    public int attackRange;                   // Unit attack range
    public int attackDamage;                  // Unit attack damage

    [Space(5)]                                // 5 pixels of spacing here.
    [Header("Unit Cooldowns")]                // Shows text in inspector
    public float attackCooldown;              // Unit attack cooldown
    public float movementCooldown;            // unit movement cooldown
}


public enum AttackType
{
    range,
    meele,
    tank
}
