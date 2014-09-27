
var express   = require('express'),
http = require('http'),
crypto = require( "crypto" );
var morgan = require('morgan');
var bodyParser = require('body-parser');

configAWSAlone = require('./conf/aws.json');

var app             = express();
///Express App config
  app.set('port', 3333); 
  app.use(morgan('dev'));
  app.use(bodyParser.urlencoded({ extended: false }));

app.get('/getS3Policy', function(req,res){
	var output = {}; 
	output.uploadObj = 	createS3Policy("image/png",'[BUCKET_NAME]',"folderExample/");
	output.url = 'https://[BUCKET_NAME].s3.amazonaws.com/';
	res.json(output);
	});
app.get('/doneupload', function(req,res){
	res.json({"done":1});
});

http.createServer(app).listen(app.get('port'), function(){
  console.log("Express server listening on port " + app.get('port'));
});

function createS3Policy( mimetype, bucketName, folder) {
  var s3PolicyBase64, _date, _s3Policy;
  var sizeMax = 800000;
  var acl = "public-read";
  if(arguments[3]!=null && arguments[3]!=undefined){
	  sizeMax = arguments[3];
  }
  if(arguments[4]!=null && arguments[4]!=undefined){
	  acl = arguments[4];
  }
  _date = new Date();
var  s3Policy = {
    "expiration": "" + (_date.getFullYear()) + "-" + (_date.getMonth() + 1) + "-" + (_date.getDate()) + "T" + (_date.getHours()) + ":" + (_date.getMinutes() + 40) + ":" + (_date.getSeconds()) + "Z",
    "conditions": [
      { "bucket": bucketName }, 
      ["starts-with", "$key", folder], 
      { "acl":  acl}, 
      { "success_action_redirect": "http://example.com/doneupload" }, 
      ["content-length-range", 0, sizeMax]
    ]
  };

  
var encodedPolicy64 = new Buffer( JSON.stringify( s3Policy ) ).toString( 'base64' );
var s3Credentials = {
    s3PolicyBase64: encodedPolicy64,
    s3Signature: crypto.createHmac( "sha1", configAWSAlone.secretAccessKey ).update( encodedPolicy64 ).digest( "base64" ),
    s3Key: configAWSAlone.accessKeyId,
    s3Redirect: "http://example.com/doneupload",
    s3Policy: s3Policy
}
  return s3Credentials;
//  callback(  );
};
