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
   });

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
               console.log("Select Failed with the following error: " + error);
            }
            else
            {
               receiver(result);
            }
         });
   }


   // Mark the player as absent
   // Parameters = [ipAddress, championName]
   this.markPlayerAbsent = function(parameters)
   {
      let ipAddress    = "'" + parameters[0] + "'"
      let championName = "'" + parameters[1] + "'"

      var sql = "UPDATE  player  SET inGameFlag = false WHERE ipAddress = " + ipAddress + " AND championName = " + championName + ";";

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

   // Receive the matchs and select the match
   this.get_matchs = function(receiver)
   {
      select_data("matchs", receiver);
   }

   // Update the map seed
   // Parameters = [matchID, map]
   this.update_map = function(parameters)
   {
      let matchID       =       parameters[0]
      let map           =       parameters[1]

      var sql = "UPDATE match SET map = " + map + " WHERE matchID = " + matchID + ";";
   
         connection.query(sql, (error) =>
         {
            if (error)
            {
               console.log("Update Failed with the following error:" + error);
            }
         });
   }

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

   // Update the character position
   // Parameters = [ipAddress, championName, characterName, newTilName]
   this.update_character_position = function(parameters)
   {
      let ipAddress     = "'" + parameters[0] + "'"; // Ip address 
      let championName  = "'" + parameters[1] + "'"
      let characterName = "'" + parameters[2] + "'"
      let newTileName   = "'" + parameters[3] + "'"

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

   // Gets of list of actions and relating info for decision making.
   this.get_movements = function(decisionNumber = 0, receiver = (result) => {})
   {
      var sql = "SELECT decisionNumber, numberOfMoves, numberOfBuilds, numberOfAttacks, numberOfRecruits, numberOfCaptures, action, weight " +
                "  FROM AI"                                                                                                                   +
                " WHERE decisionNumber = " + decisionNumber +";";

      connection.query(sql, (error, result) =>
      {
         if (error)
         {
            console.log("Select Failed with the following error: " + error);
         }
         else
         {
            receiver(result);
         }
      });
   }

   // Stores a decision and relating info for future use.
   this.record_movements = function(decisionNumber = 0, numberOfMoves = 0, numberOfBuilds = 0, numberOfAttacks = 0, numberOfRecruits = 0,
                                    numberOfCaptures = 0, actions = 0, weight = 0)
   {
      var sql = "INSERT INTO AI (decisionNumber, numberOfMoves, numberOfBuilds, numberOfAttacks, numberOfRecruits, numberOfCaptures, action, weight)" +
                "  VALUES (" + decisionNumber + "," + numberOfMoves + "," + numberOfBuilds + "," + numberOfAttacks + "," + numberOfRecruits + "," + 
                numberOfCaptures + "," + actions + "," + weight + ");";

      connection.query(sql, (error) =>
      {
         if (error)
         {
            console.log("Insert Failed with the following error: " + error);
         }
      });
   }

   // Increase the weight of a successful decision.
   this.promote_movements = function(decisionNumber = 0, numberOfMoves = 0, numberOfBuilds = 0, numberOfAttacks = 0, numberOfRecruits = 0,
                                     numberOfCaptures = 0, actions = 0, weight = 0)
   {
      var sql = "UPDATE AI " +
                "   SET weight = " + (++weight)
                " WHERE decisionNumber   = " + decisionNumber + "," +
                "       numberOfMoves    = " + numberOfMoves  + "," +
                "       numberOfBuilds   = " + numberOfBuilds + "," +
                "       numberOfAttacks  = " + numberOfAttacks + "," +
                "       numberOfRecruits = " + numberOfRecruits + "," +
                "       numberOfCaptures = " + numberOfCaptures + "," +
                "       action          = " + actions          + ";";

      connection.query(sql, (error) =>
      {
         if (error)
         {
            console.log("Update Failed with the following error: " + error);
         }
      });
   }

   // Decreases the weight of a failed decision.
   this.demote_movements = function(decisionNumber = 0, numberOfMoves = 0, numberOfBuilds = 0, numberOfAttacks = 0, numberOfRecruits = 0,
                                     numberOfCaptures = 0, actions = 0, weight = 0)
   {
      var sql = "UPDATE AI " +
                "   SET weight = " + (--weight)
                " WHERE decisionNumber   = " + decisionNumber + "," +
                "       numberOfMoves    = " + numberOfMoves  + "," +
                "       numberOfBuilds   = " + numberOfBuilds + "," +
                "       numberOfAttacks  = " + numberOfAttacks + "," +
                "       numberOfRecruits = " + numberOfRecruits + "," +
                "       numberOfCaptures = " + numberOfCaptures + "," +
                "       action          = " + actions          + ";";

      connection.query(sql, (error) =>
      {
         if (error)
         {
            console.log("Update Failed with the following error: " + error);
         }
      });
   }
}