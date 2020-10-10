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
let players       = [];

// Finds the match the player is in.
let find_match = function(player)
{
	let match = null;

	this.players.forEach((nextPlayer) =>
	{
		if (nextPlayer.socket == player)
			match = player.match;
	})

	return match;
}

// Handles new incomming messages for this match.
let message_handler = function(message, sender)
{
	// server_function.add_player function
	// Parameter = [string name]
	if (message.gameObject == "server_functions" && message.function == "add_player")
	{
		if (this.matches == [])
		{
			this.matches.push(new match(0));
		}

		this.players.push(new player(message.parameters[0], sender._socket.remoteAddress, 0, sender))
		this.matches[0].add_player(sender);
	}
	else
	{
		find_match(sender).message_handler(message, sender);
	}
}

// Starts the match server listing for connections.
server.on("connection", (socket) =>
{
	let currentPlayer = socket;

	try
	{
	    this.players.push(currentPlayer);

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
			this.players = this.players.filter(player => player != currentPlayer);
		})
	}
	catch (error)
	{
		console.log(error);
	}
})