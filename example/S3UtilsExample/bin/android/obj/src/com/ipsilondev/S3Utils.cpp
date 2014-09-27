#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_ipsilondev_S3Utils
#include <com/ipsilondev/S3Utils.h>
#endif
#ifndef INCLUDED_haxe_format_JsonParser
#include <haxe/format/JsonParser.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_events_ErrorEvent
#include <openfl/events/ErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IOErrorEvent
#include <openfl/events/IOErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_ProgressEvent
#include <openfl/events/ProgressEvent.h>
#endif
#ifndef INCLUDED_openfl_events_TextEvent
#include <openfl/events/TextEvent.h>
#endif
#ifndef INCLUDED_openfl_net_URLLoader
#include <openfl/net/URLLoader.h>
#endif
#ifndef INCLUDED_openfl_net_URLLoaderDataFormat
#include <openfl/net/URLLoaderDataFormat.h>
#endif
#ifndef INCLUDED_openfl_net_URLRequest
#include <openfl/net/URLRequest.h>
#endif
#ifndef INCLUDED_openfl_net_URLRequestHeader
#include <openfl/net/URLRequestHeader.h>
#endif
#ifndef INCLUDED_openfl_net_URLVariables
#include <openfl/net/URLVariables.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArray
#include <openfl/utils/ByteArray.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl_utils_IMemoryRange
#include <openfl/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif
namespace com{
namespace ipsilondev{

Void S3Utils_obj::__construct()
{
HX_STACK_FRAME("com.ipsilondev.S3Utils","new",0x6563acc9,"com.ipsilondev.S3Utils.new","com/ipsilondev/S3Utils.hx",30,0x1a947467)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//S3Utils_obj::~S3Utils_obj() { }

Dynamic S3Utils_obj::__CreateEmpty() { return  new S3Utils_obj; }
hx::ObjectPtr< S3Utils_obj > S3Utils_obj::__new()
{  hx::ObjectPtr< S3Utils_obj > result = new S3Utils_obj();
	result->__construct();
	return result;}

Dynamic S3Utils_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< S3Utils_obj > result = new S3Utils_obj();
	result->__construct();
	return result;}

::String S3Utils_obj::serverURL;

Void S3Utils_obj::getPolicyS3( Dynamic funcSucess,Dynamic funcFail){
{
		HX_STACK_FRAME("com.ipsilondev.S3Utils","getPolicyS3",0xa08e3511,"com.ipsilondev.S3Utils.getPolicyS3","com/ipsilondev/S3Utils.hx",37,0x1a947467)
		HX_STACK_ARG(funcSucess,"funcSucess")
		HX_STACK_ARG(funcFail,"funcFail")
		HX_STACK_LINE(37)
		::com::ipsilondev::S3Utils_obj::makeServerCall(HX_CSTRING("getS3Policy"),funcSucess,funcFail,null(),null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(S3Utils_obj,getPolicyS3,(void))

Void S3Utils_obj::makeServerCall( ::String service,Dynamic funcSucess,Dynamic funcFail,::String __o_methodReq,Dynamic args){
::String methodReq = __o_methodReq.Default(HX_CSTRING(""));
	HX_STACK_FRAME("com.ipsilondev.S3Utils","makeServerCall",0xac947ac6,"com.ipsilondev.S3Utils.makeServerCall","com/ipsilondev/S3Utils.hx",40,0x1a947467)
	HX_STACK_ARG(service,"service")
	HX_STACK_ARG(funcSucess,"funcSucess")
	HX_STACK_ARG(funcFail,"funcFail")
	HX_STACK_ARG(methodReq,"methodReq")
	HX_STACK_ARG(args,"args")
{
		HX_STACK_LINE(40)
		Dynamic args1 = Dynamic( Array_obj<Dynamic>::__new().Add(args));		HX_STACK_VAR(args1,"args1");
		HX_STACK_LINE(40)
		Dynamic funcFail1 = Dynamic( Array_obj<Dynamic>::__new().Add(funcFail));		HX_STACK_VAR(funcFail1,"funcFail1");
		HX_STACK_LINE(40)
		Dynamic funcSucess1 = Dynamic( Array_obj<Dynamic>::__new().Add(funcSucess));		HX_STACK_VAR(funcSucess1,"funcSucess1");
		HX_STACK_LINE(41)
		::openfl::net::URLLoader _jsonLoader = ::openfl::net::URLLoader_obj::__new(null());		HX_STACK_VAR(_jsonLoader,"_jsonLoader");
		HX_STACK_LINE(42)
		::String reqStr;		HX_STACK_VAR(reqStr,"reqStr");
		HX_STACK_LINE(43)
		::String variablesString = HX_CSTRING("");		HX_STACK_VAR(variablesString,"variablesString");
		HX_STACK_LINE(45)
		if (((args1->__GetItem((int)0) != null()))){
			HX_STACK_LINE(46)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(46)
			Array< ::String > _g1 = ::Reflect_obj::fields(args1->__GetItem((int)0));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(46)
			while((true)){
				HX_STACK_LINE(46)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(46)
					break;
				}
				HX_STACK_LINE(46)
				::String n = _g1->__get(_g);		HX_STACK_VAR(n,"n");
				HX_STACK_LINE(46)
				++(_g);
				HX_STACK_LINE(47)
				Dynamic _g2 = ::Reflect_obj::field(args1->__GetItem((int)0),n);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(47)
				::String _g11 = ::Std_obj::string(_g2);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(47)
				::String _g21 = (((HX_CSTRING("&") + n) + HX_CSTRING("=")) + _g11);		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(47)
				hx::AddEq(variablesString,_g21);
			}
		}
		HX_STACK_LINE(51)
		if (((methodReq == HX_CSTRING("")))){
			HX_STACK_LINE(52)
			reqStr = (((::com::ipsilondev::S3Utils_obj::serverURL + service) + HX_CSTRING("?firts=0")) + variablesString);
		}
		else{
			HX_STACK_LINE(54)
			reqStr = (::com::ipsilondev::S3Utils_obj::serverURL + service);
		}
		HX_STACK_LINE(59)
		::openfl::net::URLRequest reqUrl = ::openfl::net::URLRequest_obj::__new(reqStr);		HX_STACK_VAR(reqUrl,"reqUrl");
		HX_STACK_LINE(60)
		if (((methodReq != HX_CSTRING("")))){
			HX_STACK_LINE(61)
			reqUrl->method = methodReq;
			HX_STACK_LINE(62)
			::String _g3 = variablesString.substr((int)1,null());		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(62)
			::openfl::net::URLVariables _g4 = ::openfl::net::URLVariables_obj::__new(_g3);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(62)
			reqUrl->data = _g4;
		}
		HX_STACK_LINE(64)
		_jsonLoader->load(reqUrl);

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,Dynamic,funcSucess1,Dynamic,args1)
		Void run(::openfl::events::Event e){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","com/ipsilondev/S3Utils.hx",66,0x1a947467)
			HX_STACK_ARG(e,"e")
			{
				struct _Function_2_1{
					inline static Dynamic Block( ::openfl::events::Event &e){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ipsilondev/S3Utils.hx",66,0x1a947467)
						{
							HX_STACK_LINE(66)
							::String text = e->get_target()->__Field(HX_CSTRING("data"),true);		HX_STACK_VAR(text,"text");
							HX_STACK_LINE(66)
							return ::haxe::format::JsonParser_obj::__new(text)->parseRec();
						}
						return null();
					}
				};
				HX_STACK_LINE(66)
				funcSucess1->__GetItem((int)0)(_Function_2_1::Block(e),args1->__GetItem((int)0)).Cast< Void >();
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(65)
		_jsonLoader->addEventListener(::openfl::events::Event_obj::COMPLETE, Dynamic(new _Function_1_1(funcSucess1,args1)),null(),null(),null());

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_2,Dynamic,funcFail1)
		Void run(::openfl::events::IOErrorEvent e){
			HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","com/ipsilondev/S3Utils.hx",68,0x1a947467)
			HX_STACK_ARG(e,"e")
			{
				HX_STACK_LINE(69)
				::openfl::Lib_obj::trace(e);
				HX_STACK_LINE(70)
				funcFail1->__GetItem((int)0)(HX_CSTRING("netError")).Cast< Void >();
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(68)
		_jsonLoader->addEventListener(::openfl::events::IOErrorEvent_obj::IO_ERROR, Dynamic(new _Function_1_2(funcFail1)),null(),null(),null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(S3Utils_obj,makeServerCall,(void))

Void S3Utils_obj::uploadToAmazon( ::String url,Dynamic objUpload,::openfl::utils::ByteArray bg,::String fileName,::String mimeType,Dynamic succFun,Dynamic failFunc,hx::Null< bool >  __o_progressEnabled,Dynamic progressFunc){
bool progressEnabled = __o_progressEnabled.Default(false);
	HX_STACK_FRAME("com.ipsilondev.S3Utils","uploadToAmazon",0xcae51277,"com.ipsilondev.S3Utils.uploadToAmazon","com/ipsilondev/S3Utils.hx",76,0x1a947467)
	HX_STACK_ARG(url,"url")
	HX_STACK_ARG(objUpload,"objUpload")
	HX_STACK_ARG(bg,"bg")
	HX_STACK_ARG(fileName,"fileName")
	HX_STACK_ARG(mimeType,"mimeType")
	HX_STACK_ARG(succFun,"succFun")
	HX_STACK_ARG(failFunc,"failFunc")
	HX_STACK_ARG(progressEnabled,"progressEnabled")
	HX_STACK_ARG(progressFunc,"progressFunc")
{
		HX_STACK_LINE(76)
		Dynamic progressFunc1 = Dynamic( Array_obj<Dynamic>::__new().Add(progressFunc));		HX_STACK_VAR(progressFunc1,"progressFunc1");
		HX_STACK_LINE(76)
		Dynamic failFunc1 = Dynamic( Array_obj<Dynamic>::__new().Add(failFunc));		HX_STACK_VAR(failFunc1,"failFunc1");
		HX_STACK_LINE(76)
		Dynamic succFun1 = Dynamic( Array_obj<Dynamic>::__new().Add(succFun));		HX_STACK_VAR(succFun1,"succFun1");
		HX_STACK_LINE(76)
		Array< ::String > fileName1 = Array_obj< ::String >::__new().Add(fileName);		HX_STACK_VAR(fileName1,"fileName1");
		HX_STACK_LINE(76)
		Array< ::String > url1 = Array_obj< ::String >::__new().Add(url);		HX_STACK_VAR(url1,"url1");
		HX_STACK_LINE(78)
		::openfl::net::URLRequest req = ::openfl::net::URLRequest_obj::__new(url1->__get((int)0));		HX_STACK_VAR(req,"req");
		HX_STACK_LINE(79)
		req->method = HX_CSTRING("POST");
		HX_STACK_LINE(80)
		::openfl::utils::ByteArray dataCache = ::openfl::utils::ByteArray_obj::__new(null());		HX_STACK_VAR(dataCache,"dataCache");
		HX_STACK_LINE(81)
		Float _g = ::Date_obj::now()->getTime();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(81)
		::String boundary = (HX_CSTRING("----changethistoyourboundary") + _g);		HX_STACK_VAR(boundary,"boundary");
		HX_STACK_LINE(82)
		::String dashdash = HX_CSTRING("--");		HX_STACK_VAR(dashdash,"dashdash");
		HX_STACK_LINE(82)
		::String crlf = HX_CSTRING("\r\n");		HX_STACK_VAR(crlf,"crlf");
		HX_STACK_LINE(81)
		::openfl::utils::ByteArray tmpBa;		HX_STACK_VAR(tmpBa,"tmpBa");
		HX_STACK_LINE(85)
		::openfl::utils::ByteArray _g1 = ::openfl::utils::ByteArray_obj::__new(null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(85)
		tmpBa = _g1;
		HX_STACK_LINE(86)
		req->contentType = (HX_CSTRING("multipart/form-data; boundary=") + boundary);
		HX_STACK_LINE(87)
		::openfl::net::URLRequestHeader _g2 = ::openfl::net::URLRequestHeader_obj::__new(HX_CSTRING("Content-Type"),(HX_CSTRING("multipart/form-data; boundary=") + boundary));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(87)
		req->requestHeaders->push(_g2);
		HX_STACK_LINE(89)
		{
			HX_STACK_LINE(89)
			int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(89)
			Array< ::String > _g11 = ::Reflect_obj::fields(objUpload);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(89)
			while((true)){
				HX_STACK_LINE(89)
				if ((!(((_g3 < _g11->length))))){
					HX_STACK_LINE(89)
					break;
				}
				HX_STACK_LINE(89)
				::String n = _g11->__get(_g3);		HX_STACK_VAR(n,"n");
				HX_STACK_LINE(89)
				++(_g3);
				HX_STACK_LINE(93)
				Dynamic _g31 = ::Reflect_obj::field(objUpload,n);		HX_STACK_VAR(_g31,"_g31");
				HX_STACK_LINE(93)
				::String _g4 = ::Std_obj::string(_g31);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(91)
				::String _g5 = ((((((((dashdash + boundary) + crlf) + HX_CSTRING("Content-Disposition: form-data; name=\"")) + n) + HX_CSTRING("\"")) + crlf) + crlf) + _g4);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(91)
				::String _g6 = (_g5 + crlf);		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(90)
				tmpBa->writeUTFBytes(_g6);
			}
		}
		HX_STACK_LINE(98)
		tmpBa->writeUTFBytes(((((((((((dashdash + boundary) + crlf) + HX_CSTRING("Content-Disposition: form-data; name=\"file\"; filename=\"")) + fileName1->__get((int)0)) + HX_CSTRING("\"")) + crlf) + HX_CSTRING("Content-Type: ")) + mimeType) + crlf) + crlf));
		HX_STACK_LINE(104)
		tmpBa->writeBytes(bg,(int)0,bg->length);
		HX_STACK_LINE(105)
		bg->clear();
		HX_STACK_LINE(107)
		tmpBa->writeUTFBytes(crlf);
		HX_STACK_LINE(110)
		tmpBa->writeUTFBytes((((dashdash + boundary) + dashdash) + crlf));
		HX_STACK_LINE(112)
		req->data = tmpBa;
		HX_STACK_LINE(114)
		::openfl::net::URLLoader loader = ::openfl::net::URLLoader_obj::__new(req);		HX_STACK_VAR(loader,"loader");
		HX_STACK_LINE(115)
		loader->dataFormat = ::openfl::net::URLLoaderDataFormat_obj::BINARY;

		HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_1_1,Dynamic,succFun1,Array< ::String >,url1,Array< ::String >,fileName1)
		Void run(::openfl::events::Event e){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","com/ipsilondev/S3Utils.hx",117,0x1a947467)
			HX_STACK_ARG(e,"e")
			{
				struct _Function_2_1{
					inline static Dynamic Block( Array< ::String > &url1,Array< ::String > &fileName1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ipsilondev/S3Utils.hx",117,0x1a947467)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("url") , url1->__get((int)0),false);
							__result->Add(HX_CSTRING("file") , fileName1->__get((int)0),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(117)
				succFun1->__GetItem((int)0)(_Function_2_1::Block(url1,fileName1)).Cast< Void >();
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(116)
		loader->addEventListener(::openfl::events::Event_obj::COMPLETE, Dynamic(new _Function_1_1(succFun1,url1,fileName1)),null(),null(),null());

		HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_1_2,Array< ::String >,url1,Array< ::String >,fileName1,Dynamic,failFunc1)
		Void run(::openfl::events::IOErrorEvent e){
			HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","com/ipsilondev/S3Utils.hx",120,0x1a947467)
			HX_STACK_ARG(e,"e")
			{
				struct _Function_2_1{
					inline static Dynamic Block( Array< ::String > &url1,Array< ::String > &fileName1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ipsilondev/S3Utils.hx",120,0x1a947467)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("url") , url1->__get((int)0),false);
							__result->Add(HX_CSTRING("file") , fileName1->__get((int)0),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(120)
				failFunc1->__GetItem((int)0)(_Function_2_1::Block(url1,fileName1)).Cast< Void >();
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(119)
		loader->addEventListener(::openfl::events::IOErrorEvent_obj::IO_ERROR, Dynamic(new _Function_1_2(url1,fileName1,failFunc1)),null(),null(),null());
		HX_STACK_LINE(122)
		if ((progressEnabled)){

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Dynamic,progressFunc1)
			Void run(::openfl::events::ProgressEvent e){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","com/ipsilondev/S3Utils.hx",124,0x1a947467)
				HX_STACK_ARG(e,"e")
				{
					HX_STACK_LINE(124)
					progressFunc1->__GetItem((int)0)(e->bytesLoaded,e->bytesTotal).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(123)
			loader->addEventListener(HX_CSTRING("progress"), Dynamic(new _Function_2_1(progressFunc1)),null(),null(),null());
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(S3Utils_obj,uploadToAmazon,(void))

::openfl::utils::ByteArray S3Utils_obj::getBytesArray( ::String p){
	HX_STACK_FRAME("com.ipsilondev.S3Utils","getBytesArray",0xa0dea70d,"com.ipsilondev.S3Utils.getBytesArray","com/ipsilondev/S3Utils.hx",132,0x1a947467)
	HX_STACK_ARG(p,"p")
	HX_STACK_LINE(133)
	::haxe::io::Bytes _g = ::sys::io::File_obj::getBytes(p);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(133)
	return ::openfl::utils::ByteArray_obj::fromBytes(_g);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(S3Utils_obj,getBytesArray,return )

::openfl::utils::ByteArray S3Utils_obj::getBytesArrayBitmap( ::openfl::display::BitmapData b){
	HX_STACK_FRAME("com.ipsilondev.S3Utils","getBytesArrayBitmap",0x5e0d72dc,"com.ipsilondev.S3Utils.getBytesArrayBitmap","com/ipsilondev/S3Utils.hx",137,0x1a947467)
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(137)
	return b->encode(HX_CSTRING("png"),null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(S3Utils_obj,getBytesArrayBitmap,return )


S3Utils_obj::S3Utils_obj()
{
}

Dynamic S3Utils_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"serverURL") ) { return serverURL; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getPolicyS3") ) { return getPolicyS3_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getBytesArray") ) { return getBytesArray_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"makeServerCall") ) { return makeServerCall_dyn(); }
		if (HX_FIELD_EQ(inName,"uploadToAmazon") ) { return uploadToAmazon_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getBytesArrayBitmap") ) { return getBytesArrayBitmap_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic S3Utils_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"serverURL") ) { serverURL=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void S3Utils_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("serverURL"),
	HX_CSTRING("getPolicyS3"),
	HX_CSTRING("makeServerCall"),
	HX_CSTRING("uploadToAmazon"),
	HX_CSTRING("getBytesArray"),
	HX_CSTRING("getBytesArrayBitmap"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(S3Utils_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(S3Utils_obj::serverURL,"serverURL");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(S3Utils_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(S3Utils_obj::serverURL,"serverURL");
};

#endif

Class S3Utils_obj::__mClass;

void S3Utils_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.ipsilondev.S3Utils"), hx::TCanCast< S3Utils_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void S3Utils_obj::__boot()
{
	serverURL= HX_CSTRING("http://test.salefad.com/");
}

} // end namespace com
} // end namespace ipsilondev
