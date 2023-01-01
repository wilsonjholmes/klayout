
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
*  @file gsiDeclQDomCharacterData.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QDomCharacterData>
#include <QDomAttr>
#include <QDomCDATASection>
#include <QDomComment>
#include <QDomDocument>
#include <QDomDocumentFragment>
#include <QDomDocumentType>
#include <QDomElement>
#include <QDomEntity>
#include <QDomEntityReference>
#include <QDomNamedNodeMap>
#include <QDomNode>
#include <QDomNodeList>
#include <QDomNotation>
#include <QDomProcessingInstruction>
#include <QDomText>
#include <QTextStream>
#include "gsiQt.h"
#include "gsiQtXmlCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QDomCharacterData

//  Constructor QDomCharacterData::QDomCharacterData()


static void _init_ctor_QDomCharacterData_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QDomCharacterData> ();
}

static void _call_ctor_QDomCharacterData_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QDomCharacterData *> (new QDomCharacterData ());
}


//  Constructor QDomCharacterData::QDomCharacterData(const QDomCharacterData &x)


static void _init_ctor_QDomCharacterData_2969 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("x");
  decl->add_arg<const QDomCharacterData & > (argspec_0);
  decl->set_return_new<QDomCharacterData> ();
}

static void _call_ctor_QDomCharacterData_2969 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDomCharacterData &arg1 = gsi::arg_reader<const QDomCharacterData & >() (args, heap);
  ret.write<QDomCharacterData *> (new QDomCharacterData (arg1));
}


// void QDomCharacterData::appendData(const QString &arg)


static void _init_f_appendData_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_appendData_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QDomCharacterData *)cls)->appendData (arg1);
}


// QString QDomCharacterData::data()


static void _init_f_data_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_data_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QDomCharacterData *)cls)->data ());
}


// void QDomCharacterData::deleteData(unsigned long int offset, unsigned long int count)


static void _init_f_deleteData_4588 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("offset");
  decl->add_arg<unsigned long int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("count");
  decl->add_arg<unsigned long int > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_deleteData_4588 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  unsigned long int arg1 = gsi::arg_reader<unsigned long int >() (args, heap);
  unsigned long int arg2 = gsi::arg_reader<unsigned long int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QDomCharacterData *)cls)->deleteData (arg1, arg2);
}


// void QDomCharacterData::insertData(unsigned long int offset, const QString &arg)


static void _init_f_insertData_4265 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("offset");
  decl->add_arg<unsigned long int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("arg");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_insertData_4265 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  unsigned long int arg1 = gsi::arg_reader<unsigned long int >() (args, heap);
  const QString &arg2 = gsi::arg_reader<const QString & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QDomCharacterData *)cls)->insertData (arg1, arg2);
}


// unsigned int QDomCharacterData::length()


static void _init_f_length_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<unsigned int > ();
}

static void _call_f_length_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<unsigned int > ((unsigned int)((QDomCharacterData *)cls)->length ());
}


// QDomNode::NodeType QDomCharacterData::nodeType()


static void _init_f_nodeType_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QDomNode::NodeType>::target_type > ();
}

static void _call_f_nodeType_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QDomNode::NodeType>::target_type > ((qt_gsi::Converter<QDomNode::NodeType>::target_type)qt_gsi::CppToQtAdaptor<QDomNode::NodeType>(((QDomCharacterData *)cls)->nodeType ()));
}


// QDomCharacterData &QDomCharacterData::operator=(const QDomCharacterData &)


static void _init_f_operator_eq__2969 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QDomCharacterData & > (argspec_0);
  decl->set_return<QDomCharacterData & > ();
}

static void _call_f_operator_eq__2969 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDomCharacterData &arg1 = gsi::arg_reader<const QDomCharacterData & >() (args, heap);
  ret.write<QDomCharacterData & > ((QDomCharacterData &)((QDomCharacterData *)cls)->operator= (arg1));
}


// void QDomCharacterData::replaceData(unsigned long int offset, unsigned long int count, const QString &arg)


static void _init_f_replaceData_6505 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("offset");
  decl->add_arg<unsigned long int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("count");
  decl->add_arg<unsigned long int > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("arg");
  decl->add_arg<const QString & > (argspec_2);
  decl->set_return<void > ();
}

static void _call_f_replaceData_6505 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  unsigned long int arg1 = gsi::arg_reader<unsigned long int >() (args, heap);
  unsigned long int arg2 = gsi::arg_reader<unsigned long int >() (args, heap);
  const QString &arg3 = gsi::arg_reader<const QString & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QDomCharacterData *)cls)->replaceData (arg1, arg2, arg3);
}


// void QDomCharacterData::setData(const QString &)


static void _init_f_setData_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setData_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QDomCharacterData *)cls)->setData (arg1);
}


// QString QDomCharacterData::substringData(unsigned long int offset, unsigned long int count)


static void _init_f_substringData_4588 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("offset");
  decl->add_arg<unsigned long int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("count");
  decl->add_arg<unsigned long int > (argspec_1);
  decl->set_return<QString > ();
}

static void _call_f_substringData_4588 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  unsigned long int arg1 = gsi::arg_reader<unsigned long int >() (args, heap);
  unsigned long int arg2 = gsi::arg_reader<unsigned long int >() (args, heap);
  ret.write<QString > ((QString)((QDomCharacterData *)cls)->substringData (arg1, arg2));
}



namespace gsi
{

static gsi::Methods methods_QDomCharacterData () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QDomCharacterData::QDomCharacterData()\nThis method creates an object of class QDomCharacterData.", &_init_ctor_QDomCharacterData_0, &_call_ctor_QDomCharacterData_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QDomCharacterData::QDomCharacterData(const QDomCharacterData &x)\nThis method creates an object of class QDomCharacterData.", &_init_ctor_QDomCharacterData_2969, &_call_ctor_QDomCharacterData_2969);
  methods += new qt_gsi::GenericMethod ("appendData", "@brief Method void QDomCharacterData::appendData(const QString &arg)\n", false, &_init_f_appendData_2025, &_call_f_appendData_2025);
  methods += new qt_gsi::GenericMethod (":data", "@brief Method QString QDomCharacterData::data()\n", true, &_init_f_data_c0, &_call_f_data_c0);
  methods += new qt_gsi::GenericMethod ("deleteData", "@brief Method void QDomCharacterData::deleteData(unsigned long int offset, unsigned long int count)\n", false, &_init_f_deleteData_4588, &_call_f_deleteData_4588);
  methods += new qt_gsi::GenericMethod ("insertData", "@brief Method void QDomCharacterData::insertData(unsigned long int offset, const QString &arg)\n", false, &_init_f_insertData_4265, &_call_f_insertData_4265);
  methods += new qt_gsi::GenericMethod ("length", "@brief Method unsigned int QDomCharacterData::length()\n", true, &_init_f_length_c0, &_call_f_length_c0);
  methods += new qt_gsi::GenericMethod ("nodeType", "@brief Method QDomNode::NodeType QDomCharacterData::nodeType()\n", true, &_init_f_nodeType_c0, &_call_f_nodeType_c0);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QDomCharacterData &QDomCharacterData::operator=(const QDomCharacterData &)\n", false, &_init_f_operator_eq__2969, &_call_f_operator_eq__2969);
  methods += new qt_gsi::GenericMethod ("replaceData", "@brief Method void QDomCharacterData::replaceData(unsigned long int offset, unsigned long int count, const QString &arg)\n", false, &_init_f_replaceData_6505, &_call_f_replaceData_6505);
  methods += new qt_gsi::GenericMethod ("setData|data=", "@brief Method void QDomCharacterData::setData(const QString &)\n", false, &_init_f_setData_2025, &_call_f_setData_2025);
  methods += new qt_gsi::GenericMethod ("substringData", "@brief Method QString QDomCharacterData::substringData(unsigned long int offset, unsigned long int count)\n", false, &_init_f_substringData_4588, &_call_f_substringData_4588);
  return methods;
}

gsi::Class<QDomNode> &qtdecl_QDomNode ();

gsi::Class<QDomCharacterData> decl_QDomCharacterData (qtdecl_QDomNode (), "QtXml", "QDomCharacterData",
  methods_QDomCharacterData (),
  "@qt\n@brief Binding of QDomCharacterData");


GSI_QTXML_PUBLIC gsi::Class<QDomCharacterData> &qtdecl_QDomCharacterData () { return decl_QDomCharacterData; }

}

