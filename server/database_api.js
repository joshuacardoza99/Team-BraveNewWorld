// Export the database api
exports.database_api = function(serverName = "", username = "", password = "", databaseName = "")
{  
/*
   let serverName = "unitybackend";
   let userName   = "root"; 
   let password   = "unitybackend";
   let dbname     = "team-bravenewworld";
*/
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

   // Add the players with parameters starting with ip, username, match, civilization
   this.add_player = function(parameters)
   {
      let ip           =       parameters[0]
      let username     = "'" + parameters[1] + "'"
      let match        =       parameters[2]
      let civilization = "'" + parameters[3] + "'"
      insert_data("player",  [ip, username, match, civilization]);
   }

   // Receive the player
   // Parameter = [GameObject, function]
   this.get_player = function(receiver)
   {
      select_data("player", receiver);
   }
}