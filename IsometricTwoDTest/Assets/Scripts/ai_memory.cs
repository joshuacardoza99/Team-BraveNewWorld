using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Threading;

namespace AI
{
    public class ai_memory
    {
        // External Classes //
        import_manager import_manager;

        // Sub Classes //

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
            public decision(int decisionNumber,   int numberOfMoves, int numberOfBuilds, int numberOfAttacks, int numberOfRecruits,
                            int numberOfCaptures, int action,        int weight)
            {
                this.decisionNumber   = decisionNumber;
                this.numberOfMoves    = numberOfMoves;
                this.numberOfBuilds   = numberOfBuilds;
                this.numberOfAttacks  = numberOfAttacks;
                this.numberOfRecruits = numberOfRecruits;
                this.numberOfCaptures = numberOfCaptures;
                this.action           = action;
                this.weight           = weight;
            }
        }


        // Public Variables //
        public List<decision> nextDecisions = new List<decision>();
        public bool           recalling     = false;

        // Private Variables //
        private List<decision> gameDecisions       = new List<decision>();
        private int            currentCivilization = -1;

        // Stores an action and a situation fingerprint.
        public void record (decision decision)
        {
            if (import_manager == null)
            {
                import_manager = GameObject.Find("network_manager").GetComponent<import_manager>();
            }

            import_manager.run_function_all("server_function", "record_movements", new string[1] { JsonUtility.ToJson(decision) });
        }

        // Recalls the best action types to take.
        public List<decision> recall (int decisionNumber, int civilizaiton)
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

                Thread.Sleep(5000);

                nextDecisions = JsonUtility.FromJson<List<decision>>(import_manager.lastDatabaseResponse[currentCivilization]);

                recalling = false;
            }

            return nextDecisions;
        }

        // Reads the data from the database off of the import_manager.
        /*IEnumerator read_data()
        {
            recalling = true;

            yield return new WaitForSeconds(5);

            nextDecisions = JsonUtility.FromJson<List<decision>>(import_manager.lastDatabaseResponse[currentCivilization]);

            recalling = false;
        }*/

        // Increase the weight of a successful decision.
        public void promote_decision(decision decision)
        {
            if (import_manager == null)
            {
                import_manager = GameObject.Find("network_manager").GetComponent<import_manager>();
            }

            import_manager.run_function_all("server_function", "promote_movements", new string[1] { JsonUtility.ToJson(decision) });
        }

        // Decreases the weight of a failed decision.
        public void demote_decision(decision decision)
        {
            if (import_manager == null)
            {
                import_manager = GameObject.Find("network_manager").GetComponent<import_manager>();
            }

            import_manager.run_function_all("server_function", "demote_movements", new string[1] { JsonUtility.ToJson(decision) });
        }
    }
}
