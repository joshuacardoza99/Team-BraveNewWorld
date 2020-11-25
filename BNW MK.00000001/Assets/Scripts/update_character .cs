/*using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using NativeWebSocket;

public class update_character : MonoBehaviour
{
    // This class wraps messages that are to be send to other players or the server.
    private class update_message
    {
        public string   gameObject; // GameObject's name that the function being called is in.
        public string   function;   // Function's name for the function being called.
        public string[] parameters; // List of parameters the function being called need.

        // Contructor for update_message class.
        public update_message(string gameObject, string function, string[] parameters)
        {
            this.gameObject = gameObject;
            this.function   = function;
            this.parameters = parameters;
        }
    }

    // Runs the function in the received message.
    private void deliver_message(byte[] bytes)
    {
       var message = JsonUtility.FromJson<update_message>
       GameObject.Find(message.gameObject).SendMessage(message.function, message.parameters);
    }
}*/