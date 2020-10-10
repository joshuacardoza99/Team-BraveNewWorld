exports.database_api = function(serverName = "", username = "", password = "", databaseName = "")
{  /*
   let serverName = "localhost";
   let userName   = "root"; // In phpMyAdmin root is used
   let password   = "";
   let dbname     = "unitybackend";
*/
   // External Classes
   let mySql = require('mysql');
   
   // Global Variables
   let connectionOptions = {
                              host: serverName,
                              user: username,
                              password: password
                           };
   var connection = mysql.createConnection(connectionOptions);

   connection.connect((error) => 
   {
      console.log("Connected");
   })
}