// This program launches a new session_server to manage players connecting to different matches.

// External classes.
let player     = require("../server/player").player;   // Player Class that holds connection and game information for a player.
let match      = require("../server/match").match;     // Match Class that holds the information and functions to connect all the players in a game together.
let web_socket = require("ws");                        // WS Class that allows to start connections with the players.
var Express = require("express");
var App     = Express();
let database_api = require("../server/database_api").database_api; // Database_Api Class that enables communication to the database.
    database_api = new database_api("team-bravenewworld.csp1omydlp3q.us-east-2.rds.amazonaws.com", "root", "unitybackend", "team-bravenewworld");

// Global variables.
App.use("/game", Express.static(__dirname + "/WebBuild/"));
let webServer = App.listen(80);
let socketOptions = {      "host": '0.0.0.0',//"172.31.7.174",             // Holds the options for the WebSocket server.
	                       "port": 5678,
	                       "path": "/",
	                 "maxPayload": 10e7
	                }
let server        = new web_socket.Server({"server": webServer}); // Holds the WebSocket server.
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

// Determins if the ip and champion name of the player was in the match.
let was_in = function(ip = "", championNmae = "")
{
	let matchId = null; //calls the database here and have a players object instead of null

	return matchId;
}

// Finds a match for the player to join.
let find_match  = function (player)
{
	let matchFound = null; // Match Object for the next player to join.

	if (matches.length > 0)
	{
		matches.forEach((match) =>
		{
			if (!match.is_done())
			{
				if ((!match.is_full()) && match.is_available(player.civilization))
				{
					matchFound = match;
				}
				else if (was_in(player.ip, player.name))
				{
					//matchFound = matches.filter(match => match.get_id() == was_in(player.ip, player.name))[0];
				}
			}
			else
			{
				matches = matches.filter(nextMatch => nextMatch.get_id() != match.get_id());
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
		let newPlayer = new player(message.parameters[0],               // Player object for the new player.
			                       message.parameters[1],
			                       playerSocket._socket.remoteAddress,
			                       0, playerSocket);

		let match       = find_match(newPlayer);                        // Match object that the new player will join.
		newPlayer.match = match.get_id();

		players.push(newPlayer)
		match.add_player(newPlayer);
	}
	else if (message.gameObject == "database_functions")
	{
		let tempMatch = new match(-1);

		tempMatch.message_handler(message, playerSocket);
	}
	else
	{
		let playerMatch = find_player_match(playerSocket);

		if (playerMatch != null)
		{
			playerMatch.message_handler(message, playerSocket);
		}
	}
}

// Starts the HTTP server to listen for request.

// Starts the match server listing for connections.
server.on("connection", (playerSocket) =>
{
	let currentPlayer = playerSocket; // Socket connected to the current player.

	try
	{
	    players.push(currentPlayer);

	    playerSocket.on("message", (message) =>
		{
			try
			{
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
			let currentPlayerObject = players = players.filter(player => player != currentPlayer);

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