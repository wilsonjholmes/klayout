
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2016 Matthias Koefferlein

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

*/

/**
*  @file gsiDeclQPainterPath_Element.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QPainterPath>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QPainterPath::Element

//  Constructor QPainterPath::Element::Element()


static void _init_ctor_QPainterPath_Element_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QPainterPath::Element> ();
}

static void _call_ctor_QPainterPath_Element_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPainterPath::Element *> (new QPainterPath::Element ());
}


// bool QPainterPath::Element::isCurveTo()


static void _init_f_isCurveTo_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isCurveTo_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QPainterPath::Element *)cls)->isCurveTo ());
}


// bool QPainterPath::Element::isLineTo()


static void _init_f_isLineTo_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isLineTo_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QPainterPath::Element *)cls)->isLineTo ());
}


// bool QPainterPath::Element::isMoveTo()


static void _init_f_isMoveTo_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isMoveTo_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QPainterPath::Element *)cls)->isMoveTo ());
}


// bool QPainterPath::Element::operator!=(const QPainterPath::Element &e)


static void _init_f_operator_excl__eq__c3344 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("e");
  decl->add_arg<const QPainterPath::Element & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_excl__eq__c3344 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPainterPath::Element &arg1 = args.read<const QPainterPath::Element & > (heap);
  ret.write<bool > ((bool)((QPainterPath::Element *)cls)->operator!= (arg1));
}


// bool QPainterPath::Element::operator==(const QPainterPath::Element &e)


static void _init_f_operator_eq__eq__c3344 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("e");
  decl->add_arg<const QPainterPath::Element & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c3344 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPainterPath::Element &arg1 = args.read<const QPainterPath::Element & > (heap);
  ret.write<bool > ((bool)((QPainterPath::Element *)cls)->operator== (arg1));
}



namespace gsi
{

static gsi::Methods methods_QPainterPath_Element () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QPainterPath::Element::Element()\nThis method creates an object of class QPainterPath::Element.", &_init_ctor_QPainterPath_Element_0, &_call_ctor_QPainterPath_Element_0);
  methods += new qt_gsi::GenericMethod ("isCurveTo?", "@brief Method bool QPainterPath::Element::isCurveTo()\n", true, &_init_f_isCurveTo_c0, &_call_f_isCurveTo_c0);
  methods += new qt_gsi::GenericMethod ("isLineTo?", "@brief Method bool QPainterPath::Element::isLineTo()\n", true, &_init_f_isLineTo_c0, &_call_f_isLineTo_c0);
  methods += new qt_gsi::GenericMethod ("isMoveTo?", "@brief Method bool QPainterPath::Element::isMoveTo()\n", true, &_init_f_isMoveTo_c0, &_call_f_isMoveTo_c0);
  methods += new qt_gsi::GenericMethod ("!=", "@brief Method bool QPainterPath::Element::operator!=(const QPainterPath::Element &e)\n", true, &_init_f_operator_excl__eq__c3344, &_call_f_operator_excl__eq__c3344);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QPainterPath::Element::operator==(const QPainterPath::Element &e)\n", true, &_init_f_operator_eq__eq__c3344, &_call_f_operator_eq__eq__c3344);
  return methods;
}

gsi::Class<QPainterPath::Element> decl_QPainterPath_Element ("QPainterPath_Element",
  methods_QPainterPath_Element (),
  "@qt\n@brief Binding of QPainterPath::Element");

gsi::ClassExt<QPainterPath> decl_QPainterPath_Element_as_child (decl_QPainterPath_Element, "Element");

GSIQT_PUBLIC gsi::Class<QPainterPath::Element> &qtdecl_QPainterPath_Element () { return decl_QPainterPath_Element; }

}

