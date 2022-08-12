var express = require('express');
var app = express();
app.use(express.static('public'));

app.listen(81);
console.log('Listening on port 81');
