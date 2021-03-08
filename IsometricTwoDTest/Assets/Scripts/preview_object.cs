using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class preview_object : MonoBehaviour
{
    public Material PreviewMaterial;

    public Transform place(Transform prefab, Vector3 position, Quaternion rotation)
    {
        Transform obj = (Transform)Instantiate(prefab, position, rotation);

        GameObject[] previewsDelete = GameObject.FindGameObjectsWithTag("previewBuilding");
        foreach (GameObject previewDelete in previewsDelete)
            Destroy(previewDelete);

        return obj;
    }

    public preview_object create_preview(Transform aPrefab, Vector3 tilePosition)
    {
        Transform obj = (Transform)Instantiate(aPrefab, tilePosition, Quaternion.identity);
      //  obj.tag = "previewBuilding";
      //  obj.AddComponent<Button>();
        foreach (var renderer in obj.GetComponentsInChildren<Renderer>(true))
            renderer.sharedMaterial = PreviewMaterial;
        foreach (var script in obj.GetComponentsInChildren<MonoBehaviour>(true))
            Destroy(script);
        preview_object preview = obj.gameObject.AddComponent<preview_object>();
        return preview;
    }
}
