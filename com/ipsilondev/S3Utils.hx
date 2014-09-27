package com.ipsilondev;

import haxe.io.Bytes;
import openfl.net.URLLoader;
import openfl.net.URLRequest;
import openfl.net.URLRequestHeader;
import openfl.net.URLRequestMethod;
import openfl.net.URLVariables;
import openfl.events.Event;
import openfl.events.IOErrorEvent;
import openfl.events.ProgressEvent;
import openfl.Lib;
import openfl.net.URLLoaderDataFormat;
import openfl.utils.ByteArray;
import openfl.display.BitmapData;
import haxe.Json;
import sys.io.File;


/**
 * ...
 * @author Ipsilon Developments
 */
class S3Utils
{
	private static var serverURL:String = "http://example.com/";
	

	public function new() 
	{
		
	}
	public static function getPolicyS3(funcSucess:Dynamic->Dynamic->Void, funcFail:String->Void):Void{
		//this functions get's the parameter to send to amazon from a remote server. you can also specify this parameters manually like is shown below, 
		//except for the policy, acessKey and signature parameters, that MUST be generated and sent by an external server.
		//{ "key":"sets/${filename}", "AWSAccessKeyId":[YOUR_ACCESS_KEY_FROM_SERVER], "acl":"public-read", "success_action_redirect":"http://example.com/done", "policy":[YOUR_POLICY_BASE64_FROM_SERVER], "signature":[YOUR_SIGNATURE_FROM_SERVER]}
		makeServerCall("getS3Policy",funcSucess,funcFail);
	}
	
	public static function makeServerCall(service:String,funcSucess:Dynamic->Dynamic->Void, funcFail:String->Void,methodReq:String="",args:Dynamic=null):Void {
		var _jsonLoader:URLLoader = new URLLoader();		
		var reqStr:String;
		var variablesString:String = "";
		
		if (args != null) {
			for (n in Reflect.fields(args)) {
				variablesString += "&" + n + "=" + Reflect.field(args, n);				
			}
		}
		
		if (methodReq == "") {
		reqStr = serverURL + service+"?firts=0"+variablesString;		
		}else {
		reqStr = serverURL + service;	
		}
		
		
		
		var reqUrl:URLRequest = new URLRequest(reqStr);		
		if (methodReq != "") {
			reqUrl.method = methodReq;
			reqUrl.data = new URLVariables(variablesString.substr(1));
		}
		_jsonLoader.load(reqUrl);
		_jsonLoader.addEventListener(Event.COMPLETE, function(e:Event):Void {
		funcSucess(Json.parse(e.target.data),args);	
		});
		_jsonLoader.addEventListener(IOErrorEvent.IO_ERROR, function(e:IOErrorEvent):Void {
			Lib.trace(e);
			funcFail("netError");
		});
		
		
	}

	public static function uploadToAmazon(url:String,objUpload:Dynamic, bg:ByteArray,fileName:String,mimeType:String, succFun:Dynamic->Void,failFunc:Dynamic->Void,progressEnabled:Bool = false, progressFunc:Float->Float->Void=null) {
		
		var req:URLRequest = new URLRequest(url);
		req.method = URLRequestMethod.POST;
		var dataCache:ByteArray =  new ByteArray();
		var boundary:String = '----changethistoyourboundary' + Date.now().getTime(),
				dashdash:String = '--', crlf:String = '\r\n',
				tmpBa:ByteArray;
			
			tmpBa = new ByteArray();
			req.contentType = 'multipart/form-data; boundary=' + boundary;			
			req.requestHeaders.push(new URLRequestHeader("Content-Type", 'multipart/form-data; boundary=' + boundary));
			
			for (n in Reflect.fields(objUpload)) {
				tmpBa.writeUTFBytes(
					dashdash + boundary + crlf +
					'Content-Disposition: form-data; name="' + n + '"' + crlf + crlf +
					Reflect.field(objUpload, n) + crlf
				);
			}
			
			// append file if available
				tmpBa.writeUTFBytes(
					dashdash + boundary + crlf +
					'Content-Disposition: form-data; name="file"; filename="' + fileName + '"' + crlf +
					'Content-Type: ' + mimeType + crlf + crlf
				);
			//(mimeType || 'application/octet-stream')
				tmpBa.writeBytes(bg, 0, bg.length);
				bg.clear();
				
				tmpBa.writeUTFBytes(crlf);
			
			// wrap it up
			tmpBa.writeUTFBytes(dashdash + boundary + dashdash + crlf);
		
		req.data = tmpBa;
		
		var loader:URLLoader = new URLLoader(req);
		loader.dataFormat = URLLoaderDataFormat.BINARY;
		loader.addEventListener(Event.COMPLETE, function(e:Event):Void {
			succFun({"url":url,"file":fileName});
		});
		loader.addEventListener(IOErrorEvent.IO_ERROR, function(e:IOErrorEvent):Void {
			failFunc( { "url":url, "file":fileName } );
		});
		if (progressEnabled) {
			loader.addEventListener(ProgressEvent.PROGRESS,function(e:ProgressEvent):Void {
			progressFunc(e.bytesLoaded,e.bytesTotal);	
		});
		}

		
		
	}
	//get a ByteArray directly from a file
	public static function getBytesArray(p:String):ByteArray {
		return ByteArray.fromBytes(File.getBytes(p));
	}
	//get a ByteArray directly from BitmapData
	public static function getBytesArrayBitmap(b:BitmapData):ByteArray{
		return b.encode("png");
	}
	

}
