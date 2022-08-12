//  Copyright (c) 2017 Perinno Labs. All Rights Reserved.

// Variables

var dispalyName;
var user_email;
var user_phone;
var user_id_token;
var photoURL;
var my_id = -1;
var peer_id = -1;
var tempid = -1;
var people = {};
var socket;
var sendGenericDC;
var sendFileDC;
var receiveGenericDC; 
var receiveFileDC;
var chunkSize = 64 * 1024;
var kCandidateSdpMidName = "sdpMid";
var kCandidateSdpMlineIndexName = "sdpMLineIndex";
var kCandidateSdpName = "candidate";
var kSessionDescriptionTypeName = "type";
var kSessionDescriptionSdpName = "sdp";
var localStream;
var localStreamShared;
var pc1;
var pc2;
var sendProgressPercentage;
var stringSendProgress;
var delIncrement = 5;
var modNumber;
var recProgressPercentage;
var stringRecProgress;
var offerOptions = {
    offerToReceiveAudio: 1,
    offerToReceiveVideo: 1
};

var receiveBuffer = [];
var receivedSize = 0;
var audio = new Audio('audio/onRxSideRing.mp3');
var accum = false;
var expectedfilesize = 0;
var recFileName;
var authprovider;
var recordedChunks;
var options = {mimeType: 'video/webm;codecs=vp9'};
var mediaRecorder;
var remoteStream;
var chatActive = false;
var scribbleon = false;

initApp = function () {
    firebase.auth().onAuthStateChanged(function (user) {
        if (user) { 
            console.log("User is signed in with :" + user.providerId);            
            console.log("User Details: " + JSON.stringify(user));
            
            // User is signed in.
            displayName = user.displayName;
            user_email = user.email;
            
            var userProviderData = (JSON.parse((JSON.stringify(user.providerData))));
            user_phone = userProviderData[0].uid;
            if(user.displayName == null)
            {

                displayName = user_phone;
            }

            if(!user_email)
            {
                if(userProviderData[0].email)
                {
                    user_email=userProviderData[0].email;
                }
                else
                {
                    user_email=" ";
                }
            }


            var emailVerified = user.emailVerified;
            if(userProviderData[0].photoURL)
            {
                photoURL = userProviderData[0].photoURL;
            }
            else if(user.photoURL){
                photoURL = user.photoURL;
            } else       
            {
                photoURL="https://lh3.googleusercontent.com/-XdUIqdMkCWA/AAAAAAAAAAI/AAAAAAAAAAA/4252rscbv5M/photo.jpg";
            }
            var uid = user.uid;
            //var providerData = user.providerData;
            console.log("User is signed in with 1######:" + userProviderData[0].providerId);
            authprovider = userProviderData[0].providerId;
            user.getToken().then(function (accessToken) {
                document.getElementById("personalImage").src = photoURL;
                document.getElementById("personalImage0").src = photoURL;
                document.getElementById("personalImage1").src = photoURL;
                document.getElementById("personalImage2").src = photoURL;
            });
            
            console.log("User Details: " + displayName + ":" + user_email + ":" + photoURL + ":" + user.emailVerified);
            authenticationdone();
        } else {
            window.location.replace("index.html");            
        }
    }, function (error) {
        console.log(error);
    });
};

$(window).on('storage', message_receive);

window.addEventListener('load', function () {
    initApp();
    $("#fileInput").change(handleFileInputChange);
    document.getElementById("first_name1").value = roomstr();

});

async function handleFileInputChange() {
    var file = $("#fileInput").prop('files')[0];
    console.log('Chosen file = ' + file);

    if (!file) {
        trace('No file chosen');
    } 
    else {
        $('#pbarspan').attr("style", "display:normal");
        sendFile(file);
    }
}


function gotStream(stream) {
    console.log('Received local stream');
    localVideo.srcObject = stream;
    localStream = stream;

    var videoTracks = localStream.getVideoTracks();
    var audioTracks = localStream.getAudioTracks();
    if (videoTracks.length > 0) {
        console.log('Using video device: ' + videoTracks[0].label);
    }
    if (audioTracks.length > 0) {
        console.log('Using audio device: ' + audioTracks[0].label);
    }
}

$(function () {
    $("#peerlist").selectable({
        stop: function () {
            $(".ui-selected", this).each(function () {
                var index = $("#peerlist li").index(this);
                for (var i in people) {
                    $('#callButton' + i).attr('disabled','disabled');
                    //console.log("ID disabled: " + i);
                }
                tempid = $(this).attr("id").match(/\d+/);
                if (tempid != my_id) {
                    $('#callButton' + tempid).removeAttr("disabled");
                }
                console.log("Selected from list: " + index);
                console.log("Obtained ID: " + tempid);
            });
        }
    });
});

async function getum()
{
    await navigator.mediaDevices.getUserMedia({
        audio: true,
        //video: true,
        video: { width: { exact: 1280 }, height: { exact: 720 } }
    })
        .then(gotStream)
        .catch(function (e) {
            alert('getUserMedia() error: ' + e.name);
        });
}


function joinOrCreateRoom() {
    console.log("Creating room...");
    //window.location.href = "callp.html";
    $('#modal1').modal('close');
    var room_name = $('#first_name1').val();
    console.log("Creating room..." + room_name);

    socket.emit("join room", room_name);
    $("#room_id").empty();
    $("#room_id").append('ROOM:' + room_name);
    $('#modal2').modal({
        dismissible: false,
        opacity: 1
    }).modal('open');
    

}

function logtoserver(logtype, logentry) {
    console.log("Logging to Server..." + logtype + " : " + logentry);
    socket.emit('log', logtype, logentry);


}

function SendPicFile() {
    document.getElementById("fileInput").accept = "image/*";
    $("#fileInput").trigger('click');
    $("#pbardiv").css("display", "block");
}

function Send3DModelFile() {
    document.getElementById("fileInput").accept = ".fbx";
    $("#fileInput").trigger('click');
    $("#pbardiv").css("display", "block");
}

function startSignalling() {

    console.log("StartSig");
    socket = io.connect("wss://ss.perinno.com:80", { 'forceNew': true });
    //socket = io.connect("127.0.0.1:5858", { 'forceNew': true });
    //nick_name = 'Person' + Math.floor((Math.random() * 100) + 1);
    socket.emit("credentials", displayName, user_email, photoURL);
    console.log("Credentials" + displayName + ":" + user_email + ":" + photoURL);

    socket.on('disconnect', (reason) => {
        console.log("Socket disconnected, Reason: " + reason);
        $("#peerlist").empty();
        people={};
        $('#modal_server_disconnect').modal({
            dismissible: false,
            opacity: 1
        }).modal('open');
    });

    socket.on('myid', function (id) {
        my_id = id;
        console.log('Received id: ' + my_id);        
    });

    socket.on('token', function (curr_token) {
        sendTokenToAutodeskHTML(curr_token);
    });

    socket.on('people', function (data) {
        $("#peerlist").empty();
        people={};
        people = data;
        for (var i in people) {
            //peer_id = i;
            var email = "";
            if(people[i][0]==null)
                people[i][0] = "UNO App User";
            if(people[i][1]==null)
                people[i][1] = "";
            if(people[i][2]==null)
                people[i][2] = "https://lh3.googleusercontent.com/-XdUIqdMkCWA/AAAAAAAAAAI/AAAAAAAAAAA/4252rscbv5M/photo.jpg";
            if (people[i][1] != null) {
                email = people[i][1];
            }
            $("#peerlist").append('<li class="collection-item ui-widget-content avatar" id="l' + i +
               '"><img src="'+ people[i][2]+'" height="32" width="32" alt="" class="circle"><span class="title">' + people[i][0] +
               '</span><p>' + email + '</p><a class="btn-floating green secondary-content" id="callButton' + i + '" disabled  name="action" onclick="Call()"><i class="material-icons right">call</i></a></li>');
                    
        }
        console.log('Length of Peerlist' + $("#peerlist li").size() );
        if($("#peerlist li").size()  <= 1)
        {
            $("#text_pivot").empty();
            $("#text_pivot").append("<b>Waiting for another user to connect!</b>");
        }
        else{
            $("#text_pivot").empty();
            $("#text_pivot").append("Select one person to start collaboration session");
        }  
        //trace('Peer ID: ' + peer_id);
        console.log(JSON.stringify(people));
    });

    socket.on('remove user', function (userid) {
        console.log('User logged out ' + userid + ' ' + people[userid]);
        $('#l' + userid).remove();
        console.log('Length of Peerlist' + $("#peerlist li").size()  );
        if($("#peerlist li").size()  <= 1)
        {
            $("#text_pivot").empty();
            $("#text_pivot").append("<b>Waiting for another user to connect!</b>");
        }
        else{
            $("#text_pivot").empty();
            $("#text_pivot").append("Select one person to start collaboration session");
        }        
        if (userid == peer_id) {
            $('#modal2').modal({
                dismissible: false,
                opacity: 1
            }).modal('open'); //Return to connected users in the room
            $('#dialogueBox').empty();
            $('#dialogueBox').append('<a class="btn-floating btn-large waves-light red"><i class="material-icons">call_end</i></a>' +
                '<h5 class="center-align">' + people[userid][0] + ' has disconnected</h5>');
            $('#modal4').modal({
                dismissible: false,
                opacity: 1
            }).modal('open');
        }

        if (userid == tempid || userid == peer_id) {
            tempid = -1;
            
            cleanup();
        }

        delete people[userid];
        console.log(JSON.stringify(people));
    });

    socket.on('new user', function (user) {
        for (var i in user) {
            console.log('User logged in ' + i + ' ' + user[i]);
            people[i] = user[i];
            if(people[i][0]==null)
                people[i][0] = "UNO App User";
            if(people[i][1]==null)
                people[i][1] = "";
            if(people[i][2]==null)
                people[i][2] = "https://lh3.googleusercontent.com/-XdUIqdMkCWA/AAAAAAAAAAI/AAAAAAAAAAA/4252rscbv5M/photo.jpg";
            //peer_id = i;
            $("#peerlist").append('<li class="collection-item ui-widget-content avatar" id="l' + i +
              '"><img src="' + people[i][2] + '" height="32" width="32" alt="" class="circle"><span class="title">' + people[i][0] +
              '</span><p>' + people[i][1] + '</p><a class="btn-floating green secondary-content" id="callButton'+ i +'" disabled name="action" onclick="Call()"><i class="material-icons right">call</i></a></li>');
        }
        //trace('Peer ID: ' + peer_id);
        console.log('Length of Peerlist' + $("#peerlist li").size()  );
        if($("#peerlist li").size()  <= 1)
        {
            $("#text_pivot").empty();
            $("#text_pivot").append("<b>Waiting for another user to connect!</b>");
        }
        else{
            $("#text_pivot").empty();
            $("#text_pivot").append("Select one person to start collaboration session");
        }   
        console.log(JSON.stringify(people));
    });

    socket.on('message_from_peer', function (to_msg) {
        for (var i in to_msg) {
            var from_peer = i;
            var msg = to_msg[i];
            console.log(i + ' ' + msg);

            if (msg.startsWith('hang up')) {
                
                console.log("Tempid = ", tempid);
                $('#modal2').modal({
                    dismissible: false,
                    opacity: 1
                }).modal('open'); //Return to connected users in the room
                $('#dialogueBox').empty();
                $('#dialogueBox').append('<a class="btn-floating btn-large waves-light red"><i class="material-icons">call_end</i></a>' +
                    '<h5 class="center-align">' + people[peer_id][0] + ' has hungup the call</h5>');
                $('#modal4').modal({
                    dismissible: false,
                    opacity: 1
                }).modal('open');
                cleanup();
                return;
            }
            else if (msg.startsWith('user busy')) {
                cleanup();
                $('#modal2').modal({
                    dismissible: false,
                    opacity: 1
                }).modal('open'); //Return to connected users in the room
                $('#dialogueBox').empty();
                $('#dialogueBox').append('<a class="btn-floating btn-large waves-light red"><i class="material-icons">event_busy</i></a>'+
                    '<h5 class="center-align">' + people[tempid][0] + ' is busy</h5>');
                $('#modal4').modal({
                    dismissible: false,
                    opacity: 1
                }).modal('open');                
                return;
            }

            var JsonObj = JSON.parse(msg);


            if (JsonObj && kSessionDescriptionSdpName in JsonObj) {
                console.log('SDP Type: ' + JsonObj[kSessionDescriptionTypeName]);

                if (JsonObj[kSessionDescriptionTypeName] === "answer") {
                    console.log('Setting remote description...');
                    pc1.setRemoteDescription(JsonObj);
                }

                if (JsonObj[kSessionDescriptionTypeName] === "offer") {
                    console.log('Setting remote description...');
                    if (!pc1)
                        createPeerConnection();
                    
                    
                    console.log("Remote Description :" + pc1.remoteDescription);
                    if(peer_id == -1)
                    {   peer_id = from_peer;
                        console.log("peer_id set to :" + peer_id);
                        callReceived(JsonObj);
                    }
                    else {

                        if(peer_id == from_peer)
                        {
                            pc1.setRemoteDescription(JsonObj);
                            pc1.createAnswer(offerOptions
                                ).then(
                                onCreateAnswerSuccess,
                                onCreateSessionDescriptionAnswerError
                            );
                        }
                        else
                        {   //User is on another Call send Busy message
                            socket.emit('message', my_id, from_peer, 'user busy'); 

                        }
                    }

                }
            }

            if (JsonObj && kCandidateSdpName in JsonObj) {
                console.log('Setting ice candidate...' + JsonObj);
                console.log(pc1);
                logtoserver("INFO: ICE Candidate: ", JsonObj);
                pc1.addIceCandidate(JsonObj)
                .then(function () {
                    onAddIceCandidateSuccess();
                },
                    function (err) {
                        onAddIceCandidateError(err);
                    }
                );
            }
        }
    });
}


async function Call() {
    console.log('Requesting local stream');
    peer_id = tempid;
    console.log("peer_id set to :" + peer_id);
    console.log('Starting call');
    await getum();
    if (!pc1)
        createPeerConnection();
    pc1.addStream(localStream);
    console.log('Added local stream to pc1');

    console.log('pc1 createOffer start');
    pc1.createOffer(
      offerOptions
    ).then(
      onCreateOfferSuccess,
      onCreateSessionDescriptionError
    );

    //window.location.href = "callp.html";
    $('#modal2').modal('close');

    //$.tour(tourSteps);
}

function createPeerConnection() {
    var pc_config = { "iceServers": [   {url:'stun:stun.l.google.com:19302'},
                                        {url:'stun:stun1.l.google.com:19302'},
                                        {url:'stun:stun2.l.google.com:19302'},
                                        {url:'stun:stun3.l.google.com:19302'},
                                        {url:'stun:stun4.l.google.com:19302'},
                                        {
                                            url: 'turn:numb.viagenie.ca',
                                            username: 'perinnolabs@gmail.com',
                                            credential: 'AARteam2017'
                                        } ] };
    pc1 = new RTCPeerConnection(pc_config);
    console.log('Created local peer connection object pc1');
    pc1.onicecandidate = function (e) {
        onIceCandidate(pc1, e);
    };

    pc1.oniceconnectionstatechange = function (e) {
        onIceStateChange(pc1, e);
    };

    pc1.ondatachannel = receiveChannelCallback;

    pc1.onaddstream = gotRemoteStream;

    pc1.ontrack = function(event) {
        console.log('pc1 ontrack called...');
        event.streams.forEach(function(stream)  {
            console.log('Stream id: ' + stream.id);
            stream.getTracks().forEach(track => console.log('Track id: ' + track.id + ' Kind: ' + track.kind + ' Label: ' + track.label));
        });
    };

    createDataChannel();
}


function receiveChannelCallback(event) {
    console.log('Receive Channel Callback' );
    console.log(event.channel);
    if (event.channel.label === "GenericDC")
    {receiveGenericDC = event.channel;
        receiveGenericDC.onmessage = onReceiveMessageCallback;
        receiveGenericDC.onopen = onReceiveChannelStateChange;
        receiveGenericDC.onclose = onReceiveChannelStateChange;
    }
    else if(event.channel.label === "FileDC")
    {receiveFileDC = event.channel;
        receiveFileDC.onmessage = onReceiveFileMessageCallback;
        receiveFileDC.onopen = onReceiveFileChannelStateChange;
        receiveFileDC.onclose = onReceiveFileChannelStateChange;

    }

}

var scribbleOperationInProgress = false;

function onReceiveMessageCallback(event) {
    console.log('Received Message ' + event.data.byteLength + " " + event.data);

    if (typeof event.data === 'string')   {
        if(event.data.startsWith("Scribble:")) {
            if(event.data.substring(9) === "Start"){
                scribbleOperationInProgress = true;
                canvasArea = document.getElementById('paint');
                ctx = canvasArea.getContext('2d');    
                ctx.lineWidth = 3;
                ctx.lineJoin = 'round';
                ctx.lineCap = 'round';
                ctx.strokeStyle = 'blue';
            }
            else if(event.data.substring(9) === "Stop") {
                scribbleOperationInProgress = false;
                last_mouse.x = 0;
                last_mouse.y = 0;	
                mouse.x = 0;
                mouse.y = 0;
            }
            else if(event.data.substring(9) === "Clear") {
                ctx.clearRect(0, 0, canvasArea.width, canvasArea.height);
            }

            else if(scribbleOperationInProgress) {
                var mouseObj = JSON.parse(event.data.substring(9));
                last_mouse.x = mouse.x;
                last_mouse.y = mouse.y;	
                mouse.x = mouseObj.x;
                mouse.y = mouseObj.y;

                var cv = document.getElementById("paint");
                mouse.x = mouse.x * cv.width;
                mouse.y = mouse.y * cv.height;


                if(last_mouse.x != 0 || last_mouse.y != 0){
                    ctx.beginPath();
                    ctx.moveTo(last_mouse.x, last_mouse.y);
                    ctx.lineTo(mouse.x, mouse.y);
                    ctx.closePath();
                    ctx.stroke();
                }
                return;
            }
        }
        else if(event.data === "StopScreenSharing"){
            remoteVideo.srcObject = remoteStream;
            screenSharingVideo.srcObject = null;
            screenSharingVideo.style.display='none';
        }
        else if(event.data.startsWith("ChatMsg:")){
            if(!chatActive)
                startChat();
            let $content = $('#content');
            $content.append('<p>'+event.data.substring(8)+'</p>');
        }
    }
    else {
        console.log("!!!! Unexpected Message !!!!");
    }
}





function onReceiveFileMessageCallback(event) {
    console.log('Received Message ' + event.data.byteLength + " " + event.data);

    modNumber = delIncrement;

    if (typeof event.data === 'string')   {
        if (event.data === "StartDataBlock") {
            accum = true; //Start accumulating in buffer
            $("#pbardiv").css("display", "block");
            $('#pbartext').append('<h7 class="left-align">Receiving file...</h7>');
        }
        else if (event.data === "EndDataBlock") {
            accum = false;
            console.log("Received file size" + receivedSize);
            if (receivedSize === expectedfilesize) {
                console.log("Successfully received file!!!" + receiveBuffer.length);
            }
            var received = new window.Blob(receiveBuffer);
            var urlCreator = window.URL || window.webkitURL;
            var imageUrl = urlCreator.createObjectURL(received);
            saveAs(received, recFileName);
            received = null;

            console.log("Received file name" + recFileName);
            receiveBuffer = [];
            expectedfilesize = 0;
            receivedSize = 0;
            $('#pbarspan').attr("style", "width:100%");
            delIncrement = 5;

            Materialize.toast('File received successfully!', 4000);

            $('#pbarspan').attr("style", "width:0%");
            $("#pbardiv").css("display", "none");
            $('#pbartext').empty();
        }
        else if (accum == false) {
            var JsonObj = JSON.parse(event.data);

            if (JsonObj && "dataType" in JsonObj) {
                console.log('dataType :' + JsonObj["dataType"]);

                if ((JsonObj["dataType"] === "mrc-stream") || (JsonObj["dataType"] === "file")) {
                    console.log('mrc-stream received...');
                    expectedfilesize = JsonObj["dataSize"];
                    recFileName = JsonObj["fileName"];
                    console.log('expectedfilesize :' + JsonObj["dataSize"]);
                } else if ((JsonObj["dataType"] === "filelink") ) {

                    console.log("Received Link to file" + JsonObj["fileLink"] + "XXX" + JsonObj["fileName"]);
                    download(JsonObj["fileLink"]);
                }
            }
        }
        
    }
    else if (accum == true) {
        receiveBuffer.push(event.data);
        receivedSize += event.data.byteLength;
        recProgressPercentage = 100 * (receivedSize / expectedfilesize);
        if (recProgressPercentage / modNumber > 1.0) {
            stringRecProgress = recProgressPercentage.toString();
            $('#pbarspan').attr("style", "width:".concat(stringRecProgress, "%"));
            modNumber += delIncrement;
        }
    }
    else 
    {
        console.log("!!!! Unexpected Message !!!!");
    }
    
    
}


function onReceiveChannelStateChange() {
    var readyState = receiveGenericDC.readyState;
    console.log('Receive channel state is: ' + readyState);
}

function onReceiveFileChannelStateChange() {
    var readyState = receiveFileDC.readyState;
    console.log('Receive channel state is: ' + readyState);
}

function closeDataChannels() {
    console.log('Closing data channels');
    sendGenericDC.close();
    console.log('Closed data channel with label: ' +sendGenericDC.label);
    if (receiveGenericDC) {
        receiveGenericDC.close();
        console.log('Closed data channel with label: ' + receiveGenericDC.label);
    }

    sendFileDC.close();
    console.log('Closed data channel with label: ' +sendFileDC.label);
    if (receiveFileDC) {
        receiveFileDC.close();
        console.log('Closed data channel with label: ' + receiveFileDC.label);
    }
}

function sleep(ms) {
    return new Promise(resolve => setTimeout(resolve, ms));
}

function sendFileLink(file) {
    var dataprops = { "dataType": "filelink", "dataSize": file.bytes, "fileName": file.name, "fileLink": file.link };
    if (sendFileDC.readyState === 'open') {
        sendFileDC.send(JSON.stringify(dataprops));
    }
}

async function sendFile(file) {
    $('#pbarspan').attr("style", "width: 0%");
    $('#pbartext').append('<h7 class="left-align">Sending file...</h7>');
    modNumber = delIncrement;
    var dataprops = { "dataType": "file", "dataSize": file.size, "fileName": file.name };
    console.log(JSON.stringify(dataprops));
    if (sendFileDC.readyState === 'open') {
        sendFileDC.send(JSON.stringify(dataprops));
        sendFileDC.send("StartDataBlock");
        console.log("Sending Start data block");
        var sliceFile =  function (offset) {
            var reader = new window.FileReader();
            reader.onload = ( function () {
                return async function (e) {
                    //trace("Sending file data" + offset);
                    if( sendFileDC.bufferedAmount > 15*1024*1024)
                    {await sleep(2000);
                    }
                    sendFileDC.send(e.target.result);

                    sendProgressPercentage = 100 * (offset / file.size);
                    if (sendProgressPercentage / modNumber > 1.0) {
                        stringSendProgress = sendProgressPercentage.toString();
                        $('#pbarspan').attr("style", "width:".concat(stringSendProgress, "%"));
                        modNumber += delIncrement;
                    }
                    if (file.size > offset + e.target.result.byteLength) {
                        window.setTimeout(sliceFile, 0, offset + chunkSize);
                    }
                    else {
                        $('#pbarspan').attr("style", "width:100%");
                        console.log("Sending End data block");
                        sendFileDC.send("EndDataBlock");
                        delIncrement = 5;

                        Materialize.toast('File sent!', 4000);

                        $('#pbarspan').attr("style", "width:0%");
                        $("#pbardiv").css("display", "none");
                        $('#pbartext').empty();
                    }
                };
            })(file);
            var slice = file.slice(offset, offset + chunkSize);
            reader.readAsArrayBuffer(slice);
        };
        sliceFile(0);
    }
}

function createDataChannel() {
    sendGenericDC = pc1.createDataChannel('GenericDC');
    sendGenericDC.binaryType = 'arraybuffer';
    console.log('Created Generic send data channel');
    sendFileDC = pc1.createDataChannel('FileDC');
    sendFileDC.binaryType = 'arraybuffer';
    console.log('Created File send data channel');
    sendGenericDC.onopen = onSendChannelStateChange;
    sendGenericDC.onclose = onSendChannelStateChange;
    sendFileDC.onopen = onSendFileChannelStateChange;
    sendFileDC.onclose = onSendFileChannelStateChange;
}

function onSendChannelStateChange() {
    var readyState = sendGenericDC.readyState;
    console.log('Send channel state is: ' + readyState);
}

function onSendFileChannelStateChange() {
    var readyState = sendFileDC.readyState;
    console.log('Send channel state is: ' + readyState);
}

function callReceived(JsonObj) {
    console.log("Incoming Call...");
    $('#modal4').modal('close');
    $('#modal2').modal('close');
    
    if (wasScribbleinProgress)
    {
        clearScribble();
    }
    pc1.setRemoteDescription(JsonObj);    
    audio.loop = true;
    audio.play();
    $('#fromPeerList').empty();

    $('#fromPeerList').append('<img src="' + people[peer_id][2] + '" height="102" width="102" alt="" class="circle">' +
         '<h5 class="title center-align">'+ people[peer_id][0] + '</h5>');
    $('#modal3').modal({
        dismissible: false,
        opacity: 1,        
    }).modal('open');
}

async function AcceptCall(){
    await getum();
    pc1.addStream(localStream);
    console.log('Added local stream to pc1');

    console.log('Answering call');
    pc1.createAnswer(offerOptions
                      ).then(
                        onCreateAnswerSuccess,
                        onCreateSessionDescriptionAnswerError
                      );
    audio.pause();
    audio.currentTime = 0;
    $('#modal3').modal('close');
    $('#modal2').modal('close');
    $('#modal1').modal('close');

}
function RejectCall() {
    console.log('Rejecting call');
    socket.emit('message', my_id, peer_id, 'user busy');
    audio.pause();
    audio.currentTime = 0;
    cleanup();
    $('#modal3').modal('close');
    $('#modal2').modal({
        dismissible: false,
        opacity: 1
    }).modal('open'); //Return to connected users in the room
}

function onCreateSessionDescriptionError(error) {
    console.log('Failed to create session description: ' + error.toString());
}

function onCreateOfferSuccess(desc) {
    console.log('Offer from pc1\n' + desc.sdp);
    console.log('pc1 setLocalDescription start');
    pc1.setLocalDescription(desc).then(
      function () {
          onSetLocalSuccess();
      },
      onSetSessionDescriptionError
    );

    socket.emit('message', my_id, peer_id, JSON.stringify(desc));
}

function onSetLocalSuccess() {
    console.log('setLocalDescription complete');
}

function onSetRemoteSuccess(pc) {
    console.log('setRemoteDescription complete');
}

function onSetSessionDescriptionError(error) {
    console.log('Failed to set session description: ' + error.toString());
}

function onCreateSessionDescriptionAnswerError(error) {
    console.log('Failed to set session description: ' + error.toString());
}

function gotRemoteStream(e) {
    console.log('gotRemoteStream called...');

    if(remoteVideo.srcObject != null && !scribbleon)   {
        screenSharingVideo.srcObject = remoteStream;
        console.log("Screen sharing Vid", remoteStream);
        remoteVideo.srcObject = e.stream;  
        screenSharingVideo.style.display='inline';
    }
    else {
        if(!scribbleon)
        {
            var ms_video = new MediaStream(e.stream.getVideoTracks());
            remoteAudio.srcObject = e.stream;

            remoteVideo.srcObject =ms_video;
            remoteStream = e.stream;
        }
        else
        {
            localVideo.srcObject = e.stream;

            remoteStream = e.stream;
            //remoteVideo.pause();
        }

    }
    
    remoteVideo.onloadedmetadata = function () {
        console.log('width is', this.videoWidth);
        console.log('height is', this.videoHeight);
    }
    //$('#remoteVideo').prop('width', this.videoWidth);
    //$('#remoteVideo').prop('height', this.videoHeight);
}

function onCreateAnswerSuccess(desc) {
    console.log('Answer from pc2:\n' + desc.sdp);
    console.log('pc setLocalDescription start');
    pc1.setLocalDescription(desc).then(
      function () {
          onSetLocalSuccess(pc1);
      },
      onSetSessionDescriptionError
    );

    socket.emit('message', my_id, peer_id, JSON.stringify(desc));
}

function onIceCandidate(pc, event) {
    //console.log(JSON.stringify(event.candidate));
    socket.emit('message', my_id, peer_id, JSON.stringify(event.candidate));
}

function onAddIceCandidateSuccess() {
    console.log('addIceCandidate success');
}

function onAddIceCandidateError(error) {
    console.log('failed to add ICE Candidate: ' + error.toString());
}

function onIceStateChange(event) {
    console.log('ICE state change event: ', event);
}


function cleanup()
{   
    if(localStream)
    {
        var allTracks = localStream.getTracks();
        for(var i=0, len =allTracks.length;i<len; i++)
        {console.log('MT Stopped: ', allTracks[i]);
        
            allTracks[i].stop();
        
        }
    }

    if(remoteStream)
    {
        var allTracks = remoteStream.getTracks();
        for(var i=0, len =allTracks.length;i<len; i++)
        {console.log('MT Stopped: ', allTracks[i]);
        
            allTracks[i].stop();
        
        }
    }


    if(pc1)
    {pc1.close();
        pc1 = null;
    }
    peer_id = -1;
    remoteVideo.srcObject = null;
}

function hangup()
{
    console.log('Ending call');
    socket.emit('message', my_id, peer_id, 'hang up');
    clearScribble();   //Cleanup Scribble and Chat
    $('#modal2').modal({
        dismissible: false,
        opacity: 1
    }).modal('open'); //Return to connected users in the room
    cleanup();
}
    
$(function () {
    $("#peerlist").selectable({
        selecting: function (event, ui) {
            if ($(".ui-selected, .ui-selecting").length > 1) {
                $(ui.selecting).removeClass("ui-selecting");
            }
        }
    });
});

function changeroom()
{$('#modal2').modal('close');
    $('#modal1').modal({
        dismissible: false,
        opacity: 1
    }).modal('open');
    $(".button-collapse").sideNav();

}


function UserLogout() {
    console.log('Opening Modal 5');
    $('#userInfoBox').empty();
    $('#userInfoBox').append('<img src="' + photoURL + '" style: "float:left" height="64" width="64" alt="" class="circle">' +
        '<h6 style="float:right">You are signed in with '+ authprovider +'</h6>');
    $('#modal5').modal({
        dismissible: true,
        opacity: 0
    }).modal('open'); 
}

function logout() {
    firebase.auth().signOut().then(function () {
        console.log('Signed Out');
        window.location.replace("index.html");
        // Sign-out successful.
    }).catch(function (error) {
        // An error happened.
    });
}

function reconnect(){
    $('#modal_server_disconnect').modal('close');
    socket.open();
    socket.emit("credentials", displayName, user_email, photoURL);
    changeroom();
}

function ShareScreen() {
    $(".screenShareIcon").remove();
    $("#screenShareButton").attr("onclick","stopScreenSharing()");
    $("#screenShareButton").attr("data-tooltip","Stop Screen Share");
    $("#screenShareButton").tooltip();
    $("#screenShareButton").append('<i class="material-icons screenShareIcon">stop_screen_share</i>');
    getScreenId(function (error, sourceId, screen_constraints) {
        navigator.getUserMedia = navigator.mozGetUserMedia || navigator.webkitGetUserMedia;
        navigator.getUserMedia(screen_constraints, function (stream) {
            console.log('Successfully obtained screen sharing stream...');
            localStreamShared = stream;
            screenSharingVideo.srcObject = stream;
            if(pc1) {
                pc1.addStream(stream);
                console.log('pc1 createOffer start');
                pc1.createOffer(
                  offerOptions
                ).then(
                  onCreateOfferSuccess,
                  onCreateSessionDescriptionError
                );                
            }
        }, function (error) {
            console.error(error);
        });
    });
}

function stopScreenSharing(){
    $(".screenShareIcon").remove();
    $("#screenShareButton").attr("onclick","ShareScreen()");
    $("#screenShareButton").attr("data-tooltip","Screen Share");
    $("#screenShareButton").tooltip();
    $("#screenShareButton").append('<i class="material-icons screenShareIcon">screen_share</i>');
    localStreamShared.getVideoTracks()[0].enabled = false;
    if(pc1) {
        pc1.removeStream(localStreamShared);
        console.log('pc1 createOffer start');
        pc1.createOffer(
          offerOptions
        ).then(
          onCreateOfferSuccess,
          onCreateSessionDescriptionError
        );                
    }
    if (sendGenericDC.readyState === 'open') {
        sendGenericDC.send("StopScreenSharing");
    }
}


function SelectModelFromStore()
{
    var options = {

        // Required. Called when a user selects an item in the Chooser.
        success: function(files) {
            console.log("File Link :" + files[0].link);
            sendFileLink(files[0]);
        },

        // Optional. Called when the user closes the dialog without selecting a file
        // and does not include any parameters.
        cancel: function() {

        },

        // Optional. "preview" (default) is a preview link to the document for sharing,
        // "direct" is an expiring link to download the contents of the file. For more
        // information about link types, see Link types below.
        linkType: "direct", // or "direct"

        // Optional. A value of false (default) limits selection to a single file, while
        // true enables multiple file selection.
        multiselect: false, // or true

        // Optional. This is a list of file extensions. If specified, the user will
        // only be able to select files with these extensions. You may also specify
        // file types, such as "video" or "images" in the list. For more information,
        // see File types below. By default, all extensions are allowed.
        extensions: ['.pdf', '.doc', '.docx', '.fbx', '.jpg', '.zip','.svg','.png'],
    };

    Dropbox.choose(options);

}

$(function () {
    var video, $output;
    var scale = 1;

    var initialize = function () {
        $output = $("#output");
        video = $("#remoteVideo").get(0);
        $("#capturePhoto").click(captureImage);
    };

    var captureImage = function () {
        var canvas = document.createElement("canvas");
        canvas.width = video.videoWidth * scale;
        canvas.height = video.videoHeight * scale;
        canvas.getContext('2d')
              .drawImage(video, 0, 0, canvas.width, canvas.height);    
        canvas.toBlob(function(blob) {            
            saveAs(blob,"CapturedImage.jpeg");
        });
        
    };
    $(initialize);
}());




function handleDataAvailable(event) {
    if (event.data.size > 0) {
        console.log("recorded chunks available")
        recordedChunks.push(event.data);
    } else {
        // ...
    }
}

function startRecording(){
    recordedChunks = [];
    console.log("recording started")
    $(".recordIcon").remove();
    $("#recordButton").attr("onclick","stopRecording()");
    $("#recordButton").attr("data-tooltip","Stop Video Record");
    $("#recordButton").tooltip();
    $("#recordButton").append('<i class="material-icons recordIcon">pause_circle_filled</i>');
    mediaRecorder = new MediaRecorder(remoteStream, options);
    mediaRecorder.ondataavailable = handleDataAvailable;
    mediaRecorder.start(10);
}

function stopRecording(){
    $(".recordIcon").remove();
    $("#recordButton").attr("onclick","startRecording()");
    $("#recordButton").attr("data-tooltip","Start Video Record");
    $("#recordButton").tooltip();
    $("#recordButton").append('<i class="material-icons recordIcon">play_circle_filled</i>');
    console.log("recording stopped");
    mediaRecorder.stop();
    var recordedStream = new Blob(recordedChunks);
    saveAs(recordedStream,"recordedWebRTCStream.webm");   
    recordedChunks = [];
    recordedStream = null;
}

function sendChat(){
    let $input = $('#input');
    let $content = $('#content');
    let text = $input.val();
    if (sendGenericDC.readyState === 'open') {
        sendGenericDC.send("ChatMsg:" + text);
    }
    $content.append('<p>'+text+'</p>');
    $input.val('');
    $input.focus();
}

function startChat(){
    chatActive = true;
    //$('#chatParent').append('<ul class="collection with-header with-footer" id="chatWindow"></ul>');
    $('#chatParent').append('<div class="wrapper">' +
  '<nav class="nav" id="nav">' +
    '<div class="default-nav">' +
      '<div class="main-nav">'+
        '<div class="toggle"></div>'+
        '<div class="main-nav-item"><a class="main-nav-item-link" href="#">'+ people[peer_id][0] + '</a></div>'+
        '<div class="options"></div>'+
      '</div>'+
    '</div>'+
  '</nav>'+
  '<div class="inner" id="inner">'+
    '<div class="content" id="content"></div>'+
  '</div>'+
  '<div class="bottom" id="bottom">'+
    '<textarea class="input" id="input"></textarea>'+
    '<div class="send" id="send" name="action" onclick="sendChat()"></div>'+
  '</div>'+
'</div>');
    // initChat();
    //$('#chatButton').attr('disabled','disabled');
    //$("#chatWindow").append('<li class="collection-header"><h7>'+ people[peer_id][0] +'</h7>' +
    //    '<button class="circle" id = "closeChat" name ="action" style="float:right;border-style: hidden" onclick="closeChatWindow()"><i class="material-icons">cancel</i></button></li>' +
    //    '<li class="collection-footer"> <input id="btn-input" type="text" class="form-control input-sm chat_input" placeholder="Write your message here..." /></li>'
    //);
    //pushMessage();
}

function pushMessage(){
    if (sendGenericDC.readyState === 'open') {
        sendGenericDC.send("StartChat");
    }
}

function closeChatWindow(){
    //$('#chatButton').removeAttr("disabled");
    //$("#chatWindow").remove();
}

function disableVideo(){
    $(".videoIcon").remove();
    $("#videoButton").attr("onclick","enableVideo()");
    $("#videoButton").attr("data-tooltip","Enable Video");
    $("#videoButton").tooltip();
    $("#videoButton").append('<i class="material-icons videoIcon">videocam_off</i>');
    localStream.getVideoTracks()[0].enabled = !(localStream.getVideoTracks()[0].enabled);
}

function enableVideo(){
    $(".videoIcon").remove();
    $("#videoButton").attr("onclick","disableVideo()");
    $("#videoButton").attr("data-tooltip","Disable Video");
    $("#videoButton").tooltip();
    $("#videoButton").append('<i class="material-icons videoIcon">videocam</i>');
    localStream.getVideoTracks()[0].enabled = !(localStream.getVideoTracks()[0].enabled);
}

function disableAudio(){
    $(".audioIcon").remove();
    $("#audioButton").attr("onclick","enableAudio()");
    $("#audioButton").attr("data-tooltip","Unmute");
    $("#audioButton").tooltip();
    $("#audioButton").append('<i class="material-icons audioIcon">mic_off</i>');
    localStream.getAudioTracks()[0].enabled = !(localStream.getAudioTracks()[0].enabled);
}

function enableAudio(){
    $(".audioIcon").remove();
    $("#audioButton").attr("onclick","disableAudio()");
    $("#audioButton").attr("data-tooltip","Disable Audio");
    $("#audioButton").tooltip();
    $("#audioButton").append('<i class="material-icons audioIcon">mic</i>');
    localStream.getAudioTracks()[0].enabled = !(localStream.getAudioTracks()[0].enabled);
}

var canvasArea;
var topDiv;
var ctx;    
var mouse = {x: 0, y: 0};
var last_mouse = {x: 0, y: 0};	
var wasScribbleinProgress = false;

var onPaint = function() {
    ctx.beginPath();
    ctx.moveTo(last_mouse.x, last_mouse.y);
    ctx.lineTo(mouse.x, mouse.y);
    ctx.closePath();
    ctx.stroke();
    var cv = document.getElementById("paint");
    
    var mousesend = {x: 0, y: 0};
    mousesend.x = Math.round((mouse.x / cv.width)*1000)/1000;
    mousesend.y = Math.round((mouse.y / cv.height)*1000)/1000;

    if(Math.abs(last_mouse.x - mouse.x) >= 2 || Math.abs(last_mouse.y - mouse.y) >= 2) {
        if (sendGenericDC.readyState === 'open') {
            sendGenericDC.send("Scribble:" + JSON.stringify(mousesend));
        }
    }
};	

var mouseDownFunc = function(e) {
    canvasArea.addEventListener('mousemove', onPaint, false);

    if (sendGenericDC.readyState === 'open') {
        sendGenericDC.send("Scribble:Start");
    }
};

var mouseUpFunc = function() {
    canvasArea.removeEventListener('mousemove', onPaint, false);

    if (sendGenericDC.readyState === 'open') {
        sendGenericDC.send("Scribble:Stop");
    }
};

var mouseMoveFunc = function(e) {

    last_mouse.x = mouse.x;
    last_mouse.y = mouse.y;	
    mouse.x = e.pageX- topDiv.offsetLeft;
    mouse.y = e.pageY- topDiv.offsetTop;
};

function startScribble() {
    scribbleon = true;
    localVideo.srcObject = remoteVideo.srcObject;
    var vid = document.getElementById("localVideo");
    vid.muted =false;
    remoteVideo.pause();
    if (sendGenericDC.readyState === 'open') {
        sendGenericDC.send("FreezeFrame");
    }
    $(".scribbleIcon").remove();
    $("#scribbleButton").attr("onclick","clearScribble()");
    $("#scribbleButton").attr("data-tooltip","Erase Scribble");
    $("#scribbleButton").tooltip();
    $("#scribbleButton").append('<i class="material-icons scribbleIcon">format_paint</i>');
    
    canvasArea = document.getElementById('paint');
    topDiv = document.getElementById('videoContainerDiv');
    ctx = canvasArea.getContext('2d');    
    canvasArea.style.cursor = "crosshair";
    canvasArea.addEventListener('mousemove', mouseMoveFunc, false);
	
    ctx.lineWidth = 3;
    ctx.lineJoin = 'round';
    ctx.lineCap = 'round';
    ctx.strokeStyle = 'blue';
	
    canvasArea.addEventListener('mousedown', mouseDownFunc, false);
    canvasArea.addEventListener('mouseup', mouseUpFunc, false);
    wasScribbleinProgress = true;
}

function clearScribble() {
    scribbleon = false;
    var vid = document.getElementById("localVideo");
    vid.muted =true;
    localVideo.srcObject=localStream;
    var ms_video = new MediaStream(remoteStream.getVideoTracks());
    //remoteAudio.srcObject = remoteStream.stream;
    remoteVideo.srcObject =ms_video;
    //remoteVideo.play();
    $(".scribbleIcon").remove();
    $("#scribbleButton").attr("onclick","startScribble()");
    $("#scribbleButton").attr("data-tooltip","Scribble");
    $("#scribbleButton").tooltip();
    $("#scribbleButton").append('<i class="material-icons scribbleIcon">border_color</i>');
    canvasArea = document.getElementById('paint');
    canvasArea.style.cursor = "auto";

    ctx = canvasArea.getContext('2d');
    ctx.clearRect(0, 0, canvasArea.width, canvasArea.height);

    canvasArea.removeEventListener('mousemove', mouseMoveFunc, false);
    canvasArea.removeEventListener('mouseup', mouseUpFunc, false);
    canvasArea.removeEventListener('mousedown', mouseDownFunc, false);

    if (sendGenericDC.readyState === 'open') {
        sendGenericDC.send("Scribble:Clear");
    }
    wasScribbleinProgress = false;
}



function resize_canvas(element)
{
    var w = element.offsetWidth;
    var h = element.offsetHeight;
    var cv = document.getElementById("paint");
    cv.width = w;
    cv.height = h;
}

function message_receive(ev)
{
    if (ev.originalEvent.key=='message') 
    {
        var message=JSON.parse(ev.originalEvent.newValue);
        if (!message) return; // ignore empty msg or msg reset

        // here you act on messages.
        // you can send objects like { 'command': 'doit', 'data': 'abcd' }
        //if (message.command == 'doit') alert(message.data);

        // etc.
        if (sendGenericDC.readyState === 'open') {
            sendGenericDC.send(message);
            console.log("Message sent " + message);
        }
    }
    else if (ev.originalEvent.key =='getToken')
    {
        var message=JSON.parse(ev.originalEvent.newValue);
        if (!message) return; // ignore empty msg or msg reset
        socket.emit("get_token");
        console.log("get_token from server emitted");
    }
    else
    {
        console.log("No matching key found " + ev.originalEvent.key);
        return;
    }
}

function sendTokenToAutodeskHTML(message) {
    localStorage.setItem('receivedToken', JSON.stringify(message));
    localStorage.removeItem('receivedToken');
    console.log("Received Token main.js" + JSON.stringify(message));
}

function randomString(strLength) {
    var result = [];
    strLength = strLength || 5;
    var charSet = "0123456789";
    while (strLength--) {
        result.push(charSet.charAt(Math.floor(Math.random() * charSet.length)));
    }
    return result.join("");
}

function roomstr(){
    var result = 'perinno' + randomString(3);
    return result;

}