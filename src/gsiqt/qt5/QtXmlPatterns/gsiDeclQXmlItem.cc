
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2023 Matthias Koefferlein

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
*  @file gsiDeclQXmlItem.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QXmlItem>
#include <QXmlNodeModelIndex>
#include "gsiQt.h"
#include "gsiQtXmlPatternsCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QXmlItem

//  Constructor QXmlItem::QXmlItem()


static void _init_ctor_QXmlItem_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QXmlItem> ();
}

static void _call_ctor_QXmlItem_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QXmlItem *> (new QXmlItem ());
}


//  Constructor QXmlItem::QXmlItem(const QXmlItem &other)


static void _init_ctor_QXmlItem_2098 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QXmlItem & > (argspec_0);
  decl->set_return_new<QXmlItem> ();
}

static void _call_ctor_QXmlItem_2098 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlItem &arg1 = gsi::arg_reader<const QXmlItem & >() (args, heap);
  ret.write<QXmlItem *> (new QXmlItem (arg1));
}


//  Constructor QXmlItem::QXmlItem(const QXmlNodeModelIndex &node)


static void _init_ctor_QXmlItem_3090 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("node");
  decl->add_arg<const QXmlNodeModelIndex & > (argspec_0);
  decl->set_return_new<QXmlItem> ();
}

static void _call_ctor_QXmlItem_3090 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlNodeModelIndex &arg1 = gsi::arg_reader<const QXmlNodeModelIndex & >() (args, heap);
  ret.write<QXmlItem *> (new QXmlItem (arg1));
}


//  Constructor QXmlItem::QXmlItem(const QVariant &atomicValue)


static void _init_ctor_QXmlItem_2119 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("atomicValue");
  decl->add_arg<const QVariant & > (argspec_0);
  decl->set_return_new<QXmlItem> ();
}

static void _call_ctor_QXmlItem_2119 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QVariant &arg1 = gsi::arg_reader<const QVariant & >() (args, heap);
  ret.write<QXmlItem *> (new QXmlItem (arg1));
}


// bool QXmlItem::isAtomicValue()


static void _init_f_isAtomicValue_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isAtomicValue_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QXmlItem *)cls)->isAtomicValue ());
}


// bool QXmlItem::isNode()


static void _init_f_isNode_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isNode_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QXmlItem *)cls)->isNode ());
}


// bool QXmlItem::isNull()


static void _init_f_isNull_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isNull_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QXmlItem *)cls)->isNull ());
}


// QXmlItem &QXmlItem::operator=(const QXmlItem &other)


static void _init_f_operator_eq__2098 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QXmlItem & > (argspec_0);
  decl->set_return<QXmlItem & > ();
}

static void _call_f_operator_eq__2098 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlItem &arg1 = gsi::arg_reader<const QXmlItem & >() (args, heap);
  ret.write<QXmlItem & > ((QXmlItem &)((QXmlItem *)cls)->operator= (arg1));
}


// QVariant QXmlItem::toAtomicValue()


static void _init_f_toAtomicValue_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QVariant > ();
}

static void _call_f_toAtomicValue_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QVariant > ((QVariant)((QXmlItem *)cls)->toAtomicValue ());
}


// QXmlNodeModelIndex QXmlItem::toNodeModelIndex()


static void _init_f_toNodeModelIndex_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QXmlNodeModelIndex > ();
}

static void _call_f_toNodeModelIndex_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QXmlNodeModelIndex > ((QXmlNodeModelIndex)((QXmlItem *)cls)->toNodeModelIndex ());
}



namespace gsi
{

static gsi::Methods methods_QXmlItem () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QXmlItem::QXmlItem()\nThis method creates an object of class QXmlItem.", &_init_ctor_QXmlItem_0, &_call_ctor_QXmlItem_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QXmlItem::QXmlItem(const QXmlItem &other)\nThis method creates an object of class QXmlItem.", &_init_ctor_QXmlItem_2098, &_call_ctor_QXmlItem_2098);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QXmlItem::QXmlItem(const QXmlNodeModelIndex &node)\nThis method creates an object of class QXmlItem.", &_init_ctor_QXmlItem_3090, &_call_ctor_QXmlItem_3090);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QXmlItem::QXmlItem(const QVariant &atomicValue)\nThis method creates an object of class QXmlItem.", &_init_ctor_QXmlItem_2119, &_call_ctor_QXmlItem_2119);
  methods += new qt_gsi::GenericMethod ("isAtomicValue?", "@brief Method bool QXmlItem::isAtomicValue()\n", true, &_init_f_isAtomicValue_c0, &_call_f_isAtomicValue_c0);
  methods += new qt_gsi::GenericMethod ("isNode?", "@brief Method bool QXmlItem::isNode()\n", true, &_init_f_isNode_c0, &_call_f_isNode_c0);
  methods += new qt_gsi::GenericMethod ("isNull?", "@brief Method bool QXmlItem::isNull()\n", true, &_init_f_isNull_c0, &_call_f_isNull_c0);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QXmlItem &QXmlItem::operator=(const QXmlItem &other)\n", false, &_init_f_operator_eq__2098, &_call_f_operator_eq__2098);
  methods += new qt_gsi::GenericMethod ("toAtomicValue", "@brief Method QVariant QXmlItem::toAtomicValue()\n", true, &_init_f_toAtomicValue_c0, &_call_f_toAtomicValue_c0);
  methods += new qt_gsi::GenericMethod ("toNodeModelIndex", "@brief Method QXmlNodeModelIndex QXmlItem::toNodeModelIndex()\n", true, &_init_f_toNodeModelIndex_c0, &_call_f_toNodeModelIndex_c0);
  return methods;
}

gsi::Class<QXmlItem> decl_QXmlItem ("QtXmlPatterns", "QXmlItem",
  methods_QXmlItem (),
  "@qt\n@brief Binding of QXmlItem");


GSI_QTXMLPATTERNS_PUBLIC gsi::Class<QXmlItem> &qtdecl_QXmlItem () { return decl_QXmlItem; }

}

