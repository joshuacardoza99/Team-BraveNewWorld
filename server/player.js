// This class holds connection and game information for a player.
exports.player = function(name = "", civilization = "", ip = "", match = 0, socket = null)
{
	this.name         = name;          // Player's champion's name.
	this.ip           = ip;            // Player's computer's ip address.
	this.match        = match;         // Match id of the match the player is playing in.
	this.civilization = civilization;  // Name of the player's civilization.
	this.socket       = socket;        // Socket connection to the player's computer.
}