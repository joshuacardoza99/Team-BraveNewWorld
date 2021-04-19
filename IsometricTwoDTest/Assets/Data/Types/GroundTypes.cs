using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu()]
public class GroundTypes : ScriptableObject
{
    public Material asian;
    public Material greek;
    public Material viking;
    public Material water;

    public Material selectable;
    public Material selected;
    public Material attackable;
    public Material occupied;
    public Material recruit;

    public Material get_material(int civilization)
    {
        Material ground = water;

        // GroundType 0 is Asian groundType.
        if (civilization == 0)
        {
            ground = asian;
        }
        // GroundType 1 is Greek groundType.
        else if (civilization == 1)
        {
            ground = greek;
        }
        // GroundType 2 is Viking groundType.
        else if (civilization == 2)
        {
            ground = viking;
        }

        return ground;
    }
}
