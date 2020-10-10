exports.match = function(id = 0)
{
	let players = [];

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

	// Handles new incomming messages for this match.
	this.message_handler = function(message, sender)
	{
		if (message.gameObject == "server_functions")
		{

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