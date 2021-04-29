using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Threading;

namespace AI
{
    // This class wraps decisions with the related information on it's success.
    public class decision
    {
        public int decisionNumber;   // The decision number this one was in a game.
        public int numberOfMoves;    // Number of move actions that could be taken now.
        public int numberOfBuilds;   // Number of build actions that could be taken now.
        public int numberOfAttacks;  // Number of attack actions that could be taken now.
        public int numberOfRecruits; // Number of recruit actions that could be taken now.
        public int numberOfCaptures; // Number of capture actions that could be taken now.
        public int action;           // The action type that was taken.
        public int weight;           // The success gage of this action.

        // Contructor for decision class.
        public decision()
        {
            this.decisionNumber = 0;
            this.numberOfMoves = 0;
            this.numberOfBuilds = 0;
            this.numberOfAttacks = 0;
            this.numberOfRecruits = 0;
            this.numberOfCaptures = 0;
            this.action = 0;
            this.weight = 0;
        }

        // Contructor for decision class.
        public decision(int decisionNumber, int numberOfMoves, int numberOfBuilds, int numberOfAttacks, int numberOfRecruits,
                        int numberOfCaptures, int action, int weight)
        {
            this.decisionNumber = decisionNumber;
            this.numberOfMoves = numberOfMoves;
            this.numberOfBuilds = numberOfBuilds;
            this.numberOfAttacks = numberOfAttacks;
            this.numberOfRecruits = numberOfRecruits;
            this.numberOfCaptures = numberOfCaptures;
            this.action = action;
            this.weight = weight;
        }
    }

    public class ai_memory
    {
        // External Classes //
        import_manager import_manager;

        // Public Variables //
        public List<decision> nextDecisions = new List<decision>();
        public bool           recalling     = false;

        // Private Variables //
        private int            currentCivilization = -1;

        // Stores an action and a situation fingerprint.
        public void record (decision decision)
        {
            if (import_manager == null)
            {
                import_manager = GameObject.Find("network_manager").GetComponent<import_manager>();
            }

            import_manager.run_function_all("database_functions", "record_movements", new string[1] { JsonUtility.ToJson(decision) });
        }

        // Recalls the best action types to take.
        public void recall (int decisionNumber, int civilizaiton)
        {
            if (!recalling)
            {
                recalling = true;

                if (import_manager == null)
                {
                    import_manager = GameObject.Find("network_manager").GetComponent<import_manager>();
                }

                import_manager.run_database_function("get_movements", new string[1] { decisionNumber.ToString() }, civilizaiton);

                currentCivilization = civilizaiton;

                /*Thread.Sleep(5000);

                nextDecisions = JsonUtility.FromJson<List<decision>>(import_manager.lastDatabaseResponse[currentCivilization]);
                */

                
            }
        }

        // Increase the weight of a successful decision.
        public void promote_decision(decision decision)
        {
            if (import_manager == null)
            {
                import_manager = GameObject.Find("network_manager").GetComponent<import_manager>();
            }

            import_manager.run_function_all("database_functions", "promote_movements", new string[1] { JsonUtility.ToJson(decision) });
        }

        // Decreases the weight of a failed decision.
        public void demote_decision(decision decision)
        {
            if (import_manager == null)
            {
                import_manager = GameObject.Find("network_manager").GetComponent<import_manager>();
            }

            import_manager.run_function_all("database_functions", "demote_movements", new string[1] { JsonUtility.ToJson(decision) });
        }
    }
}
