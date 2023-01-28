#include <hxcpp.h>

#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
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
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_af23706db05c7feb_9_new,"PlayState","new",0xf8bf96cf,"PlayState.new","PlayState.hx",9,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_14_create,"PlayState","create",0x82220fed,"PlayState.create","PlayState.hx",14,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_22_update,"PlayState","update",0x8d182efa,"PlayState.update","PlayState.hx",22,0xb30d7781)

void PlayState_obj::__construct( ::Dynamic MaxSize){
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_9_new)
HXLINE(  12)		this->flashlightglow = ((Float)0.4);
HXLINE(   9)		super::__construct(MaxSize);
            	}

Dynamic PlayState_obj::__CreateEmpty() { return new PlayState_obj; }

void *PlayState_obj::_hx_vtable = 0;

Dynamic PlayState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PlayState_obj > _hx_result = new PlayState_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool PlayState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x0a05f89d) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0a05f89d;
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
	}
}

void PlayState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_af23706db05c7feb_14_create)
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


void PlayState_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_22_update)
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
HXLINE(  27)			 ::PlayState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  27)			_hx_tmp->flashlightglow = (_hx_tmp->flashlightglow + ((Float)0.1));
            		}
            		else {
HXLINE(  29)			 ::PlayState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  29)			_hx_tmp->flashlightglow = (_hx_tmp->flashlightglow - ((Float)0.1));
            		}
HXLINE(  31)		if ((this->flashlightglow > 1)) {
HXLINE(  32)			this->flashlightglow = ( (Float)(1) );
            		}
HXLINE(  34)		if ((this->flashlightglow < ((Float)0.1))) {
HXLINE(  35)			this->flashlightglow = ((Float)0.1);
            		}
HXLINE(  37)		this->testobjec->set_alpha(this->flashlightglow);
            	}



::hx::ObjectPtr< PlayState_obj > PlayState_obj::__new( ::Dynamic MaxSize) {
	::hx::ObjectPtr< PlayState_obj > __this = new PlayState_obj();
	__this->__construct(MaxSize);
	return __this;
}

::hx::ObjectPtr< PlayState_obj > PlayState_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic MaxSize) {
	PlayState_obj *__this = (PlayState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PlayState_obj), true, "PlayState"));
	*(void **)__this = PlayState_obj::_hx_vtable;
	__this->__construct(MaxSize);
	return __this;
}

PlayState_obj::PlayState_obj()
{
}

void PlayState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayState);
	HX_MARK_MEMBER_NAME(testobjec,"testobjec");
	HX_MARK_MEMBER_NAME(bg,"bg");
	HX_MARK_MEMBER_NAME(flashlightglow,"flashlightglow");
	 ::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlayState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(testobjec,"testobjec");
	HX_VISIT_MEMBER_NAME(bg,"bg");
	HX_VISIT_MEMBER_NAME(flashlightglow,"flashlightglow");
	 ::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val PlayState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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

::hx::Val PlayState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
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

void PlayState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("testobjec",83,e2,66,60));
	outFields->push(HX_("bg",c5,55,00,00));
	outFields->push(HX_("flashlightglow",b3,96,a3,bc));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PlayState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(PlayState_obj,testobjec),HX_("testobjec",83,e2,66,60)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(PlayState_obj,bg),HX_("bg",c5,55,00,00)},
	{::hx::fsFloat,(int)offsetof(PlayState_obj,flashlightglow),HX_("flashlightglow",b3,96,a3,bc)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *PlayState_obj_sStaticStorageInfo = 0;
#endif

static ::String PlayState_obj_sMemberFields[] = {
	HX_("testobjec",83,e2,66,60),
	HX_("bg",c5,55,00,00),
	HX_("flashlightglow",b3,96,a3,bc),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class PlayState_obj::__mClass;

void PlayState_obj::__register()
{
	PlayState_obj _hx_dummy;
	PlayState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("PlayState",5d,83,c2,46);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PlayState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PlayState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PlayState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PlayState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

