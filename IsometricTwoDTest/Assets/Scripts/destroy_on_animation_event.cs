using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class destroy_on_animation_event : MonoBehaviour
{
    public float lifeTime = 1f; // 1 second life time for the animation 

    void Update()
    {
        if (lifeTime > 0)
        {
            lifeTime -= Time.deltaTime;
        }

        if (lifeTime <= 0)
        {
            destroy_resource_parent();
        }
    }

    // Start is called before the first frame update
    public void destroy_resource_parent()
    {
        GameObject parent = gameObject.transform.parent.gameObject;
        Destroy(parent);
    }
}
