exports.match = function(id = 0)
{
	// External Class.
	let database_api = require("../server/database_api").database_api;
	    database_api = new database_api();
	    
	// Global Variables.
	let players = [];
	let matchId = id;
	let host    = null;

	// Add a new player to the match.
	this.add_player = function(player = null)
	{
		if (players.length == 0)
		{
			host = player;
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
		return players.length >= 10;
	}

	// Returns the match's id.
	this.get_id = function()
	{
		return matchId;
	}

	// Determine if the match has a host or not.
	this.has_host = function()
	{
		return host != null;
	}

	// Handles new incomming messages for this match.
	this.message_handler = function(message, sender)
	{
		if (message.gameObject == "server_functions")
		{
			if (message.function == "get_player")
			{
				database_api.get_player((data) =>
				{
					let response = {
										gameObject: message.parameters[0],
										function: message.parameters[1],
										parameters: data
									};

					sender.send(JSON.stringify(response));
				})
			}
			else
			{
				database_api[message.function](message.parameters);
			}
		}
		else
		{
			broadcast(message, sender);
		}
	}

	// Sends the message to all other players in this match.
	let broadcast = function (message, sender)
	{
		this.players.forEach((player) =>
		{
			if (player !== sender)
			{
				player.send(JSON.stringify(message));
			}
		})
	}
}