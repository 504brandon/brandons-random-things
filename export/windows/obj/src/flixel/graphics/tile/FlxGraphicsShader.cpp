#include <hxcpp.h>

#ifndef INCLUDED_flixel_graphics_tile_FlxGraphicsShader
#include <flixel/graphics/tile/FlxGraphicsShader.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsShader
#include <openfl/display/GraphicsShader.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_07f48bb0273dd92f_75_new,"flixel.graphics.tile.FlxGraphicsShader","new",0xac7b10a5,"flixel.graphics.tile.FlxGraphicsShader.new","flixel/graphics/tile/FlxGraphicsShader.hx",75,0x6817bd0c)
namespace flixel{
namespace graphics{
namespace tile{

void FlxGraphicsShader_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_07f48bb0273dd92f_75_new)
HXLINE( 182)		if (::hx::IsNull( this->_hx___glFragmentSource )) {
HXLINE( 184)			this->_hx___glFragmentSource = HX_("\n\t\tvarying float openfl_Alphav;\r\n\t\tvarying vec4 openfl_ColorMultiplierv;\r\n\t\tvarying vec4 openfl_ColorOffsetv;\r\n\t\tvarying vec2 openfl_TextureCoordv;\r\n\r\n\t\tuniform bool openfl_HasColorTransform;\r\n\t\tuniform vec2 openfl_TextureSize;\r\n\t\tuniform sampler2D bitmap;\n\n\t\tuniform bool hasTransform;\n\t\tuniform bool hasColorTransform;\n\n\t\tvec4 flixel_texture2D(sampler2D bitmap, vec2 coord)\n\t\t{\n\t\t\tvec4 color = texture2D(bitmap, coord);\n\t\t\tif (!hasTransform)\n\t\t\t{\n\t\t\t\treturn color;\n\t\t\t}\n\n\t\t\tif (color.a == 0.0)\n\t\t\t{\n\t\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\n\t\t\t}\n\n\t\t\tif (!hasColorTransform)\n\t\t\t{\n\t\t\t\treturn color * openfl_Alphav;\n\t\t\t}\n\n\t\t\tcolor = vec4(color.rgb / color.a, color.a);\n\n\t\t\tmat4 colorMultiplier = mat4(0);\n\t\t\tcolorMultiplier[0][0] = openfl_ColorMultiplierv.x;\n\t\t\tcolorMultiplier[1][1] = openfl_ColorMultiplierv.y;\n\t\t\tcolorMultiplier[2][2] = openfl_ColorMultiplierv.z;\n\t\t\tcolorMultiplier[3][3] = openfl_ColorMultiplierv.w;\n\n\t\t\tcolor = clamp(openfl_ColorOffsetv + (color * colorMultiplier), 0.0, 1.0);\n\n\t\t\tif (color.a > 0.0)\n\t\t\t{\n\t\t\t\treturn vec4(color.rgb * color.a * openfl_Alphav, color.a * openfl_Alphav);\n\t\t\t}\n\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\n\t\t}\n\t\n\t\t\n\t\tvoid main(void)\n\t\t{\n\t\t\tgl_FragColor = flixel_texture2D(bitmap, openfl_TextureCoordv);\n\t\t}",b6,10,21,14);
            		}
HXLINE( 174)		if (::hx::IsNull( this->_hx___glVertexSource )) {
HXLINE( 176)			this->_hx___glVertexSource = HX_("\n\t\tattribute float openfl_Alpha;\r\n\t\tattribute vec4 openfl_ColorMultiplier;\r\n\t\tattribute vec4 openfl_ColorOffset;\r\n\t\tattribute vec4 openfl_Position;\r\n\t\tattribute vec2 openfl_TextureCoord;\r\n\r\n\t\tvarying float openfl_Alphav;\r\n\t\tvarying vec4 openfl_ColorMultiplierv;\r\n\t\tvarying vec4 openfl_ColorOffsetv;\r\n\t\tvarying vec2 openfl_TextureCoordv;\r\n\r\n\t\tuniform mat4 openfl_Matrix;\r\n\t\tuniform bool openfl_HasColorTransform;\r\n\t\tuniform vec2 openfl_TextureSize;\n\n\t\t\n\t\tattribute float alpha;\n\t\tattribute vec4 colorMultiplier;\n\t\tattribute vec4 colorOffset;\n\t\tuniform bool hasColorTransform;\n\t\t\n\t\tvoid main(void)\n\t\t{\n\t\t\topenfl_Alphav = openfl_Alpha;\r\n\t\topenfl_TextureCoordv = openfl_TextureCoord;\r\n\r\n\t\tif (openfl_HasColorTransform) {\r\n\r\n\t\t\topenfl_ColorMultiplierv = openfl_ColorMultiplier;\r\n\t\t\topenfl_ColorOffsetv = openfl_ColorOffset / 255.0;\r\n\r\n\t\t}\r\n\r\n\t\tgl_Position = openfl_Matrix * openfl_Position;\n\n\t\t\t\n\t\t\topenfl_Alphav = openfl_Alpha * alpha;\n\t\t\t\n\t\t\tif (hasColorTransform)\n\t\t\t{\n\t\t\t\topenfl_ColorOffsetv = colorOffset / 255.0;\n\t\t\t\topenfl_ColorMultiplierv = colorMultiplier;\n\t\t\t}\n\t\t}",4c,61,dd,62);
            		}
HXLINE(  76)		super::__construct(null());
HXLINE(   6)		this->_hx___isGenerated = true;
HXDLIN(   6)		this->_hx___initGL();
            	}

Dynamic FlxGraphicsShader_obj::__CreateEmpty() { return new FlxGraphicsShader_obj; }

void *FlxGraphicsShader_obj::_hx_vtable = 0;

Dynamic FlxGraphicsShader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxGraphicsShader_obj > _hx_result = new FlxGraphicsShader_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxGraphicsShader_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1efca5b6) {
		if (inClassId<=(int)0x04f93fcd) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x04f93fcd;
		} else {
			return inClassId==(int)0x1efca5b6;
		}
	} else {
		return inClassId==(int)0x78d8d737;
	}
}


::hx::ObjectPtr< FlxGraphicsShader_obj > FlxGraphicsShader_obj::__new() {
	::hx::ObjectPtr< FlxGraphicsShader_obj > __this = new FlxGraphicsShader_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< FlxGraphicsShader_obj > FlxGraphicsShader_obj::__alloc(::hx::Ctx *_hx_ctx) {
	FlxGraphicsShader_obj *__this = (FlxGraphicsShader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxGraphicsShader_obj), true, "flixel.graphics.tile.FlxGraphicsShader"));
	*(void **)__this = FlxGraphicsShader_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FlxGraphicsShader_obj::FlxGraphicsShader_obj()
{
}

void FlxGraphicsShader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxGraphicsShader);
	HX_MARK_MEMBER_NAME(alpha,"alpha");
	HX_MARK_MEMBER_NAME(colorMultiplier,"colorMultiplier");
	HX_MARK_MEMBER_NAME(colorOffset,"colorOffset");
	HX_MARK_MEMBER_NAME(hasColorTransform,"hasColorTransform");
	HX_MARK_MEMBER_NAME(hasTransform,"hasTransform");
	 ::openfl::display::GraphicsShader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxGraphicsShader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(alpha,"alpha");
	HX_VISIT_MEMBER_NAME(colorMultiplier,"colorMultiplier");
	HX_VISIT_MEMBER_NAME(colorOffset,"colorOffset");
	HX_VISIT_MEMBER_NAME(hasColorTransform,"hasColorTransform");
	HX_VISIT_MEMBER_NAME(hasTransform,"hasTransform");
	 ::openfl::display::GraphicsShader_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxGraphicsShader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { return ::hx::Val( alpha ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"colorOffset") ) { return ::hx::Val( colorOffset ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"hasTransform") ) { return ::hx::Val( hasTransform ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"colorMultiplier") ) { return ::hx::Val( colorMultiplier ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"hasColorTransform") ) { return ::hx::Val( hasColorTransform ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxGraphicsShader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { alpha=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"colorOffset") ) { colorOffset=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"hasTransform") ) { hasTransform=inValue.Cast<  ::openfl::display::ShaderParameter_Bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"colorMultiplier") ) { colorMultiplier=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"hasColorTransform") ) { hasColorTransform=inValue.Cast<  ::openfl::display::ShaderParameter_Bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxGraphicsShader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("alpha",5e,a7,96,21));
	outFields->push(HX_("colorMultiplier",c4,16,81,50));
	outFields->push(HX_("colorOffset",56,29,68,1a));
	outFields->push(HX_("hasColorTransform",83,14,eb,f0));
	outFields->push(HX_("hasTransform",b2,12,e5,d2));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxGraphicsShader_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(FlxGraphicsShader_obj,alpha),HX_("alpha",5e,a7,96,21)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(FlxGraphicsShader_obj,colorMultiplier),HX_("colorMultiplier",c4,16,81,50)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(FlxGraphicsShader_obj,colorOffset),HX_("colorOffset",56,29,68,1a)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Bool */ ,(int)offsetof(FlxGraphicsShader_obj,hasColorTransform),HX_("hasColorTransform",83,14,eb,f0)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Bool */ ,(int)offsetof(FlxGraphicsShader_obj,hasTransform),HX_("hasTransform",b2,12,e5,d2)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxGraphicsShader_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxGraphicsShader_obj_sMemberFields[] = {
	HX_("alpha",5e,a7,96,21),
	HX_("colorMultiplier",c4,16,81,50),
	HX_("colorOffset",56,29,68,1a),
	HX_("hasColorTransform",83,14,eb,f0),
	HX_("hasTransform",b2,12,e5,d2),
	::String(null()) };

::hx::Class FlxGraphicsShader_obj::__mClass;

void FlxGraphicsShader_obj::__register()
{
	FlxGraphicsShader_obj _hx_dummy;
	FlxGraphicsShader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.graphics.tile.FlxGraphicsShader",33,da,da,60);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxGraphicsShader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxGraphicsShader_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxGraphicsShader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxGraphicsShader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace graphics
} // end namespace tile
