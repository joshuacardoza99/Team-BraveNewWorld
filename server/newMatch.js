// Database api Class that enables communication to the database
let database_api = require("../server/database_api").database_api; 
    database_api = new database_api("team-bravenewworld.csp1omydlp3q.us-east-2.rds.amazonaws.com",
                                    "root", "unitybackend", "team-bravenewworld");

    // Test data to see if the database api is working correctly
    database_api.add_matchs      ([27, 9]);
    database_api.add_player      ([198376, 452553445, "Thor19", "Viking", 12, 1]);
    database_api.add_characters  ([1245, 2, "Barbarian", "Small Tile", 572]);
  //  database_api.change_player_absent (["12345", "tom"]);
    database_api.get_matchs      ((result) =>{console.log(result)});
   // database_api.update_map      ([35, 3]);
   // database_api.update_character_position(["1245", "Viking", "Barbarian", "Small Tile"]);

    // Get the result of the data entered in 
    database_api.get_player      ((result) =>{console.log(result)});
    database_api.get_characters  ((result) =>{console.log(result)});
   