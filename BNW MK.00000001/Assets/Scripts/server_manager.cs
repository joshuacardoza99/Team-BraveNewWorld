using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using NativeWebSocket;

public class server_manager : MonoBehaviour
{
    // Public Global Variables //
    private string url = "ws://ec2-3-138-134-244.us-east-2.compute.amazonaws.com:5678"; // Public global variables that can be changed in the Unity UI.

    // Private Global Variables //
    private WebSocket webSocket;  // WebSocket Class that allows to start connections with the players.

    // Private Classes //

    // This class wraps messages that are to be send to other players or the server.
    private class update_message
    {
        public string gameObject;   // GameObject's name that the function being called is in.
        public string function;     // Function's name for the function being called.
        public string[] parameters; // List of parameters the function being called need.

        // Contructor for update_message class.
        public update_message(string gameObject, string function, string[] parameters)
        {
            this.gameObject = gameObject;
            this.function   = function;
            this.parameters = parameters;
        }
    }

    // Unity Triggured Functions //

    // Starts listening for messages when loaded by Unity.
    // Style Exception: This function's name must be styled like this so Unity will run it.
    async void Start()
    {
        webSocket = new WebSocket(url); // 

        webSocket.OnOpen += () =>
        {
            Debug.Log("Connection open!");
        };

        webSocket.OnError += (e) =>
        {
            Debug.Log(e);
            Debug.Log("Error! " + e);
        };

        webSocket.OnClose += (e) =>
        {
            Debug.Log("Connection closed!");
        };

        webSocket.OnMessage += (bytes) =>
        {
            deliver_message(bytes);
        };

        await webSocket.Connect();
    }

    // Allows the messages to be sent when Unity runs the update on this class.
    // Style Exception: This function's name must be styled like this so Unity will run it.
    void Update()
    {
        #if !UNITY_WEBGL || UNITY_EDITOR
                webSocket.DispatchMessageQueue();
        #endif
    }

    // Private Functions

    // Properly shutdowns the connection to the server when the application is closed.
    // Style Exception: This function's name must be styled like this so Unity will run it.
    private async void OnApplicationQuit()
    {
        await webSocket.Close();
    }

    // Runs the function in the received message.
    private void deliver_message(byte[] bytes)
    {
        var message = JsonUtility.FromJson<update_message>(System.Text.Encoding.UTF8.GetString(bytes));
        GameObject.Find(message.gameObject).SendMessage(message.function, message.parameters);
    }

    // Public Functions

    // Sends a message to all others in the network.
    public void send(string gameObject, string function, string[] parameters)
    {
        webSocket.SendText(JsonUtility.ToJson(new update_message(gameObject, function, parameters)));
    }

    // Resets the servers connection
    // Parameters = []
    public void reset(string[] parameters)
    {
        webSocket.Close();
        Start();
    }
}