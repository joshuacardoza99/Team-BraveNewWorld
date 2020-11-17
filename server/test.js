console.log("This actually worked");
var http = require('http');
http.createServer(function (req, res) {
  res.writeHead(200, {'Content-Type': 'text/plain'});
  res.end('Hello Worldn');
}).listen(80);
console.log('Server running at http://18.219.87.68:80/');