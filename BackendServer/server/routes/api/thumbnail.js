const Busboy = require('busboy');
const AWS = require('aws-sdk');
var fs = require('fs');
const BUCKET_NAME = 'perinno-app-upload';
const IAM_USER_KEY = 'AKIAI23XM5QA635R25DA';
const IAM_USER_SECRET = '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';
const save_path_win = "C:\\Users\\Administrator\\Documents\\UnityThumbnailProject\\UnityThumbnailProject\Assets\TempFolder";
const save_path = "C:\\UnityProject\\AssetBundleBuilderAutomation\\Assets\\TempFolder";
const uploadDir = "C:\\temp\\UploadFolder";




var modelCode;

function UploadProcessedFilesToS3() {
  console.log("INFO: Uploading files to S3...");
  var files = fs.readdirSync(uploadDir);

  if (!files || files.length === 0) {
    console.log("ERROR: Provided folder " + uploadDir + " is empty or does not exist.");
    return;
  }

  async.each(files, function (file, callback) {
    // get the full path of the file
    const filePath = path.join(uploadDir, file);
    const stats = fs.lstatSync(filePath);
    // ignore if directory
    if (!stats.isDirectory()) {
      console.log('INFO: Uploading file: ' + filePath);

      // read file contents
      var fileContent = fs.readFileSync(filePath);
      // if unable to read file contents, throw exception
      if (!fileContent) {
        console.log("ERROR: Cannot read processed filed to upload to S3");
        return;
      }
      var fName = modelCode + '/' + file;
      // upload file to S3
      let s3bucket = new AWS.S3({
        accessKeyId: IAM_USER_KEY,
        secretAccessKey: IAM_USER_SECRET,
        Bucket: BUCKET_NAME
      });

      s3bucket.createBucket(function () {
        var params = {
          Bucket: BUCKET_NAME,
          Key: fName,
          Body: fileContent
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
  }, function (err) {
    if (err) console.log('ERROR: One of the uploads failed');
    else {
      console.log('INFO: All files uploaded');
      clearTempDir();
    }
  });
}

function clearTempDir() {
  //delete TaskID folder in UploadFolder
  console.log("INFO: Clearing upload folder...");
  rmdir(uploadDir, function (err, dirs, files) {
    console.log(files);
    console.log('Upload folder cleared');

    console.log("Finishing job.");
    
  });
}


module.exports = (app) => {
    app.post('/api/thumbnail', function (req, res, next) {
    modelCode = req.body.element1;
    console.log("INFO: Code: " + modelCode);


    var busboy = new Busboy({ headers: req.headers });
    // The file upload has completed
    busboy.on('finish', function () {
      console.log('INFO: File upload finished');

      var taskFolder = save_path_win;

      if (req.files.element2) {
        var file = req.files.element2;

        fs.existsSync(taskFolder) || fs.mkdirSync(taskFolder);
        fs.writeFile(taskFolder + '\\' + file.name, file.data, function (err) {
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

      if (req.files.element3) {
        console.log("INFO: Textue file found in request");
        var texturefile = req.files.element3;

        fs.writeFile(taskFolder + '\\' + 'MainTexture' + texturefile.name.substring(texturefile.name.length - 4, texturefile.name.length), texturefile.data, function (err) {
          if (err) {
            return console.log("WARNING: Cannot write texture file: " + err);
          }
        });
      }

      var spawn = require('child_process').spawn,
        ls = spawn('cmd.exe', ['/c', 'C:\\unity.bat']);

      ls.stdout.on('data', function (data) {
        console.log('stdout: ' + data);
      });

      ls.stderr.on('data', function (data) {
        console.log('stderr: ' + data);
      });

      ls.on('exit', function (code) {

        UploadProcessedFilesToS3(); 


        console.log('child process exited with code ' + code);
        res.status(200).json({ 'message': "Thumbnail Generated Successfully" });
      });


      
    });

    req.pipe(busboy);
    });


  }



//'You are invited to view a 3D model on Perinno AR App!'
