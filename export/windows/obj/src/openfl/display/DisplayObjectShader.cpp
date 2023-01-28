#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectShader
#include <openfl/display/DisplayObjectShader.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderInput_openfl_display_BitmapData
#include <openfl/display/ShaderInput_openfl_display_BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Bool
#include <openfl/display/ShaderParameter_Bool.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Float
#include <openfl/display/ShaderParameter_Float.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2d8f6df4c3f42d01_104_new,"openfl.display.DisplayObjectShader","new",0x8460e16e,"openfl.display.DisplayObjectShader.new","openfl/display/DisplayObjectShader.hx",104,0x1e226044)
namespace openfl{
namespace display{

void DisplayObjectShader_obj::__construct( ::openfl::utils::ByteArrayData code){
            	HX_STACKFRAME(&_hx_pos_2d8f6df4c3f42d01_104_new)
HXLINE( 182)		if (::hx::IsNull( this->_hx___glFragmentSource )) {
HXLINE( 184)			this->_hx___glFragmentSource = HX_("varying float openfl_Alphav;\r\n\t\tvarying vec4 openfl_ColorMultiplierv;\r\n\t\tvarying vec4 openfl_ColorOffsetv;\r\n\t\tvarying vec2 openfl_TextureCoordv;\r\n\r\n\t\tuniform bool openfl_HasColorTransform;\r\n\t\tuniform sampler2D openfl_Texture;\r\n\t\tuniform vec2 openfl_TextureSize;\r\n\r\n\t\tvoid main(void) {\r\n\r\n\t\t\tvec4 color = texture2D (openfl_Texture, openfl_TextureCoordv);\r\n\r\n\t\tif (color.a == 0.0) {\r\n\r\n\t\t\tgl_FragColor = vec4 (0.0, 0.0, 0.0, 0.0);\r\n\r\n\t\t} else if (openfl_HasColorTransform) {\r\n\r\n\t\t\tcolor = vec4 (color.rgb / color.a, color.a);\r\n\r\n\t\t\tmat4 colorMultiplier = mat4 (0);\r\n\t\t\tcolorMultiplier[0][0] = openfl_ColorMultiplierv.x;\r\n\t\t\tcolorMultiplier[1][1] = openfl_ColorMultiplierv.y;\r\n\t\t\tcolorMultiplier[2][2] = openfl_ColorMultiplierv.z;\r\n\t\t\tcolorMultiplier[3][3] = 1.0; // openfl_ColorMultiplierv.w;\r\n\r\n\t\t\tcolor = clamp (openfl_ColorOffsetv + (color * colorMultiplier), 0.0, 1.0);\r\n\r\n\t\t\tif (color.a > 0.0) {\r\n\r\n\t\t\t\tgl_FragColor = vec4 (color.rgb * color.a * openfl_Alphav, color.a * openfl_Alphav);\r\n\r\n\t\t\t} else {\r\n\r\n\t\t\t\tgl_FragColor = vec4 (0.0, 0.0, 0.0, 0.0);\r\n\r\n\t\t\t}\r\n\r\n\t\t} else {\r\n\r\n\t\t\tgl_FragColor = color * openfl_Alphav;\r\n\r\n\t\t}\r\n\r\n\t\t}",46,cd,3a,a9);
            		}
HXLINE( 174)		if (::hx::IsNull( this->_hx___glVertexSource )) {
HXLINE( 176)			this->_hx___glVertexSource = HX_("attribute float openfl_Alpha;\r\n\t\tattribute vec4 openfl_ColorMultiplier;\r\n\t\tattribute vec4 openfl_ColorOffset;\r\n\t\tattribute vec4 openfl_Position;\r\n\t\tattribute vec2 openfl_TextureCoord;\r\n\r\n\t\tvarying float openfl_Alphav;\r\n\t\tvarying vec4 openfl_ColorMultiplierv;\r\n\t\tvarying vec4 openfl_ColorOffsetv;\r\n\t\tvarying vec2 openfl_TextureCoordv;\r\n\r\n\t\tuniform mat4 openfl_Matrix;\r\n\t\tuniform bool openfl_HasColorTransform;\r\n\t\tuniform vec2 openfl_TextureSize;\r\n\r\n\t\tvoid main(void) {\r\n\r\n\t\t\topenfl_Alphav = openfl_Alpha;\r\n\t\topenfl_TextureCoordv = openfl_TextureCoord;\r\n\r\n\t\tif (openfl_HasColorTransform) {\r\n\r\n\t\t\topenfl_ColorMultiplierv = openfl_ColorMultiplier;\r\n\t\t\topenfl_ColorOffsetv = openfl_ColorOffset / 255.0;\r\n\r\n\t\t}\r\n\r\n\t\tgl_Position = openfl_Matrix * openfl_Position;\r\n\r\n\t\t}",3b,14,28,77);
            		}
HXLINE( 105)		super::__construct(code);
HXLINE(   9)		this->_hx___isGenerated = true;
HXDLIN(   9)		this->_hx___initGL();
            	}

Dynamic DisplayObjectShader_obj::__CreateEmpty() { return new DisplayObjectShader_obj; }

void *DisplayObjectShader_obj::_hx_vtable = 0;

Dynamic DisplayObjectShader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DisplayObjectShader_obj > _hx_result = new DisplayObjectShader_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool DisplayObjectShader_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x73076154) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x73076154;
	} else {
		return inClassId==(int)0x78d8d737;
	}
}


::hx::ObjectPtr< DisplayObjectShader_obj > DisplayObjectShader_obj::__new( ::openfl::utils::ByteArrayData code) {
	::hx::ObjectPtr< DisplayObjectShader_obj > __this = new DisplayObjectShader_obj();
	__this->__construct(code);
	return __this;
}

::hx::ObjectPtr< DisplayObjectShader_obj > DisplayObjectShader_obj::__alloc(::hx::Ctx *_hx_ctx, ::openfl::utils::ByteArrayData code) {
	DisplayObjectShader_obj *__this = (DisplayObjectShader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DisplayObjectShader_obj), true, "openfl.display.DisplayObjectShader"));
	*(void **)__this = DisplayObjectShader_obj::_hx_vtable;
	__this->__construct(code);
	return __this;
}

DisplayObjectShader_obj::DisplayObjectShader_obj()
{
}

void DisplayObjectShader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DisplayObjectShader);
	HX_MARK_MEMBER_NAME(openfl_Alpha,"openfl_Alpha");
	HX_MARK_MEMBER_NAME(openfl_ColorMultiplier,"openfl_ColorMultiplier");
	HX_MARK_MEMBER_NAME(openfl_ColorOffset,"openfl_ColorOffset");
	HX_MARK_MEMBER_NAME(openfl_Position,"openfl_Position");
	HX_MARK_MEMBER_NAME(openfl_TextureCoord,"openfl_TextureCoord");
	HX_MARK_MEMBER_NAME(openfl_Matrix,"openfl_Matrix");
	HX_MARK_MEMBER_NAME(openfl_HasColorTransform,"openfl_HasColorTransform");
	HX_MARK_MEMBER_NAME(openfl_TextureSize,"openfl_TextureSize");
	HX_MARK_MEMBER_NAME(openfl_Texture,"openfl_Texture");
	 ::openfl::display::Shader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DisplayObjectShader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(openfl_Alpha,"openfl_Alpha");
	HX_VISIT_MEMBER_NAME(openfl_ColorMultiplier,"openfl_ColorMultiplier");
	HX_VISIT_MEMBER_NAME(openfl_ColorOffset,"openfl_ColorOffset");
	HX_VISIT_MEMBER_NAME(openfl_Position,"openfl_Position");
	HX_VISIT_MEMBER_NAME(openfl_TextureCoord,"openfl_TextureCoord");
	HX_VISIT_MEMBER_NAME(openfl_Matrix,"openfl_Matrix");
	HX_VISIT_MEMBER_NAME(openfl_HasColorTransform,"openfl_HasColorTransform");
	HX_VISIT_MEMBER_NAME(openfl_TextureSize,"openfl_TextureSize");
	HX_VISIT_MEMBER_NAME(openfl_Texture,"openfl_Texture");
	 ::openfl::display::Shader_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val DisplayObjectShader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"openfl_Alpha") ) { return ::hx::Val( openfl_Alpha ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"openfl_Matrix") ) { return ::hx::Val( openfl_Matrix ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"openfl_Texture") ) { return ::hx::Val( openfl_Texture ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"openfl_Position") ) { return ::hx::Val( openfl_Position ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"openfl_ColorOffset") ) { return ::hx::Val( openfl_ColorOffset ); }
		if (HX_FIELD_EQ(inName,"openfl_TextureSize") ) { return ::hx::Val( openfl_TextureSize ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"openfl_TextureCoord") ) { return ::hx::Val( openfl_TextureCoord ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"openfl_ColorMultiplier") ) { return ::hx::Val( openfl_ColorMultiplier ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"openfl_HasColorTransform") ) { return ::hx::Val( openfl_HasColorTransform ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val DisplayObjectShader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"openfl_Alpha") ) { openfl_Alpha=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"openfl_Matrix") ) { openfl_Matrix=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"openfl_Texture") ) { openfl_Texture=inValue.Cast<  ::openfl::display::ShaderInput_openfl_display_BitmapData >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"openfl_Position") ) { openfl_Position=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"openfl_ColorOffset") ) { openfl_ColorOffset=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"openfl_TextureSize") ) { openfl_TextureSize=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"openfl_TextureCoord") ) { openfl_TextureCoord=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"openfl_ColorMultiplier") ) { openfl_ColorMultiplier=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"openfl_HasColorTransform") ) { openfl_HasColorTransform=inValue.Cast<  ::openfl::display::ShaderParameter_Bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DisplayObjectShader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("openfl_Alpha",0f,ce,3e,6a));
	outFields->push(HX_("openfl_ColorMultiplier",b5,e4,dc,18));
	outFields->push(HX_("openfl_ColorOffset",c7,ea,07,41));
	outFields->push(HX_("openfl_Position",98,fe,6c,ee));
	outFields->push(HX_("openfl_TextureCoord",49,e9,27,e8));
	outFields->push(HX_("openfl_Matrix",70,ea,41,06));
	outFields->push(HX_("openfl_HasColorTransform",b4,00,4b,62));
	outFields->push(HX_("openfl_TextureSize",ad,60,72,29));
	outFields->push(HX_("openfl_Texture",cc,bd,e4,7e));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DisplayObjectShader_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(DisplayObjectShader_obj,openfl_Alpha),HX_("openfl_Alpha",0f,ce,3e,6a)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(DisplayObjectShader_obj,openfl_ColorMultiplier),HX_("openfl_ColorMultiplier",b5,e4,dc,18)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(DisplayObjectShader_obj,openfl_ColorOffset),HX_("openfl_ColorOffset",c7,ea,07,41)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(DisplayObjectShader_obj,openfl_Position),HX_("openfl_Position",98,fe,6c,ee)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(DisplayObjectShader_obj,openfl_TextureCoord),HX_("openfl_TextureCoord",49,e9,27,e8)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(DisplayObjectShader_obj,openfl_Matrix),HX_("openfl_Matrix",70,ea,41,06)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Bool */ ,(int)offsetof(DisplayObjectShader_obj,openfl_HasColorTransform),HX_("openfl_HasColorTransform",b4,00,4b,62)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(DisplayObjectShader_obj,openfl_TextureSize),HX_("openfl_TextureSize",ad,60,72,29)},
	{::hx::fsObject /*  ::openfl::display::ShaderInput_openfl_display_BitmapData */ ,(int)offsetof(DisplayObjectShader_obj,openfl_Texture),HX_("openfl_Texture",cc,bd,e4,7e)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *DisplayObjectShader_obj_sStaticStorageInfo = 0;
#endif

static ::String DisplayObjectShader_obj_sMemberFields[] = {
	HX_("openfl_Alpha",0f,ce,3e,6a),
	HX_("openfl_ColorMultiplier",b5,e4,dc,18),
	HX_("openfl_ColorOffset",c7,ea,07,41),
	HX_("openfl_Position",98,fe,6c,ee),
	HX_("openfl_TextureCoord",49,e9,27,e8),
	HX_("openfl_Matrix",70,ea,41,06),
	HX_("openfl_HasColorTransform",b4,00,4b,62),
	HX_("openfl_TextureSize",ad,60,72,29),
	HX_("openfl_Texture",cc,bd,e4,7e),
	::String(null()) };

::hx::Class DisplayObjectShader_obj::__mClass;

void DisplayObjectShader_obj::__register()
{
	DisplayObjectShader_obj _hx_dummy;
	DisplayObjectShader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display.DisplayObjectShader",7c,52,64,22);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DisplayObjectShader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DisplayObjectShader_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DisplayObjectShader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DisplayObjectShader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
