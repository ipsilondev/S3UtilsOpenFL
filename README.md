S3UtilsOpenFL
=============

An static class to interact directly with S3 from OpenFL / Haxe

For now, only upload (the most difficult thing) is supported, emulating as it would be a html post form (described here http://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-post-example.html ). 
This let's you upload anything, and define size limit, permissions etc.. when you calculate the policy in the backend.

Yes, it requires a server for security reason, you **should not** include your access and secret S3 keys in your app.
Included there is a working example in of both parts, client and server (in NodeJS). Be sure to edit the files with your url, configure also conf/aws.json in the backend and server.js with the properly url's, bucket names and etc..

I'm expecting to update this library with more functions in the following weeks :D

### With love from:

**[Ipsilon Developments Inc.](http://www.ipsilondev.com)** released under **MIT license**

Like our **[Facebook](http://www.facebook.com/ipsilondev)** page to get news about our releases

Or Follow us on **[Twitter](https://twitter.com/ipsilondev)**
 
You can also contact us at **info [AT] ipsilondev.com**

### How to use it
First of all, you need the calculated signature, the access key, and the policy from the server, you can get that with the function:

      getPolicyS3(funcSucess:Dynamic->Dynamic->Void, funcFail:String->Void)

After that, just call the function to upload the file you want, this is the full example you can find in this same repository:

      var exampleImage:BitmapData = new BitmapData(800, 600, false, 0xff0000);
      S3Utils.getPolicyS3(function(resultJson:Dynamic, args:Dynamic):Void {
			S3Utils.uploadToAmazon(resultJson.url, { "key":"folderExample/${filename}",             "AWSAccessKeyId":resultJson.uploadObj.s3Key, "acl":"public-read", "success_action_redirect":resultJson.uploadObj.s3Redirect, "policy":resultJson.uploadObj.s3PolicyBase64, "signature":resultJson.uploadObj.s3Signature }, S3Utils.getBytesArrayBitmap(exampleImage), "/folderExample/exampleImage.png", "image/png", function(result:Dynamic):Void {
				statusTxt.text = "Uploaded !";
			},function(failreason:Dynamic):Void {
				statusTxt.text = "Failed Upload !";				
			});
			
		},function(failReason:String):Void {
				statusTxt.text = "Failed to get S3 Policy !";							
		});
		
It support folders, that are automatically created if they do not exist in the bucket.

Enjoy :D
