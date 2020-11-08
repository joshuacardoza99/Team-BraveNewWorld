let database_api = require("../server/database_api").database_api; // Database_Api Class that enables communication to the database.
database_api     = new database_api("team-bravenewworld.csp1omydlp3q.us-east-2.rds.amazonaws.com",
                                        "root", "unitybackend", "team-bravenewworld");
    database_api.add_matchs([15, 3]);
    database_api.add_player([908, 45453445, "Thor2", "Viking", 15]);
    database_api.add_characters([1234, 1, "Archer", "Big Tile", 592]);
    database_api.get_matchs((result) =>{console.log(result)});
    database_api.get_player((result) =>{console.log(result)});
    database_api.get_characters((result) =>{console.log(result)});