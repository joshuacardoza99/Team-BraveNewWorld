using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu()]
public class tree_type : ScriptableObject
{
    [Space(5)]                                // 5 pixels of spacing here.
    [Header("Prefab used for trees")]         // Shows text in inspector
    public List<GameObject> asian;                   // Asian civ prefabs
    public List<GameObject> viking;                  // Viking civ prefabs
    public List<GameObject> greek;                   // Greek civ prefabs

    public GameObject build_tree(Tile tile, int civilization, int type)
    {
        Vector3 tilePosition = tile.transform.position;                  // The actual position to of the selected tile.
        tilePosition.z -= tile.GetComponent<Renderer>().bounds.size.z - 2;
        tilePosition.x -= 0.0f;
        tilePosition.y += 0.2f;

        return Instantiate(get_tree_of_civilization(civilization, type), tilePosition, get_tree_of_civilization(civilization, type).transform.rotation);
    }

    public GameObject get_tree_of_civilization(int civilization, int type)
    {
        GameObject selectedTree = null;

        if (civilization == 0)
        {
            selectedTree = asian[type];
        }
        else if (civilization == 1)
        {
            selectedTree = greek[type];
        }
        else if (civilization == 2)
        {
            selectedTree = viking[type];
        }

        return selectedTree;
    }

    public List<GameObject> get_trees_of_civilization(int civilization)
    {
        List<GameObject> returnList = null;

        switch (civilization)
        {
            case 0:
                returnList = asian;
                break;
            case 1:
                returnList = greek;
                break;
            case 2:
                returnList = viking;
                break;
        }

        return returnList;
    }
}