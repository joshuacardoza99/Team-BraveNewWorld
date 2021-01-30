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
​
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
​
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
<<<<<<< Updated upstream

   // Mark the player as absent
   // Parameters = [ipAddress, championName]
   this.markPlayerAbsent = function(parameters)
   {
      let ipAddress    = "'" + parameters[0] + "'"
      let championName = "'" + parameters[1] + "'"

      var sql = "UPDATE  player  SET inGameFlag = false WHERE ipAddress = " + ipAddress + " AND championName = " + championName + ";";

=======
​
   // Mark the player as absent
   // Parameters = [ipAddress, championName]
   this.change_player_absent = function(parameters)
   {
      let ipAddress    = "'" + parameters[0] + "'"
      let championName = "'" + parameters[1] + "'"
      let isAbsent     =       parameters[2] 
​
      var sql = "UPDATE  player  SET inGameFlag = " + isAbsent + " WHERE ipAddress = " + ipAddress + " AND championName = " + championName + ";";
​
>>>>>>> Stashed changes
         console.log(sql)
         connection.query(sql, (error) =>
         {
            if (error)
            {
               console.log("Update Failed with the following error:" + error);
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
​
   // Receive the matchs and select the match
   this.get_matchs = function(receiver)
   {
      select_data("matchs", receiver);
   }
<<<<<<< Updated upstream

=======
​
>>>>>>> Stashed changes
   // Update the map seed
   // Parameters = [matchID, map]
   this.update_map = function(parameters)
   {
      let matchID       =       parameters[0]
      let map           =       parameters[1]
<<<<<<< Updated upstream

      var sql = "UPDATE match SET map = " + map + " WHERE matchID = " + matchID + ";";
      
=======
​
      var sql = "UPDATE match SET map = " + map + " WHERE matchID = " + matchID + ";";
      
         console.log(sql)
>>>>>>> Stashed changes
         connection.query(sql, (error) =>
         {
            if (error)
            {
               console.log("Update Failed with the following error:" + error);
            }
         });
   }
<<<<<<< Updated upstream

=======
​
>>>>>>> Stashed changes
   // Add the players with the following parameters
   this.add_player = function(parameters)
   {
      let ipAddress    =       parameters[0]
      let championName = "'" + parameters[1] + "'"
      let civilization = "'" + parameters[2] + "'"
      let matchID      =       parameters[3]
      let inGameFlag   =       parameters[4]
      insert_data("player",  [ipAddress, championName, civilization, matchID, inGameFlag]);
   }
​
   // Receive the player and select the player game object and receiver function
   this.get_player = function(receiver)
   {
      select_data("player", receiver);
   }
​
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
​
   // Receive the character and select the character
   this.get_characters = function(receiver)
   {
      select_data("characters", receiver);
   }
<<<<<<< Updated upstream

=======
​
>>>>>>> Stashed changes
   // Update the character position
   // Parameters = [ipAddress, championName, characterName, newTilName]
   this.update_character_position = function(parameters)
   {
      let ipAddress     = "'" + parameters[0] + "'"
      let championName  = "'" + parameters[1] + "'"
      let characterName = "'" + parameters[2] + "'"
      let newTileName   = "'" + parameters[3] + "'"
<<<<<<< Updated upstream

=======
​
>>>>>>> Stashed changes
      var sql = "UPDATE characters SET tileName = " + newTileName + " WHERE characterName = " 
         + characterName + " AND playerID = (SELECT playerID FROM player WHERE ipAddress = " 
         + ipAddress + " AND championName = " + championName + ");";
      
         console.log(sql)
         connection.query(sql, (error) =>
         {
            if (error)
            {
               console.log("Update Failed with the following error:" + error);
            }
         });
   }
}