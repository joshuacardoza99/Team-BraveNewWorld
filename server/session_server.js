// This program launches a new session_server to manage players connecting to different matches.

// External classes.
let player     = require("../server/player").player;   // Player Class that holds connection and game information for a player.
let match      = require("../server/match").match;     // Match Class that holds the information and functions to connect all the players in a game together.
let web_socket = require("ws");                        // WS Class that allows to start connections with the players.
var Express = require("express");
var App     = Express();

// Global variables.
let socketOptions = {      "host": '0.0.0.0',//"172.31.7.174",             // Holds the options for the WebSocket server.
	                       "port": 5678,
	                       "path": "/",
	                 "maxPayload": 10e7
	                }
let server        = new web_socket.Server(socketOptions); // Holds the WebSocket server.
let matches       = [];                                   // All matches on this server.
let matchNumber   = 0;                                    // Next match id.
let players       = [];                                   // All the players connected to this server.

// Finds the match the player is in.
let find_player_match = function(playerSocket)
{
	let playerMatch = null; // The match id for the match the player is playing in.

	players.forEach((nextPlayer) =>
	{
		if (nextPlayer.socket == playerSocket)
		{
			playerMatch = nextPlayer.match;
		}
	})

	return matches.filter((match) => match.get_id() == playerMatch)[0];
}

// Finds a match for the player to join.
let find_match  = function ()
{
	let matchFound = null; // Match Object for the next player to join.

	if (matches.length > 0)
	{
		matches.forEach((match) =>
		{
			if (!match.is_full())
			{
				matchFound = match;
			}
		})
	}
	
	if (matchFound == null)
	{
		matchFound = new match(matchNumber++);
		matches.push(matchFound);
	}

	return matchFound;
}

// Handles new incomming messages for this match.
let message_handler = function(message, playerSocket)
{
	// server_function.add_player function
	// Parameter = [string name, string civilization]
	if (message.gameObject == "server_functions" && message.function == "add_player")
	{
		let match     = find_match();                                   // Match object that the new player will join.
		let newPlayer = new player(message.parameters[0],               // Player object for the new player.
			                       message.parameters[1],
			                       playerSocket._socket.remoteAddress,
			                       match.get_id(), playerSocket);

		players.push(newPlayer)
		match.add_player(playerSocket);
	}
	else
	{
		find_player_match(playerSocket).message_handler(message, playerSocket);
	}
}

// Starts the HTTP server to listen for request.
App.use("/game", Express.static(__dirname + "/WebBuild/"));
App.listen(80);

// Starts the match server listing for connections.
server.on("connection", (playerSocket) =>
{
	let currentPlayer = playerSocket; // Socket connected to the current player.
	console.log("connected");

	try
	{
	    players.push(currentPlayer);

	    playerSocket.on("message", (message) =>
		{
			try
			{
				console.log("received message");
				message_handler(JSON.parse(message), currentPlayer);
			}
			catch (error)
			{
				console.log(error);
			}
		})

		playerSocket.on("error", (error) =>
		{
			console.log(error);
		})

		playerSocket.on("close", () =>
		{
			let playerMatch = find_player_match(currentPlayer);

			players = players.filter(player => player != currentPlayer);

			if (playerMatch != null)
			{
				playerMatch.remove_player(currentPlayer);
			}
		})
	}
	catch (error)
	{
		console.log(error);
	}
})