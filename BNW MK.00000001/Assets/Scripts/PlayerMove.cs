using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerMove : TileMove 
{

	// Use this for initialization
	void Start () 
	{
        Init();
	}
	
	// Update is called once per frame
	void Update () 
	{
        Debug.DrawRay(transform.position, transform.forward);


            if (!moving)
            {
                GetCurrentTile();
                FindSelectableTiles();
                CheckMouse();
            }

            else
            {
                Move();
            }
        
	}

    void CheckMouse()
    {
        // Registers clicks  
        if (Input.GetMouseButtonUp(0))
        {
            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);

            RaycastHit hit;
            if (Physics.Raycast(ray, out hit))
            {
                if (hit.collider.tag == "Tile")
                {
                    Tile t = hit.collider.GetComponent<Tile>();
                    // if tile clicked 
                    if (t.selectable)
                    {
                        MoveToTile(t);
                    }
                }
            }
        }
    }
}
