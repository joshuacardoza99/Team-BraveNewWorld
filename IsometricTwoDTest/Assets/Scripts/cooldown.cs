using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class cooldown : MonoBehaviour
{

    public float nextAttack = 0;
    public float nextMove = 0;
    public float nextCityCool = 0;
    public float nextResurceCollect = 0;
    public float coolDownAttack = 3;    // The amount of seconds a character must wait before attacking again.
    public float coolDownMove = 3;      // The amount of seconds a character must wait before moving again.
    public float coolDownCity = 3;      // The amount of seconds a character must wait before city is taken.
    public float coolDownResource = 3;  // The amount of seconds a character must wait before resource is collected again.

    public void initiate_attack_cooldown()
    {
        Debug.Log("IN COOLDOWN");
        nextAttack = Time.time + coolDownAttack;
    }

    public void initiate_move_cooldown()
    {
        Debug.Log("IN COOLDOWN");
        nextMove = Time.time + coolDownMove;
    }

    public void initiate_resource_cooldown()
    {
        Debug.Log("IN COOLDOWN");
        nextResurceCollect = Time.time + coolDownResource;
    }

    public void initiate_city_cooldown()
    {
        Debug.Log("IN COOLDOWN");
        nextCityCool = Time.time + coolDownCity;
    }
}
