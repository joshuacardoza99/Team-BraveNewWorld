using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class cooldown : MonoBehaviour
{

    public float nextAttack = 0;
    public float nextMove = 0;
    public float nextResurceCollect = 0;
    public float coolDown = 3;     // The amount of seconds a character must wait before attacking again.

    public void initiate_attack_cooldown()
    {
        Debug.Log("IN COOLDOWN");
        nextAttack = Time.time + coolDown;
    }

    public void initiate_move_cooldown()
    {
        Debug.Log("IN COOLDOWN");
        nextMove = Time.time + coolDown;
    }

    public void initiate_resource_cooldown()
    {
        Debug.Log("IN COOLDOWN");
        nextResurceCollect = Time.time + coolDown;
    }
}
