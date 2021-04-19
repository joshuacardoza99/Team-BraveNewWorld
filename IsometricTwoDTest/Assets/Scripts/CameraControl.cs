using System.Collections;
using System.Collections.Generic;
using UnityEngine;


/// <summary>
///  THIS FILE IS OBSALETE ////
/// //
/// 


// To set the angle do it in the unity visual game object pannel
public class CameraControl : MonoBehaviour
{
    private Vector3 LastPanPosition;
    public int Speed = 10;

    // Update is called once per frame
    void Update()
    {
        if (Input.GetMouseButtonDown(0))
        {
            LastPanPosition = Input.mousePosition;
        }
        else if (Input.GetMouseButton(0))
        {
            PanCamera(Input.mousePosition);
        }
    }

    // Moves the camera to the given position.
    void PanCamera(Vector3 newPanPosition)
    {
        // Determine how much to move the camera
        Vector3 Offset = Camera.main.ScreenToViewportPoint(LastPanPosition - newPanPosition);
        Vector3 Move = new Vector3(Offset.x * Speed, 0, Offset.y * Speed);

        // Perform the movement
        transform.Translate(Move, Space.World);

        // Cache the position
        LastPanPosition = newPanPosition;
    }
}
