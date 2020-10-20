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
	let playerMatch = null;

	players.forEach((nextPlayer) =>
	{
		if (nextPlayer.socket == player)
		{
			playerMatch = nextPlayer.match;
		}
	})

	console.log(matches.filter((match) => match.get_id() == playerMatch));
	return matches.filter((match) => match.get_id() == playerMatch);
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
let message_handler = function(message, sender)
{
	// server_function.add_player function
	// Parameter = [string name, string civilization]
	if (message.gameObject == "server_functions" && message.function == "add_player")
	{
		let match = find_match();
		let newPlayer = new player(message.parameters[0], message.parameters[1], sender._socket.remoteAddress, match.get_id(), sender);

		players.push(newPlayer)
		match.add_player(sender);

		sender.send(JSON.stringify(
					{
						gameObject: "network_manager",
						  function: "set_match",
						parameters: [newPlayer.match, !match.has_host()]
					}));
		console.log("sent match data");
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