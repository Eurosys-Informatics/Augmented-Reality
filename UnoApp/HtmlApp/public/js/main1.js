//  Copyright (c) 2017 Perinno Labs. All Rights Reserved.

'use strict';

$(document).ready(function () {
    console.log('Document ready: ');

    $("#startButton").prop("disabled", true);
    $("#callButton").prop("disabled", true);
    $("#mrcstartButton").prop("disabled", true);
    $("#capture").prop("disabled", true);

    $("#startButton").click(start);
    $("#callButton").click(call);
    $("#mrcstartButton").click(startMRC);
    $("#fileInput").change(handleFileInputChange);
    $('#connectedPeers').hide();
    $('#pbarspan').attr("style", "width: 0%");
    $('#pbarspanrec').attr("style", "width: 0%");
    $('#MRCImage').attr("src", "");
});

var nick_name;
var user_email;
var user_id_token;
var user_photo;
var startTime;
var my_id = -1;
var peer_id;
var tempid = -1;
var people = {};
var socket;
var sendChannel;
var receiveChannel;
var chunkSize = 64 * 1024;
var kCandidateSdpMidName = "sdpMid";
var kCandidateSdpMlineIndexName = "sdpMLineIndex";
var kCandidateSdpName = "candidate";
var kSessionDescriptionTypeName = "type";
var kSessionDescriptionSdpName = "sdp";
var localStream;
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

$(function () {
    var video, $output;
    var scale = 1;

    var initialize = function () {
        $output = $("#output");
        video = $("#remoteVideo").get(0);
        $("#capture").click(captureImage);
    };

    var captureImage = function () {
        var canvas = document.createElement("canvas");
        canvas.width = video.videoWidth * scale;
        canvas.height = video.videoHeight * scale;
        canvas.getContext('2d')
              .drawImage(video, 0, 0, canvas.width, canvas.height);

        var img = document.createElement("img");
        img.src = canvas.toDataURL();
        $output.prepend(img);
    };

    $(initialize);
}());

/*
$(function () {
    $("#peerslist").selectable({
        stop: function () {
             $(".ui-selected", this).each(function () {
                 var index = $("#peerslist li").index(this);
                 //var tempid = $("#peerlist li").this.id;
                 callButton.disabled = false;
                 tempid = $(this).attr("id");
                 trace("Selected from list: " + index);
                 trace("Obtained ID: " + tempid);
            });
        }
    });
});*/

$("#localVideo").on('loadedmetadata', function () {
  trace('Local video videoWidth: ' + this.videoWidth +
    'px,  videoHeight: ' + this.videoHeight + 'px');
});

$("#remoteVideo").on('loadedmetadata', function () {
  trace('Remote video videoWidth: ' + this.videoWidth +
    'px,  videoHeight: ' + this.videoHeight + 'px');
});

$("#remoteVideo").on('resize', function () {
  trace('Remote video size changed to ' +
    remoteVideo.videoWidth + 'x' + remoteVideo.videoHeight);
  // We'll use the first onsize callback as an indication that video has started
  // playing out.
  if (startTime) {
    var elapsedTime = window.performance.now() - startTime;
    trace('Setup time: ' + elapsedTime.toFixed(3) + 'ms');
    startTime = null;
  }
});

// Data Transfer related functions

//fileInput.addEventListener('change', handleFileInputChange, false);

function handleFileInputChange() {
    var file = $("#fileInput").prop('files')[0];
    trace('file = ' + file);



    if (!file) {
        trace('No file chosen');
    } else if (!pc1) {
        trace('No connection active');
    }
    else {
        sendFile(file);
    }
}

function sendFile(file) {
    $('#pbarspan').attr("style", "width: 0%");
    modNumber = delIncrement;
    var dataprops = { "dataType": "file", "dataSize": file.size, "fileName": file.name };
    trace(JSON.stringify(dataprops));
    trace("Sending Start data block");    
    if(sendChannel.readyState === 'open') {
        sendChannel.send(JSON.stringify(dataprops));
        sendChannel.send("StartDataBlock");
        trace("Sending Start data block");
        var sliceFile = function (offset) {
            var reader = new window.FileReader();
            reader.onload = (function () {
                return function (e) {
                    //trace("Sending file data" + offset);
                    sendChannel.send(e.target.result);
                    sendProgressPercentage = 100 * (offset / file.size);
                    if (sendProgressPercentage / modNumber > 1.0)
                    {
                        stringSendProgress = sendProgressPercentage.toString();
                        $('#pbarspan').attr("style", "width:".concat(stringSendProgress, "%"));
                        modNumber += delIncrement;                        
                    }                                             
                    if (file.size > offset + e.target.result.byteLength) {
                        window.setTimeout(sliceFile, 0, offset + chunkSize);                        
                    }
                    else
                    {
                        $('#pbarspan').attr("style", "width:100%");
                        trace("Sending End data block");
                        sendChannel.send("EndDataBlock");
                        delIncrement = 5;
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
    sendChannel = pc1.createDataChannel('sendDataChannel');
    sendChannel.binaryType = 'arraybuffer';
    trace('Created send data channel');

    sendChannel.onopen = onSendChannelStateChange;
    sendChannel.onclose = onSendChannelStateChange;
}

function onSendChannelStateChange() {
    var readyState = sendChannel.readyState;
    trace('Send channel state is: ' + readyState);
    if (readyState === 'open') {

    }
}

function gotStream(stream) {
    trace('Received local stream');
    localVideo.srcObject = stream;
  localStream = stream;

  startTime = window.performance.now();
  var videoTracks = localStream.getVideoTracks();
  var audioTracks = localStream.getAudioTracks();
  if (videoTracks.length > 0) {
      trace('Using video device: ' + videoTracks[0].label);
  }
  if (audioTracks.length > 0) {
      trace('Using audio device: ' + audioTracks[0].label);
  }

  
}


function stopSignalling() {

    if(my_id != -1)
    {
        socket.emit("sign out", my_id);
        trace("Signing out");
        my_id = -1;
    }
    trace("Signing out...");
    socket.close();
    socket.disconnect();
    socket = null;

}

function onGoogleSignin() {
    console.log("Google sign-in requested...");
    var signedin = gapi.signin2.GoogleAuth.isSignedIn.get();
    console.log("Is signed in:" + signedin);
    gapi.signin2.render("mySignIn", {
        'onsuccess': onSignIn
    });
}

function onSignIn(googleUser) {
    console.log("onSignIn called...");
    // Useful data for your client-side scripts:
    var profile = googleUser.getBasicProfile();
    console.log("ID: " + profile.getId()); // Don't send this directly to your server!
    nick_name = profile.getName();
    console.log('Full Name: ' + nick_name);
    console.log('Given Name: ' + profile.getGivenName());
    console.log('Family Name: ' + profile.getFamilyName());
    user_photo = profile.getImageUrl();
    console.log("Image URL: " + user_photo);
    user_email = profile.getEmail();
    console.log("Email: " + user_email);

    // The ID token you need to pass to your backend:
    user_id_token = googleUser.getAuthResponse().id_token;
    console.log("ID Token: " + user_id_token);

    $("#startButton").prop("disabled", false);
}

function startSignalling() {

    trace("StartSig");
    socket = io.connect("wss://ss.perinno.com:80", { 'forceNew': true });

    //nick_name = 'Person' + Math.floor((Math.random() * 100) + 1);
    socket.emit("credentials", nick_name, user_photo);

    $('#connectedPeers').show();

    socket.on('myid', function(id) {
        my_id = id;
        trace('Received id: ' + my_id);
        $("#peerslist").append('<li id="' +
           // my_id +
            '">' +
            '<img class = "user_image" width="35" height="35" src= "' + user_photo + '"/>' +            
           // 'Myself: ' +
          //  my_id +
           // ': ' +
            nick_name + ' '+
            '</li>');
        $("#peerslist li").append($("#callButton").click(call));
    });

    socket.on('people', function (data) {
        people = data;
        for (var i in people) {
            //peer_id = i;
            $("#peerslist").append('<li id="' + i +
                '"><a href="javascript:void(0)">' + i + ': ' + people[i] +
                '</a></li>');
            $("#peerslist li").append($("#callButton").click(call));
        }
        //trace('Peer ID: ' + peer_id);
        trace(JSON.stringify(people));
    });

    socket.on('remove user', function (userid) {
        trace('User loggout out ' + userid + ' ' + people[userid]);
        $('#' + userid).remove();
        if (userid == tempid)
        {
            callButton.disabled = true;
            tempid = -1;

        }
        delete people[userid];
        trace(JSON.stringify(people));
    });

    socket.on('new user', function (user) {
        for (var i in user) {
            trace('User logged in ' + i + ' ' + user[i]);
            people[i] = user[i];
            //peer_id = i;
            $("#peerslist").append('<li id="' + i + '"><a href="javascript:void(0)">' + i + ': ' + people[i] + '</a></li>');
            $("#peerslist li").append($("#callButton").click(call));
        }
        //trace('Peer ID: ' + peer_id);
        trace(JSON.stringify(people));
    });

    socket.on('message_from_peer', function (to_msg) {
        for (var i in to_msg) {
            var from_peer = i;
            var msg = to_msg[i];
            trace(i + ' ' + msg);

            if (msg.startsWith('hang up')) {
                pc1.close();
                pc1 = null;
                mrcstartButton.disabled = true;
                capture.disabled = true;
                $("#callButton").text('Call');
                if (tempid == -1)
                {
                    callButton.disabled = true;

                }
                return;
            }
            else if (msg.startsWith('user busy')) {
                pc1.close();
                pc1 = null;
                mrcstartButton.disabled = true;
                capture.disabled = true;
                $("#callButton").text('Call');
                sweetAlert("User Busy", "Please try again later!", "error");
                return;
            }

            var JsonObj = JSON.parse(msg);
            
            
            if (JsonObj && kSessionDescriptionSdpName in JsonObj) {
                trace('SDP Type: ' + JsonObj[kSessionDescriptionTypeName]);

                if (JsonObj[kSessionDescriptionTypeName] === "answer") {
                    trace('Setting remote description...');
                    pc1.setRemoteDescription(JsonObj);
                }

                if (JsonObj[kSessionDescriptionTypeName] === "offer") {
                    trace('Setting remote description...');
                    if (!pc1)
                        createPeerConnection();
                    peer_id = from_peer;
                    trace("peer_id set to :" + peer_id);
                    callReceived(JsonObj);

                }
            }

            if (JsonObj && kCandidateSdpName in JsonObj) {
                trace('Setting ice candidate...');
                pc1.addIceCandidate(JsonObj)
                .then( function () {
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

function callReceived(JsonObj) {

    pc1.setRemoteDescription(JsonObj);

    audio.loop = true;
    audio.play();
    swal({
        title: "Incoming Call...",
        text: "Select Answer or Cancel",
        //type: "warning",
        showCancelButton: true,
        //cancelButtomColor: "#FF0000",
        confirmButtonColor: "#00FF00",
        confirmButtonText: "Answer",
        closeOnConfirm: true
    },
        function (value) {
            if (value) {
                trace('Answering call');
                $("#callButton").text('Hang Up');
                callButton.disabled = false;
                pc1.createAnswer(offerOptions
                                  ).then(
                                    onCreateAnswerSuccess,
                                    onCreateSessionDescriptionAnswerError
                                  );
                audio.pause();
                audio.currentTime = 0;
            } else {
                trace('Rejecting call');

                socket.emit('message', my_id, peer_id, 'user busy');
                audio.pause();
                audio.currentTime = 0;
                pc1.close();
                mrcstartButton.disabled = true;
                capture.disabled = true;

                pc1 = null;
                $("#callButton").text('Call');
            }
        });
    /*vex.dialog.confirm({
        message: 'Incoming Call... Answer?',
        callback: function (value) {
            if (value) {
                trace('Answering call');
               
                pc1.createAnswer(offerOptions
                                  ).then(
                                    onCreateAnswerSuccess,
                                    onCreateSessionDescriptionAnswerError
                                  );
                audio.pause();
                audio.currentTime = 0;
            } else {
                trace('Rejecting call');
                
                socket.emit('message', my_id, peer_id, 'user busy');
                audio.pause();
                audio.currentTime = 0;
                pc1.close();
                pc1 = null;
                hangupButton.disabled = true;
                callButton.disabled = false;
            }
        }
    })*/

}


function start() {
    trace('Function start...: ' + $("#startButton").text());
    if ($("#startButton").text() === 'Connect')
    {
        startSignalling();
        audio.play();
        audio.pause(); //Juggad to work around Chrome limitation
        $("#startButton").text('Disconnect');
        //startButton.disabled = true;
        trace('Requesting local stream');
        navigator.mediaDevices.getUserMedia({
            audio: true,
            video: true
        })
        .then(gotStream)
        .catch(function (e) {
            alert('getUserMedia() error: ' + e.name);
        });
    }
    else if ($("#startButton").text() === 'Disconnect')
    {
        tempid = -1;
        if ($("#callButton").text() === 'Hang Up') {
            hangup();
        }
        stopSignalling();
        $("#startButton").text('Connect');
        $("#peerslist").empty();
        localVideo.srcObject = null;
        localStream.getVideoTracks()[0].stop();
        

    }

    
}

function createPeerConnection() {
    var pc_config = { "iceServers": [{ "url": "stun:stun.l.google.com:19302" }] };;
    pc1 = new RTCPeerConnection(pc_config);
    trace('Created local peer connection object pc1');
    pc1.onicecandidate = function (e) {
        onIceCandidate(pc1, e);
    };

    pc1.oniceconnectionstatechange = function (e) {
        onIceStateChange(pc1, e);
    };

    pc1.ondatachannel = receiveChannelCallback;

    pc1.addStream(localStream);
    trace('Added local stream to pc1');

    pc1.onaddstream = gotRemoteStream;
    mrcstartButton.disabled = false;
    capture.disabled = false;

    trace('After gotStream');
    createDataChannel();

}

function receiveChannelCallback(event) {
    trace('Receive Channel Callback');
    receiveChannel = event.channel;
    receiveChannel.binaryType = 'arraybuffer';
    receiveChannel.onmessage = onReceiveMessageCallback;
    receiveChannel.onopen = onReceiveChannelStateChange;
    receiveChannel.onclose = onReceiveChannelStateChange;
}

function onReceiveMessageCallback(event) {
    trace('Received Message ' + event.data.byteLength + " " + event.data);
    $('#pbarspanrec').attr("style", "width: 0%");
    modNumber = delIncrement;
    if (event.data === "StartDataBlock")
        accum = true; //Start accumulating in buffer
    else if (event.data === "EndDataBlock") {
        accum = false;
        trace("Received file size" + receivedSize);
        if (receivedSize === expectedfilesize) {
            trace("Successfully received file!!!" + receiveBuffer.length);
        }
        var received = new window.Blob(receiveBuffer);
        var urlCreator = window.URL || window.webkitURL;
        var imageUrl = urlCreator.createObjectURL(received);

        $('#MRCImage').attr("src", imageUrl);
        receiveBuffer = [];
        expectedfilesize = 0;
        receivedSize = 0;
        $('#pbarspanrec').attr("style", "width:100%");
        delIncrement = 5;
    }
    else
    {

        if (accum == false) {
            var JsonObj = JSON.parse(event.data);

            if (JsonObj && "dataType" in JsonObj) {
                trace('dataType :' + JsonObj["dataType"]);

                if ((JsonObj["dataType"] === "mrc-stream") || (JsonObj["dataType"] === "file")) {
                    trace('mrc-stream received...');
                    expectedfilesize = JsonObj["dataSize"];
                    trace('expectedfilesize :' + JsonObj["dataSize"]);
                }
            }
        } else  {
        receiveBuffer.push(event.data);
        receivedSize += event.data.byteLength;
        recProgressPercentage = 100 * (receivedSize / expectedfilesize);
        if (recProgressPercentage / modNumber > 1.0) {
            stringRecProgress = recProgressPercentage.toString();
            $('#pbarspanrec').attr("style", "width:".concat(stringRecProgress, "%"));
            modNumber += delIncrement;
        }

    }
    }
/*
if (JsonObj === "StartDataBlock")
    accum = true; //Start accumulating in buffer

    if (JsonObj === "EndDataBlock") {
        accum = false;
        if (receivedSize ===  expectedfilesize)
        {
            trace("Successfully received file!!!")
    }
        //display image and flush buffer
    }
    */
    //trace('Received Message is:' + receiveBuffer);
}

function onReceiveChannelStateChange() {
    var readyState = receiveChannel.readyState;
    trace('Receive channel state is: ' + readyState);
    if (readyState === 'open') {
      /*  timestampStart = (new Date()).getTime();
        timestampPrev = timestampStart;
        statsInterval = window.setInterval(displayStats, 500);
        window.setTimeout(displayStats, 100);
        window.setTimeout(displayStats, 300);
        */
    }
}

function closeDataChannels() {
    trace('Closing data channels');
    sendChannel.close();
    trace('Closed data channel with label: ' + sendChannel.label);
    if (receiveChannel) {
        receiveChannel.close();
        trace('Closed data channel with label: ' + receiveChannel.label);
    }
    
}

function call() {

    if ($("#callButton").text() === 'Call') {

        $("#callButton").text('Hang Up');
        peer_id = tempid;
        trace("peer_id set to :" + peer_id);
        trace('Starting call');

        if (!pc1)
            createPeerConnection();

        trace('pc1 createOffer start');
        pc1.createOffer(
          offerOptions
        ).then(
          onCreateOfferSuccess,
          onCreateSessionDescriptionError
        );
    }
    else if ($("#callButton").text() === 'Hang Up') {
        hangup();
    }
}

function hangup()
{
    $("#callButton").text('Call');
    trace('Ending call');
    socket.emit('message', my_id, peer_id, 'hang up');
    pc1.close();
    mrcstartButton.disabled = true;
    capture.disabled = true;

    pc1 = null;
    if (tempid == -1) {
        callButton.disabled = true;
    }
}

function onCreateSessionDescriptionError(error) {
  trace('Failed to create session description: ' + error.toString());
}

function onCreateOfferSuccess(desc) {
  trace('Offer from pc1\n' + desc.sdp);
  trace('pc1 setLocalDescription start');
  pc1.setLocalDescription(desc).then(
    function() {
      onSetLocalSuccess();
    },
    onSetSessionDescriptionError
  );

  socket.emit('message', my_id, peer_id, JSON.stringify(desc));
}

function onSetLocalSuccess() {
  trace('setLocalDescription complete');
}

function onSetRemoteSuccess(pc) {
  trace('setRemoteDescription complete');
}

function onSetSessionDescriptionError(error) {
  trace('Failed to set session description: ' + error.toString());
}


function onCreateSessionDescriptionAnswerError(error) {
    trace('Failed to set session description: ' + error.toString());
}

function gotRemoteStream(e) {
  remoteVideo.srcObject = e.stream;
  trace('pc1 received remote stream');
}

function onCreateAnswerSuccess(desc) {
  trace('Answer from pc2:\n' + desc.sdp);
  trace('pc setLocalDescription start');
  pc1.setLocalDescription(desc).then(
    function() {
      onSetLocalSuccess(pc1);
    },
    onSetSessionDescriptionError
  );

  socket.emit('message', my_id, peer_id, JSON.stringify(desc));
}

function onIceCandidate(pc, event) {
  trace('ICE candidate: \n' + (event.candidate ?
      event.candidate.candidate : '(null)'));
    
  trace(JSON.stringify(event.candidate));

  socket.emit('message', my_id, peer_id, JSON.stringify(event.candidate));
}

function onAddIceCandidateSuccess() {
  trace('addIceCandidate success');
}

function onAddIceCandidateError(error) {
  trace('failed to add ICE Candidate: ' + error.toString());
}

function onIceStateChange(event) {
    trace('ICE state change event: ', event);
}



function startMRC() {

    if ($("#mrcstartButton").text() === 'Start MRC') {
        trace('Starting MRC');
        //$("#mrcButton").text("Normal Video");
        $("#mrcstartButton").text('Stop MRC');
        sendChannel.send("StartMRC");

    }
    else if ($("#mrcstartButton").text() === 'Stop MRC') {
            trace('Stopping MRC');
        //$("#mrcButton").text("Normal Video");
            $("#mrcstartButton").text('Start MRC');
            sendChannel.send("StopMRC");

        }
}
