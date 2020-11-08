using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ChampionGenerator : MonoBehaviour
{
    public GameObject objectPrefab; // whatever you want to instantiate
    public Vector3 location; // place you want it
    // Start is called before the first frame update
    void Start()
    {
        GameObject newObject = Instantiate(objectPrefab, location, Quaternion.identity) as GameObject;  // instatiate the object
        newObject.transform.localScale = new Vector3(100, 100, 100); // change its local scale in x y z format
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
