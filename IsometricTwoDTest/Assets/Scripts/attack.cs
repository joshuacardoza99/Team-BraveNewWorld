using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

public class attack : MonoBehaviour
{
    match_manager match_manager;
    map_manager map_manager;

    public GameObject ally;
    public GameObject enemy;
    public GameObject temp;

    public List<Tile> enemylist = new List<Tile>();
    public List<Tile> attackable = new List<Tile>();

    void Start()
    {
        match_manager = GameObject.Find("network_manager").GetComponent<match_manager>();
        map_manager = GameObject.Find("Map").GetComponent<map_manager>();
    }


    void Update()
    {
        if (Input.GetMouseButtonDown(0))
        {
            RaycastHit hit;
            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);

            if (Physics.Raycast(ray, out hit) && (hit.transform.GetComponent<PlayerMove>() != null))
            {
                temp = hit.transform.gameObject;
                if (match_manager.get_local_player().civilization == temp.GetComponent<PlayerMove>().civilization)
                    ally = temp;
            }
            else
                ally = null;
        }
        temp = null;

        if (ally != null)
            check_attack_range();

        if (!enemylist.Any())
            reset_tiles();
    }

    public void check_attack_range()
    {
        // attackable = ally.GetComponent<PlayerMove>().currentTile.get_walkable_tiles(ally.GetComponent<PlayerMove>().attackRange);

        foreach (Tile tile in ally.GetComponent<PlayerMove>().currentTile.get_walkable_tiles(ally.GetComponent<PlayerMove>().attackRange))
        {
            if (!attackable.Contains(tile))
                attackable.Add(tile);

            if ((tile.is_occupied()) && (tile.get_current_character().GetComponent<PlayerMove>().civilization != match_manager.get_local_player().civilization))
            {
                tile.GetComponent<Renderer>().material = map_manager.types.attackable;
                tile.set_attackable();

                if (!enemylist.Contains(tile))
                enemylist.Add(tile);
            }
        }
    }

    public void reset_tiles()
    {
        foreach (Tile reset in enemylist)
        {
            if (!attackable.Contains(reset))
            {
                reset.GetComponent<Renderer>().material = map_manager.types.get_material(reset.get_civilization());
                reset.set_unattackable();
                enemylist.Remove(reset);
            }
        }
    }

    public void reset_attack_range()
    {
        attackable.Clear();
    }
}
