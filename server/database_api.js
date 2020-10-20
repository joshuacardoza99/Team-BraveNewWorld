exports.database_api = function(serverName = "", username = "", password = "", databaseName = "")
{  

   /*let serverName = "localhost";
   let userName   = "root"; // In phpMyAdmin root is used
   let password   = "";
   let dbname     = "unitybackend";*/
   
   // External Classes
   let mySQL = require('mysql');
   
   // Global Variables
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

   // Private functions, string of arrays
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

   // List of parameters starting with ip, username, match, civilization
   this.add_player = function(parameters)
   {
      insert_data("players", ["ip, username, match, civilization"], parameters);
   }

   // List of parameters startingp
   // Parameter = [GameObject, function]
   this.get_player = function(receiver)
   {
      select_data("players", receiver);
   }
}