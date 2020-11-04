let database_api = require("../server/database_api").database_api; // Database_Api Class that enables communication to the database.
database_api     = new database_api("team-bravenewworld.csp1omydlp3q.us-east-2.rds.amazonaws.com",
                                        "root", "unitybackend", "team-bravenewworld");
    database_api.add_match([15,3]);
    database_api.add_player([123, 12345678, "Thor2", "Viking", 15]);
    database_api.add_character([1345, "Thor", "Archer", "Big Tile", 123]);
    (result) =>{console.log(result)}