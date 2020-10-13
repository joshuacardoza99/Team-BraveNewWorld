exports.match = function(id = 0)
{
	// External Class.
	let database_api = require("../server/database_api").database_api;
	console.log(database_api);
	//	database_api = new database_api.database_api();

	// Global Variables.
	let players = [];

	// Add a new player to the match.
	this.add_player = function(player = null)
	{
		database_api = new database_api();
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
		return id;
	}

	// Handles new incomming messages for this match.
	this.message_handler = function(message, sender)
	{
		if (message.gameObject == "server_functions")
		{
			database_api[message.function](message.parameters);
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