using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class preview_object : MonoBehaviour
{
    // External Classes//
    import_manager import_manager;  // Import_Manager Class that facilitates cross class, player, and server function calls.
    map_manager map_manager;        // This imports the map_manager class to help with interactions with othe tiles.
    unit_maker unit_maker;

    public Material PreviewMaterial;

    // Use this for initialization.
    void Start()
    {
        import_manager = GameObject.Find("network_manager").GetComponent<import_manager>();
        map_manager    = GameObject.Find("Map").GetComponent<map_manager>();
        unit_maker = GameObject.Find("unit_manager").GetComponent<unit_maker>();
    }

    public GameObject place(Transform prefab, Tile tile)
    {
        import_manager.run_function_all("preview_object", "build_building", new string[3] { prefab.name, tile.get_grid()[0].ToString(), tile.get_grid()[1].ToString() });
        GameObject building = tile.get_buidling();

        destroy_previews();

        return building;
    }

    // Builds the building over the network or just locally depending on the current game type.
    // Parameter = [string prefabName, int xPosition, yPosition]
    public void build_building(string[] parameter)
    {
        Tile tile = map_manager.map[int.Parse(parameter[1]), int.Parse(parameter[2])].ground.GetComponent<Tile>();
        Vector3 tilePosition = tile.transform.position;                  // The actual position to of the selected tile.
        tilePosition.z -= tile.GetComponent<Renderer>().bounds.size.z - 2;
        tilePosition.x -= 0.0f;
        tilePosition.y += 0.6f;

        GameObject buildingPrefab = (GameObject) Resources.Load("Buildings/" + parameter[0]);
        GameObject building = Instantiate(buildingPrefab, tilePosition, buildingPrefab.transform.rotation);
        Debug.Log("In preview_object " + building);
        tile.set_building(building);
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

    public void destroy_previews()
    {
        GameObject[] previewsDelete = GameObject.FindGameObjectsWithTag("previewBuilding");
        foreach (GameObject previewDelete in previewsDelete)
            Destroy(previewDelete);
    }
}
