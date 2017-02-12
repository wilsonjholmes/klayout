
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
*  @file gsiDeclQSqlDriverCreatorBase.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QSqlDriverCreatorBase>
#include <QSqlDriver>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QSqlDriverCreatorBase

// QSqlDriver *QSqlDriverCreatorBase::createObject()


static void _init_f_createObject_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QSqlDriver * > ();
}

static void _call_f_createObject_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSqlDriver * > ((QSqlDriver *)((QSqlDriverCreatorBase *)cls)->createObject ());
}


namespace gsi
{

static gsi::Methods methods_QSqlDriverCreatorBase () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("createObject", "@brief Method QSqlDriver *QSqlDriverCreatorBase::createObject()\n", true, &_init_f_createObject_c0, &_call_f_createObject_c0);
  return methods;
}

gsi::Class<QSqlDriverCreatorBase> decl_QSqlDriverCreatorBase ("QSqlDriverCreatorBase_Native",
  methods_QSqlDriverCreatorBase (),
  "@hide\n@alias QSqlDriverCreatorBase");

GSIQT_PUBLIC gsi::Class<QSqlDriverCreatorBase> &qtdecl_QSqlDriverCreatorBase () { return decl_QSqlDriverCreatorBase; }

}


class QSqlDriverCreatorBase_Adaptor : public QSqlDriverCreatorBase, public qt_gsi::QtObjectBase
{
public:

  virtual ~QSqlDriverCreatorBase_Adaptor();

  //  [adaptor ctor] QSqlDriverCreatorBase::QSqlDriverCreatorBase()
  QSqlDriverCreatorBase_Adaptor() : QSqlDriverCreatorBase()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor impl] QSqlDriver *QSqlDriverCreatorBase::createObject()
  QSqlDriver * cbs_createObject_c0_0() const
  {
    throw qt_gsi::AbstractMethodCalledException("createObject");
  }

  virtual QSqlDriver * createObject() const
  {
    if (cb_createObject_c0_0.can_issue()) {
      return cb_createObject_c0_0.issue<QSqlDriverCreatorBase_Adaptor, QSqlDriver *>(&QSqlDriverCreatorBase_Adaptor::cbs_createObject_c0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("createObject");
    }
  }

  gsi::Callback cb_createObject_c0_0;
};

QSqlDriverCreatorBase_Adaptor::~QSqlDriverCreatorBase_Adaptor() { }

//  Constructor QSqlDriverCreatorBase::QSqlDriverCreatorBase() (adaptor class)

static void _init_ctor_QSqlDriverCreatorBase_Adaptor_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QSqlDriverCreatorBase_Adaptor> ();
}

static void _call_ctor_QSqlDriverCreatorBase_Adaptor_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSqlDriverCreatorBase_Adaptor *> (new QSqlDriverCreatorBase_Adaptor ());
}


// QSqlDriver *QSqlDriverCreatorBase::createObject()

static void _init_cbs_createObject_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QSqlDriver * > ();
}

static void _call_cbs_createObject_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSqlDriver * > ((QSqlDriver *)((QSqlDriverCreatorBase_Adaptor *)cls)->cbs_createObject_c0_0 ());
}

static void _set_callback_cbs_createObject_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QSqlDriverCreatorBase_Adaptor *)cls)->cb_createObject_c0_0 = cb;
}


namespace gsi
{

gsi::Class<QSqlDriverCreatorBase> &qtdecl_QSqlDriverCreatorBase ();

static gsi::Methods methods_QSqlDriverCreatorBase_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QSqlDriverCreatorBase::QSqlDriverCreatorBase()\nThis method creates an object of class QSqlDriverCreatorBase.", &_init_ctor_QSqlDriverCreatorBase_Adaptor_0, &_call_ctor_QSqlDriverCreatorBase_Adaptor_0);
  methods += new qt_gsi::GenericMethod ("createObject", "@hide", true, &_init_cbs_createObject_c0_0, &_call_cbs_createObject_c0_0);
  methods += new qt_gsi::GenericMethod ("createObject", "@brief Virtual method QSqlDriver *QSqlDriverCreatorBase::createObject()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_createObject_c0_0, &_call_cbs_createObject_c0_0, &_set_callback_cbs_createObject_c0_0);
  return methods;
}

gsi::Class<QSqlDriverCreatorBase_Adaptor> decl_QSqlDriverCreatorBase_Adaptor (qtdecl_QSqlDriverCreatorBase (), "QSqlDriverCreatorBase",
  methods_QSqlDriverCreatorBase_Adaptor (),
  "@qt\n@brief Binding of QSqlDriverCreatorBase");

}

