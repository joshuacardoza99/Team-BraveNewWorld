// External classes.
let player     = require("../server/player").player;
let match      = require("../server/match").match;
let web_socket = require("ws");

// Global variables.
let socketOptions = {      "host": "0.0.0.0",
	                       "port": 5678,
	                       "path": "/",
	                 "maxPayload": 10e7
	                }
let server        = new web_socket.Server(socketOptions);
let matches       = [];
let matchNumber   = 0;
let players       = [];

// Finds the match the player is in.
let find_player_match = function(player)
{
	let match = null;

	players.forEach((nextPlayer) =>
	{
		if (nextPlayer.socket == player)
			match = player.match;
	})

	return match;
}

// Finds a match for the player to join.
let find_match  = function (player)
{
	let matchFound = null;

	if (matches.length > 0)
	{
		matches.forEach((match) =>
		{
			if (!match.is_full())
			{
				matchFound = match.get_id();
			}
		})
	}
	
	if (matchFound == null)
	{
		matchFound = matchNumber;
		matches.push(new match(matchNumber++));
	}

	return matchFound;
}

// Handles new incomming messages for this match.
let message_handler = function(message, sender)
{
	// server_function.add_player function
	// Parameter = [string name]
	if (message.gameObject == "server_functions" && message.function == "add_player")
	{

		players.push(new player(message.parameters[0], message.parameters[1], sender._socket.remoteAddress, 0, sender))
		matches[find_match()].add_player(sender);

		console.log(message.parameters[0] + " is connected now.");
	}
	else
	{
		find_player_match(sender).message_handler(message, sender);
	}
}

// Starts the match server listing for connections.
server.on("connection", (socket) =>
{
	let currentPlayer = socket;
	console.log("connected");

	try
	{
	    players.push(currentPlayer);

	    socket.on("message", (message) =>
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

		socket.on("error", (error) =>
		{
			console.log(error);
		})

		socket.on("close", () =>
		{
			players = players.filter(player => player != currentPlayer);
		})
	}
	catch (error)
	{
		console.log(error);
	}
})