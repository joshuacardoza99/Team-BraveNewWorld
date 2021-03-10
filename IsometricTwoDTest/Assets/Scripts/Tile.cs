using System.Collections;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Transactions;
using UnityEngine;
using UnityEngine.Assertions.Must;
using UnityEngine.Serialization;
using UnityEngine.UIElements;
using UnityEngine.UI;
using UnityEngine.EventSystems;

// This class handles the different interactions on a single tile. //
public class Tile : MonoBehaviour
{
    // External Classes//
    import_manager import_manager;  // Import_Manager Class that facilitates cross class, player, and server function calls.
    match_manager match_manager;
    map_manager map_manager;     // This imports the map_manager class to help with interactions with othe tiles.
    cooldown cooldowns;
    menu_manager menu_manager;

    // Events
    public delegate void  TileSelected   (Tile selectedTile, GameObject occupyingCharacter);   // Template function for the TileSelected Event.
    public static   event TileSelected   OnSelected;                                           // The TileSelected function call stub.
    public delegate void  TileUnselected (Tile unselectedTile, GameObject occupyingCharacter); // Template function for the TileUnselected Event.
    public static   event TileUnselected OnUnselected;                                         // The TileSelected function call stub.

    // Global Variables //
    [SerializeField] private bool       walkable                = true;  // Determines if this tile can be walked on.
    [SerializeField] private bool       current                 = false; // Determines if the player is currently using this tile
    [SerializeField] private bool       occupied                = false; // Determines if there is a character currently on this tile
    [SerializeField] private bool       hasBuilding             = false; // Determines if there is a building currently on this tile
    [SerializeField] private bool       inCity                  = false; // Determines if this tile is in the borders of a city
    [SerializeField] private bool       isCurrentlySelectedTile = false; // Tells when this tile is selected by the player.
    [SerializeField] private bool       target                  = false; // Determines if this tile is being targeted by another player.
    [SerializeField] private bool       selectable              = false; // Determines if the player can click on click on this tile.
    [SerializeField] private bool       attackable              = false; // Determines if another player can attach this tile.
    [SerializeField] private GameObject currentCharacter        = null;  // the character currently occupying this tile.
    [SerializeField] private GameObject currentBuilding         = null;  // the building occupying this tile
    [SerializeField] private float      nextAttack              = 0;     // Determines if another player is attaching this tile.
    [SerializeField] private bool       isAttacking             = false; // Determines if the player on this tile it attaching another tile.
    [SerializeField] private float      cooldown                = 3;     // The amount of seconds a character must wast before moving again.
    [SerializeField] private int        civilization;                    // The number associated with the civ that owns this land. -1 = water, 0 = asian, 1 = greek, 2 = viking
    [SerializeField] private int[]      grid;                            // Stores the position of the Tile in the virtual grid. [x position, y position]

    // Use this for initialization.
    void Start()
    {
        import_manager = GameObject.Find("network_manager").GetComponent<import_manager>();
        match_manager = GameObject.Find("network_manager").GetComponent<match_manager>();
        map_manager    = GameObject.Find("Map").GetComponent<map_manager>();
        cooldowns = GameObject.Find("Cooldown").GetComponent<cooldown>();
        menu_manager = GameObject.Find("MenuManager").GetComponent<menu_manager>();
    }

    // This runs when the character is enabled.
    void OnEnable()
    {
        Tile.OnSelected   += handle_selection;
        Tile.OnSelected   += select;
        Tile.OnSelected   += attack;
        Tile.OnSelected   += select_attackable;
        Tile.OnUnselected += unselect;
        Tile.OnUnselected += unselect_attackable;
    }


    // This runs when the tile is disabled.
    void OnDisable()
    {
        Tile.OnSelected   -= handle_selection;
        Tile.OnSelected   -= select;
        Tile.OnSelected   -= attack;
        Tile.OnSelected   -= select_attackable;
        Tile.OnUnselected -= unselect;
        Tile.OnUnselected -= unselect_attackable;
    }

    // Listens for a mouse click and translates to an OnSelected event.
    public void OnMouseDown()
    {
        if (!EventSystem.current.IsPointerOverGameObject())
        {
            if (OnSelected != null)
            {
                OnSelected(this, currentCharacter);
            }
        }
        else
            Debug.Log("Click on the UI");
    }

    // Returns a List of Tiles with all tiles in the given range away from this tile.
    // Test Intructions: To test run this function with the given range. Then you can manually select with the map_manager.map to check the output.
    public List<Tile> get_adjacenct_tiles(int range)
    {
        List<Tile> inrange = new List<Tile>(); // A list of tiles that directly border this tile.
        List<Tile> adjacentTiles = new List<Tile>(); // A list of all the tiles that border the tiles in the inrange list upto the range given.

        // Fills the inrange with the tiles that directly border this tile. Catches all the errors when a tile doesn't exist.
        if (range > 0)
        {
            try
            {
                inrange.Add(map_manager.map[grid[0], grid[1] + 1].ground.GetComponent<Tile>());
            }
            catch { }
            try
            {
                inrange.Add(map_manager.map[grid[0] + 1, grid[1]].ground.GetComponent<Tile>());
            }
            catch { }
            try
            {
                inrange.Add(map_manager.map[grid[0], grid[1] - 1].ground.GetComponent<Tile>());
            }
            catch { }
            try
            {
                inrange.Add(map_manager.map[grid[0] - 1, grid[1]].ground.GetComponent<Tile>());
            }
            catch { }
            try
            {
                inrange.Add(map_manager.map[grid[0] + 1, grid[1] + 1].ground.GetComponent<Tile>());
            }
            catch { }
            try
            {
                inrange.Add(map_manager.map[grid[0] + 1, grid[1] - 1].ground.GetComponent<Tile>());
            }
            catch { }
            try
            {
                inrange.Add(map_manager.map[grid[0] - 1, grid[1] + 1].ground.GetComponent<Tile>());
            }
            catch { }
            try
            {
                inrange.Add(map_manager.map[grid[0] - 1, grid[1] - 1].ground.GetComponent<Tile>());
            }
            catch { }

            adjacentTiles.AddRange(inrange);

            // The recursive case: Gets the tiles that border the inrange tiles.
            if (range > 1)
            {
                foreach (Tile item in inrange)
                {
                    adjacentTiles.AddRange(item.get_adjacenct_tiles(range - 1));
                }
            }
        }

        return adjacentTiles;
    }

    // Returns a List of Tiles with all tiles in the given range away from this tile that are walkable.
    // Test Instructions: To test run this function with the given range. Then you can manually select with the map_manager.map to check the output with predetermined walkable tiles.
    public List<Tile> get_walkable_tiles(int range) // use this to get attack range 
    {
        List<Tile> filteredList = new List<Tile>(); // A list of all the walkable tiles in the given range of this tile.

        foreach (Tile tile in get_adjacenct_tiles(range))
        {
            if (tile.is_walkable())
            {
                filteredList.Add(tile);
            }
        }

        return filteredList;
    }

    // Sets the surounding tiles in the given range to be selectable.
    // Test Instruction: Manually select the tile with map_manager.map and make sure the tile color is blue and if tile.selectable is true.
    // parameter = [int range]
    public void select(Tile tile, GameObject character)// use this for attack range 
    {
        if (tile == this && tile.is_occupied() && (match_manager.get_player_civilization() == tile.get_current_character().GetComponent<PlayerMove>().get_civilization()))
        {
            Debug.Log("Selecting all the tiles around this one.");
            tile.set_selectable(new string[0] { });

            foreach (Tile nearByTile in get_walkable_tiles(character.GetComponent<PlayerMove>().moveRange))
            {
                if (!nearByTile.is_occupied())
                {
                    nearByTile.set_selectable(new string[0] { });
                }
            }
        }
    }

    // Sets the surounding tiles in the given range to be unselectable.
    // Test Instruction: Manually select the tile with map_manager.map and make sure the tile color is its normal color and if tile.selectable is false.
    // parameter = [int range]
    public void unselect(Tile tile, GameObject character)
    {
        if (tile == this && tile.is_occupied())
        {
            Debug.Log("Unselecting all the tiles around this one.");
            tile.set_unselectable(new string[0] { });

            foreach (Tile nearByTile in get_walkable_tiles(character.GetComponent<PlayerMove>().moveRange))
            {
                nearByTile.set_unselectable(new string[0] { });
            }
        }
    }

    // Sets the civilization (groundType) of this tile.
    public void set_civilization(int civ)
    {
        civilization = civ;
    }

    // Gets the civilization (groundType) of this tile.
    public int get_civilization()
    {
        return civilization;
    }

    // Sets the grid of this tile. Grid = [int xPosition, int yPosition].
    public void set_grid(int xPosition, int yPosition)
    {
        grid = new int[2] { xPosition, yPosition };
    }

    // Gets the grid of this tile. Grid = [int xPosition, int yPosition].
    public int[] get_grid()
    {
        return grid;
    }

    // Sets this tile into occupied mode.
    // parameter = [string characterName]
    public void set_occupied(string[] parameter)
    {
        if (map_manager == null)
        {
            map_manager = GameObject.Find("Map").GetComponent<map_manager>();
        }

        if (match_manager == null)
        {
            match_manager = GameObject.Find("network_manager").GetComponent<match_manager>();
        }

        occupied = true;
        currentCharacter = GameObject.Find(parameter[0]);
        currentCharacter.GetComponent<PlayerMove>().set_current_tile(this);

        if (match_manager.get_player_civilization() == get_current_character().GetComponent<PlayerMove>().get_civilization())
        {
            this.GetComponent<Renderer>().material = map_manager.types.occupied;
        }
    }

    // Sets this tile into unoccupied mode.
    // parameter = [] -- just to make it compatible with import_manager.run_function_all.
    public void set_unoccupied(string[] parameter)
    {
        occupied = false;
        currentCharacter.GetComponent<PlayerMove>().set_current_tile(null);
        this.GetComponent<Renderer>().material = map_manager.types.get_material(civilization);
        currentCharacter = null;
    }

    // Determins if this tile is currently occupied by an character.
    public bool is_occupied()
    {
        return occupied;
    }

    // Sets this tile to be selectable.
    public void set_selectable(string[] parameter)
    {
        if (map_manager == null)
        {
            map_manager = GameObject.Find("Map").GetComponent<map_manager>();
        }

        selectable = true;
        this.GetComponent<Renderer>().material = map_manager.types.selectable;
    }

    // Sets this tile to be unselectable.
    public void set_unselectable(string[] parameter)
    {
        if (map_manager == null)
        {
            map_manager = GameObject.Find("Map").GetComponent<map_manager>();
        }

        if (!occupied)
        {
            selectable = false;
            this.GetComponent<Renderer>().material = map_manager.types.get_material(civilization);
        }
    }

    // Determines if a character can walk on top of this tile.
    public bool is_walkable()
    {
        return walkable;
    }

    // Determines if this tile can be selected to move a character onto.
    public bool is_selectable()
    {
        return selectable;
    }

    // Determines if this tile is within the borders of a city
    public bool is_in_city()
    {
        return inCity;
    }

    // Set this tile to within the borders of a city
    public void set_in_city()
    {
        inCity = true;
    }


    // Recieve a building gameobject and set it to the current building
    public void set_building(GameObject newBuilding)
    {
        currentBuilding = newBuilding;
        hasBuilding = true;
    }

    // Get the building object on this tile
    public GameObject get_buidling()
    {
        return currentBuilding;
    }

    // Attacks the character on selected tile.
    public void attack(Tile tile, GameObject character)
    {
        if (tile == this && is_attackable()) // and in range, and not a friendly civ
        {
            if (cooldowns == null)
            {
                cooldowns = GameObject.Find("Cooldown").GetComponent<cooldown>();
            }

            PlayerMove defendingUnit = character.GetComponent<PlayerMove>();

            if (Time.time > cooldowns.nextAttack)
            {
                // check if this characters civ is the same as the character clicking on it
                if (defendingUnit.get_civilization() != match_manager.get_player_civilization())
                {
                    // attach attack animation here
                    defendingUnit.health -= character.GetComponent<PlayerMove>().damage;
                    Debug.Log("Health equals " + defendingUnit.health);
                    cooldowns.initiate_attack_cooldown();
                    if (defendingUnit.health <= 0)
                    {
                        Debug.Log("YOUR SOLDIER HAS FALLEN !!");
                        import_manager.run_function_all(character.name, "suicide", new string[0] { });
                    }
                }
            }
        }
    }

    // Sets the nearby tiles to be attackable.
    public void select_attackable(Tile tile, GameObject character)
    {
        if (tile == this && tile.is_occupied())
        {
            foreach (Tile nearByTile in get_walkable_tiles(character.GetComponent<PlayerMove>().moveRange))
            {
                if (nearByTile.is_occupied() && (nearByTile.get_current_character().GetComponent<PlayerMove>().get_civilization() != match_manager.get_player_civilization()))
                {
                    nearByTile.set_attackable();
                }
            }
        }
    }

    // Unsets the nearby tiles from being attackable.
    public void unselect_attackable(Tile tile, GameObject character)
    {
        if (tile == this && tile.is_occupied())
        {
            Debug.Log("Setting unattackable");
            foreach (Tile nearByTile in get_walkable_tiles(character.GetComponent<PlayerMove>().moveRange))
            {
                if (nearByTile.is_attackable())
                {
                    nearByTile.set_unattackable();
                }
            }
        }
    }

    // Sets his tile to be attackable .
    public void set_attackable()
    {
        attackable = true;
        this.GetComponent<Renderer>().material = map_manager.types.attackable;
    }

    // Sets this tile to not be attackable.
    public void set_unattackable()
    {
        attackable = false;
        this.GetComponent<Renderer>().material = map_manager.types.get_material(civilization);
    }

    // Determines if this tile is attackable.
    public bool is_attackable()
    {
        return attackable;
    }

    // Gets the current character for this tile.
    public GameObject get_current_character()
    {
        return currentCharacter;
    }

    // Gets the range of tiles that are attackable.
    public void get_attack_range()
    {
        foreach (Tile tile in get_walkable_tiles(currentCharacter.GetComponent<PlayerMove>().attackRange))
        {
            if (tile.occupied)
                tile.set_attackable();
        }
    }

    // Sets this tile to be selectable.
    public void handle_selection(Tile selectedTile, GameObject unusedCharacter)
    {
        if (selectedTile == this)
        {
            if (is_occupied() && !isCurrentlySelectedTile)
            {
                this.isCurrentlySelectedTile = true;
            }
            else if (is_occupied() && isCurrentlySelectedTile)
            {
                OnUnselected(this, currentCharacter);
                this.isCurrentlySelectedTile = false;
            }
            else
            {
                this.isCurrentlySelectedTile = true;
            }

            if (isCurrentlySelectedTile)
            {
                this.GetComponent<Renderer>().material = map_manager.types.selected;
            }
        }
        else if (isCurrentlySelectedTile)
        {
            if (is_occupied() && (!selectedTile.is_selectable() || selectedTile.is_occupied()))
            {
                unselect(this, currentCharacter);
                
            }

            this.isCurrentlySelectedTile = false;

            if ((!isCurrentlySelectedTile && !is_occupied() && !is_selectable()) || (is_occupied() && (match_manager.get_player_civilization() != get_current_character().GetComponent<PlayerMove>().get_civilization())))
            {
                this.GetComponent<Renderer>().material = map_manager.types.get_material(civilization);
            }
            else if (is_occupied())
            {
                this.GetComponent<Renderer>().material = map_manager.types.occupied;
            }
            else if (is_selectable())
            {
                this.GetComponent<Renderer>().material = map_manager.types.selectable;
            }
        }
    }
}
