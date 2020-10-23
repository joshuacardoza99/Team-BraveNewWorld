// This class holds the information and functions to connect all the players in a game together.
exports.match = function(id = 0)
{
	// External Class.
	let database_api = require("../server/database_api").database_api; // Database_Api Class that enables communication to the database.
	    database_api = new database_api();
	    
	// Global Variables.
	let players = [];   // All players in this match.
	let matchId = id;   // Id of the match.

	// Add a new player to the match.
	this.add_player = function(player = null)
	{
		players.push(player);
	}

	// Removes a player from the match.
	this.remove_player = function(currentPlayer = null)
	{
		players = players.filter(player => player != currentPlayer);
	}

	// Determins if the match is full or if it can take another player.
	this.is_full = function()
	{
		return players.length >= 10;
	}

	// Returns the match's id.
	this.get_id = function()
	{
		return matchId;
	}

	// Handles new incomming messages for this match.
	this.message_handler = function(message, playerSocket)
	{
		if (message.gameObject == "server_functions")
		{
			if (message.function == "get_player")
			{
				database_api.get_player((data) =>
				{
					let response = {   // JSON message to send to a player.
										gameObject: message.parameters[0],
										  function: message.parameters[1],
										parameters: data
									};

					playerSocket.send(JSON.stringify(response));
				})
			}
			else
			{
				database_api[message.function](message.parameters);
			}
		}
		else
		{
			broadcast(message, playerSocket);
		}
	}

	// Sends the message to all other players in this match.
	let broadcast = function (message, playerSocket)
	{
		this.players.forEach((nextPlayerSocket) =>
		{
			if (nextPlayerSocket !== playerSocket)
			{
				nextPlayerSocket.send(JSON.stringify(message));
			}
		})
	}
}