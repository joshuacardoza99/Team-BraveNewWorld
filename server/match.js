// This class holds the information and functions to connect all the players in a game together.
exports.match = function(id = 0)
{
	// External Class.
	let database_api = require("../server/database_api").database_api; // Database_Api Class that enables communication to the database.
        database_api = new database_api("team-bravenewworld.csp1omydlp3q.us-east-2.rds.amazonaws.com", "root", "unitybackend", "team-bravenewworld");
	    
	// Global Variables.
	let players = [];           // All players in this match.
	let matchId = id;           // Id of the match.
	let maxNumberOfPlayers = 3; // The number of players for a match.
	let mapSeed = 1000;         // The seed for the match's map.
	let isDone  = false;        // Tells if the match is finished or if all the players have left.

	// Add the match to the database.
	//database_api.add_matchs ([matchId, mapSeed]);

	// Add a new player to the match.
	this.add_player = function(player = null)
	{
		
		if (players.length == 0)
		{
			player.host = true;

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
			parameters: [matchId.toString(), players.length == 0 ? "true" : "false", mapSeed.toString()]
		}));

		// Push player data to the database here
		//database_api.add_player([player.ip, player.name, player.civilization, player.match, "true"]);

		players.push(player);
	}

	// Removes a player from the match.
	this.remove_player = function(currentPlayer = null)
	{
		players = players.filter(player => (player.ip != currentPlayer.ip));

		broadcast(JSON.stringify(
		{
			gameObject: "network_manager",
			  function: "destroy_civilization",
			parameters: [currentPlayer.civilization.toString()]
		}), currentPlayer.socket)

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

		if (players.length == 0)
		{
			isDone = true;
		}
		
		// Update the database to mark the player as absent.
		//database_api.markPlayerAbsent([currentPlayer.ip, currentPlayer.name]);
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

	// Tells if the civilization is available to be played in this match.
	this.is_available = function(civilization)
	{
		var is_available = true;

		if (players.length > 0)
		{
			players.forEach((player) =>
			{
				is_available = ((player.civilization.toLowerCase() != civilization.toLowerCase()) && is_available);
			})
		}
		
		return is_available;
	}

	// Tells if the match is finished or if all the players have left.
	this.is_done = function ()
	{
		return isDone;
	}

	// Finds the current player from a socket.
	let get_player = function (playerSocket)
	{
		let player = null;

		players.forEach((nextPlayer) =>
		{
			if (nextPlayer.socket != playerSocket)
			{
				player = nextPlayer;
			}
		})

		return player;
	}

	// Handles new incomming messages for this match.
	this.message_handler = function(message, playerSocket)
	{
		if (message.gameObject == "server_functions")
		{
			
			if (message.function == "set_match_map")
			{
				mapSeed = parseInt(message.parameters[0]);

				//Updates the maps seed value in the database;
				//database_api.update_map([this.matchId.toString(), message.parameters[0]]);
			}
			else if (message.function = "get_movements")
			{
				database_api.get_movements(message.parameters[3], (result) =>
				{
					playerSocket.send(JSON.stringify({
						gameObject: message.parameters[0],
						  function: message.parameters[1],
						parameters: [message.parameters[2], JSON.stringify(result)]
					}))
				});
			}
			else if (message.function = "record_movements")
			{
				decision = JSON.parse(message.parameters[0]);
				console.log("The decision that was passed is what follows:");
				console.log(decision);

				database_api.record_movements(decision.decisionNumber, decision.numberOfMoves, decision.numberOfBuilds, decision.numberOfAttacks,
					                          decision.numberOfRecruits, decision.numberOfCaptures, decision.actions, decision.weight);
			}
			else if (message.function = "promote_movements")
			{
				decision = JSON.parse(message.parameters[0]);

				database_api.promote_movements(decision.decisionNumber, decision.numberOfMoves, decision.numberOfBuilds, decision.numberOfAttacks,
					                          decision.numberOfRecruits, decision.numberOfCaptures, decision.actions, decision.weight);
			}
			else if (message.function = "demote_movements")
			{
				decision = JSON.parse(message.parameters[0]);

				database_api.demote_movements(decision.decisionNumber, decision.numberOfMoves, decision.numberOfBuilds, decision.numberOfAttacks,
					                          decision.numberOfRecruits, decision.numberOfCaptures, decision.actions, decision.weight);
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
		players.forEach((nextPlayer) =>
		{
			if (nextPlayer.socket != playerSocket)
			{
				nextPlayer.socket.send(JSON.stringify(message));
			}
		})
	}
}