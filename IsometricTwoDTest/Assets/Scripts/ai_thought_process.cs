using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using AI;

public class ai_thought_process : MonoBehaviour
{
    // External Classes //
    match_manager match_manager;
    map_manager map_manager;

    [SerializeField] private int      civilization = -1;         // Civilization of this AI.
    [SerializeField] private bool     running = false;           // Determines if the AI is running.
    ai_tools tools = new ai_tools();                             // Imports the ai_tool script.
    ai_action_generator actionMaker = new ai_action_generator(); // Imports the ai_action_generator.
    ai_memory           memory      = new ai_memory();           // Imports the ai_memory script.


    // Private Variables //
    private int decisionCount = 0;

    // Start is called before the first frame update
    void Start()
    {
        match_manager = GameObject.Find("network_manager").GetComponent<match_manager>();
        map_manager = GameObject.Find("Map").GetComponent<map_manager>();
    }

    // Update is called once per frame
    void Update()
    {
        if (running)
        {

            StartCoroutine(move());
        }
    }

    IEnumerator move()
    {
        running = false;
        yield return new WaitForSeconds(5);

        PlayerMove champion = match_manager.choose_player(civilization).champion;
        List<Action> availableMoves = actionMaker.find_player_actions(civilization);
        availableMoves[UnityEngine.Random.Range(0, availableMoves.Count)]();
        running = true;
       // tools.move_unit(map_manager.map[champion.get_grid()[0] + 1, champion.get_grid()[1] + 1].ground.GetComponent<Tile>(), champion, civilization);
    }

    // Sets the AI's civilization if it has not already been set.
    public void set_civilization(int newCivilization)
    {
        if (civilization == -1)
        {
            civilization = newCivilization;
        }
    }

    // Sets the AI's mind in motion.
    public void start_ai()
    {
        if (civilization != -1)
        {
            // Ensures the match_manager pagackage is imported befor the function starts.
            if (match_manager == null)
            {
                match_manager = GameObject.Find("network_manager").GetComponent<match_manager>();
            }

            // Ensures the map_manager pagackage is imported befor the function starts.
            if (map_manager == null)
            {
                map_manager = GameObject.Find("Map").GetComponent<map_manager>();
            }

            tools.join_match(civilization);
            running = true;
        }
        else
        {
            Debug.LogError("Cannot start an AI without a civilization.");
        }
    }

    // Gets a list of valid decisions
    public List<Action> nextActions()
    {
       List<ai_memory.decision> allAvailableDecisions = memory.recall(decisionCount, civilization);

       if (allAvailableDecisions.Count > 0)
       {

       }

        return new List<Action>();
    }

}
