
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2021 Matthias Koefferlein

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
*  @file gsiDeclQXmlDeclHandler.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QXmlDeclHandler>
#include "gsiQt.h"
#include "gsiQtXmlCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QXmlDeclHandler

// bool QXmlDeclHandler::attributeDecl(const QString &eName, const QString &aName, const QString &type, const QString &valueDefault, const QString &value)


static void _init_f_attributeDecl_9693 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("eName");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("aName");
  decl->add_arg<const QString & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("type");
  decl->add_arg<const QString & > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("valueDefault");
  decl->add_arg<const QString & > (argspec_3);
  static gsi::ArgSpecBase argspec_4 ("value");
  decl->add_arg<const QString & > (argspec_4);
  decl->set_return<bool > ();
}

static void _call_f_attributeDecl_9693 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  const QString &arg2 = gsi::arg_reader<const QString & >() (args, heap);
  const QString &arg3 = gsi::arg_reader<const QString & >() (args, heap);
  const QString &arg4 = gsi::arg_reader<const QString & >() (args, heap);
  const QString &arg5 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<bool > ((bool)((QXmlDeclHandler *)cls)->attributeDecl (arg1, arg2, arg3, arg4, arg5));
}


// QString QXmlDeclHandler::errorString()


static void _init_f_errorString_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_errorString_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QXmlDeclHandler *)cls)->errorString ());
}


// bool QXmlDeclHandler::externalEntityDecl(const QString &name, const QString &publicId, const QString &systemId)


static void _init_f_externalEntityDecl_5859 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("publicId");
  decl->add_arg<const QString & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("systemId");
  decl->add_arg<const QString & > (argspec_2);
  decl->set_return<bool > ();
}

static void _call_f_externalEntityDecl_5859 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  const QString &arg2 = gsi::arg_reader<const QString & >() (args, heap);
  const QString &arg3 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<bool > ((bool)((QXmlDeclHandler *)cls)->externalEntityDecl (arg1, arg2, arg3));
}


// bool QXmlDeclHandler::internalEntityDecl(const QString &name, const QString &value)


static void _init_f_internalEntityDecl_3942 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("value");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_f_internalEntityDecl_3942 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  const QString &arg2 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<bool > ((bool)((QXmlDeclHandler *)cls)->internalEntityDecl (arg1, arg2));
}


namespace gsi
{

static gsi::Methods methods_QXmlDeclHandler () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("attributeDecl", "@brief Method bool QXmlDeclHandler::attributeDecl(const QString &eName, const QString &aName, const QString &type, const QString &valueDefault, const QString &value)\n", false, &_init_f_attributeDecl_9693, &_call_f_attributeDecl_9693);
  methods += new qt_gsi::GenericMethod ("errorString", "@brief Method QString QXmlDeclHandler::errorString()\n", true, &_init_f_errorString_c0, &_call_f_errorString_c0);
  methods += new qt_gsi::GenericMethod ("externalEntityDecl", "@brief Method bool QXmlDeclHandler::externalEntityDecl(const QString &name, const QString &publicId, const QString &systemId)\n", false, &_init_f_externalEntityDecl_5859, &_call_f_externalEntityDecl_5859);
  methods += new qt_gsi::GenericMethod ("internalEntityDecl", "@brief Method bool QXmlDeclHandler::internalEntityDecl(const QString &name, const QString &value)\n", false, &_init_f_internalEntityDecl_3942, &_call_f_internalEntityDecl_3942);
  return methods;
}

gsi::Class<QXmlDeclHandler> decl_QXmlDeclHandler ("QtXml", "QXmlDeclHandler_Native",
  methods_QXmlDeclHandler (),
  "@hide\n@alias QXmlDeclHandler");

GSI_QTXML_PUBLIC gsi::Class<QXmlDeclHandler> &qtdecl_QXmlDeclHandler () { return decl_QXmlDeclHandler; }

}


class QXmlDeclHandler_Adaptor : public QXmlDeclHandler, public qt_gsi::QtObjectBase
{
public:

  virtual ~QXmlDeclHandler_Adaptor();

  //  [adaptor ctor] QXmlDeclHandler::QXmlDeclHandler()
  QXmlDeclHandler_Adaptor() : QXmlDeclHandler()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor impl] bool QXmlDeclHandler::attributeDecl(const QString &eName, const QString &aName, const QString &type, const QString &valueDefault, const QString &value)
  bool cbs_attributeDecl_9693_0(const QString &eName, const QString &aName, const QString &type, const QString &valueDefault, const QString &value)
  {
    __SUPPRESS_UNUSED_WARNING (eName);
    __SUPPRESS_UNUSED_WARNING (aName);
    __SUPPRESS_UNUSED_WARNING (type);
    __SUPPRESS_UNUSED_WARNING (valueDefault);
    __SUPPRESS_UNUSED_WARNING (value);
    throw qt_gsi::AbstractMethodCalledException("attributeDecl");
  }

  virtual bool attributeDecl(const QString &eName, const QString &aName, const QString &type, const QString &valueDefault, const QString &value)
  {
    if (cb_attributeDecl_9693_0.can_issue()) {
      return cb_attributeDecl_9693_0.issue<QXmlDeclHandler_Adaptor, bool, const QString &, const QString &, const QString &, const QString &, const QString &>(&QXmlDeclHandler_Adaptor::cbs_attributeDecl_9693_0, eName, aName, type, valueDefault, value);
    } else {
      throw qt_gsi::AbstractMethodCalledException("attributeDecl");
    }
  }

  //  [adaptor impl] QString QXmlDeclHandler::errorString()
  QString cbs_errorString_c0_0() const
  {
    throw qt_gsi::AbstractMethodCalledException("errorString");
  }

  virtual QString errorString() const
  {
    if (cb_errorString_c0_0.can_issue()) {
      return cb_errorString_c0_0.issue<QXmlDeclHandler_Adaptor, QString>(&QXmlDeclHandler_Adaptor::cbs_errorString_c0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("errorString");
    }
  }

  //  [adaptor impl] bool QXmlDeclHandler::externalEntityDecl(const QString &name, const QString &publicId, const QString &systemId)
  bool cbs_externalEntityDecl_5859_0(const QString &name, const QString &publicId, const QString &systemId)
  {
    __SUPPRESS_UNUSED_WARNING (name);
    __SUPPRESS_UNUSED_WARNING (publicId);
    __SUPPRESS_UNUSED_WARNING (systemId);
    throw qt_gsi::AbstractMethodCalledException("externalEntityDecl");
  }

  virtual bool externalEntityDecl(const QString &name, const QString &publicId, const QString &systemId)
  {
    if (cb_externalEntityDecl_5859_0.can_issue()) {
      return cb_externalEntityDecl_5859_0.issue<QXmlDeclHandler_Adaptor, bool, const QString &, const QString &, const QString &>(&QXmlDeclHandler_Adaptor::cbs_externalEntityDecl_5859_0, name, publicId, systemId);
    } else {
      throw qt_gsi::AbstractMethodCalledException("externalEntityDecl");
    }
  }

  //  [adaptor impl] bool QXmlDeclHandler::internalEntityDecl(const QString &name, const QString &value)
  bool cbs_internalEntityDecl_3942_0(const QString &name, const QString &value)
  {
    __SUPPRESS_UNUSED_WARNING (name);
    __SUPPRESS_UNUSED_WARNING (value);
    throw qt_gsi::AbstractMethodCalledException("internalEntityDecl");
  }

  virtual bool internalEntityDecl(const QString &name, const QString &value)
  {
    if (cb_internalEntityDecl_3942_0.can_issue()) {
      return cb_internalEntityDecl_3942_0.issue<QXmlDeclHandler_Adaptor, bool, const QString &, const QString &>(&QXmlDeclHandler_Adaptor::cbs_internalEntityDecl_3942_0, name, value);
    } else {
      throw qt_gsi::AbstractMethodCalledException("internalEntityDecl");
    }
  }

  gsi::Callback cb_attributeDecl_9693_0;
  gsi::Callback cb_errorString_c0_0;
  gsi::Callback cb_externalEntityDecl_5859_0;
  gsi::Callback cb_internalEntityDecl_3942_0;
};

QXmlDeclHandler_Adaptor::~QXmlDeclHandler_Adaptor() { }

//  Constructor QXmlDeclHandler::QXmlDeclHandler() (adaptor class)

static void _init_ctor_QXmlDeclHandler_Adaptor_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QXmlDeclHandler_Adaptor> ();
}

static void _call_ctor_QXmlDeclHandler_Adaptor_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QXmlDeclHandler_Adaptor *> (new QXmlDeclHandler_Adaptor ());
}


// bool QXmlDeclHandler::attributeDecl(const QString &eName, const QString &aName, const QString &type, const QString &valueDefault, const QString &value)

static void _init_cbs_attributeDecl_9693_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("eName");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("aName");
  decl->add_arg<const QString & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("type");
  decl->add_arg<const QString & > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("valueDefault");
  decl->add_arg<const QString & > (argspec_3);
  static gsi::ArgSpecBase argspec_4 ("value");
  decl->add_arg<const QString & > (argspec_4);
  decl->set_return<bool > ();
}

static void _call_cbs_attributeDecl_9693_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  const QString &arg2 = args.read<const QString & > (heap);
  const QString &arg3 = args.read<const QString & > (heap);
  const QString &arg4 = args.read<const QString & > (heap);
  const QString &arg5 = args.read<const QString & > (heap);
  ret.write<bool > ((bool)((QXmlDeclHandler_Adaptor *)cls)->cbs_attributeDecl_9693_0 (arg1, arg2, arg3, arg4, arg5));
}

static void _set_callback_cbs_attributeDecl_9693_0 (void *cls, const gsi::Callback &cb)
{
  ((QXmlDeclHandler_Adaptor *)cls)->cb_attributeDecl_9693_0 = cb;
}


// QString QXmlDeclHandler::errorString()

static void _init_cbs_errorString_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_cbs_errorString_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QXmlDeclHandler_Adaptor *)cls)->cbs_errorString_c0_0 ());
}

static void _set_callback_cbs_errorString_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QXmlDeclHandler_Adaptor *)cls)->cb_errorString_c0_0 = cb;
}


// bool QXmlDeclHandler::externalEntityDecl(const QString &name, const QString &publicId, const QString &systemId)

static void _init_cbs_externalEntityDecl_5859_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("publicId");
  decl->add_arg<const QString & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("systemId");
  decl->add_arg<const QString & > (argspec_2);
  decl->set_return<bool > ();
}

static void _call_cbs_externalEntityDecl_5859_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  const QString &arg2 = args.read<const QString & > (heap);
  const QString &arg3 = args.read<const QString & > (heap);
  ret.write<bool > ((bool)((QXmlDeclHandler_Adaptor *)cls)->cbs_externalEntityDecl_5859_0 (arg1, arg2, arg3));
}

static void _set_callback_cbs_externalEntityDecl_5859_0 (void *cls, const gsi::Callback &cb)
{
  ((QXmlDeclHandler_Adaptor *)cls)->cb_externalEntityDecl_5859_0 = cb;
}


// bool QXmlDeclHandler::internalEntityDecl(const QString &name, const QString &value)

static void _init_cbs_internalEntityDecl_3942_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("value");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_cbs_internalEntityDecl_3942_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  const QString &arg2 = args.read<const QString & > (heap);
  ret.write<bool > ((bool)((QXmlDeclHandler_Adaptor *)cls)->cbs_internalEntityDecl_3942_0 (arg1, arg2));
}

static void _set_callback_cbs_internalEntityDecl_3942_0 (void *cls, const gsi::Callback &cb)
{
  ((QXmlDeclHandler_Adaptor *)cls)->cb_internalEntityDecl_3942_0 = cb;
}


namespace gsi
{

gsi::Class<QXmlDeclHandler> &qtdecl_QXmlDeclHandler ();

static gsi::Methods methods_QXmlDeclHandler_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QXmlDeclHandler::QXmlDeclHandler()\nThis method creates an object of class QXmlDeclHandler.", &_init_ctor_QXmlDeclHandler_Adaptor_0, &_call_ctor_QXmlDeclHandler_Adaptor_0);
  methods += new qt_gsi::GenericMethod ("attributeDecl", "@brief Virtual method bool QXmlDeclHandler::attributeDecl(const QString &eName, const QString &aName, const QString &type, const QString &valueDefault, const QString &value)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_attributeDecl_9693_0, &_call_cbs_attributeDecl_9693_0);
  methods += new qt_gsi::GenericMethod ("attributeDecl", "@hide", false, &_init_cbs_attributeDecl_9693_0, &_call_cbs_attributeDecl_9693_0, &_set_callback_cbs_attributeDecl_9693_0);
  methods += new qt_gsi::GenericMethod ("errorString", "@brief Virtual method QString QXmlDeclHandler::errorString()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_errorString_c0_0, &_call_cbs_errorString_c0_0);
  methods += new qt_gsi::GenericMethod ("errorString", "@hide", true, &_init_cbs_errorString_c0_0, &_call_cbs_errorString_c0_0, &_set_callback_cbs_errorString_c0_0);
  methods += new qt_gsi::GenericMethod ("externalEntityDecl", "@brief Virtual method bool QXmlDeclHandler::externalEntityDecl(const QString &name, const QString &publicId, const QString &systemId)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_externalEntityDecl_5859_0, &_call_cbs_externalEntityDecl_5859_0);
  methods += new qt_gsi::GenericMethod ("externalEntityDecl", "@hide", false, &_init_cbs_externalEntityDecl_5859_0, &_call_cbs_externalEntityDecl_5859_0, &_set_callback_cbs_externalEntityDecl_5859_0);
  methods += new qt_gsi::GenericMethod ("internalEntityDecl", "@brief Virtual method bool QXmlDeclHandler::internalEntityDecl(const QString &name, const QString &value)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_internalEntityDecl_3942_0, &_call_cbs_internalEntityDecl_3942_0);
  methods += new qt_gsi::GenericMethod ("internalEntityDecl", "@hide", false, &_init_cbs_internalEntityDecl_3942_0, &_call_cbs_internalEntityDecl_3942_0, &_set_callback_cbs_internalEntityDecl_3942_0);
  return methods;
}

gsi::Class<QXmlDeclHandler_Adaptor> decl_QXmlDeclHandler_Adaptor (qtdecl_QXmlDeclHandler (), "QtXml", "QXmlDeclHandler",
  methods_QXmlDeclHandler_Adaptor (),
  "@qt\n@brief Binding of QXmlDeclHandler");

}

