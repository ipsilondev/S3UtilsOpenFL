#ifndef INCLUDED_com_ipsilondev_S3Utils
#define INCLUDED_com_ipsilondev_S3Utils

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(com,ipsilondev,S3Utils)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,utils,ByteArray)
HX_DECLARE_CLASS2(openfl,utils,IDataInput)
HX_DECLARE_CLASS2(openfl,utils,IDataOutput)
HX_DECLARE_CLASS2(openfl,utils,IMemoryRange)
namespace com{
namespace ipsilondev{


class HXCPP_CLASS_ATTRIBUTES  S3Utils_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef S3Utils_obj OBJ_;
		S3Utils_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< S3Utils_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~S3Utils_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("S3Utils"); }

		static ::String serverURL;
		static Void getPolicyS3( Dynamic funcSucess,Dynamic funcFail);
		static Dynamic getPolicyS3_dyn();

		static Void makeServerCall( ::String service,Dynamic funcSucess,Dynamic funcFail,::String methodReq,Dynamic args);
		static Dynamic makeServerCall_dyn();

		static Void uploadToAmazon( ::String url,Dynamic objUpload,::openfl::utils::ByteArray bg,::String fileName,::String mimeType,Dynamic succFun,Dynamic failFunc,hx::Null< bool >  progressEnabled,Dynamic progressFunc);
		static Dynamic uploadToAmazon_dyn();

		static ::openfl::utils::ByteArray getBytesArray( ::String p);
		static Dynamic getBytesArray_dyn();

		static ::openfl::utils::ByteArray getBytesArrayBitmap( ::openfl::display::BitmapData b);
		static Dynamic getBytesArrayBitmap_dyn();

};

} // end namespace com
} // end namespace ipsilondev

#endif /* INCLUDED_com_ipsilondev_S3Utils */ 
