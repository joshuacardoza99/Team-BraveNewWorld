using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerMove : TileMove
{
    Vector3 targetPosition;
    private Ray ray;
    private RaycastHit hit;
    private Camera cam;

    // Use this for initialization
    void Start()
    {
        Init();
        
    }

    // Update is called once per frame
    void Update()
    {
        FindSelectableTiles();


    }

    void Move(Vector3 location)
    {
        this.transform.LookAt(targetPosition);

        this.transform.position = new Vector3(targetPosition.x, this.transform.position.y, targetPosition.z);

        this.transform.rotation = Quaternion.identity;

     
        moving = false;
        //TurnManager.EndTurn();
       

    }
    void OnMouseDown()
    {
        if (Input.GetMouseButtonDown(0))
        {
            Tile t = this.GetComponent<Tile>();
            // if tile clicked 
            if (t.selectable)
            {
                moving = true;
                targetPosition = t.transform.position;
                Move(targetPosition);
            }
        }
    }
}