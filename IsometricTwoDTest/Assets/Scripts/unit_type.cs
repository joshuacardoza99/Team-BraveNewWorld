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
    //public Transform attackPopup;             // Attack pop up

    [Space(5)]                                // 5 pixels of spacing here.
    public AttackType unitType = new AttackType(); // Adds drop down list for attack type

    [Space(5)]                                // 5 pixels of spacing here.
    [Header("Unit Attributes")]               // Shows text in inspector
    public int health;                        // Unit health
    public int attackRange;                   // Unit attack range
    public int moveRange;
    public int attackDamage;                  // Unit attack damage
    

    [Space(5)]                                // 5 pixels of spacing here.
    [Header("Unit Cooldowns")]                // Shows text in inspector
    public float attackCooldown;              // Unit attack cooldown
    public float movementCooldown;            // unit movement cooldown

    [Space(5)]                                // 5 pixels of spacing here.
    [Header("Cost")]                          // Shows text in inspector
    public int food;

    public Transform get_unit_of_civilization(int civilization)
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


public enum AttackType
{
    champion,
    range,
    meele,
    tank
}
