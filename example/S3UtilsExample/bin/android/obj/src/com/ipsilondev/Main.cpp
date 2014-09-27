#include <hxcpp.h>

#ifndef INCLUDED_com_ipsilondev_Main
#include <com/ipsilondev/Main.h>
#endif
#ifndef INCLUDED_com_ipsilondev_S3Utils
#include <com/ipsilondev/S3Utils.h>
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
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_display_StageAlign
#include <openfl/display/StageAlign.h>
#endif
#ifndef INCLUDED_openfl_display_StageScaleMode
#include <openfl/display/StageScaleMode.h>
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
#ifndef INCLUDED_openfl_system_Capabilities
#include <openfl/system/Capabilities.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
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
namespace com{
namespace ipsilondev{

Void Main_obj::__construct()
{
HX_STACK_FRAME("com.ipsilondev.Main","new",0x145a8045,"com.ipsilondev.Main.new","com/ipsilondev/Main.hx",59,0x7d7a752b)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(60)
	super::__construct();
	HX_STACK_LINE(61)
	this->addEventListener(::openfl::events::Event_obj::ADDED_TO_STAGE,this->added_dyn(),null(),null(),null());
}
;
	return null();
}

//Main_obj::~Main_obj() { }

Dynamic Main_obj::__CreateEmpty() { return  new Main_obj; }
hx::ObjectPtr< Main_obj > Main_obj::__new()
{  hx::ObjectPtr< Main_obj > result = new Main_obj();
	result->__construct();
	return result;}

Dynamic Main_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Main_obj > result = new Main_obj();
	result->__construct();
	return result;}

Void Main_obj::resize( Dynamic e){
{
		HX_STACK_FRAME("com.ipsilondev.Main","resize",0xffe9e72f,"com.ipsilondev.Main.resize","com/ipsilondev/Main.hx",24,0x7d7a752b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(24)
		if ((!(this->inited))){
			HX_STACK_LINE(24)
			this->init();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,resize,(void))

Void Main_obj::init( ){
{
		HX_STACK_FRAME("com.ipsilondev.Main","init",0xb78e738b,"com.ipsilondev.Main.init","com/ipsilondev/Main.hx",29,0x7d7a752b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(28)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(30)
		if ((this->inited)){
			HX_STACK_LINE(30)
			return null();
		}
		HX_STACK_LINE(31)
		this->inited = true;
		HX_STACK_LINE(32)
		::openfl::text::TextField _g1 = ::openfl::text::TextField_obj::__new();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(32)
		this->statusTxt = _g1;
		HX_STACK_LINE(33)
		Float _g11 = ::openfl::system::Capabilities_obj::get_screenResolutionX();		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(33)
		this->statusTxt->set_width(_g11);
		HX_STACK_LINE(34)
		this->addChild(this->statusTxt);
		HX_STACK_LINE(43)
		Array< ::Dynamic > exampleImage = Array_obj< ::Dynamic >::__new().Add(::openfl::display::BitmapData_obj::__new((int)800,(int)600,false,(int)16711680,null()));		HX_STACK_VAR(exampleImage,"exampleImage");

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,exampleImage,Array< ::Dynamic >,_g)
		Void run(Dynamic resultJson,Dynamic args){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","com/ipsilondev/Main.hx",45,0x7d7a752b)
			HX_STACK_ARG(resultJson,"resultJson")
			HX_STACK_ARG(args,"args")
			{
				struct _Function_2_1{
					inline static Dynamic Block( Dynamic &resultJson){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ipsilondev/Main.hx",45,0x7d7a752b)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("key") , HX_CSTRING("folderExample/${filename}"),false);
							__result->Add(HX_CSTRING("AWSAccessKeyId") , resultJson->__Field(HX_CSTRING("uploadObj"),true)->__Field(HX_CSTRING("s3Key"),true),false);
							__result->Add(HX_CSTRING("acl") , HX_CSTRING("public-read"),false);
							__result->Add(HX_CSTRING("success_action_redirect") , resultJson->__Field(HX_CSTRING("uploadObj"),true)->__Field(HX_CSTRING("s3Redirect"),true),false);
							__result->Add(HX_CSTRING("policy") , resultJson->__Field(HX_CSTRING("uploadObj"),true)->__Field(HX_CSTRING("s3PolicyBase64"),true),false);
							__result->Add(HX_CSTRING("signature") , resultJson->__Field(HX_CSTRING("uploadObj"),true)->__Field(HX_CSTRING("s3Signature"),true),false);
							return __result;
						}
						return null();
					}
				};

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_2,Array< ::Dynamic >,_g)
				Void run(Dynamic result){
					HX_STACK_FRAME("*","_Function_2_2",0x5201af79,"*._Function_2_2","com/ipsilondev/Main.hx",46,0x7d7a752b)
					HX_STACK_ARG(result,"result")
					{
						HX_STACK_LINE(46)
						_g->__get((int)0).StaticCast< ::com::ipsilondev::Main >()->statusTxt->set_text(HX_CSTRING("Uploaded !"));
					}
					return null();
				}
				HX_END_LOCAL_FUNC1((void))


				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_3,Array< ::Dynamic >,_g)
				Void run(Dynamic failreason){
					HX_STACK_FRAME("*","_Function_2_3",0x5201af7a,"*._Function_2_3","com/ipsilondev/Main.hx",48,0x7d7a752b)
					HX_STACK_ARG(failreason,"failreason")
					{
						HX_STACK_LINE(48)
						_g->__get((int)0).StaticCast< ::com::ipsilondev::Main >()->statusTxt->set_text(HX_CSTRING("Failed Upload !"));
					}
					return null();
				}
				HX_END_LOCAL_FUNC1((void))

				HX_STACK_LINE(45)
				::com::ipsilondev::S3Utils_obj::uploadToAmazon(resultJson->__Field(HX_CSTRING("url"),true),_Function_2_1::Block(resultJson),::com::ipsilondev::S3Utils_obj::getBytesArrayBitmap(exampleImage->__get((int)0).StaticCast< ::openfl::display::BitmapData >()),HX_CSTRING("/folderExample/exampleImage.png"),HX_CSTRING("image/png"), Dynamic(new _Function_2_2(_g)), Dynamic(new _Function_2_3(_g)),null(),null());
			}
			return null();
		}
		HX_END_LOCAL_FUNC2((void))


		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_2,Array< ::Dynamic >,_g)
		Void run(::String failReason){
			HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","com/ipsilondev/Main.hx",52,0x7d7a752b)
			HX_STACK_ARG(failReason,"failReason")
			{
				HX_STACK_LINE(52)
				_g->__get((int)0).StaticCast< ::com::ipsilondev::Main >()->statusTxt->set_text(HX_CSTRING("Failed to get S3 Policy !"));
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(44)
		::com::ipsilondev::S3Utils_obj::getPolicyS3( Dynamic(new _Function_1_1(exampleImage,_g)), Dynamic(new _Function_1_2(_g)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,init,(void))

Void Main_obj::added( Dynamic e){
{
		HX_STACK_FRAME("com.ipsilondev.Main","added",0x434207e5,"com.ipsilondev.Main.added","com/ipsilondev/Main.hx",65,0x7d7a752b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(66)
		this->removeEventListener(::openfl::events::Event_obj::ADDED_TO_STAGE,this->added_dyn(),null());
		HX_STACK_LINE(67)
		this->get_stage()->addEventListener(::openfl::events::Event_obj::RESIZE,this->resize_dyn(),null(),null(),null());
		HX_STACK_LINE(71)
		this->init();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,added,(void))

Void Main_obj::main( ){
{
		HX_STACK_FRAME("com.ipsilondev.Main","main",0xba2970b4,"com.ipsilondev.Main.main","com/ipsilondev/Main.hx",76,0x7d7a752b)
		HX_STACK_LINE(78)
		::openfl::Lib_obj::get_current()->get_stage()->set_align(::openfl::display::StageAlign_obj::TOP_LEFT);
		HX_STACK_LINE(79)
		::openfl::Lib_obj::get_current()->get_stage()->set_scaleMode(::openfl::display::StageScaleMode_obj::NO_SCALE);
		HX_STACK_LINE(80)
		::com::ipsilondev::Main _g = ::com::ipsilondev::Main_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(80)
		::openfl::Lib_obj::get_current()->addChild(_g);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Main_obj,main,(void))


Main_obj::Main_obj()
{
}

void Main_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Main);
	HX_MARK_MEMBER_NAME(inited,"inited");
	HX_MARK_MEMBER_NAME(statusTxt,"statusTxt");
	::openfl::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Main_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(inited,"inited");
	HX_VISIT_MEMBER_NAME(statusTxt,"statusTxt");
	::openfl::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Main_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { return main_dyn(); }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"added") ) { return added_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"inited") ) { return inited; }
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"statusTxt") ) { return statusTxt; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Main_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"inited") ) { inited=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"statusTxt") ) { statusTxt=inValue.Cast< ::openfl::text::TextField >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Main_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("inited"));
	outFields->push(HX_CSTRING("statusTxt"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("main"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Main_obj,inited),HX_CSTRING("inited")},
	{hx::fsObject /*::openfl::text::TextField*/ ,(int)offsetof(Main_obj,statusTxt),HX_CSTRING("statusTxt")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("inited"),
	HX_CSTRING("statusTxt"),
	HX_CSTRING("resize"),
	HX_CSTRING("init"),
	HX_CSTRING("added"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::__mClass,"__mClass");
};

#endif

Class Main_obj::__mClass;

void Main_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.ipsilondev.Main"), hx::TCanCast< Main_obj> ,sStaticFields,sMemberFields,
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

void Main_obj::__boot()
{
}

} // end namespace com
} // end namespace ipsilondev
