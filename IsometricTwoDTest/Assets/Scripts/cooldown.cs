using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class cooldown : MonoBehaviour
{
    public float nextAttack = 0;          // Cooldown amount till the next attack
    public float nextMove = 0;            // Cooldown amount till the next move 
    public float nextResourceCollect = 0; // Cooldown amount till the next replenishing of resources
    public float currentTime;


    public void initiate_move_cooldown(float cooldown)
    {
        nextMove = Time.time + cooldown;
    }

    public void initiate_resource_cooldown(float cooldown)
    {
        nextResourceCollect = Time.time + cooldown;
    }
}
