using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AI
{
    public class ai_memory
    {
        // Stores an action and a situation fingerprint.
        public void record (int actionType, int decisionNumber, int numberOfMoveActions, int numberOfBuildActions, int numberOfRecruitActions,
                            int numberOfAttackActions, int numberOfCaptureActions)
        {

        }

        // Recalls the best action types to take.
        public List<ActionType> recall (int decisionNumber, int numberOfMoveActions, int numberOfBuildActions, int numberOfRecruitActions,
                                           int numberOfAttackActions, int numberOfCaptureActions)
        {
            List<ActionType> types = new List<ActionType>();

            return types;
        }
    }
}
