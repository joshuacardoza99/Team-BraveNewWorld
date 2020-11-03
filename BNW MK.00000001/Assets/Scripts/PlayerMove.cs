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

<<<<<<< HEAD
<<<<<<< HEAD

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
        
=======
=======
>>>>>>> parent of 8157387c... mhm
        if (!moving)
        {
            FindSelectableTiles();
            CheckMouse();
        }
        else
        {
            Move();
        }
>>>>>>> parent of 8157387c... mhm
	}

    void CheckMouse()
    {
        if (Input.GetMouseButtonUp(0))
        {
            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);

            RaycastHit hit;
            if (Physics.Raycast(ray, out hit))
            {
                if (hit.collider.tag == "Tile")
                {
                    Tile t = hit.collider.GetComponent<Tile>();

                    if (t.selectable)
                    {
                        MoveToTile(t);
                    }
                }
            }
        }
    }
}
