using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class attack : MonoBehaviour
{
    PlayerMove player;
    Tile enemyPlayer;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        /*
         * 
         * if(tile is occupied)
         * {
         *      if( current tile is occupied && within attack range && cooldown > 0 )]
         *      {
                    Tile.currentchar.health -= damge // for damage 
                    this.cooldown();
                }

            }
            else
        {
            // continue with  other move logic 

        }

         public void Update()
          {   
                if (Time.time > nextAttack)
            {
                if (Input.GetKeyDown(KeyCode.I))
                {
                    Debug.Log("You attacked, cooldown intiated");
                    nextAttack = Time.time + cooldown;
                }
            }
          }
        */
    }
}
