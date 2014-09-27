#include <hxcpp.h>

#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif
namespace sys{
namespace io{

Void File_obj::__construct()
{
	return null();
}

//File_obj::~File_obj() { }

Dynamic File_obj::__CreateEmpty() { return  new File_obj; }
hx::ObjectPtr< File_obj > File_obj::__new()
{  hx::ObjectPtr< File_obj > result = new File_obj();
	result->__construct();
	return result;}

Dynamic File_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< File_obj > result = new File_obj();
	result->__construct();
	return result;}

::haxe::io::Bytes File_obj::getBytes( ::String path){
	HX_STACK_FRAME("sys.io.File","getBytes",0xbe457600,"sys.io.File.getBytes","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/io/File.hx",32,0xd489c8a1)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(33)
	Array< unsigned char > data = ::sys::io::File_obj::file_contents(path);		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(34)
	return ::haxe::io::Bytes_obj::ofData(data);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(File_obj,getBytes,return )

Dynamic File_obj::file_contents;


File_obj::File_obj()
{
}

Dynamic File_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"getBytes") ) { return getBytes_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"file_contents") ) { return file_contents; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic File_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"file_contents") ) { file_contents=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void File_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("getBytes"),
	HX_CSTRING("file_contents"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(File_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(File_obj::file_contents,"file_contents");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(File_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(File_obj::file_contents,"file_contents");
};

#endif

Class File_obj::__mClass;

void File_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("sys.io.File"), hx::TCanCast< File_obj> ,sStaticFields,sMemberFields,
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

void File_obj::__boot()
{
	file_contents= ::cpp::Lib_obj::load(HX_CSTRING("std"),HX_CSTRING("file_contents"),(int)1);
}

} // end namespace sys
} // end namespace io
