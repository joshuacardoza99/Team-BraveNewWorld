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
    import_manager import_manager;

    [SerializeField] private int      civilization = -1;         // Civilization of this AI.
    [SerializeField] private bool     running = false;           // Determines if the AI is running.
    ai_tools tools = new ai_tools();                             // Imports the ai_tool script.
    ai_action_generator actionMaker = new ai_action_generator(); // Imports the ai_action_generator.
    ai_memory           memory      = new ai_memory();           // Imports the ai_memory script.


    // Private Variables //
    private int decisionCount = 0;
    private List<decision> gameDecisions = new List<decision>();

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

            StartCoroutine(think());
        }
    }

    IEnumerator think()
    {
        running = false;

       /* List<Action> attackActions = actionMaker.get_actions(ActionType.attack, civilization, decisionCount);
        List<Action> captureActions = actionMaker.get_actions(ActionType.capture, civilization, decisionCount);
        List<Action> buildActions = actionMaker.get_actions(ActionType.build, civilization, decisionCount);
        List<Action> recruitActions = actionMaker.get_actions(ActionType.recruit, civilization, decisionCount);
        List<Action> movementActions = actionMaker.get_actions(ActionType.movement, civilization, decisionCount);
        decision nextDecision = new decision(decisionCount, movementActions.Count, buildActions.Count, attackActions.Count,
                                             recruitActions.Count, captureActions.Count, 0, 0);
        List<decision> resonableDecisions = new List<decision>();
        int highestWeight = 0;

        List<decision> recalledDecisions = recall(decisionCount, civilization);*/

        yield return new WaitForSeconds(5);

        /*if (recalledDecisions.Count > 0)
        {
            recalledDecisions.ForEach((decision thought) =>
            {
                if ((isClose(thought.numberOfMoves, nextDecision.numberOfMoves) && thought.action == ((int)ActionType.movement)) ||
                    (isClose(thought.numberOfBuilds, nextDecision.numberOfBuilds) && thought.action == ((int)ActionType.build)) ||
                    (isClose(thought.numberOfAttacks, nextDecision.numberOfAttacks) && thought.action == ((int)ActionType.attack)) ||
                    (isClose(thought.numberOfRecruits, nextDecision.numberOfRecruits) && thought.action == ((int)ActionType.recruit)) ||
                    (isClose(thought.numberOfCaptures, nextDecision.numberOfCaptures) && thought.action == ((int)ActionType.capture)))
                {
                    if (thought.weight > highestWeight)
                    {
                        highestWeight = thought.weight;
                    }

                    if (isClose(thought.weight, highestWeight))
                    {
                        resonableDecisions.Add(thought);
                    }
                }
            });
        }

        

        if (resonableDecisions.Count > 0)
        {
            nextDecision.action = resonableDecisions[UnityEngine.Random.Range(0, resonableDecisions.Count)].action;
           
            availableMoves = actionMaker.get_actions((ActionType) nextDecision.action, civilization, decisionCount);
        }
        else
        {*/
        List<Action> availableMoves = actionMaker.find_player_actions(civilization);

        if (actionMaker.get_actions(ActionType.attack, civilization, decisionCount).Count > 0 && UnityEngine.Random.Range(0, 100) > 50)
            {
               // nextDecision.action = (int) ActionType.attack;
                availableMoves = actionMaker.get_actions(ActionType.attack, civilization, decisionCount);
            }
            else if (actionMaker.get_actions(ActionType.capture, civilization, decisionCount).Count > 0 && UnityEngine.Random.Range(0, 100) > 50)
            {
              //  nextDecision.action = (int) ActionType.capture;
                availableMoves = actionMaker.get_actions(ActionType.capture, civilization, decisionCount);
            }
            else if (actionMaker.get_actions(ActionType.recruit, civilization, decisionCount).Count > 0 && UnityEngine.Random.Range(0, 100) > 80)
            {
               // nextDecision.action = (int)ActionType.recruit;
                availableMoves = actionMaker.get_actions(ActionType.recruit, civilization, decisionCount);
            }
            else if (actionMaker.get_actions(ActionType.build, civilization, decisionCount).Count > 0 && UnityEngine.Random.Range(0, 100) > 80)
            {
                //nextDecision.action = (int)ActionType.build;
                availableMoves = actionMaker.get_actions(ActionType.build, civilization, decisionCount);
            }
            else if (actionMaker.get_actions(ActionType.movement, civilization, decisionCount).Count > 0 && UnityEngine.Random.Range(0, 100) > 50)
            {
               // nextDecision.action = (int)ActionType.movement;
                availableMoves = actionMaker.get_actions(ActionType.movement, civilization, decisionCount);
            }
      //  }

       // memory.record(nextDecision);

        if (availableMoves.Count > 0)
        {
            availableMoves[UnityEngine.Random.Range(0, availableMoves.Count)]();
        }

        //gameDecisions.Add(nextDecision);
        decisionCount++;
        running = true;
    }

    // Sets the AI's civilization if it has not already been set.
    public void set_civilization(int newCivilization)
    {
        if (civilization == -1)
        {
            civilization = newCivilization;
        }
    }

    // Gets the AI's civilization
    public int get_civilization()
    {
        return civilization;
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

    // Stops the ai from running.
    public void stop()
    {
        running = false;
    }

    // Determines if something is close or not.
    public bool isClose(int x, int y)
    {
        int rangeWithin2OfX = (x + 2) - (x - 2);
        int rangeWithin2OfY = (y + 2) - (y - 2);
        int rangeWithin10PercentOfX = (x + (x / 10)) - (x - (x / 10));
        int rangeWithin10PercentOfY = (y + (y / 10)) - (y - (y / 10));
        int xRange = 0;
        int yRange = 0;

        if (rangeWithin2OfX >= rangeWithin10PercentOfX)
        {
            xRange = 2;
        }
        else
        {
            xRange = (x / 10);
        }

        if (rangeWithin2OfY >= rangeWithin10PercentOfY)
        {
            yRange = 2;
        }
        else
        {
            yRange = (y / 10);
        }

        return ((((x + xRange) <= (y + yRange)) || (y + yRange) <= (x + xRange)) ||
                (((x - xRange) >= (y - yRange)) || (y - yRange) >= (x - xRange)));
    }

    // Recalls the best action types to take.
    public List<decision> recall(int decisionNumber, int civilizaiton)
    {
        memory.recall(decisionNumber, civilizaiton);

        StartCoroutine(read_data());

        if (memory.nextDecisions != null && memory.nextDecisions.Count > 0)
        {
            return memory.nextDecisions;
        }
        else
        {
            return new List<decision>();
        }
    }

    // Reads the data from the database off of the import_manager.
    IEnumerator read_data()
    {
        if (import_manager == null)
        {
            import_manager = GameObject.Find("network_manager").GetComponent<import_manager>();
        }

        yield return new WaitForSeconds(3);

        if (civilization >= 0)
        {
            Debug.Log("Reading from the DATABASE!!!");
            Debug.Log(import_manager.lastDatabaseResponse[0]);
            Debug.Log(import_manager.lastDatabaseResponse[1]);
            memory.nextDecisions = JsonUtility.FromJson<List<decision>>(import_manager.lastDatabaseResponse[civilization]);
        }
        else
        {
            memory.nextDecisions = new List<decision>();
        }

        memory.recalling = false;
    }


}
