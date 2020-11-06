// This class holds the information and functions to connect all the players in a game together.
exports.match = function(id = 0)
{
	// External Class.
	let database_api = require("../server/database_api").database_api; // Database_Api Class that enables communication to the database.
		database_api = new database_api("team-bravenewworld.csp1omydlp3q.us-east-2.rds.amazonaws.com",
		                                "root", "unitybackend", "team-bravenewworld");
	    
	// Global Variables.
	let players    = [];   // All players in this match.
	let matchId    = id;   // Id of the match.
	let map        = 0;    // The seed to genrate the map.
	let maxPlayers = 10;

	// Add a new player to the match.
	this.add_player = function(player = null)
	{
		console.log("A player is being added");
		player.send(JSON.stringify(
		{
			gameObject: "network_manager",
			  function: "setup_match",
			parameters: [matchId.toString(), players.length > 1 ? "false" : "true", map.toString()]
		}));

		if (players.length > 1)
		{
			player.send(JSON.stringify(
			{
				gameObject: "network_manager",
				  function: "set_numberOfPlayers",
				parameters: [maxPlayers.toString()]
			}));
		}

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
		return players.length >= maxPlayers;
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
			else if (message.function == "set_match_map")
			{
				this.map = message.parameters[0];
			}
			else
			{
				console.log("Not Implemented yet?"); //database_api[message.function](message.parameters);
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
		players.forEach((nextPlayerSocket) =>
		{
			if (nextPlayerSocket !== playerSocket)
			{
				nextPlayerSocket.send(JSON.stringify(message));
			}
		})
	}
}