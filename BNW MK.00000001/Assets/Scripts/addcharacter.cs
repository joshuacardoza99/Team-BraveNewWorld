using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// this recieves a tile name, and character object, then places that character on that tile.
public class addcharacter : MonoBehaviour
{
    public void add(string[] parameters, object character)
    {
        // get the x and y axis from the tile's name
        string[] tileName    = parameters[0].Split('_');
        float    xAxis = float.Parse(parameters[0]);
        float    zAxis = float.Parse(parameters[1]);

        // create the character object on the tile
    }

}
