var kue = require('kue');
var shell = require('shelljs');
var fs = require('fs');
const pathmodule = require('path');
var rmdir = require('rmdir');
const AWS = require('aws-sdk');
var async = require('async');
var request = require("request");
var sizeof = require('object-sizeof');


const BUCKET_NAME = 'perinno-app-upload';
const IAM_USER_KEY = 'AKIAI23XM5QA635R25DA';
const IAM_USER_SECRET = '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';
const upload_path = "/home/ubuntu/BackendServer/Temp/UploadFolder/";
const temp_path = "/home/ubuntu/BackendServer/Temp/";

var queue = kue.createQueue();
var result = 0;
var doneFunction;
var modelfilecontent;
var texturefilecontent;

function UploadFilesToS3(path, modelCode, job,  OnUploadedCallback) {
  console.log("INFO: Uploading files to S3...");
  var files = fs.readdirSync(path);

  if (!files || files.length === 0) {
    console.log("ERROR: Provided folder " + path + " is empty or does not exist.");
    OnUploadedCallback();
    return;
  }

  async.each(files, function(file, callback) {

    // get the full path of the file
    const filePath = pathmodule.join(path, file);
    const stats = fs.lstatSync(filePath);
    // ignore if directory
    if (!stats.isDirectory()) {
      console.log('INFO: Uploading file: ' + filePath);

      if(file.endsWith("bundle_ios")) {
        result = stats.size / (1024*1024);
      }

      // read file contents
      var fileContent = fs.readFileSync(filePath);

      var roughObjSize = sizeof(fileContent);
      console.log('INFO: Read Size: ' + roughObjSize + '    Original Size' + stats.size);
      if (roughObjSize !== stats.size) {
        console.log('*********WARNING********** SIZE NOT MATCHING!');
      }

      if (file === job.data.ModelName) {
        modelfilecontent = fileContent;
      } else if (file === job.data.TextureName) {
        texturefilecontent = fileContent;
      }

      // if unable to read file contents, throw exception
      if (!fileContent) { 
        console.log("ERROR: Cannot read processed file to upload to S3");
        return;
      }
      var fName = modelCode + '/' + file;
      // upload file to S3
      let s3bucket = new AWS.S3({
        accessKeyId: IAM_USER_KEY,
        secretAccessKey: IAM_USER_SECRET,
        Bucket: BUCKET_NAME,
      });
    
      s3bucket.createBucket(function () {
        var params = {
          Bucket: BUCKET_NAME,
          Key: fName,
          Body: fileContent,
        };
    
        s3bucket.upload(params, function (err, data) {
          if (err) {
            console.log('ERROR: Error in file upload to S3');
            console.log(err);
            callback(err);
          } else {
            console.log('INFO: Successfuly uploaded file: ' + fName);
            callback();
          }
        });
      });
    }
  }, function(err) {
    if (err) console.log('ERROR: One of the uploads failed')
        else {
          console.log('INFO: All files uploaded');
          OnUploadedCallback();
      }
  });
}

function clearTempDir(path) {
    //delete TaskID folder in UploadFolder
  console.log("INFO: Clearing folder " + path);
  rmdir(path, function (err, dirs, files) {
    console.log(files);
    console.log('Folder cleared');

    console.log("Finishing job with result: " + result);
    doneFunction(null, result);
  });
}

queue.process('UnityTask', function(job, done){
  console.log("Processing job with task ID: " + job.data.TaskID + ", ModelCode: " + job.data.ModelCode);

  doneFunction = done;
  modelCode = job.data.ModelCode;
  UploadFilesToS3(temp_path + job.data.TaskID, modelCode, job, function() {
    if (!fs.existsSync(temp_path + job.data.TaskID)) {
      console.log("WARN: No data found for the job " + job.data.TaskID);
      console.log("Finishing job.");
      done();
      return;
    }

    var options;
    if (job.data.TextureName != "null") {
      options = {
        method: 'POST',
        url: 'https://ws.perinno.com:82/api/thumbnail',
        headers:
        {
          'postman-token': '062b2a69-4466-9666-038b-bacacc09ced4',
          'cache-control': 'no-cache',
          'content-type': 'multipart/form-data; boundary=----WebKitFormBoundary7MA4YWxkTrZu0gW'
        },
        formData:
        {
          element1: modelCode,
          element2:
          {
            value: modelfilecontent,
            options: { filename: job.data.ModelName, contentType: null }
          },
          element3:
          {
            value: texturefilecontent,
            options: { filename: job.data.TextureName, contentType: null }
          }
        }
      };

    }
    else {
      options = {
        method: 'POST',
        url: 'https://ws.perinno.com:82/api/thumbnail',
        headers:
        {
          'postman-token': '062b2a69-4466-9666-038b-bacacc09ced4',
          'cache-control': 'no-cache',
          'content-type': 'multipart/form-data; boundary=----WebKitFormBoundary7MA4YWxkTrZu0gW'
        },
        formData:
        {
          element1: modelCode,
          element2:
          {
            value: modelfilecontent,
            options: { filename: job.data.ModelName, contentType: null }
          }
        }
      };
    }

    request(options, function (error, response, body) {
      if (error) {
        console.log(error);
      }

      if(body === "success") {
        console.log("INFO: Thumbnail created");
      }
    });

    //shell.cd('ShellScripts');
    /*if (shell.exec('sudo ./UnityShellScript.sh ' + job.data.TaskID).code !== 0) {
      shell.echo('Error: Unity script failed');
      shell.cd('../');
      shell.exit(1);
    }
    */
    //shell.cd('../');

    /*UploadFilesToS3(upload_path + job.data.TaskID, modelCode, job, function () {
      clearTempDir(upload_path + job.data.TaskID);
    });*/

    shell.cd('ShellScripts');
    if (shell.exec('sudo ./GlbMakerShellScript.sh ' + job.data.TaskID).code !== 0) {
      shell.echo('Error: glb convertor script failed');
      shell.cd('../');
      shell.exit(1);
    }
    
    shell.cd('../');
    console.log("INFO: Shell script executed");


    UploadFilesToS3(upload_path + job.data.TaskID, modelCode, job, function () {
      clearTempDir(upload_path + job.data.TaskID);
    });

    clearTempDir(upload_path + job.data.TaskID);

  });

});
