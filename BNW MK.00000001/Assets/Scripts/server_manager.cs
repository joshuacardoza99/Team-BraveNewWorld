using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using NativeWebSocket;

public class server_manager : MonoBehaviour
{
    // Public Global Variables //
    public string url = "ws://localhost:5678/"; // Public global variables that can be changed in the Unity UI.

    // Private Global Variables //
    private WebSocket webSocket;

    // Classes //

    // This class wraps messages that are to be send to other players or the server.
    private class update_message
    {
        public string gameObject;
        public string function;
        public string[] parameters;

        // Contructor for update_message class.
        public update_message(string gameObject, string function, string[] parameters)
        {
            this.gameObject = gameObject;
            this.function = function;
            this.parameters = parameters;
        }
    }

    // Unity Triggured Functions //

    // Starts listening for messages when loaded by Unity.
    // Style Exception: This function's name must be styled like this so Unity will run it.
    async void Start()
    {
        webSocket = new WebSocket(url);

        webSocket.OnOpen += () =>
        {
            Debug.Log("Connection open!");
        };

        webSocket.OnError += (e) =>
        {
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

        // Easter egg to test the nextworking with.
        if (Input.GetKeyDown(KeyCode.Space))
        {
            webSocket.SendText("Hi!Hi!Hi!");
        }
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
}
