var MongoClient = require('mongodb').MongoClient;
const uuidv1 = require('uuid/v1');

var assetCollection;
var db;

CreateConnection(onCreate);

function onCreate() {
    InsertAssetToDB(uuidv1(), "ABCD", "batak", "hhtp://s3.com", 123, function() {
        var i = 1;
        console.log("Record: " + i++);
        assetCollection.find().forEach(function(record) {
            console.log(record);
        });
    });
}

function CreateConnection(onCreate) {
    db = MongoClient.connect('mongodb://localhost:27017', {useNewUrlParser: true}, function(err, db) {
        if(err) {
            console.log("WARNING: Cannot connect to Mongodb " + err);
            return;
        }
        console.log("INFO: Connected to mongoDB server!");
        assetCollection = db.db('AssetDB').collection('assets');
        onCreate();
    });
}

function InsertAssetToDB(_uuid, _code, _owner, _cloudlink, _filesize, callback) {
    assetCollection.insertOne({uuid: _uuid,
                            code: _code,
                            owner: _owner,
                            cloudlink: _cloudlink,
                            filesize: _filesize,
                            views: "0",
                            price: "0.0",
                            user_rating: "0",
                            shared_with: ["contact@perinno.com"]
                            }, function(err, result) {
        if(err) {
            console.log("ERROR: Cannot insert Asset into DB");
            return;
        }
        console.log("INFO: Successfully inserted into AssetDB " + result);
        callback();
    });
}
