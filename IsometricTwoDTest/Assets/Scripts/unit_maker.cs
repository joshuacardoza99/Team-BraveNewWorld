using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Text.RegularExpressions;

public class unit_maker : MonoBehaviour
{
    // External Classes//
    import_manager import_manager;  // Import_Manager Class that facilitates cross class, player, and server function calls.
    Tile Tile;            // Importing the Tile class.
    PlayerMove PlayerMove;      // Importing the PlayerMove class.
    map_manager map_manager;     // Importing the map_manager class.
    match_manager match_manager;

    // Public Global Variables //
    public GameObject asianChampion;
    public GameObject greekChampion;
    public GameObject vikingChampion;
    public RuntimeAnimatorController controller;

    // Start is called before the first frame update
    void Start()
    {
        import_manager = GameObject.Find("network_manager").GetComponent<import_manager>(); // Connects to the import_manager.
        map_manager = GameObject.Find("Map").GetComponent<map_manager>();
        match_manager = GameObject.Find("network_manager").GetComponent<match_manager>(); // Connects to the import_manager.
    }

    // Adds the champion of the given civilization to a random tile.
    // Parameters = [string civilization, int randomTile]
    public void add_champion(string[] parameters)
    {
        int randomTile = int.Parse(parameters[1]);                                      // Holds the random number that allows for the selection of the same random tile across the network.
        Debug.Log("Random Range is " + randomTile);
        int civilization = int.Parse(parameters[0]);                                      // The civilization of the champion needing created.
        GameObject champion = null;                                                          // The champion GameObject.
        List<GameObject> tiles = map_manager.get_land(civilization);                            // The list of tiles that a random tile to place the champion on is chosen from.
        Tile tile = (tiles[(int)(randomTile / tiles.Count)]).GetComponent<Tile>(); // The randomly selected tile to add the champion to.
        int[] tileGrid = tile.GetComponent<Tile>().get_grid();                          // The grid position of the selected tile.

        // Civilization 0 is Asian civilization.
        if (civilization == 0)
        {
            champion = place_object(asianChampion, 0, tile);
        }
        // Civilization 1 is Greek civilization.
        else if (civilization == 1)
        {
            champion = place_object(greekChampion, 0, tile);
        }
        // Civilization 2 is Viking civilization.
        else if (civilization == 2)
        {
            champion = place_object(vikingChampion, 0, tile);
        }

        if (match_manager.get_local_player().civilization == civilization)
        {
            champion.tag = "Player";
        }
        
        champion.name = parameters[0] + "_";
        champion.GetComponent<PlayerMove>().set_civilization(civilization);
        import_manager.run_function_all("Map", "run_on_map_item", new string[4] { tileGrid[0].ToString(), tileGrid[1].ToString(), "set_occupied", champion.name });

        if (match_manager.get_local_player().civilization == int.Parse(parameters[0]))
        {
            focus_camera_on(champion);
        }

        match_manager.update_player_champion(new string[2] { civilization.ToString(), champion.name});
    }

    // Places a copy of the given GameObject on the given tile.
    public GameObject place_object(GameObject item, int unitType, Tile tile)
    {
        Vector3 tilePosition = tile.transform.position;                  // The actual position to of the selected tile.
        tilePosition.z -= tile.GetComponent<Renderer>().bounds.size.z;
        tilePosition.x -= 0.0f;
        tilePosition.y += 0.2f;

        GameObject itemCopy = Instantiate(item, tilePosition, Quaternion.Euler(new Vector3(0, 0, 0)));
        face_forward(itemCopy);

        if (itemCopy.GetComponent<PlayerMove>() == null)
        {
            itemCopy.AddComponent<PlayerMove>();
            //itemCopy.AddComponent<Animator>();
            //itemCopy.GetComponent<Animator>().runtimeAnimatorController = (RuntimeAnimatorController)Resources.Load("Assets/Resources/Units/Asian Champion Animator.controller", typeof(RuntimeAnimatorController));
            itemCopy.GetComponent<PlayerMove>().unit = match_manager.unitTypeList[unitType];
            itemCopy.GetComponent<PlayerMove>().anim = this.GetComponent<Animator>();
        }

        if (itemCopy.GetComponent<CapsuleCollider>() == null)
        {
            itemCopy.AddComponent<CapsuleCollider>();
        }
       if (itemCopy.GetComponent<Animator>() == null)
        {
            itemCopy.AddComponent<Animator>();
            itemCopy.GetComponent<Animator>().runtimeAnimatorController = controller;// Resources.Load<RuntimeAnimatorController>("Assets/Resources/Units/Asian Champion Animator");
        }
        //itemCopy.GetComponent<Animator>().runtimeAnimatorController = Resources.Load("Assets/Resources/Units/Asian Champion Animator.controller") as RuntimeAnimatorController;
        itemCopy.GetComponent<PlayerMove>().set_grid(tile.get_grid()[0], tile.get_grid()[1]);
        itemCopy.GetComponent<PlayerMove>().load_stats();

        return itemCopy;
    }

    // Removes the given game object from the scene.
    public void remove_object(GameObject item)
    {
        Destroy(item);
    }

    // Rotates the given gameobject to face forwards towards the screen.
    public void face_forward(GameObject item)
    {
        item.transform.rotation = Quaternion.Euler(new Vector3(60, 180, 0));
    }

    // Rotates the given gameobject to face forwards towards the screen off to the left.
    public void face_left_forward(GameObject item)
    {
        item.transform.rotation = Quaternion.Euler(new Vector3(150, 70, 225));
    }

    // Rotates the given gameobject to face forwards towards the screen off to the left.
    public void face_right_forward(GameObject item)
    {
        item.transform.rotation = Quaternion.Euler(new Vector3(150, -60, 130));
    }

    // Rotates the given gameobject to face backwards away from the screen.
    public void face_backward(GameObject item)
    {
        item.transform.rotation = Quaternion.Euler(new Vector3(-60, 0, 0));
    }

    // Rotates the given gameobject to face forwards towards the screen off to the left.
    public void face_left_backward(GameObject item)
    {
        item.transform.rotation = Quaternion.Euler(new Vector3(-30, -45, 30));
    }

    // Rotates the given gameobject to face forwards towards the screen off to the left.
    public void face_right_backward(GameObject item)
    {
        item.transform.rotation = Quaternion.Euler(new Vector3(-30, 45, -30));
    }

    // Rotates the given gameobject to face right towards the right edge of the screen.
    public void face_right(GameObject item)
    {
        item.transform.rotation = Quaternion.Euler(new Vector3(0, 90, -60));
    }

    // Rotates the given gameobject to face left towards the left edge of the screen.
    public void face_left(GameObject item)
    {
        item.transform.rotation = Quaternion.Euler(new Vector3(0, -90, 60));
    }

    // Centers the given object in the camera view.
    public void focus_camera_on(GameObject item)
    {
        GameObject camera = GameObject.Find("Main Camera"); // Holds the GameObjcet for the scene's camera.
        Vector3 cameraPosition = camera.transform.position;

        cameraPosition.y = item.transform.position.y;
        cameraPosition.x = item.transform.position.x;

        camera.transform.position = cameraPosition;
    }

    // Removes the all units on the map.
    // Parameters = []
    public void remove_all_units(string[] parameters)
    {
        object[] sceneGameObjects = GameObject.FindSceneObjectsOfType(typeof(GameObject)); // List of all GameObjects the scene.

        foreach (GameObject sceneObject in sceneGameObjects)
        {
            if (Regex.IsMatch(sceneObject.name, "0_*", RegexOptions.IgnoreCase) ||
                Regex.IsMatch(sceneObject.name, "1_*", RegexOptions.IgnoreCase) ||
                Regex.IsMatch(sceneObject.name, "2_*", RegexOptions.IgnoreCase))
            {
                remove_object(sceneObject);
            }
        }
    }
}