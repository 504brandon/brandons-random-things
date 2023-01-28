#include <hxcpp.h>

#ifndef INCLUDED_Desktop
#include <Desktop.h>
#endif
#ifndef INCLUDED_FlashLightState
#include <FlashLightState.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouseButton
#include <flixel/input/mouse/FlxMouseButton.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
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
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_432d2a8671c9cfdf_7_new,"Desktop","new",0x97f11cae,"Desktop.new","Desktop.hx",7,0xf5339282)
HX_LOCAL_STACK_FRAME(_hx_pos_432d2a8671c9cfdf_11_create,"Desktop","create",0x34583f6e,"Desktop.create","Desktop.hx",11,0xf5339282)
HX_LOCAL_STACK_FRAME(_hx_pos_432d2a8671c9cfdf_31_update,"Desktop","update",0x3f4e5e7b,"Desktop.update","Desktop.hx",31,0xf5339282)

void Desktop_obj::__construct( ::Dynamic MaxSize){
            	HX_STACKFRAME(&_hx_pos_432d2a8671c9cfdf_7_new)
HXDLIN(   7)		super::__construct(MaxSize);
            	}

Dynamic Desktop_obj::__CreateEmpty() { return new Desktop_obj; }

void *Desktop_obj::_hx_vtable = 0;

Dynamic Desktop_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Desktop_obj > _hx_result = new Desktop_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Desktop_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x034a0c50) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x034a0c50;
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
	}
}

void Desktop_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_432d2a8671c9cfdf_11_create)
HXLINE(  12)		this->super::create();
HXLINE(  13)		::flixel::FlxG_obj::mouse->enabled = true;
HXLINE(  14)		::flixel::FlxG_obj::mouse->set_visible(true);
HXLINE(  16)		this->bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null());
HXLINE(  18)		 ::flixel::FlxSprite _hx_tmp = this->bg;
HXDLIN(  18)		_hx_tmp->loadGraphic(::openfl::display::BitmapData_obj::fromFile(((HX_("",00,00,00,00) + ::Sys_obj::getEnv(HX_("AppData",4b,0b,09,01))) + HX_("\\Microsoft\\Windows\\Themes\\TranscodedWallpaper",c4,d9,b9,13))),null(),null(),null(),null(),null());
HXLINE(  22)		{
HXLINE(  22)			 ::flixel::FlxSprite _this = this->bg;
HXDLIN(  22)			 ::flixel::util::FlxAxes axes = ::flixel::util::FlxAxes_obj::XY_dyn();
HXDLIN(  22)			bool _hx_tmp1;
HXDLIN(  22)			switch((int)(axes->_hx_getIndex())){
            				case (int)0: case (int)2: {
HXLINE(  22)					_hx_tmp1 = true;
            				}
            				break;
            				default:{
HXLINE(  22)					_hx_tmp1 = false;
            				}
            			}
HXDLIN(  22)			if (_hx_tmp1) {
HXLINE(  22)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  22)				_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  22)			bool _hx_tmp2;
HXDLIN(  22)			switch((int)(axes->_hx_getIndex())){
            				case (int)1: case (int)2: {
HXLINE(  22)					_hx_tmp2 = true;
            				}
            				break;
            				default:{
HXLINE(  22)					_hx_tmp2 = false;
            				}
            			}
HXDLIN(  22)			if (_hx_tmp2) {
HXLINE(  22)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  22)				_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  23)		this->add(this->bg);
HXLINE(  25)		this->flashlight =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-10,-10,null());
HXLINE(  26)		this->flashlight->loadGraphic(HX_("assets/images/desktop/flashlight.png",5f,9b,c4,5d),null(),null(),null(),null(),null());
HXLINE(  27)		this->flashlight->scale->set(((Float)0.5),((Float)0.5));
HXLINE(  28)		this->add(this->flashlight);
            	}


void Desktop_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_432d2a8671c9cfdf_31_update)
HXLINE(  32)		this->super::update(elapsed);
HXLINE(  34)		bool _hx_tmp;
HXDLIN(  34)		if (::flixel::FlxG_obj::mouse->overlaps(this->flashlight,null())) {
HXLINE(  34)			 ::flixel::input::mouse::FlxMouseButton _this = ::flixel::FlxG_obj::mouse->_leftButton;
HXDLIN(  34)			if ((_this->current != 1)) {
HXLINE(  34)				_hx_tmp = (_this->current == 2);
            			}
            			else {
HXLINE(  34)				_hx_tmp = true;
            			}
            		}
            		else {
HXLINE(  34)			_hx_tmp = false;
            		}
HXDLIN(  34)		if (_hx_tmp) {
HXLINE(  35)			 ::flixel::FlxState nextState =  ::FlashLightState_obj::__alloc( HX_CTX ,null());
HXDLIN(  35)			if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE(  35)				::flixel::FlxG_obj::game->_requestedState = nextState;
            			}
            		}
            	}



::hx::ObjectPtr< Desktop_obj > Desktop_obj::__new( ::Dynamic MaxSize) {
	::hx::ObjectPtr< Desktop_obj > __this = new Desktop_obj();
	__this->__construct(MaxSize);
	return __this;
}

::hx::ObjectPtr< Desktop_obj > Desktop_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic MaxSize) {
	Desktop_obj *__this = (Desktop_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Desktop_obj), true, "Desktop"));
	*(void **)__this = Desktop_obj::_hx_vtable;
	__this->__construct(MaxSize);
	return __this;
}

Desktop_obj::Desktop_obj()
{
}

void Desktop_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Desktop);
	HX_MARK_MEMBER_NAME(bg,"bg");
	HX_MARK_MEMBER_NAME(flashlight,"flashlight");
	 ::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Desktop_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bg,"bg");
	HX_VISIT_MEMBER_NAME(flashlight,"flashlight");
	 ::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Desktop_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { return ::hx::Val( bg ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"flashlight") ) { return ::hx::Val( flashlight ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Desktop_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { bg=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"flashlight") ) { flashlight=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Desktop_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bg",c5,55,00,00));
	outFields->push(HX_("flashlight",26,bd,df,ff));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Desktop_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(Desktop_obj,bg),HX_("bg",c5,55,00,00)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(Desktop_obj,flashlight),HX_("flashlight",26,bd,df,ff)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Desktop_obj_sStaticStorageInfo = 0;
#endif

static ::String Desktop_obj_sMemberFields[] = {
	HX_("bg",c5,55,00,00),
	HX_("flashlight",26,bd,df,ff),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class Desktop_obj::__mClass;

void Desktop_obj::__register()
{
	Desktop_obj _hx_dummy;
	Desktop_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Desktop",bc,ed,e5,eb);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Desktop_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Desktop_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Desktop_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Desktop_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

