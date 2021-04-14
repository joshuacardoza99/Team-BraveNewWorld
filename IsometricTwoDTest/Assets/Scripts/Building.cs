using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using AI;

// This script should be attached to all city buildings, and facilitates building functions and whatnot
public class Building : MonoBehaviour
{
    // External Classes//
    import_manager import_manager;  // Import_Manager Class that facilitates cross class, player, and server function calls.
    map_manager map_manager;     // Importing the map_manager class.
    cooldown cooldown;
    match_manager match_manager;
    preview_object preview_object;
    ai_tools tools = new ai_tools();

    // used to print stats on screen
    public Text printStats;
  //  public GameObject canvas;
    //public GameObject panel;

    // Building stats
    public int foodAmount;                 
    public int goldAmount;              
    public int buildCost;
    public float resourceCooldown;
    [SerializeField]  private int civilization; // The civilization that owns this building.
    public bool status = true;
    public float timeRemanining;                    // The amount of time it takes to refresh resources

    // Reference to SO
    public building_type building_type;

    // Variables      //
    public Tile currentTile = null; // The tile this character is currently on.
    private  BuildingType type; // the type of building this is (0 - CP, 1 - farm, 2 - mine)

    // Start is called before the first frame update
    void Start()
    {
        match_manager = GameObject.Find("network_manager").GetComponent<match_manager>();
        preview_object = GameObject.Find("preview_object").GetComponent<preview_object>();
        Debug.Log("A building has been placed!");

        // Print Stats unto the screen
      //  canvas = GameObject.Find("Canvas").gameObject;
        //panel = canvas.transform.GetChild(7).gameObject;

        // Load and print the stats into the game
        load_stats();

        timeRemanining = resourceCooldown;
    }

    void Update()
    {
        if (timeRemanining > 0)
        {
            timeRemanining -= Time.deltaTime;
        }
        else
        {
            timeRemanining = resourceCooldown;
            status = false;
        }
    }


    public void set_current_tile(Tile tile)
    {
        currentTile = tile; // set this buildings tile to the given tile
        tile.set_building(this.gameObject); // set the tiles building to this
        //Debug.Log("new building type %d", (string)type);
    }

    public void set_type(BuildingType newType)
    {
        type = newType;
    }

    // Sets what civilizaiton owns this building.
    public void set_civilization(int newCivilization)
    {
        civilization = newCivilization;
    }

    // Gets the civilization that owns this building.
    public int get_civilization()
    {
        return civilization;
    }

    // Changes the buildings ownership.
    // Parameters = [int civilization]
    public void destroy_building(string[] parameters)
    {
        currentTile.remove_building();
        currentTile.remove_city();
        Destroy(gameObject);

        match_manager.choose_player(get_civilization()).buildings = match_manager.choose_player(get_civilization()).buildings.FindAll(building => building != this);
    }

/*  public void OnMouseOver()
    {
        //set_text_stats();
        panel.SetActive(true);
    }

    public void OnMouseExit()
    {
        printStats = null;
        panel.SetActive(false);
    }*/

    public void load_stats()
    {
        foodAmount = building_type.foodAmount;
        goldAmount = building_type.goldAmount;
        buildCost  = building_type.buildCost;
        resourceCooldown = building_type.resourceCooldown;

       // set_text_stats();
    }


 /*   public void set_text_stats()
    {
        printStats = panel.transform.GetChild(1).GetComponent<Text>();
        printStats.text = "Name: " + name + "\nFood: " + foodAmount + "\nGold: " + goldAmount + "\nResource Cooldown:" + resourceCooldown + "\nBuild Cost:" + buildCost;
    }*/


}
