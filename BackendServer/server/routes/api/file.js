const Busboy = require('busboy');
const AWS = require('aws-sdk');
var fs = require('fs');
var validator = require('validator');
const uuidv4 = require('uuid/v4');
var kue = require('kue');
var randomstring = require("randomstring");
var text2mail = require("extract-data-from-text");

const BUCKET_NAME = 'perinno-app-upload';
const IAM_USER_KEY = 'AKIAI23XM5QA635R25DA';
const IAM_USER_SECRET = '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';
let s3bucket = new AWS.S3({
  accessKeyId: IAM_USER_KEY,
  secretAccessKey: IAM_USER_SECRET,
});

const save_path = "/home/ubuntu/BackendServer/Temp";
var MongoClient = require('mongodb').MongoClient;
var iplocate = require('iplocation');
var dateTime = require('node-datetime');
var request = require("request");

var queue = kue.createQueue();
var assetCollection;
var aliasCollection;

const sgMail = require('@sendgrid/mail');
sgMail.setApiKey('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');

CreateMongoConnection();

function CreateMongoConnection() {
  db = MongoClient.connect('mongodb://localhost:27017', {useNewUrlParser: true}, function(err, db) {
      if(err) {
          console.log("WARNING: Cannot connect to Mongodb " + err);
          return;
      }
      console.log("INFO: Connected to mongoDB server!");
      assetCollection = db.db('AssetDB').collection('assets');
      aliasCollection = db.db('AssetDB').collection('alias');
  });
}

function InsertAssetToDB(_uuid, _code, _owner, _userName, _filesize) {
  assetCollection.insertOne({uuid: _uuid,
                          date: dateTime.create().format('Y-m-d H:M:S'),
                          code: _code,
                          owner: _owner,
                          user_name: _userName,
                          filesize: _filesize,
                          views: 0,
                          uwp_views: 0,
                          ios_views: 0,
                          and_views: 0,
                          price: 0.0,
                          //user_rating: 0.0,
                          ratings_sum: 0,
                          number_votes: 0,
                          shared_with: []
                          }, function(err, result) {
      if(err) {
          console.log("ERROR: Cannot insert Asset into DB");
          return;
      }
      console.log("INFO: Successfully inserted into AssetDB " + result);
  });
}

function IncrementViews(modelDetails) {
  var mailtext = '<p> Model Viewed for processing: </p> <p>Code:' + modelDetails.key + '</p><p>Platform:' + modelDetails.Platform + '</p>';
  sendEmail('Perinno Labs <noreply@perinno.com>', 'rohitru@gmail.com', "3D Model Viewed!", mailtext);
   
  assetCollection.updateOne({ code: modelDetails.key }, { $inc: { views: 1 } }, function (err, result) {
    if(err) {
      console.log("WARNING: Cannot update views for " + modelDetails.key);
      return;
  }
    console.log("INFO: Successfully updated views for " + modelDetails.key);
  });

  if (modelDetails.Platform === "uwp") {
    assetCollection.updateOne({ code: modelDetails.key }, { $inc: { uwp_views: 1 } }, function (err, result) {
      if (err) {
        console.log("WARNING: Cannot update UWP views for " + modelDetails.key);
        return;
      }
      console.log("INFO: Successfully updated views for " + modelDetails.key);
    });
  } else if (modelDetails.Platform === "ios") {
    assetCollection.updateOne({ code: modelDetails.key }, { $inc: { ios_views: 1 } }, function (err, result) {
      if (err) {
        console.log("WARNING: Cannot update ios views for " + modelDetails.key);
        return;
      }
      console.log("INFO: Successfully updated views for " + modelDetails.key);
    });
  } else if (modelDetails.Platform === "and") {
    assetCollection.updateOne({ code: modelDetails.key }, { $inc: { and_views: 1 } }, function (err, result) {
      if (err) {
        console.log("WARNING: Cannot update views for " + modelDetails.key);
        return;
      }
      console.log("INFO: Successfully updated views for " + modelDetails.key);
    });
  }

}

function sendEmail(senderEmail, receiverEmail, subject, htmlText) {
  if (!validator.isEmail(receiverEmail)) {
    console.log("WARNING: Cannot validate receiver email");
    return;
  }

  const msg = {
    from: senderEmail,
    to: receiverEmail,
    subject: subject,
    html: htmlText
  };

  sgMail.send(msg, (error, result) => {
    if (error) {
      console.log("WARNING: Cannot send email: " + error.toString());
    }
    else {
      console.log('INFO: Email sent: ' + result.toString());
    }
  });
}

function getfromS3(req, res) {
  if (!validator.isLength(req.query.key, { min: 4, max: 5 })) {
    res.status(400).json({ 'modelURL': "Code Not Found" });
    return;
  }

  const s3params = {
    Bucket: BUCKET_NAME,
    MaxKeys: 100,
    //Delimiter: '/',
    Prefix: req.query.key
  };

  s3bucket.listObjectsV2(s3params, (err, data) => {
    if (err) {
      console.log("Error!", err, err.stack);

    }

    if (data.KeyCount == 0) {
      if (req.query.key === "BATA") {
        res.status(200).json({ 'ModelURL': "http://ss.perinno.com:81/bikebundle" });
      }
      else if (req.query.key === "CAR2") {
        res.status(200).json({ 'ModelURL': "http://ss.perinno.com:81/carbundle" });
      }
      else if (req.query.key === "TURB") {
        res.status(200).json({ 'ModelURL': "http://ss.perinno.com:81/turbosonicbundle" });
      }
      else {
        res.status(404).json({ 'modelURL': "Code Not Found" });
      }
    }
    else {
      for (const cont of data.Contents) {
        if (cont.Key.indexOf('_' + req.query.Platform) > -1) {
          console.log(cont.Key);
          var params = {
            Bucket: BUCKET_NAME,
            Key: cont.Key
          };
          var url = s3bucket.getSignedUrl('getObject', params);
          console.log(url);
          res.status(200).json({ 'ModelURL': url, 'FileName': cont.Key.substring(cont.Key.indexOf('/') + 1, cont.Key.length - 10) });
          return;
        }
      }
    }
  });
}

function getThumbnailFromS3(modelCode, res) {

  if (!validator.isLength(modelCode, { min: 4, max: 5 })) {
    res.status(200).json({ 'ModelCode': modelCode, 'ThumbnailURL': 'https://perinno.com/3d.png' });
    return;
  }

  const s3params = {
    Bucket: BUCKET_NAME,
    MaxKeys: 100,
    //Delimiter: '/',
    Prefix: modelCode
  };

  s3bucket.listObjectsV2(s3params, (err, data) => {
    if (err) {
      console.log("Error!", err, err.stack);
    }
    
    for (const cont of data.Contents) {
      if (cont.Key.endsWith("thumbnail.png")) {
        console.log("INFO: Thumbnail found");
        var params = {
          Bucket: BUCKET_NAME,
          Key: cont.Key
        };
        var url = s3bucket.getSignedUrl('getObject', params);
        res.status(200).json({ 'ModelCode': modelCode, 'ThumbnailURL': url });
        return;
      }
    }

    res.status(200).json({ 'ModelCode': modelCode, 'ThumbnailURL': 'https://perinno.com/3d.png' });
  });
}

function getglbFromS3(modelCode, devicePlatform, res) {

  if (!validator.isLength(modelCode, { min: 4, max: 5 })) {
    res.status(200).json({ 'ModelCode': modelCode, 'GlbURL': 'https://perinno.com/3d.png' });
    console.log('Why here?');
    return;
  }

  const s3params = {
    Bucket: BUCKET_NAME,
    MaxKeys: 100,
    //Delimiter: '/',
    Prefix: modelCode
  };

  s3bucket.listObjectsV2(s3params, (err, data) => {
    if (err) {
      console.log("Error!", err, err.stack);
    }
    
    for (const cont of data.Contents) {
      if (cont.Key.endsWith("glboutput.glb") && devicePlatform === 'Android') {
        console.log("INFO: GLB found");
        var params = {
          Bucket: BUCKET_NAME,
          Key: cont.Key
        };
        var url = s3bucket.getSignedUrl('getObject', params);
        res.status(200).json({ 'ModelCode': modelCode, 'GlbURL': url });
        return;
      }

      if (cont.Key.endsWith("usdzoutput.usdz") && devicePlatform === 'iOS') {
        console.log("INFO: USDZ found");
        var params = {
          Bucket: BUCKET_NAME,
          Key: cont.Key
        };
        var url = s3bucket.getSignedUrl('getObject', params);
        res.status(200).json({ 'ModelCode': modelCode, 'GlbURL': url });
        return;
      }  
    }

    res.status(200).json({ 'ModelCode': modelCode, 'GlbURL': 'https://perinno.com/3d.png' });
  });
}

module.exports = (app) => {
  // The following is an example of making file upload with 
  // additional body parameters.
  // To make a call with PostMan
  // Don't put any headers (content-type)
  // Under body:
  // check form-data
  // Put the body with "element1": "test", "element2": image file
  app.post('/api/upload', function (req, res, next) {

    // This grabs the additional parameters so in this case passing     
    // in "element1" with a value.
    const emailID = req.body.element1;
    console.log("INFO: User email: " + emailID);

    const userName = req.body.username;
    console.log("INFO: User name: " + userName);

    var busboy = new Busboy({ headers: req.headers });
    // The file upload has completed
    busboy.on('finish', function () {
      console.log('INFO: File upload finished');
      // Your files are stored in req.files. In this case,
      // you only have one and it's req.files.element2:
      // This returns:
      // {
      //    element2: {
      //      data: ...contents of the file...,
      //      name: 'Example.jpg',
      //      encoding: '7bit',
      //      mimetype: 'image/png',
      //      truncated: false,
      //      size: 959480
      //    }
      // }
      // Grabs your file object from the request.

      var taskID = uuidv4();
      var taskFolder = save_path + '/' + taskID;
      
      if (req.files.element2) {
        var file = req.files.element2;


        fs.existsSync(taskFolder) || fs.mkdirSync(taskFolder);
        fs.writeFile(taskFolder + '/' + file.name, file.data, function (err) {
          if (err) {
            return console.log("WARNING: Error in writing file" + err);
          }
          console.log("INFO: The file was saved at " + taskFolder);
        });
      }
      else {
        res.status(400).json({ 'Status': "Error in request. File not posted to server." });
        return;
      }

      var code_gen = randomstring.generate({
        length: 4,
        capitalization: 'uppercase'
      });
      console.log("INFO: Model code: " + code_gen);

      if (req.files.element3) {
        console.log("INFO: Textue file found in request");
        var texturefile = req.files.element3;

        fs.writeFile(taskFolder + '/' + 'MainTexture' + texturefile.name.substring(texturefile.name.length - 4, texturefile.name.length), texturefile.data, function (err) {
          if (err) {
            return console.log("WARNING: Cannot write texture file: " + err);
          }
        });
      }

      var texturename = req.files.element3 ? 'MainTexture' + texturefile.name.substring(texturefile.name.length - 4, texturefile.name.length) : "null";

      var job = queue.create('UnityTask', {
        TaskID: taskID,
        ModelCode: code_gen,
        ModelName: req.files.element2.name,
        TextureName: texturename
      }).save( function(err){
       if( !err ) console.log( "Kue Job ID: " + job.id );
      });

      job.on('complete', function(result){
        console.log('INFO: Job completed with code:' + code_gen + " and task ID: " + taskID + " with result: " + JSON.stringify(result));

        InsertAssetToDB(taskID, code_gen, emailID, userName, result);

        var mailText = CreateModelReadyHTML(userName, req.files.element2.name, code_gen);
        sendEmail("Perinno Labs <noreply@perinno.com>", emailID, "Perinno: Your 3D content is ready for Augmented Reality", mailText);
      }).on('failed attempt', function(errorMessage, doneAttempts){
        console.log('Job failed');
      
      }).on('failed', function(errorMessage){
        console.log('Job failed');
      
      }).on('progress', function(progress, data){
        console.log('\r  job #' + job.id + ' ' + progress + '% complete with data ', data );
      });

      var clientIp = req.connection.remoteAddress;
      iplocate(clientIp.substring(7), ['http://api.ipstack.com/*?access_key=3456086fc3caaed350516949a876b718'] , function (error, res) {
        var mailtext = '<p> Model uploaded for processing: </p> <p>Username:' + userName + '</p>' + '<p> Email:' + emailID + '</p>' + '<p> Model code: ' + code_gen + '</p> TaskID: ' + taskID + ' </p> <p> IP address:' + clientIp + '</p>' + ' <p> IP Geo:' + JSON.stringify(res, null, '\t') + '</p>';
        console.log(mailtext);
        sendEmail("Perinno Labs <noreply@perinno.com>", "rohitru@gmail.com", "New 3D model uploaded", mailtext);
        console.log("Perinno Internal Mail Sent!");
      
      });

      res.status(200).json({ 'message': "File uploaded successfully and is currently being processed", 'code': code_gen });
    });

    req.pipe(busboy);
  });



  app.post('/api/sendconfmail', function (req, res, next) {
    var code = req.body.code;
    var user_mail = req.body.email;
    var sender = req.body.sender;
    var sendermail = "";
    if (validator.isEmail(sender))
      sendermail = sender;
    console.log(req.body.email);

    var to_mail = text2mail.emails(req.body.email);
    console.log(to_mail);
    const msg = {
      from: 'noreply@perinno.com',
      to: to_mail,
      cc: sendermail,
      subject: 'You are invited to view a 3D model on Perinno AR App!',
      html: CreateShareHTML(user_mail, sendermail , code)
    };

    sgMail.send(msg, (error, result) => {
        if (error) {
          console.log(error);
          res.status(400).json({ 'Status': "Error: Email Not Sent", 'Response': error });
        }
        else {
          console.log('Email sent: ' + result);
          res.status(200).json({ 'Status': "Email Sent", 'Response': result });
        }
      });
  });

  app.get('/api/getModelAssetBundle', function (req, res, next) {
    //const element1 = req.element1;
    console.log("Get model called: " + req.query.key);
    IncrementViews(req.query);
    getfromS3(req, res);
  });

  app.get('/api/getAssetThumbnail', function (req, res, next) {
    console.log("Get thumbnail called: " + req.query.modelCode);
    getThumbnailFromS3(req.query.modelCode, res);
  });

  app.get('/api/getglbModel', function (req, res, next) {
    console.log("Get glb model called: " + req.query.modelCode);
    console.log("Get glb platform: " + req.query.devicePlatform);
    getglbFromS3(req.query.modelCode, req.query.devicePlatform, res);
  });

  app.get('/api/getUserModels', function(req, res, next) {
    console.log("Get UserModels called: " + req.query.userID);

    assetCollection.find( { $or: [ {owner: req.query.userID}, {shared_with: req.query.userID}] },
                          { projection: {_id: 0, date: 1, code: 1, filesize: 1, views: 1, ratings_sum: 1, number_votes: 1, owner: 1, shared_with: 1} }).toArray(
                          function(err, result) {
      if(err) {
        console.log("ERROR: Cannot query DB");
        res.status(400).json({ 'Status': "Internal server error", 'Response': error });
        return;
      }
      res.status(200).send(result);
    });
  });

  app.post('/api/updateModelRating', function(req, res, next) {
    console.log("POST updateModelRating called: " + req.body.modelCode + " rating: " + req.body.rating);
    var rating = parseInt(req.body.rating);
    assetCollection.updateOne({code: req.body.modelCode}, 
            { $inc: {ratings_sum: rating, number_votes: 1} },
            function(err, result) {
      if(err) {
        console.log("ERROR: Cannot update DB");
        res.status(400).json({ 'Status': "Internal server error", 'Response': err });
        return;
      }
      res.status(200).json({ 'Status': "Model rating received" });
    });
  });

  app.post('/api/linkhololens', function (req, res, next) {
    console.log("POST linkhololens called: " + req.body.email + " holoid: " + req.body.holoid);
    // Write code to link Email to its alias i.e. holoid.
    aliasCollection.find({ holoid: req.body.holoid },
      { projection: { _id: 0, email: 1, holoid: 1 } }).toArray(
      function (err, result) {
        if (err) {
          console.log("ERROR: Cannot query DB");
          res.status(400).json({ 'Status': "Internal server error", 'Response': error });
          return;
        }
        if (result[0]) {
          res.status(400).json({
            'Status': "Hololens " + result[0].holoid + " already linked to " + result[0].email + ". Request owner to de-link and try again."
          });
          console.log("Returning now");
          return;
        }
        else {

          aliasCollection.findAndModify({ email: req.body.email }, [['_id', 'asc']], { email: req.body.email, holoid: req.body.holoid }, { upsert: true, new: true },
            function (err, result) {
              if (err) {
                console.log("ERROR: Cannot update DB");
                res.status(400).json({ 'Status': "Internal server error", 'Response': err });
                return;
              }
              console.log(result);
              res.status(200).json({ 'Status': "Hololens Linked Successfully" });
            });


        }
      });
 
  });

  app.post('/api/delinkhololens', function (req, res, next) {
    console.log("POST delinkhololens called: " + req.body.email);
    // Write code to link Email to its alias i.e. holoid.
    
    aliasCollection.deleteOne({ email: req.body.email }, 
      function (err, result) {
        if (err) {
          console.log("ERROR: Cannot update DB");
          res.status(400).json({ 'Status': "Internal server error", 'Response': err });
          return;
        }
        if (result.result.n != 0) {
          res.status(200).json({ 'Status': "Hololens De-Linked Successfully" });
        }
        else {
          res.status(400).json({'Status': "Hololens Link not found."  });
         }

      });


  });



  app.get('/api/checkhololenslink', function (req, res, next) {
    aliasCollection.find({ holoid: req.query.key },
      { projection: { _id: 0, email: 1, holoid: 1 } }).toArray(
      function (err, result) {
        if (err) {
          console.log("ERROR: Cannot query DB");
          res.status(400).json({ 'Status': "Internal server error", 'Response': error });
          return;
        }
        if (result[0]) {
          res.status(200).send(result[0]);
        }
        else {
          res.status(200).json({ "email": "none", "holoid": req.query.key });
        }

      });

  });

  app.get('/api/checkemaillink', function (req, res, next) {
    aliasCollection.find({ email: req.query.key },
      { projection: { _id: 0, email: 1, holoid: 1 } }).toArray(
      function (err, result) {
        if (err) {
          console.log("ERROR: Cannot query DB");
          res.status(400).json({ 'Status': "Internal server error", 'Response': error });
          return;
        }
        if (result[0]) {
          res.status(200).send(result[0]);
        }
        else {
          res.status(200).json({ "email": req.query.key, "holoid": "none" });
        }

      });

  });




  app.delete('/api/deleteModel', function(req, res, next) {
    console.log("DELETE deleteModel called: " + req.body.modelCode + " owner: " + req.body.owner);
    assetCollection.deleteOne({ $and: [ {code: req.body.modelCode}, {owner: req.body.owner} ] },
            function(err, result) {
      if(err) {
        console.log("ERROR: Cannot update DB");
        res.status(400).json({ 'Status': "Internal server error", 'Response': err });
        return;
      }

      if(result.result.n != 0) {
        const s3params = {
          Bucket: BUCKET_NAME,
          Prefix: req.body.modelCode
        };

        s3bucket.listObjects(s3params, function(err, data) {
          if (err) console.log(err);
      
          if (data.Contents.length == 0) console.log("No S3 files found");
      
          params = {Bucket: BUCKET_NAME};
          params.Delete = {Objects:[]};
      
          data.Contents.forEach(function(content) {
            params.Delete.Objects.push({Key: content.Key});
          });
      
          s3bucket.deleteObjects(params, function(err, data) {
            if (err) console.log(err);
            //if(data.Contents.length == 1000) emptyBucket(BUCKET_NAME, callback);
            //else console.log("Cannot empty bucket");
          });
        });

        res.status(200).json({ 'Status': "Model successfully deleted" });
      }
      else {
        res.status(400).json({ 'Status': "Model not found" });
      }
    });
  });

  app.post('/api/shareModel', function(req, res, next) {
    console.log("POST shareModel called: " + req.body.modelCode + " owner: " + req.body.owner + " share with: " + req.body.userID);
    var sharedwith = req.body.userID;

    if (!validator.isEmail(sharedwith)) {
      console.log("WARNING: Cannot validate Shared with email");
      res.status(400).json({ 'Status': "E-mail address invalid" });
      return;
    }

    assetCollection.updateOne({ $and: [ {code: req.body.modelCode}, {owner: req.body.owner} ] },
                           { $addToSet: { shared_with: req.body.userID } }, 
            function(err, result) {
      console.log("UpdateOne ERR: " + err + " RESULT: " + result);
      if(err) {
        console.log("ERROR: Cannot find model or user not authorized");
        res.status(400).json({ 'Status': "Internal server error", 'Response': err });
        return;
      }

      if(result.result.n != 0) {
        var mailText = CreateShareHTML(req.body.userID, req.body.owner, req.body.modelCode);
        sendEmail("Perinno Labs <noreply@perinno.com>", req.body.userID, "Perinno: You are invited to view a 3D model on Perinno AR App!", mailText);
        res.status(200).json({ 'Status': "Model permissions updated successfully" });
      }
      else {
        res.status(400).json({ 'Status': "Cannot find model or user not authorized" });
      }

    });
  });
}

function CreateModelReadyHTML(user, fileName, modelCode) {
  var modelReadyText = `<html>
  <head>
      <meta name="viewport" content="width=device-width">
      <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
      <title>Simple Transactional Email</title>
      <style>
          /* -------------------------------------
              INLINED WITH htmlemail.io/inline
          ------------------------------------- */
          /* -------------------------------------
              RESPONSIVE AND MOBILE FRIENDLY STYLES
          ------------------------------------- */
          @media only screen and (max-width: 620px) {
            table[class=body] h1 {
              font-size: 28px !important;
              margin-bottom: 10px !important;
            }
            table[class=body] p,
                  table[class=body] ul,
                  table[class=body] ol,
                  table[class=body] td,
                  table[class=body] span,
                  table[class=body] a {
              font-size: 16px !important;
            }
            table[class=body] .wrapper,
                  table[class=body] .article {
              padding: 10px !important;
            }
            table[class=body] .content {
              padding: 0 !important;
            }
            table[class=body] .container {
              padding: 0 !important;
              width: 100% !important;
            }
            table[class=body] .main {
              border-left-width: 0 !important;
              border-radius: 0 !important;
              border-right-width: 0 !important;
            }
            table[class=body] .btn table {
              width: 100% !important;
            }
            table[class=body] .btn a {
              width: 100% !important;
            }
            table[class=body] .img-responsive {
              height: auto !important;
              max-width: 100% !important;
              width: auto !important;
            }
          }

          /* -------------------------------------
              PRESERVE THESE STYLES IN THE HEAD
          ------------------------------------- */
          @media all {
            .ExternalClass {
              width: 100%;
            }
            .ExternalClass,
                  .ExternalClass p,
                  .ExternalClass span,
                  .ExternalClass font,
                  .ExternalClass td,
                  .ExternalClass div {
              line-height: 100%;
            }
            .apple-link a {
              color: inherit !important;
              font-family: inherit !important;
              font-size: inherit !important;
              font-weight: inherit !important;
              line-height: inherit !important;
              text-decoration: none !important;
            }
            .btn-primary table td:hover {
              background-color: #34495e !important;
            }
            .btn-primary a:hover {
              background-color: #34495e !important;
              border-color: #34495e !important;
            }
          }
      </style>
  </head>
  <body class="" style="background-color: #f6f6f6; font-family: sans-serif; -webkit-font-smoothing: antialiased; font-size: 14px; line-height: 1.4; margin: 0; padding: 0; -ms-text-size-adjust: 100%; -webkit-text-size-adjust: 100%;">
      <table border="0" cellpadding="0" cellspacing="0" class="body" style="border-collapse: separate; mso-table-lspace: 0pt; mso-table-rspace: 0pt; width: 100%; background-color: #f6f6f6;">
          <tr>
              <td style="font-family: sans-serif; font-size: 14px; vertical-align: top;">&nbsp;</td>
              <td class="container" style="font-family: sans-serif; font-size: 14px; vertical-align: top; display: block; Margin: 0 auto; max-width: 580px; padding: 10px; width: 580px;">
                  <div class="content" style="box-sizing: border-box; display: block; Margin: 0 auto; max-width: 580px; padding: 10px;">

                      <!-- START CENTERED WHITE CONTAINER -->
                      <span class="preheader" style="color: transparent; display: none; height: 0; max-height: 0; max-width: 0; opacity: 0; overflow: hidden; mso-hide: all; visibility: hidden; width: 0;">Collaborate in an Augmented World Using Perinno!</span>
                      <table class="main" style="border-collapse: separate; mso-table-lspace: 0pt; mso-table-rspace: 0pt; width: 100%; background: #ffffff; border-radius: 3px;">

                          <!-- START MAIN CONTENT AREA -->
                          <tr>
                              <td class="wrapper" style="font-family: sans-serif; font-size: 14px; vertical-align: top; box-sizing: border-box; padding: 20px;">
                                  <table border="0" cellpadding="0" cellspacing="0" style="border-collapse: separate; mso-table-lspace: 0pt; mso-table-rspace: 0pt; width: 100%;">
                                      <tr>
                                          <td style="font-family: sans-serif; font-size: 14px; vertical-align: top;">
                                              <p style="font-family: sans-serif; font-size: 14px; font-weight: normal; margin: 0; Margin-bottom: 15px;">Hi ${user},</p>
                                              <p style="font-family: sans-serif; font-size: 14px; font-weight: normal; margin: 0; Margin-bottom: 15px;">Your 3D model ${fileName} has been processed and is ready for viewing in Augmented Reality in the PresentAR App on Hololens. Note that it may take 10-15 minutes for the model to be available for viewing. You can view your 3D model by using the code <b>${modelCode}</b>. If you don't have the PresentAR , just follow the links below.</p>
                                              <table border="0" cellpadding="0" cellspacing="0" class="btn btn-primary" style="border-collapse: separate; mso-table-lspace: 0pt; mso-table-rspace: 0pt; width: 100%; box-sizing: border-box;">
                                                  <tbody>
                                                      <div style="text-align: center">
                                                          <a href='https://www.microsoft.com/store/apps/9N2M9GGRWL15?cid=storebadge&ocid=badge'><img src='https://assets.windowsphone.com/85864462-9c82-451e-9355-a3d5f874397a/English_get-it-from-MS_InvariantCulture_Default.png' alt='English badge' style='width: 135px; height: auto;'/></a>
                              </br>
                                                      </div>
                                                  </tbody>
                                              </table>
                                          </td>
                                      </tr>
                                      </tbody>
                                  </table>
                                  <p style="font-family: sans-serif; font-size: 14px; font-weight: normal; margin: 0; Margin-bottom: 15px;">Install the Perinno App, login and use the code <b>${modelCode}</b> to view the 3D model in Augmented Reality.</p>
                                  <p style="font-family: sans-serif; font-size: 14px; font-weight: normal; margin: 0; Margin-bottom: 15px;">You can also share this code with others to enable them to see your 3D model in Augmented Reality.</p>
                                  <p style="font-family: sans-serif; font-size: 14px; font-weight: normal; margin: 0; Margin-bottom: 15px;">Good luck!</p>
                                  <p style="font-family: sans-serif; font-size: 14px; font-weight: normal; margin: 0; Margin-bottom: 15px;">Cheers</p>
                                  <p style="font-family: sans-serif; font-size: 14px; font-weight: normal; margin: 0; Margin-bottom: 15px;">Perinno Labs</p>
                                  <a href="https://perinno.com">www.perinno.com</a>
                              </td>
                          </tr>
                      </table>
              </td>
          </tr>

          <!-- END MAIN CONTENT AREA -->
      </table>

      <!-- START FOOTER -->
      <div class="footer" style="clear: both; Margin-top: 10px; text-align: center; width: 100%;">
          <table border="0" cellpadding="0" cellspacing="0" style="border-collapse: separate; mso-table-lspace: 0pt; mso-table-rspace: 0pt; width: 100%;">
              <tr>
                  <td class="content-block" style="font-family: sans-serif; vertical-align: top; padding-bottom: 10px; padding-top: 10px; font-size: 12px; color: #999999; text-align: center;">
                      <span class="apple-link" style="color: #999999; font-size: 12px; text-align: center;">Perinno UG, Platanenstraße 64, 82024 Taufkirchen, Germany</span>
                      <br> For any question, email at contact@perinno.com
                  </td>
              </tr>
          </table>
      </div>
      <!-- END FOOTER -->
      <!-- END CENTERED WHITE CONTAINER -->
      </div>
      </td>
      <td style="font-family: sans-serif; font-size: 14px; vertical-align: top;">&nbsp;</td>
      </tr>
      </table>
  </body>
  </html>`;

  return modelReadyText;
}

function CreateShareHTML(user, owner, modelCode) {
  var modelReadyText = `<html>
  <head>
      <meta name="viewport" content="width=device-width">
      <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
      <title>Simple Transactional Email</title>
      <style>
          /* -------------------------------------
              INLINED WITH htmlemail.io/inline
          ------------------------------------- */
          /* -------------------------------------
              RESPONSIVE AND MOBILE FRIENDLY STYLES
          ------------------------------------- */
          @media only screen and (max-width: 620px) {
            table[class=body] h1 {
              font-size: 28px !important;
              margin-bottom: 10px !important;
            }
            table[class=body] p,
                  table[class=body] ul,
                  table[class=body] ol,
                  table[class=body] td,
                  table[class=body] span,
                  table[class=body] a {
              font-size: 16px !important;
            }
            table[class=body] .wrapper,
                  table[class=body] .article {
              padding: 10px !important;
            }
            table[class=body] .content {
              padding: 0 !important;
            }
            table[class=body] .container {
              padding: 0 !important;
              width: 100% !important;
            }
            table[class=body] .main {
              border-left-width: 0 !important;
              border-radius: 0 !important;
              border-right-width: 0 !important;
            }
            table[class=body] .btn table {
              width: 100% !important;
            }
            table[class=body] .btn a {
              width: 100% !important;
            }
            table[class=body] .img-responsive {
              height: auto !important;
              max-width: 100% !important;
              width: auto !important;
            }
          }

          /* -------------------------------------
              PRESERVE THESE STYLES IN THE HEAD
          ------------------------------------- */
          @media all {
            .ExternalClass {
              width: 100%;
            }
            .ExternalClass,
                  .ExternalClass p,
                  .ExternalClass span,
                  .ExternalClass font,
                  .ExternalClass td,
                  .ExternalClass div {
              line-height: 100%;
            }
            .apple-link a {
              color: inherit !important;
              font-family: inherit !important;
              font-size: inherit !important;
              font-weight: inherit !important;
              line-height: inherit !important;
              text-decoration: none !important;
            }
            .btn-primary table td:hover {
              background-color: #34495e !important;
            }
            .btn-primary a:hover {
              background-color: #34495e !important;
              border-color: #34495e !important;
            }
          }
      </style>
  </head>
  <body class="" style="background-color: #f6f6f6; font-family: sans-serif; -webkit-font-smoothing: antialiased; font-size: 14px; line-height: 1.4; margin: 0; padding: 0; -ms-text-size-adjust: 100%; -webkit-text-size-adjust: 100%;">
      <table border="0" cellpadding="0" cellspacing="0" class="body" style="border-collapse: separate; mso-table-lspace: 0pt; mso-table-rspace: 0pt; width: 100%; background-color: #f6f6f6;">
          <tr>
              <td style="font-family: sans-serif; font-size: 14px; vertical-align: top;">&nbsp;</td>
              <td class="container" style="font-family: sans-serif; font-size: 14px; vertical-align: top; display: block; Margin: 0 auto; max-width: 580px; padding: 10px; width: 580px;">
                  <div class="content" style="box-sizing: border-box; display: block; Margin: 0 auto; max-width: 580px; padding: 10px;">

                      <!-- START CENTERED WHITE CONTAINER -->
                      <span class="preheader" style="color: transparent; display: none; height: 0; max-height: 0; max-width: 0; opacity: 0; overflow: hidden; mso-hide: all; visibility: hidden; width: 0;">Collaborate in an Augmented World Using Perinno!</span>
                      <table class="main" style="border-collapse: separate; mso-table-lspace: 0pt; mso-table-rspace: 0pt; width: 100%; background: #ffffff; border-radius: 3px;">

                          <!-- START MAIN CONTENT AREA -->
                          <tr>
                              <td class="wrapper" style="font-family: sans-serif; font-size: 14px; vertical-align: top; box-sizing: border-box; padding: 20px;">
                                  <table border="0" cellpadding="0" cellspacing="0" style="border-collapse: separate; mso-table-lspace: 0pt; mso-table-rspace: 0pt; width: 100%;">
                                      <tr>
                                          <td style="font-family: sans-serif; font-size: 14px; vertical-align: top;">
                                              <p style="font-family: sans-serif; font-size: 14px; font-weight: normal; margin: 0; Margin-bottom: 15px;">Hi ${user},</p>
                                              <p style="font-family: sans-serif; font-size: 14px; font-weight: normal; margin: 0; Margin-bottom: 15px;">You are invited by ${owner}  to view a 3D model in Augmented Reality on the Perinno App. You can view the 3D model by using the code <b>${modelCode}</b>. If you don't have the Perinno App, just follow the links below.</p>
                                              <table border="0" cellpadding="0" cellspacing="0" class="btn btn-primary" style="border-collapse: separate; mso-table-lspace: 0pt; mso-table-rspace: 0pt; width: 100%; box-sizing: border-box;">
                                                  <tbody>
                                                      <div style="text-align: center">
                                                          <a href="https://itunes.apple.com/us/app/perinno/id1373494552?mt=8" style="display:inline-block;overflow:hidden;background:url(https://linkmaker.itunes.apple.com/assets/shared/badges/en-us/appstore-lrg.png) no-repeat;width:135px;height:40px;background-size:contain;"></a>
                                                          </br>
                                                          <a href='https://play.google.com/store/apps/details?id=com.perinno.apps.perinnoapp&hl=en_US&pcampaignid=MKT-Other-global-all-co-prtnr-py-PartBadge-Mar2515-1'><img alt='Get it on Google Play' style="width:155px; height:auto; padding: 0 !important" src='https://play.google.com/intl/en_us/badges/images/generic/en_badge_web_generic.png' /></a>
                              </br>
                                                      </div>
                                                  </tbody>
                                              </table>
                                          </td>
                                      </tr>
                                      </tbody>
                                  </table>
                                  <p style="font-family: sans-serif; font-size: 14px; font-weight: normal; margin: 0; Margin-bottom: 15px;">Install the Perinno App, login and use the code <b>${modelCode}</b> to view the 3D model in Augmented Reality.</p>
                                  <p style="font-family: sans-serif; font-size: 14px; font-weight: normal; margin: 0; Margin-bottom: 15px;">You can also share this code with others to enable them to see your 3D model in Augmented Reality.</p>
                                  <p style="font-family: sans-serif; font-size: 14px; font-weight: normal; margin: 0; Margin-bottom: 15px;">Good luck!</p>
                                  <p style="font-family: sans-serif; font-size: 14px; font-weight: normal; margin: 0; Margin-bottom: 15px;">Cheers</p>
                                  <p style="font-family: sans-serif; font-size: 14px; font-weight: normal; margin: 0; Margin-bottom: 15px;">Perinno Labs</p>
                                  <a href="https://perinno.com">www.perinno.com</a>
                              </td>
                          </tr>
                      </table>
              </td>
          </tr>

          <!-- END MAIN CONTENT AREA -->
      </table>

      <!-- START FOOTER -->
      <div class="footer" style="clear: both; Margin-top: 10px; text-align: center; width: 100%;">
          <table border="0" cellpadding="0" cellspacing="0" style="border-collapse: separate; mso-table-lspace: 0pt; mso-table-rspace: 0pt; width: 100%;">
              <tr>
                  <td class="content-block" style="font-family: sans-serif; vertical-align: top; padding-bottom: 10px; padding-top: 10px; font-size: 12px; color: #999999; text-align: center;">
                      <span class="apple-link" style="color: #999999; font-size: 12px; text-align: center;">Perinno UG, Platanenstraße 64, 82024 Taufkirchen, Germany</span>
                      <br> For any question, email at contact@perinno.com
                  </td>
              </tr>
          </table>
      </div>
      <!-- END FOOTER -->
      <!-- END CENTERED WHITE CONTAINER -->
      </div>
      </td>
      <td style="font-family: sans-serif; font-size: 14px; vertical-align: top;">&nbsp;</td>
      </tr>
      </table>
  </body>
  </html>`;

  return modelReadyText;
}
