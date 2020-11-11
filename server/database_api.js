/*
   How to connect to the database:
   serverName = "unitybackend";
   userName   = "root"; 
   password   = "unitybackend";
   dbname     = "team-bravenewworld";
*/
// Export the database api

exports.database_api = function(serverName = "", username = "", password = "", databaseName = "")
{  
   // External Classes
   let mySQL = require('mysql');
   
   // Connect the database to the server
   let connectionOptions = {
                              host: serverName,
                              user: username,
                              password: password,
                              database: databaseName
                           };
   var connection = mySQL.createConnection(connectionOptions);
   connection.connect((error) => 
   {
      console.log("Connected");
   })

   // Insert data into the database
   var insert_data = function(tableName = "", tableData = [""])
   {
      var sql = "INSERT INTO " + tableName +  " VALUES (" + tableData.toString() + ");";
     
         console.log(sql)
         connection.query(sql, (error) =>
         {
            if (error)
            {
               console.log("Insert Failed with the following error:" + error);
            }
         });
   }
   // Select data from a certain table
   var select_data = function(tableName = "", receiver = (result) =>{})
   {
      var sql = "SELECT * FROM " + tableName + ";";

         connection.query(sql, (error, result) =>
         {
            if (error)
            {
               console.log("Insert Failed with the following error:" + error);
            }
            else
            {
               receiver(result);
            }
         });
   }
   
   // Add the matchs with the following parameters
   this.add_matchs = function(parameters)
   {
      let matchID = parameters[0]
      let map     = parameters[1]
      insert_data("matchs",  [matchID, map]);
   }

   // Receive the matchs and select the match
   this.get_matchs = function(receiver)
   {
      select_data("matchs", receiver);
   }

   // Add the players with the following parameters
   this.add_player = function(parameters)
   {
      let playerID     =       parameters[0]
      let ipAddress    =       parameters[1]
      let championName = "'" + parameters[2] + "'"
      let civilization = "'" + parameters[3] + "'"
      let matchID      =       parameters[4]
      let inGameFlag   =       parameters[5]
      insert_data("player",  [playerID, ipAddress, championName, civilization, matchID, inGameFlag]);
   }

   // Receive the player and select the player game object and receiver function
   this.get_player = function(receiver)
   {
      select_data("player", receiver);
   }

   // Add the characters with the following parameters
   this.add_characters = function(parameters)
   {
      let characterID   =       parameters[0]
      let champion      =       parameters[1] 
      let characterType = "'" + parameters[2] + "'"
      let tileName      = "'" + parameters[3] + "'"
      let playerID      =       parameters[4]
      insert_data("characters",  [characterID, champion, characterType, tileName, playerID]);
   }

   // Receive the character and select the character
   this.get_characters = function(receiver)
   {
      select_data("characters", receiver);
   }
}