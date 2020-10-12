exports.player = function(name = "", civilization = "", ip = "", match = 0, socket = null)
{
	this.name         = name;
	this.ip           = ip;
	this.match        = match;
	this.civilization = civilization;
	this.socket       = socket; 
}