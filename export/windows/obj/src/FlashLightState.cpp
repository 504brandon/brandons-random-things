#include <hxcpp.h>

#ifndef INCLUDED_Desktop
#include <Desktop.h>
#endif
#ifndef INCLUDED_FlashLightState
#include <FlashLightState.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
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
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouseButton
#include <flixel/input/mouse/FlxMouseButton.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_70161aadf21d65f9_9_new,"FlashLightState","new",0xd2de4d7d,"FlashLightState.new","FlashLightState.hx",9,0x35c0b093)
HX_LOCAL_STACK_FRAME(_hx_pos_70161aadf21d65f9_14_create,"FlashLightState","create",0x0e9c39ff,"FlashLightState.create","FlashLightState.hx",14,0x35c0b093)
HX_LOCAL_STACK_FRAME(_hx_pos_70161aadf21d65f9_22_update,"FlashLightState","update",0x1992590c,"FlashLightState.update","FlashLightState.hx",22,0x35c0b093)

void FlashLightState_obj::__construct( ::Dynamic MaxSize){
            	HX_STACKFRAME(&_hx_pos_70161aadf21d65f9_9_new)
HXLINE(  12)		this->flashlightglow = ((Float)0.4);
HXLINE(   9)		super::__construct(MaxSize);
            	}

Dynamic FlashLightState_obj::__CreateEmpty() { return new FlashLightState_obj; }

void *FlashLightState_obj::_hx_vtable = 0;

Dynamic FlashLightState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlashLightState_obj > _hx_result = new FlashLightState_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool FlashLightState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x2628ff67) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2628ff67;
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
	}
}

void FlashLightState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_70161aadf21d65f9_14_create)
HXLINE(  15)		this->super::create();
HXLINE(  16)		this->testobjec =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null());
HXLINE(  17)		this->testobjec->makeGraphic(70,120,-1,null(),null());
HXLINE(  18)		{
HXLINE(  18)			 ::flixel::FlxSprite _this = this->testobjec;
HXDLIN(  18)			 ::flixel::util::FlxAxes axes = ::flixel::util::FlxAxes_obj::XY_dyn();
HXDLIN(  18)			bool _hx_tmp;
HXDLIN(  18)			switch((int)(axes->_hx_getIndex())){
            				case (int)0: case (int)2: {
HXLINE(  18)					_hx_tmp = true;
            				}
            				break;
            				default:{
HXLINE(  18)					_hx_tmp = false;
            				}
            			}
HXDLIN(  18)			if (_hx_tmp) {
HXLINE(  18)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  18)				_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  18)			bool _hx_tmp1;
HXDLIN(  18)			switch((int)(axes->_hx_getIndex())){
            				case (int)1: case (int)2: {
HXLINE(  18)					_hx_tmp1 = true;
            				}
            				break;
            				default:{
HXLINE(  18)					_hx_tmp1 = false;
            				}
            			}
HXDLIN(  18)			if (_hx_tmp1) {
HXLINE(  18)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  18)				_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  19)		this->add(this->testobjec);
            	}


void FlashLightState_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_70161aadf21d65f9_22_update)
HXLINE(  23)		this->super::update(elapsed);
HXLINE(  24)		 ::flixel::FlxSprite _hx_tmp = this->testobjec;
HXDLIN(  24)		int _hx_tmp1 = ::flixel::FlxG_obj::mouse->x;
HXDLIN(  24)		Float _hx_tmp2 = (( (Float)(_hx_tmp1) ) - (this->testobjec->get_width() / ( (Float)(2) )));
HXDLIN(  24)		int _hx_tmp3 = ::flixel::FlxG_obj::mouse->y;
HXDLIN(  24)		_hx_tmp->setPosition(_hx_tmp2,(( (Float)(_hx_tmp3) ) - (this->testobjec->get_height() / ( (Float)(2) ))));
HXLINE(  26)		 ::flixel::input::mouse::FlxMouseButton _this = ::flixel::FlxG_obj::mouse->_leftButton;
HXDLIN(  26)		bool _hx_tmp4;
HXDLIN(  26)		if ((_this->current != 1)) {
HXLINE(  26)			_hx_tmp4 = (_this->current == 2);
            		}
            		else {
HXLINE(  26)			_hx_tmp4 = true;
            		}
HXDLIN(  26)		if (_hx_tmp4) {
HXLINE(  27)			 ::FlashLightState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  27)			_hx_tmp->flashlightglow = (_hx_tmp->flashlightglow + ((Float)0.1));
            		}
            		else {
HXLINE(  29)			 ::FlashLightState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  29)			_hx_tmp->flashlightglow = (_hx_tmp->flashlightglow - ((Float)0.1));
            		}
HXLINE(  31)		if ((this->flashlightglow > 1)) {
HXLINE(  32)			this->flashlightglow = ( (Float)(1) );
            		}
HXLINE(  34)		if ((this->flashlightglow < ((Float)0.1))) {
HXLINE(  35)			this->flashlightglow = ((Float)0.1);
            		}
HXLINE(  37)		 ::flixel::input::keyboard::FlxKeyList _this1 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN(  37)		if (_this1->keyManager->checkStatusUnsafe(27,_this1->status)) {
HXLINE(  38)			 ::flixel::FlxState nextState =  ::Desktop_obj::__alloc( HX_CTX ,null());
HXDLIN(  38)			if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE(  38)				::flixel::FlxG_obj::game->_requestedState = nextState;
            			}
            		}
HXLINE(  40)		this->testobjec->set_alpha(this->flashlightglow);
            	}



::hx::ObjectPtr< FlashLightState_obj > FlashLightState_obj::__new( ::Dynamic MaxSize) {
	::hx::ObjectPtr< FlashLightState_obj > __this = new FlashLightState_obj();
	__this->__construct(MaxSize);
	return __this;
}

::hx::ObjectPtr< FlashLightState_obj > FlashLightState_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic MaxSize) {
	FlashLightState_obj *__this = (FlashLightState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlashLightState_obj), true, "FlashLightState"));
	*(void **)__this = FlashLightState_obj::_hx_vtable;
	__this->__construct(MaxSize);
	return __this;
}

FlashLightState_obj::FlashLightState_obj()
{
}

void FlashLightState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlashLightState);
	HX_MARK_MEMBER_NAME(testobjec,"testobjec");
	HX_MARK_MEMBER_NAME(bg,"bg");
	HX_MARK_MEMBER_NAME(flashlightglow,"flashlightglow");
	 ::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlashLightState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(testobjec,"testobjec");
	HX_VISIT_MEMBER_NAME(bg,"bg");
	HX_VISIT_MEMBER_NAME(flashlightglow,"flashlightglow");
	 ::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlashLightState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { return ::hx::Val( bg ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"testobjec") ) { return ::hx::Val( testobjec ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"flashlightglow") ) { return ::hx::Val( flashlightglow ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlashLightState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { bg=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"testobjec") ) { testobjec=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"flashlightglow") ) { flashlightglow=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlashLightState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("testobjec",83,e2,66,60));
	outFields->push(HX_("bg",c5,55,00,00));
	outFields->push(HX_("flashlightglow",b3,96,a3,bc));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlashLightState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(FlashLightState_obj,testobjec),HX_("testobjec",83,e2,66,60)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(FlashLightState_obj,bg),HX_("bg",c5,55,00,00)},
	{::hx::fsFloat,(int)offsetof(FlashLightState_obj,flashlightglow),HX_("flashlightglow",b3,96,a3,bc)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlashLightState_obj_sStaticStorageInfo = 0;
#endif

static ::String FlashLightState_obj_sMemberFields[] = {
	HX_("testobjec",83,e2,66,60),
	HX_("bg",c5,55,00,00),
	HX_("flashlightglow",b3,96,a3,bc),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class FlashLightState_obj::__mClass;

void FlashLightState_obj::__register()
{
	FlashLightState_obj _hx_dummy;
	FlashLightState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("FlashLightState",0b,cb,f8,2a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlashLightState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlashLightState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlashLightState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlashLightState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

