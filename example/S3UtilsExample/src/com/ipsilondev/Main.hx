package com.ipsilondev;

import flash.display.Sprite;
import flash.events.Event;
import flash.Lib;
import openfl.display.BitmapData;
import openfl.text.TextField;
import openfl.system.Capabilities;
import com.ipsilondev.S3Utils;

/**
 * ...
 * @author Ipsilon Developments Inc.
 */

class Main extends Sprite 
{
	var inited:Bool;
	private var statusTxt:TextField;
	/* ENTRY POINT */
	
	function resize(e) 
	{
		if (!inited) init();
		// else (resize or orientation change)
	}
	
	function init() 
	{
		if (inited) return;
		inited = true;
		statusTxt = new TextField();
		statusTxt.width = Capabilities.screenResolutionX;
		addChild(statusTxt);
		// (your code here)
		
		// Stage:
		// stage.stageWidth x stage.stageHeight @ stage.dpiScale
		
		// Assets:
		// nme.Assets.getBitmapData("img/assetname.jpg");
		
		var exampleImage:BitmapData = new BitmapData(800, 600, false, 0xff0000);
		S3Utils.getPolicyS3(function(resultJson:Dynamic, args:Dynamic):Void {
			S3Utils.uploadToAmazon(resultJson.url, { "key":"folderExample/${filename}", "AWSAccessKeyId":resultJson.uploadObj.s3Key, "acl":"public-read", "success_action_redirect":resultJson.uploadObj.s3Redirect, "policy":resultJson.uploadObj.s3PolicyBase64, "signature":resultJson.uploadObj.s3Signature }, S3Utils.getBytesArrayBitmap(exampleImage), "/folderExample/exampleImage.png", "image/png", function(result:Dynamic):Void {
				statusTxt.text = "Uploaded !";
			},function(failreason:Dynamic):Void {
				statusTxt.text = "Failed Upload !";				
			});
			
		},function(failReason:String):Void {
				statusTxt.text = "Failed to get S3 Policy !";							
		});
	}

	/* SETUP */

	public function new() 
	{
		super();	
		addEventListener(Event.ADDED_TO_STAGE, added);
	}

	function added(e) 
	{
		removeEventListener(Event.ADDED_TO_STAGE, added);
		stage.addEventListener(Event.RESIZE, resize);
		#if ios
		haxe.Timer.delay(init, 100); // iOS 6
		#else
		init();
		#end
	}
	
	public static function main() 
	{
		// static entry point
		Lib.current.stage.align = flash.display.StageAlign.TOP_LEFT;
		Lib.current.stage.scaleMode = flash.display.StageScaleMode.NO_SCALE;
		Lib.current.addChild(new Main());
	}
}
