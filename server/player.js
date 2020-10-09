exports.player = function(name = "", ip = "", match = 0, socket = null)
{
	this.name   = name;
	this.ip     = ip;
	this.match  = match;
	this.socket = socket;
}