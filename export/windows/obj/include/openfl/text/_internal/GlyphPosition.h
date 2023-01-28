#ifndef INCLUDED_openfl_text__internal_GlyphPosition
#define INCLUDED_openfl_text__internal_GlyphPosition

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,math,Vector2)
HX_DECLARE_CLASS3(openfl,text,_internal,GlyphPosition)

namespace openfl{
namespace text{
namespace _internal{


class HXCPP_CLASS_ATTRIBUTES GlyphPosition_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef GlyphPosition_obj OBJ_;
		GlyphPosition_obj();

	public:
		enum { _hx_ClassId = 0x0c254936 };

		void __construct(int glyph, ::lime::math::Vector2 advance, ::lime::math::Vector2 offset);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.text._internal.GlyphPosition")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.text._internal.GlyphPosition"); }
		static ::hx::ObjectPtr< GlyphPosition_obj > __new(int glyph, ::lime::math::Vector2 advance, ::lime::math::Vector2 offset);
		static ::hx::ObjectPtr< GlyphPosition_obj > __alloc(::hx::Ctx *_hx_ctx,int glyph, ::lime::math::Vector2 advance, ::lime::math::Vector2 offset);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GlyphPosition_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GlyphPosition",55,36,99,75); }

		static void __boot();
		static  ::Dynamic __meta__;
		 ::lime::math::Vector2 advance;
		int glyph;
		 ::lime::math::Vector2 offset;
};

} // end namespace openfl
} // end namespace text
} // end namespace _internal

#endif /* INCLUDED_openfl_text__internal_GlyphPosition */ 
