using System.Collections;
using System.Collections.Generic;
using UnityEngine;


// This script should be attached to all command posts and will handle what tiles are in the city
public class City : MonoBehaviour
{
    // External Classes//
    map_manager map_manager;
    match_manager match_manager;

    // Variables      //
    public  Tile           currentTile       = null;                 // The tile this city is currently managed from.
    public  List<Tile>     in_city           = new List<Tile>();     // A list of tiles that are within city borders
    public  List<Building> buildings_in_city = new List<Building>(); // list of buildings connected to city 
    public  bool           Testing           = false;                // temp variable for testing the conquest system
    private int            occupiedBy        = -1;

    // Start is called before the first frame update
    void Start()
    {
        map_manager = GameObject.Find("Map").GetComponent<map_manager>(); // Connects to the map_manager.
        match_manager = GameObject.Find("network_manager").GetComponent<match_manager>();

        currentTile = this.GetComponent<Building>().currentTile;
        Debug.Log("A City has been placed!");
        set_city_limits(1);
        get_buildings();
    }

    // Sets or expands the city borders
    void set_city_limits(int range)
    {
        in_city = currentTile.get_adjacenct_tiles(range);
        map_manager.run_on_map_item(new string[3] { currentTile.get_grid()[0].ToString(), currentTile.get_grid()[1].ToString(), "set_in_city" }); // set this tile to in city

        foreach (Tile tile in in_city)
        {
            map_manager.run_on_map_item(new string[3] { tile.get_grid()[0].ToString(), tile.get_grid()[1].ToString(), "set_in_city" }); // set all surrounding tiles to in city
        }
    }

    // updates the buildings_in_city list with all the buildings connected to the city
    // runs at the bottom of building_manager.add_building to update the lists after a building is placed
    public void get_buildings()
    {        
        foreach(Tile tile in in_city)
        {
            if ((tile.get_buidling() != null) && (!buildings_in_city.Contains(tile.get_buidling().GetComponent<Building>())))
                buildings_in_city.Add(tile.get_buidling().GetComponent<Building>());
        }
    }   

    // Removes the city.
    public void change_city_ownership(int civilization)
    {
        buildings_in_city.ForEach((Building building) =>
        {
            building.change_civilization_ownership(new string[1] { civilization.ToString() });
        });

        gameObject.GetComponent<Building>().change_civilization_ownership(new string[1] { civilization.ToString() });
    }

    IEnumerator conquer(int civilization)
    {
        yield return new WaitForSeconds(5);

        if (currentTile.get_current_character() != null &&
            currentTile.get_current_character().GetComponent<PlayerMove>().civilization == civilization)
        {
            change_city_ownership(civilization);
        }
    }

    // Check if the current character on this tile is an enemy
    public void check_for_enemy()
    {
        PlayerMove character = currentTile.get_current_character().GetComponent<PlayerMove>();
        
        if ((character != null) && (character.civilization != gameObject.GetComponent<Building>().get_civilization()))
        {
            occupiedBy = character.civilization;
            StartCoroutine(conquer(character.civilization));
            Debug.Log("Enemy on a command post!");
            // add code to transfer city ownership here
        }
        else if ((character != null) && (character.civilization == gameObject.GetComponent<Building>().get_civilization()))
        {
            Debug.Log("frendly unit on command post");
            // else if block is just for testing.
        }
        Testing = true;
    }
}
