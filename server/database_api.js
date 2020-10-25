// Export the database api
exports.database_api = function(serverName = "", username = "", password = "", databaseName = "")
{  
/*
   let serverName = "localhost";
   let userName   = "root"; // In phpMyAdmin root is used
   let password   = "unitybackend";
   let dbname     = "team-bravenewworld";
*/
   // External Classes
   let mySQL = require('mysql');
   
   // Connect the database to the server
   let connectionOptions = {
                              host: serverName,
                              user: username,
                              password: password
                           };
   var connection = mySQL.createConnection(connectionOptions);
   connection.connect((error) => 
   {
      console.log("Connected");
   })

   // Insert data into the database
   var insert_data = function(tableName = "", tableColumns = [""], tableData = [""])
   {
      var sql = "INSERT INTO   " + tableName + "(" + tableColumns.toString() + 
                ") VALUES (" + tableData.toString() + ");";

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
      var sql = "SELECT * FROM" + tableName + ";";

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

   // Get the player
   this.get_player = function (parameters)
   {
      var sql = "SELECT * FROM " + tableName + " ";

      connection.query(sql, (error) =>
      {
         if (error)
         {
            console.log("Select statement failed with the following error:" + error);
         }
      });
   }

   // Add the players with parameters starting with ip, username, match, civilization
   this.add_player = function(parameters)
   {
      insert_data("players", ["ip, username, match, civilization"], parameters);
   }

   // Receive the player
   // Parameter = [GameObject, function]
   this.get_player = function(receiver)
   {
      select_data("players", receiver);
   }
}