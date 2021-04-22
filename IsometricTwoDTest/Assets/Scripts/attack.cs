using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;
using UnityEngine.UI;
using TMPro;

public class attack : MonoBehaviour
{
    match_manager match_manager;
    map_manager map_manager;
    import_manager import_manager;

    public GameObject ally;
    public GameObject enemy;
    public GameObject temp;
    public GameObject attackPopUp; 

    public List<Tile> enemylist = new List<Tile>();
    public List<Tile> attackable = new List<Tile>();

    void Start()
    {
        match_manager = GameObject.Find("network_manager").GetComponent<match_manager>();
        map_manager = GameObject.Find("Map").GetComponent<map_manager>();
        import_manager = GameObject.Find("network_manager").GetComponent<import_manager>(); // Connects to the import_manager.
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
                else
                    enemy = temp;
            }

            if ((enemy != null) && (ally != null) && (ally.GetComponent<PlayerMove>().canAttack))
                attacking();
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

    public void attacking()
    {
       // if (enemylist.Contains(enemy.GetComponent<PlayerMove>().currentTile))
        if (enemy.GetComponent<PlayerMove>().currentTile.is_attackable())
        {
            /// attatch attack animation 
            ally.GetComponent<PlayerMove>().anim.Play("CharacterArmature|Punch");
            //enemy.GetComponent<PlayerMove>().health -= ally.GetComponent<PlayerMove>().damage;
            import_manager.run_function_all("network_manager", "update_unit_health", new string[3] { enemy.GetComponent<PlayerMove>().get_civilization().ToString(), enemy.gameObject.name, ally.GetComponent<PlayerMove>().damage.ToString() });
            enemy.GetComponent<PlayerMove>().anim.Play("CharacterArmature|RecieveHit");

            // Attack pop up
            Vector3 tilePosition = enemy.transform.position;
            GameObject attackInstance = Instantiate(attackPopUp, tilePosition, Quaternion.identity);
            attackInstance.transform.GetChild(0).GetComponent<TextMeshPro>().text = "- " + ally.GetComponent<PlayerMove>().damage.ToString();


            // attatch damage animations 
            ally.GetComponent<PlayerMove>().startAttackCD = true;
            ally.GetComponent<PlayerMove>().canAttack = false;

            reset_units();
        }
    }

    public void reset_units()
    {
        ally = null;
        enemy = null;
    }
}
