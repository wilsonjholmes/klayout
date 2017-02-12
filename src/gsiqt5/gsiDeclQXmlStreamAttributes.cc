
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
*  @file gsiDeclQXmlStreamAttributes.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QXmlStreamAttributes>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QXmlStreamAttributes

//  Constructor QXmlStreamAttributes::QXmlStreamAttributes()


static void _init_ctor_QXmlStreamAttributes_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QXmlStreamAttributes> ();
}

static void _call_ctor_QXmlStreamAttributes_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QXmlStreamAttributes *> (new QXmlStreamAttributes ());
}


// void QXmlStreamAttributes::append(const QString &namespaceUri, const QString &name, const QString &value)


static void _init_f_append_5859 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("namespaceUri");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("name");
  decl->add_arg<const QString & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("value");
  decl->add_arg<const QString & > (argspec_2);
  decl->set_return<void > ();
}

static void _call_f_append_5859 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  const QString &arg2 = args.read<const QString & > (heap);
  const QString &arg3 = args.read<const QString & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlStreamAttributes *)cls)->append (arg1, arg2, arg3);
}


// void QXmlStreamAttributes::append(const QString &qualifiedName, const QString &value)


static void _init_f_append_3942 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("qualifiedName");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("value");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_append_3942 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  const QString &arg2 = args.read<const QString & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlStreamAttributes *)cls)->append (arg1, arg2);
}


// bool QXmlStreamAttributes::hasAttribute(const QString &qualifiedName)


static void _init_f_hasAttribute_c2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("qualifiedName");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_hasAttribute_c2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  ret.write<bool > ((bool)((QXmlStreamAttributes *)cls)->hasAttribute (arg1));
}


// bool QXmlStreamAttributes::hasAttribute(const QString &namespaceUri, const QString &name)


static void _init_f_hasAttribute_c3942 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("namespaceUri");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("name");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_f_hasAttribute_c3942 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  const QString &arg2 = args.read<const QString & > (heap);
  ret.write<bool > ((bool)((QXmlStreamAttributes *)cls)->hasAttribute (arg1, arg2));
}


// QStringRef QXmlStreamAttributes::value(const QString &namespaceUri, const QString &name)


static void _init_f_value_c3942 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("namespaceUri");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("name");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<QStringRef > ();
}

static void _call_f_value_c3942 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  const QString &arg2 = args.read<const QString & > (heap);
  ret.write<QStringRef > ((QStringRef)((QXmlStreamAttributes *)cls)->value (arg1, arg2));
}


// QStringRef QXmlStreamAttributes::value(const QString &qualifiedName)


static void _init_f_value_c2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("qualifiedName");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QStringRef > ();
}

static void _call_f_value_c2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  ret.write<QStringRef > ((QStringRef)((QXmlStreamAttributes *)cls)->value (arg1));
}



namespace gsi
{

static gsi::Methods methods_QXmlStreamAttributes () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QXmlStreamAttributes::QXmlStreamAttributes()\nThis method creates an object of class QXmlStreamAttributes.", &_init_ctor_QXmlStreamAttributes_0, &_call_ctor_QXmlStreamAttributes_0);
  methods += new qt_gsi::GenericMethod ("append", "@brief Method void QXmlStreamAttributes::append(const QString &namespaceUri, const QString &name, const QString &value)\n", false, &_init_f_append_5859, &_call_f_append_5859);
  methods += new qt_gsi::GenericMethod ("append", "@brief Method void QXmlStreamAttributes::append(const QString &qualifiedName, const QString &value)\n", false, &_init_f_append_3942, &_call_f_append_3942);
  methods += new qt_gsi::GenericMethod ("hasAttribute", "@brief Method bool QXmlStreamAttributes::hasAttribute(const QString &qualifiedName)\n", true, &_init_f_hasAttribute_c2025, &_call_f_hasAttribute_c2025);
  methods += new qt_gsi::GenericMethod ("hasAttribute", "@brief Method bool QXmlStreamAttributes::hasAttribute(const QString &namespaceUri, const QString &name)\n", true, &_init_f_hasAttribute_c3942, &_call_f_hasAttribute_c3942);
  methods += new qt_gsi::GenericMethod ("value", "@brief Method QStringRef QXmlStreamAttributes::value(const QString &namespaceUri, const QString &name)\n", true, &_init_f_value_c3942, &_call_f_value_c3942);
  methods += new qt_gsi::GenericMethod ("value", "@brief Method QStringRef QXmlStreamAttributes::value(const QString &qualifiedName)\n", true, &_init_f_value_c2025, &_call_f_value_c2025);
  return methods;
}

gsi::Class<QXmlStreamAttributes> decl_QXmlStreamAttributes ("QXmlStreamAttributes",
  methods_QXmlStreamAttributes (),
  "@qt\n@brief Binding of QXmlStreamAttributes");


GSIQT_PUBLIC gsi::Class<QXmlStreamAttributes> &qtdecl_QXmlStreamAttributes () { return decl_QXmlStreamAttributes; }

}

