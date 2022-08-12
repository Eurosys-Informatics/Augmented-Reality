require("appdynamics").profile({
    controllerHostName: 'twin2017072100591323.saas.appdynamics.com',
    controllerPort: 443,

    // If SSL, be sure to enable the next line
    controllerSslEnabled: true,
    accountName: 'twin2017072100591323',
    accountAccessKey: 'wppydwii137g',
    applicationName: 'PerinnoServer',
    tierName: 'Ground',
    nodeName: 'process' // The controller will automatically append the node name with a unique number
});

var winston = require('winston');
var _ = require('lodash');
var mysql = require('mysql');
var mailer = require('nodemailer');
var fs = require('fs');
var app = require('express')();
var https = require('https');
var request = require('request');
var iplocate = require('iplocation');



var people = {};
var user_email = {};
var photoURL = {};
var people_count = 0;
var socket_list = {};
var curr_token;
var token_expiry;

winston.add(winston.transports.File, { filename: 'signalling_server.log' });
winston.info('Signalling server started... b');


var connection = mysql.createConnection({
    host: 'localhost',
    user: 'root',
    password: 'AARteam2017',
    database: 'unodb'
});

connection.connect();

winston.info('Database Connection Established');

setInterval(function () {
    connection.query('SELECT 1');
}, 5000);


var transporter = mailer.createTransport({
    host: 'perinno.com',
    port: 465,
    secure: true, // true for 465, false for other ports
    auth: {
        user: 'noreply@perinno.com', // generated ethereal user
        pass: 'batak123'  // generated ethereal password
    },
    tls: {
        // do not fail on invalid certs
        rejectUnauthorized: false
    }
});

var myXMLText = 'grant_type=client_credentials&client_id=6W0b1Mb4Spw6omgwNQAzATJFCjdwAJ94&client_secret=TcMe7Ofi2Vn22Yvl&scope=data:write data:read viewables:read';
request({
    url: "https://developer.api.autodesk.com/authentication/v1/authenticate",
    method: "POST",
    headers: {
        "content-type": "application/x-www-form-urlencoded",
    },
    body: myXMLText
}, function (error, response, body) {
    //console.log(response);
    curr_token = JSON.parse(response.body).access_token;
    token_expiry = JSON.parse(response.body).expires_in;
    console.log(new_token);
    });

setInterval(function () {
    request({
        url: "https://developer.api.autodesk.com/authentication/v1/authenticate",
        method: "POST",
        headers: {
            "content-type": "application/x-www-form-urlencoded",
        },
        body: myXMLText
    }, function (error, response, body) {
        //console.log(response);
        curr_token = JSON.parse(response.body).access_token;
        token_expiry = JSON.parse(response.body).expires_in;
        //console.log(new_token);
    });
}, 3500*1000);


var server_s = https.createServer({
    key: fs.readFileSync('ssl_certi/private.key'),
    cert: fs.readFileSync('ssl_certi/certificate.crt'),
    ca: fs.readFileSync('ssl_certi/ca_bundle.crt'),
    requestCert: false,
    rejectUnauthorized: false
}, app);
server_s.listen(80);
var io = require('socket.io').listen(server_s);


//Socket.io Connection & Message handling

io.on('connection', function (socket) {
    winston.info('User connected: IP %s Port %s', socket.request.connection.remoteAddress, socket.request.connection.remotePort);
    setTimeout(() => socket.disconnect(true), 6*60*60*1000);

    socket.on('credentials', function (user, email, photo_url) {
        winston.info('Credentials:', user, email, photo_url);
        people_count++;
        socket.emit('myid', people_count);
        var clientIp = socket.request.connection.remoteAddress;
        iplocate(clientIp.substring(7), function (error, res) {
            var mailtext = '<p> Username:' + user + '</p>' + '<p> Email:' + email + '</p>' + ' <p> Photo URL:' + photo_url + '</p>' + ' <p> IP address:' + clientIp + '</p>' + ' <p> IP Geo:' + JSON.stringify(res);
            var mailOptions = {
                from: 'noreply@perinno.com',
                to: 'contact@perinno.com',
                subject: 'New User On Perinno Uno Webapp!',
                html: mailtext
            };
            if (!(email == 'amitpsingh@gmail.com' || email == 'rohitru@gmail.com' || email == 'amiacs@gmail.com' || user == 'perinno_hololens')) {
                transporter.sendMail(mailOptions, function (error, info) {
                    if (error) {
                        console.log(error);
                    } else {
                        console.log('Email sent: ' + info.response);
                    }
                });
            }
        });
        people[people_count] = user;
        user_email[people_count] = email;
        photoURL[people_count] = photo_url;
        socket_list[people_count] = socket;


    });

    socket.on('message', function (useridfrom, useridto, msg) {
        if (useridfrom && useridto && msg) {
            winston.info('Message:', useridto, msg);
            var to_msg = {};
            to_msg[useridfrom] = msg;
            if (socket_list[useridto] != null && msg != null) {
                socket_list[useridto].emit('message_from_peer', to_msg);
            }
        }
    });

    socket.on('get_token', function () {
        winston.info('get_token');
        socket.emit('token', curr_token);
    });


    socket.on('sign out', function (myid) {
        winston.info('Sign out', myid);
        socket.broadcast.to(socket.room).emit('remove user', myid);
        delete people[myid];
        delete socket_list[myid];
        delete user_email[myid];
        delete photoURL[myid];
        socket.disconnect();
    });

    socket.on('join room', function (room) {
        winston.info('Joining room:', room);
        
        var key = _.findKey(socket_list, socket);
        var new_user = {};
        new_user[key] = [];
        new_user[key][0] = people[key];
        new_user[key][1] = user_email[key];
        new_user[key][2] = photoURL[key];
        socket.broadcast.to(room).emit('new user', new_user);
		socket.broadcast.to(socket.room).emit('remove user', key);
	    socket.leave(socket.room);
        socket.room = room;
        socket.join(room);

	var peopleinroom = {};
               
        _.forIn(socket_list, function (value, key) {
            if (socket_list[key].room == room) {
                peopleinroom[key] = [];
                peopleinroom[key][0] = people[key];
                peopleinroom[key][1] = user_email[key];
                peopleinroom[key][2] = photoURL[key];
            }
        });

        socket.emit('people', peopleinroom);
        winston.info('People list sent:', peopleinroom);
        winston.info('New user sent:', new_user);
    });

    socket.on('session descriptor', function (data) {
        //winston.info('Session descriptor received:', data);
        socket.broadcast.to(socket.room).emit('session descriptor', data);
    });

    socket.on('user busy', function () {
        winston.info('User busy');
        socket.broadcast.to(socket.room).emit('user busy');
    });

    socket.on('end call', function () {
        winston.info('End call');
        socket.broadcast.to(socket.room).emit('end call');
    });

    socket.on('ice candidate', function (json_string) {
        //winston.info('Ice candidate received:', json_string);
        socket.broadcast.to(socket.room).emit('ice candidate', json_string);
    });

    socket.on('disconnect', function () {
        var key = _.findKey(socket_list, socket);
        winston.info('User disconnected :', key);
        if (key != null) {
            socket.broadcast.to(socket.room).emit('remove user', key);
            winston.info('Entry removed :', key);
            delete socket_list[key];
            delete people[key];
            delete user_email[key];
            delete photoURL[key];
        }
    });

    socket.on('hi', function (data) {
        winston.info('Received message', data);
        socket.to(socket.room).emit(data);
    });

    socket.on('log', function (logtype, logentry) {
        //winston.info('Log on Server:', logtype, logentry);
        var key = _.findKey(socket_list, socket);
        connection.query('INSERT INTO logs SET ?', { username: people[key] , logtype: logtype, logentry: JSON.stringify(logentry) }, function (error, results, fields) {
            if (error) throw error;
            //console.log(results.insertId);
        });
    });

});
