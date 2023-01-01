
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
*  @file gsiDeclQXmlLexicalHandler.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QXmlLexicalHandler>
#include "gsiQt.h"
#include "gsiQtCore5CompatCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QXmlLexicalHandler

// bool QXmlLexicalHandler::comment(const QString &ch)


static void _init_f_comment_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("ch");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_comment_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<bool > ((bool)((QXmlLexicalHandler *)cls)->comment (arg1));
}


// bool QXmlLexicalHandler::endCDATA()


static void _init_f_endCDATA_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_endCDATA_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QXmlLexicalHandler *)cls)->endCDATA ());
}


// bool QXmlLexicalHandler::endDTD()


static void _init_f_endDTD_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_endDTD_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QXmlLexicalHandler *)cls)->endDTD ());
}


// bool QXmlLexicalHandler::endEntity(const QString &name)


static void _init_f_endEntity_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_endEntity_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<bool > ((bool)((QXmlLexicalHandler *)cls)->endEntity (arg1));
}


// QString QXmlLexicalHandler::errorString()


static void _init_f_errorString_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_errorString_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QXmlLexicalHandler *)cls)->errorString ());
}


// bool QXmlLexicalHandler::startCDATA()


static void _init_f_startCDATA_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_startCDATA_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QXmlLexicalHandler *)cls)->startCDATA ());
}


// bool QXmlLexicalHandler::startDTD(const QString &name, const QString &publicId, const QString &systemId)


static void _init_f_startDTD_5859 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("publicId");
  decl->add_arg<const QString & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("systemId");
  decl->add_arg<const QString & > (argspec_2);
  decl->set_return<bool > ();
}

static void _call_f_startDTD_5859 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  const QString &arg2 = gsi::arg_reader<const QString & >() (args, heap);
  const QString &arg3 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<bool > ((bool)((QXmlLexicalHandler *)cls)->startDTD (arg1, arg2, arg3));
}


// bool QXmlLexicalHandler::startEntity(const QString &name)


static void _init_f_startEntity_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_startEntity_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<bool > ((bool)((QXmlLexicalHandler *)cls)->startEntity (arg1));
}


namespace gsi
{

static gsi::Methods methods_QXmlLexicalHandler () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("comment", "@brief Method bool QXmlLexicalHandler::comment(const QString &ch)\n", false, &_init_f_comment_2025, &_call_f_comment_2025);
  methods += new qt_gsi::GenericMethod ("endCDATA", "@brief Method bool QXmlLexicalHandler::endCDATA()\n", false, &_init_f_endCDATA_0, &_call_f_endCDATA_0);
  methods += new qt_gsi::GenericMethod ("endDTD", "@brief Method bool QXmlLexicalHandler::endDTD()\n", false, &_init_f_endDTD_0, &_call_f_endDTD_0);
  methods += new qt_gsi::GenericMethod ("endEntity", "@brief Method bool QXmlLexicalHandler::endEntity(const QString &name)\n", false, &_init_f_endEntity_2025, &_call_f_endEntity_2025);
  methods += new qt_gsi::GenericMethod ("errorString", "@brief Method QString QXmlLexicalHandler::errorString()\n", true, &_init_f_errorString_c0, &_call_f_errorString_c0);
  methods += new qt_gsi::GenericMethod ("startCDATA", "@brief Method bool QXmlLexicalHandler::startCDATA()\n", false, &_init_f_startCDATA_0, &_call_f_startCDATA_0);
  methods += new qt_gsi::GenericMethod ("startDTD", "@brief Method bool QXmlLexicalHandler::startDTD(const QString &name, const QString &publicId, const QString &systemId)\n", false, &_init_f_startDTD_5859, &_call_f_startDTD_5859);
  methods += new qt_gsi::GenericMethod ("startEntity", "@brief Method bool QXmlLexicalHandler::startEntity(const QString &name)\n", false, &_init_f_startEntity_2025, &_call_f_startEntity_2025);
  return methods;
}

gsi::Class<QXmlLexicalHandler> decl_QXmlLexicalHandler ("QtCore5Compat", "QXmlLexicalHandler_Native",
  methods_QXmlLexicalHandler (),
  "@hide\n@alias QXmlLexicalHandler");

GSI_QTCORE5COMPAT_PUBLIC gsi::Class<QXmlLexicalHandler> &qtdecl_QXmlLexicalHandler () { return decl_QXmlLexicalHandler; }

}


class QXmlLexicalHandler_Adaptor : public QXmlLexicalHandler, public qt_gsi::QtObjectBase
{
public:

  virtual ~QXmlLexicalHandler_Adaptor();

  //  [adaptor ctor] QXmlLexicalHandler::QXmlLexicalHandler()
  QXmlLexicalHandler_Adaptor() : QXmlLexicalHandler()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor impl] bool QXmlLexicalHandler::comment(const QString &ch)
  bool cbs_comment_2025_0(const QString &ch)
  {
    __SUPPRESS_UNUSED_WARNING (ch);
    throw qt_gsi::AbstractMethodCalledException("comment");
  }

  virtual bool comment(const QString &ch)
  {
    if (cb_comment_2025_0.can_issue()) {
      return cb_comment_2025_0.issue<QXmlLexicalHandler_Adaptor, bool, const QString &>(&QXmlLexicalHandler_Adaptor::cbs_comment_2025_0, ch);
    } else {
      throw qt_gsi::AbstractMethodCalledException("comment");
    }
  }

  //  [adaptor impl] bool QXmlLexicalHandler::endCDATA()
  bool cbs_endCDATA_0_0()
  {
    throw qt_gsi::AbstractMethodCalledException("endCDATA");
  }

  virtual bool endCDATA()
  {
    if (cb_endCDATA_0_0.can_issue()) {
      return cb_endCDATA_0_0.issue<QXmlLexicalHandler_Adaptor, bool>(&QXmlLexicalHandler_Adaptor::cbs_endCDATA_0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("endCDATA");
    }
  }

  //  [adaptor impl] bool QXmlLexicalHandler::endDTD()
  bool cbs_endDTD_0_0()
  {
    throw qt_gsi::AbstractMethodCalledException("endDTD");
  }

  virtual bool endDTD()
  {
    if (cb_endDTD_0_0.can_issue()) {
      return cb_endDTD_0_0.issue<QXmlLexicalHandler_Adaptor, bool>(&QXmlLexicalHandler_Adaptor::cbs_endDTD_0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("endDTD");
    }
  }

  //  [adaptor impl] bool QXmlLexicalHandler::endEntity(const QString &name)
  bool cbs_endEntity_2025_0(const QString &name)
  {
    __SUPPRESS_UNUSED_WARNING (name);
    throw qt_gsi::AbstractMethodCalledException("endEntity");
  }

  virtual bool endEntity(const QString &name)
  {
    if (cb_endEntity_2025_0.can_issue()) {
      return cb_endEntity_2025_0.issue<QXmlLexicalHandler_Adaptor, bool, const QString &>(&QXmlLexicalHandler_Adaptor::cbs_endEntity_2025_0, name);
    } else {
      throw qt_gsi::AbstractMethodCalledException("endEntity");
    }
  }

  //  [adaptor impl] QString QXmlLexicalHandler::errorString()
  QString cbs_errorString_c0_0() const
  {
    throw qt_gsi::AbstractMethodCalledException("errorString");
  }

  virtual QString errorString() const
  {
    if (cb_errorString_c0_0.can_issue()) {
      return cb_errorString_c0_0.issue<QXmlLexicalHandler_Adaptor, QString>(&QXmlLexicalHandler_Adaptor::cbs_errorString_c0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("errorString");
    }
  }

  //  [adaptor impl] bool QXmlLexicalHandler::startCDATA()
  bool cbs_startCDATA_0_0()
  {
    throw qt_gsi::AbstractMethodCalledException("startCDATA");
  }

  virtual bool startCDATA()
  {
    if (cb_startCDATA_0_0.can_issue()) {
      return cb_startCDATA_0_0.issue<QXmlLexicalHandler_Adaptor, bool>(&QXmlLexicalHandler_Adaptor::cbs_startCDATA_0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("startCDATA");
    }
  }

  //  [adaptor impl] bool QXmlLexicalHandler::startDTD(const QString &name, const QString &publicId, const QString &systemId)
  bool cbs_startDTD_5859_0(const QString &name, const QString &publicId, const QString &systemId)
  {
    __SUPPRESS_UNUSED_WARNING (name);
    __SUPPRESS_UNUSED_WARNING (publicId);
    __SUPPRESS_UNUSED_WARNING (systemId);
    throw qt_gsi::AbstractMethodCalledException("startDTD");
  }

  virtual bool startDTD(const QString &name, const QString &publicId, const QString &systemId)
  {
    if (cb_startDTD_5859_0.can_issue()) {
      return cb_startDTD_5859_0.issue<QXmlLexicalHandler_Adaptor, bool, const QString &, const QString &, const QString &>(&QXmlLexicalHandler_Adaptor::cbs_startDTD_5859_0, name, publicId, systemId);
    } else {
      throw qt_gsi::AbstractMethodCalledException("startDTD");
    }
  }

  //  [adaptor impl] bool QXmlLexicalHandler::startEntity(const QString &name)
  bool cbs_startEntity_2025_0(const QString &name)
  {
    __SUPPRESS_UNUSED_WARNING (name);
    throw qt_gsi::AbstractMethodCalledException("startEntity");
  }

  virtual bool startEntity(const QString &name)
  {
    if (cb_startEntity_2025_0.can_issue()) {
      return cb_startEntity_2025_0.issue<QXmlLexicalHandler_Adaptor, bool, const QString &>(&QXmlLexicalHandler_Adaptor::cbs_startEntity_2025_0, name);
    } else {
      throw qt_gsi::AbstractMethodCalledException("startEntity");
    }
  }

  gsi::Callback cb_comment_2025_0;
  gsi::Callback cb_endCDATA_0_0;
  gsi::Callback cb_endDTD_0_0;
  gsi::Callback cb_endEntity_2025_0;
  gsi::Callback cb_errorString_c0_0;
  gsi::Callback cb_startCDATA_0_0;
  gsi::Callback cb_startDTD_5859_0;
  gsi::Callback cb_startEntity_2025_0;
};

QXmlLexicalHandler_Adaptor::~QXmlLexicalHandler_Adaptor() { }

//  Constructor QXmlLexicalHandler::QXmlLexicalHandler() (adaptor class)

static void _init_ctor_QXmlLexicalHandler_Adaptor_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QXmlLexicalHandler_Adaptor> ();
}

static void _call_ctor_QXmlLexicalHandler_Adaptor_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QXmlLexicalHandler_Adaptor *> (new QXmlLexicalHandler_Adaptor ());
}


// bool QXmlLexicalHandler::comment(const QString &ch)

static void _init_cbs_comment_2025_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("ch");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_cbs_comment_2025_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  ret.write<bool > ((bool)((QXmlLexicalHandler_Adaptor *)cls)->cbs_comment_2025_0 (arg1));
}

static void _set_callback_cbs_comment_2025_0 (void *cls, const gsi::Callback &cb)
{
  ((QXmlLexicalHandler_Adaptor *)cls)->cb_comment_2025_0 = cb;
}


// bool QXmlLexicalHandler::endCDATA()

static void _init_cbs_endCDATA_0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_cbs_endCDATA_0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QXmlLexicalHandler_Adaptor *)cls)->cbs_endCDATA_0_0 ());
}

static void _set_callback_cbs_endCDATA_0_0 (void *cls, const gsi::Callback &cb)
{
  ((QXmlLexicalHandler_Adaptor *)cls)->cb_endCDATA_0_0 = cb;
}


// bool QXmlLexicalHandler::endDTD()

static void _init_cbs_endDTD_0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_cbs_endDTD_0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QXmlLexicalHandler_Adaptor *)cls)->cbs_endDTD_0_0 ());
}

static void _set_callback_cbs_endDTD_0_0 (void *cls, const gsi::Callback &cb)
{
  ((QXmlLexicalHandler_Adaptor *)cls)->cb_endDTD_0_0 = cb;
}


// bool QXmlLexicalHandler::endEntity(const QString &name)

static void _init_cbs_endEntity_2025_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_cbs_endEntity_2025_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  ret.write<bool > ((bool)((QXmlLexicalHandler_Adaptor *)cls)->cbs_endEntity_2025_0 (arg1));
}

static void _set_callback_cbs_endEntity_2025_0 (void *cls, const gsi::Callback &cb)
{
  ((QXmlLexicalHandler_Adaptor *)cls)->cb_endEntity_2025_0 = cb;
}


// QString QXmlLexicalHandler::errorString()

static void _init_cbs_errorString_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_cbs_errorString_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QXmlLexicalHandler_Adaptor *)cls)->cbs_errorString_c0_0 ());
}

static void _set_callback_cbs_errorString_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QXmlLexicalHandler_Adaptor *)cls)->cb_errorString_c0_0 = cb;
}


// bool QXmlLexicalHandler::startCDATA()

static void _init_cbs_startCDATA_0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_cbs_startCDATA_0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QXmlLexicalHandler_Adaptor *)cls)->cbs_startCDATA_0_0 ());
}

static void _set_callback_cbs_startCDATA_0_0 (void *cls, const gsi::Callback &cb)
{
  ((QXmlLexicalHandler_Adaptor *)cls)->cb_startCDATA_0_0 = cb;
}


// bool QXmlLexicalHandler::startDTD(const QString &name, const QString &publicId, const QString &systemId)

static void _init_cbs_startDTD_5859_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("publicId");
  decl->add_arg<const QString & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("systemId");
  decl->add_arg<const QString & > (argspec_2);
  decl->set_return<bool > ();
}

static void _call_cbs_startDTD_5859_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  const QString &arg2 = args.read<const QString & > (heap);
  const QString &arg3 = args.read<const QString & > (heap);
  ret.write<bool > ((bool)((QXmlLexicalHandler_Adaptor *)cls)->cbs_startDTD_5859_0 (arg1, arg2, arg3));
}

static void _set_callback_cbs_startDTD_5859_0 (void *cls, const gsi::Callback &cb)
{
  ((QXmlLexicalHandler_Adaptor *)cls)->cb_startDTD_5859_0 = cb;
}


// bool QXmlLexicalHandler::startEntity(const QString &name)

static void _init_cbs_startEntity_2025_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_cbs_startEntity_2025_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  ret.write<bool > ((bool)((QXmlLexicalHandler_Adaptor *)cls)->cbs_startEntity_2025_0 (arg1));
}

static void _set_callback_cbs_startEntity_2025_0 (void *cls, const gsi::Callback &cb)
{
  ((QXmlLexicalHandler_Adaptor *)cls)->cb_startEntity_2025_0 = cb;
}


namespace gsi
{

gsi::Class<QXmlLexicalHandler> &qtdecl_QXmlLexicalHandler ();

static gsi::Methods methods_QXmlLexicalHandler_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QXmlLexicalHandler::QXmlLexicalHandler()\nThis method creates an object of class QXmlLexicalHandler.", &_init_ctor_QXmlLexicalHandler_Adaptor_0, &_call_ctor_QXmlLexicalHandler_Adaptor_0);
  methods += new qt_gsi::GenericMethod ("comment", "@brief Virtual method bool QXmlLexicalHandler::comment(const QString &ch)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_comment_2025_0, &_call_cbs_comment_2025_0);
  methods += new qt_gsi::GenericMethod ("comment", "@hide", false, &_init_cbs_comment_2025_0, &_call_cbs_comment_2025_0, &_set_callback_cbs_comment_2025_0);
  methods += new qt_gsi::GenericMethod ("endCDATA", "@brief Virtual method bool QXmlLexicalHandler::endCDATA()\nThis method can be reimplemented in a derived class.", false, &_init_cbs_endCDATA_0_0, &_call_cbs_endCDATA_0_0);
  methods += new qt_gsi::GenericMethod ("endCDATA", "@hide", false, &_init_cbs_endCDATA_0_0, &_call_cbs_endCDATA_0_0, &_set_callback_cbs_endCDATA_0_0);
  methods += new qt_gsi::GenericMethod ("endDTD", "@brief Virtual method bool QXmlLexicalHandler::endDTD()\nThis method can be reimplemented in a derived class.", false, &_init_cbs_endDTD_0_0, &_call_cbs_endDTD_0_0);
  methods += new qt_gsi::GenericMethod ("endDTD", "@hide", false, &_init_cbs_endDTD_0_0, &_call_cbs_endDTD_0_0, &_set_callback_cbs_endDTD_0_0);
  methods += new qt_gsi::GenericMethod ("endEntity", "@brief Virtual method bool QXmlLexicalHandler::endEntity(const QString &name)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_endEntity_2025_0, &_call_cbs_endEntity_2025_0);
  methods += new qt_gsi::GenericMethod ("endEntity", "@hide", false, &_init_cbs_endEntity_2025_0, &_call_cbs_endEntity_2025_0, &_set_callback_cbs_endEntity_2025_0);
  methods += new qt_gsi::GenericMethod ("errorString", "@brief Virtual method QString QXmlLexicalHandler::errorString()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_errorString_c0_0, &_call_cbs_errorString_c0_0);
  methods += new qt_gsi::GenericMethod ("errorString", "@hide", true, &_init_cbs_errorString_c0_0, &_call_cbs_errorString_c0_0, &_set_callback_cbs_errorString_c0_0);
  methods += new qt_gsi::GenericMethod ("startCDATA", "@brief Virtual method bool QXmlLexicalHandler::startCDATA()\nThis method can be reimplemented in a derived class.", false, &_init_cbs_startCDATA_0_0, &_call_cbs_startCDATA_0_0);
  methods += new qt_gsi::GenericMethod ("startCDATA", "@hide", false, &_init_cbs_startCDATA_0_0, &_call_cbs_startCDATA_0_0, &_set_callback_cbs_startCDATA_0_0);
  methods += new qt_gsi::GenericMethod ("startDTD", "@brief Virtual method bool QXmlLexicalHandler::startDTD(const QString &name, const QString &publicId, const QString &systemId)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_startDTD_5859_0, &_call_cbs_startDTD_5859_0);
  methods += new qt_gsi::GenericMethod ("startDTD", "@hide", false, &_init_cbs_startDTD_5859_0, &_call_cbs_startDTD_5859_0, &_set_callback_cbs_startDTD_5859_0);
  methods += new qt_gsi::GenericMethod ("startEntity", "@brief Virtual method bool QXmlLexicalHandler::startEntity(const QString &name)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_startEntity_2025_0, &_call_cbs_startEntity_2025_0);
  methods += new qt_gsi::GenericMethod ("startEntity", "@hide", false, &_init_cbs_startEntity_2025_0, &_call_cbs_startEntity_2025_0, &_set_callback_cbs_startEntity_2025_0);
  return methods;
}

gsi::Class<QXmlLexicalHandler_Adaptor> decl_QXmlLexicalHandler_Adaptor (qtdecl_QXmlLexicalHandler (), "QtCore5Compat", "QXmlLexicalHandler",
  methods_QXmlLexicalHandler_Adaptor (),
  "@qt\n@brief Binding of QXmlLexicalHandler");

}

