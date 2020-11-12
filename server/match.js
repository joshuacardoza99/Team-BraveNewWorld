// This class holds the information and functions to connect all the players in a game together.
exports.match = function(id = 0)
{
	// External Class.
	let database_api = require("../server/database_api").database_api; // Database_Api Class that enables communication to the database.
	    database_api = new database_api();
	    
	// Global Variables.
	let players = [];           // All players in this match.
	let matchId = id;           // Id of the match.
	let maxNumberOfPlayers = 3; // The number of players for a match.
	let mapSeed = 1000;         // The seed for the match's map.

	// Add the match to the database.

	// Add a new player to the match.
	this.add_player = function(player = null)
	{
		console.log("Adding a Player");
		if (players.length == 0)
		{
			player.host = true;
			console.log("Setting a Host");

			player.socket.send(JSON.stringify(
			{
				gameObject: "network_manager",
				  function: "set_numberOfPlayers",
				parameters: [maxNumberOfPlayers]
			}));
		}
		
		player.socket.send(JSON.stringify(
		{
			gameObject: "network_manager",
			  function: "setup_match",
			parameters: [matchId.toString(), players.length == 0 ? "true" : "false", mapSeed]
		}));

		// push player data to the database here

		players.push(player);
	}

	// Removes a player from the match.
	this.remove_player = function(currentPlayer = null)
	{
		players = players.filter(player => (player.name != currentPlayer.name && player.ip == currentPlayer.ip));

		if (currentPlayer.host)
		{
			players[0].host = true;

			players[0].socket.send(JSON.stringify(
			{
				gameObject: "network_manager",
				  function: "set_host",
				parameters: []
			}));
		}

		// Update the database to mark the player as absent.
	}

	// Determins if the match is full or if it can take another player.
	this.is_full = function()
	{
		return players.length >= maxNumberOfPlayers;
	}

	// Returns the match's id.
	this.get_id = function()
	{
		return matchId;
	}

	this.is_available = function(civilization)
	{
		let is_available = true;

		players.foreach((player) =>
		{
			is_available = player.civilization != civilization;
		})

		console.log("Is Available: " + is_available);
		return is_available;
	}

	// Handles new incomming messages for this match.
	this.message_handler = function(message, playerSocket)
	{
		if (message.gameObject == "server_functions")
		{
			if (message.function == "get_player")
			{
				/*database_api.get_player((data) =>
				{
					let response = {   // JSON message to send to a player.
										gameObject: message.parameters[0],
										  function: message.parameters[1],
										parameters: data
									};

					playerSocket.send(JSON.stringify(response));
				})*/
			}
			// Sets the map seed for the match.
			else if (message.function == "set_match_map")
			{
				console.log("Setting the map to " + message.parameters[0]);
				this.mapSeed = parseInt(message.parameters[0]);
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
		console.log(players.length);
		players.forEach((nextPlayer) =>
		{
			if (nextPlayer.socket != playerSocket)
			{
				console.log("Is broadcasting");
				nextPlayer.socket.send(JSON.stringify(message));
			}
		})
	}
}