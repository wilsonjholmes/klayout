
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
*  @file gsiDeclQSourceLocation.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QSourceLocation>
#include <QUrl>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QSourceLocation

//  Constructor QSourceLocation::QSourceLocation()


static void _init_ctor_QSourceLocation_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QSourceLocation> ();
}

static void _call_ctor_QSourceLocation_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSourceLocation *> (new QSourceLocation ());
}


//  Constructor QSourceLocation::QSourceLocation(const QSourceLocation &other)


static void _init_ctor_QSourceLocation_2844 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QSourceLocation & > (argspec_0);
  decl->set_return_new<QSourceLocation> ();
}

static void _call_ctor_QSourceLocation_2844 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QSourceLocation &arg1 = args.read<const QSourceLocation & > (heap);
  ret.write<QSourceLocation *> (new QSourceLocation (arg1));
}


//  Constructor QSourceLocation::QSourceLocation(const QUrl &uri, int line, int column)


static void _init_ctor_QSourceLocation_3019 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("uri");
  decl->add_arg<const QUrl & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("line", true, "-1");
  decl->add_arg<int > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("column", true, "-1");
  decl->add_arg<int > (argspec_2);
  decl->set_return_new<QSourceLocation> ();
}

static void _call_ctor_QSourceLocation_3019 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QUrl &arg1 = args.read<const QUrl & > (heap);
  int arg2 = args ? args.read<int > (heap) : (int)(-1);
  int arg3 = args ? args.read<int > (heap) : (int)(-1);
  ret.write<QSourceLocation *> (new QSourceLocation (arg1, arg2, arg3));
}


// qint64 QSourceLocation::column()


static void _init_f_column_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qint64 > ();
}

static void _call_f_column_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qint64 > ((qint64)((QSourceLocation *)cls)->column ());
}


// bool QSourceLocation::isNull()


static void _init_f_isNull_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isNull_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QSourceLocation *)cls)->isNull ());
}


// qint64 QSourceLocation::line()


static void _init_f_line_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qint64 > ();
}

static void _call_f_line_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qint64 > ((qint64)((QSourceLocation *)cls)->line ());
}


// bool QSourceLocation::operator!=(const QSourceLocation &other)


static void _init_f_operator_excl__eq__c2844 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QSourceLocation & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_excl__eq__c2844 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QSourceLocation &arg1 = args.read<const QSourceLocation & > (heap);
  ret.write<bool > ((bool)((QSourceLocation *)cls)->operator!= (arg1));
}


// QSourceLocation &QSourceLocation::operator=(const QSourceLocation &other)


static void _init_f_operator_eq__2844 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QSourceLocation & > (argspec_0);
  decl->set_return<QSourceLocation & > ();
}

static void _call_f_operator_eq__2844 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QSourceLocation &arg1 = args.read<const QSourceLocation & > (heap);
  ret.write<QSourceLocation & > ((QSourceLocation &)((QSourceLocation *)cls)->operator= (arg1));
}


// bool QSourceLocation::operator==(const QSourceLocation &other)


static void _init_f_operator_eq__eq__c2844 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QSourceLocation & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c2844 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QSourceLocation &arg1 = args.read<const QSourceLocation & > (heap);
  ret.write<bool > ((bool)((QSourceLocation *)cls)->operator== (arg1));
}


// void QSourceLocation::setColumn(qint64 newColumn)


static void _init_f_setColumn_986 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("newColumn");
  decl->add_arg<qint64 > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setColumn_986 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  qint64 arg1 = args.read<qint64 > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSourceLocation *)cls)->setColumn (arg1);
}


// void QSourceLocation::setLine(qint64 newLine)


static void _init_f_setLine_986 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("newLine");
  decl->add_arg<qint64 > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setLine_986 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  qint64 arg1 = args.read<qint64 > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSourceLocation *)cls)->setLine (arg1);
}


// void QSourceLocation::setUri(const QUrl &newUri)


static void _init_f_setUri_1701 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("newUri");
  decl->add_arg<const QUrl & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setUri_1701 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QUrl &arg1 = args.read<const QUrl & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSourceLocation *)cls)->setUri (arg1);
}


// QUrl QSourceLocation::uri()


static void _init_f_uri_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QUrl > ();
}

static void _call_f_uri_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QUrl > ((QUrl)((QSourceLocation *)cls)->uri ());
}



namespace gsi
{

static gsi::Methods methods_QSourceLocation () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QSourceLocation::QSourceLocation()\nThis method creates an object of class QSourceLocation.", &_init_ctor_QSourceLocation_0, &_call_ctor_QSourceLocation_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QSourceLocation::QSourceLocation(const QSourceLocation &other)\nThis method creates an object of class QSourceLocation.", &_init_ctor_QSourceLocation_2844, &_call_ctor_QSourceLocation_2844);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QSourceLocation::QSourceLocation(const QUrl &uri, int line, int column)\nThis method creates an object of class QSourceLocation.", &_init_ctor_QSourceLocation_3019, &_call_ctor_QSourceLocation_3019);
  methods += new qt_gsi::GenericMethod (":column", "@brief Method qint64 QSourceLocation::column()\n", true, &_init_f_column_c0, &_call_f_column_c0);
  methods += new qt_gsi::GenericMethod ("isNull?", "@brief Method bool QSourceLocation::isNull()\n", true, &_init_f_isNull_c0, &_call_f_isNull_c0);
  methods += new qt_gsi::GenericMethod (":line", "@brief Method qint64 QSourceLocation::line()\n", true, &_init_f_line_c0, &_call_f_line_c0);
  methods += new qt_gsi::GenericMethod ("!=", "@brief Method bool QSourceLocation::operator!=(const QSourceLocation &other)\n", true, &_init_f_operator_excl__eq__c2844, &_call_f_operator_excl__eq__c2844);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QSourceLocation &QSourceLocation::operator=(const QSourceLocation &other)\n", false, &_init_f_operator_eq__2844, &_call_f_operator_eq__2844);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QSourceLocation::operator==(const QSourceLocation &other)\n", true, &_init_f_operator_eq__eq__c2844, &_call_f_operator_eq__eq__c2844);
  methods += new qt_gsi::GenericMethod ("setColumn|column=", "@brief Method void QSourceLocation::setColumn(qint64 newColumn)\n", false, &_init_f_setColumn_986, &_call_f_setColumn_986);
  methods += new qt_gsi::GenericMethod ("setLine|line=", "@brief Method void QSourceLocation::setLine(qint64 newLine)\n", false, &_init_f_setLine_986, &_call_f_setLine_986);
  methods += new qt_gsi::GenericMethod ("setUri|uri=", "@brief Method void QSourceLocation::setUri(const QUrl &newUri)\n", false, &_init_f_setUri_1701, &_call_f_setUri_1701);
  methods += new qt_gsi::GenericMethod (":uri", "@brief Method QUrl QSourceLocation::uri()\n", true, &_init_f_uri_c0, &_call_f_uri_c0);
  return methods;
}

gsi::Class<QSourceLocation> decl_QSourceLocation ("QSourceLocation",
  methods_QSourceLocation (),
  "@qt\n@brief Binding of QSourceLocation");


GSIQT_PUBLIC gsi::Class<QSourceLocation> &qtdecl_QSourceLocation () { return decl_QSourceLocation; }

}

