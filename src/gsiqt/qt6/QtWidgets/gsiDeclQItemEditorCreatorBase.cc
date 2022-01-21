
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2022 Matthias Koefferlein

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
*  @file gsiDeclQItemEditorCreatorBase.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QItemEditorCreatorBase>
#include <QWidget>
#include "gsiQt.h"
#include "gsiQtWidgetsCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QItemEditorCreatorBase

// QWidget *QItemEditorCreatorBase::createWidget(QWidget *parent)


static void _init_f_createWidget_c1315 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("parent");
  decl->add_arg<QWidget * > (argspec_0);
  decl->set_return<QWidget * > ();
}

static void _call_f_createWidget_c1315 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QWidget *arg1 = gsi::arg_reader<QWidget * >() (args, heap);
  ret.write<QWidget * > ((QWidget *)((QItemEditorCreatorBase *)cls)->createWidget (arg1));
}


// QByteArray QItemEditorCreatorBase::valuePropertyName()


static void _init_f_valuePropertyName_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QByteArray > ();
}

static void _call_f_valuePropertyName_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QByteArray > ((QByteArray)((QItemEditorCreatorBase *)cls)->valuePropertyName ());
}


namespace gsi
{

static gsi::Methods methods_QItemEditorCreatorBase () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("createWidget", "@brief Method QWidget *QItemEditorCreatorBase::createWidget(QWidget *parent)\n", true, &_init_f_createWidget_c1315, &_call_f_createWidget_c1315);
  methods += new qt_gsi::GenericMethod ("valuePropertyName", "@brief Method QByteArray QItemEditorCreatorBase::valuePropertyName()\n", true, &_init_f_valuePropertyName_c0, &_call_f_valuePropertyName_c0);
  return methods;
}

gsi::Class<QItemEditorCreatorBase> decl_QItemEditorCreatorBase ("QtWidgets", "QItemEditorCreatorBase_Native",
  methods_QItemEditorCreatorBase (),
  "@hide\n@alias QItemEditorCreatorBase");

GSI_QTWIDGETS_PUBLIC gsi::Class<QItemEditorCreatorBase> &qtdecl_QItemEditorCreatorBase () { return decl_QItemEditorCreatorBase; }

}


class QItemEditorCreatorBase_Adaptor : public QItemEditorCreatorBase, public qt_gsi::QtObjectBase
{
public:

  virtual ~QItemEditorCreatorBase_Adaptor();

  //  [adaptor ctor] QItemEditorCreatorBase::QItemEditorCreatorBase()
  QItemEditorCreatorBase_Adaptor() : QItemEditorCreatorBase()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor impl] QWidget *QItemEditorCreatorBase::createWidget(QWidget *parent)
  QWidget * cbs_createWidget_c1315_0(QWidget *parent) const
  {
    __SUPPRESS_UNUSED_WARNING (parent);
    throw qt_gsi::AbstractMethodCalledException("createWidget");
  }

  virtual QWidget * createWidget(QWidget *parent) const
  {
    if (cb_createWidget_c1315_0.can_issue()) {
      return cb_createWidget_c1315_0.issue<QItemEditorCreatorBase_Adaptor, QWidget *, QWidget *>(&QItemEditorCreatorBase_Adaptor::cbs_createWidget_c1315_0, parent);
    } else {
      throw qt_gsi::AbstractMethodCalledException("createWidget");
    }
  }

  //  [adaptor impl] QByteArray QItemEditorCreatorBase::valuePropertyName()
  QByteArray cbs_valuePropertyName_c0_0() const
  {
    throw qt_gsi::AbstractMethodCalledException("valuePropertyName");
  }

  virtual QByteArray valuePropertyName() const
  {
    if (cb_valuePropertyName_c0_0.can_issue()) {
      return cb_valuePropertyName_c0_0.issue<QItemEditorCreatorBase_Adaptor, QByteArray>(&QItemEditorCreatorBase_Adaptor::cbs_valuePropertyName_c0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("valuePropertyName");
    }
  }

  gsi::Callback cb_createWidget_c1315_0;
  gsi::Callback cb_valuePropertyName_c0_0;
};

QItemEditorCreatorBase_Adaptor::~QItemEditorCreatorBase_Adaptor() { }

//  Constructor QItemEditorCreatorBase::QItemEditorCreatorBase() (adaptor class)

static void _init_ctor_QItemEditorCreatorBase_Adaptor_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QItemEditorCreatorBase_Adaptor> ();
}

static void _call_ctor_QItemEditorCreatorBase_Adaptor_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QItemEditorCreatorBase_Adaptor *> (new QItemEditorCreatorBase_Adaptor ());
}


// QWidget *QItemEditorCreatorBase::createWidget(QWidget *parent)

static void _init_cbs_createWidget_c1315_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("parent");
  decl->add_arg<QWidget * > (argspec_0);
  decl->set_return<QWidget * > ();
}

static void _call_cbs_createWidget_c1315_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QWidget *arg1 = args.read<QWidget * > (heap);
  ret.write<QWidget * > ((QWidget *)((QItemEditorCreatorBase_Adaptor *)cls)->cbs_createWidget_c1315_0 (arg1));
}

static void _set_callback_cbs_createWidget_c1315_0 (void *cls, const gsi::Callback &cb)
{
  ((QItemEditorCreatorBase_Adaptor *)cls)->cb_createWidget_c1315_0 = cb;
}


// QByteArray QItemEditorCreatorBase::valuePropertyName()

static void _init_cbs_valuePropertyName_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QByteArray > ();
}

static void _call_cbs_valuePropertyName_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QByteArray > ((QByteArray)((QItemEditorCreatorBase_Adaptor *)cls)->cbs_valuePropertyName_c0_0 ());
}

static void _set_callback_cbs_valuePropertyName_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QItemEditorCreatorBase_Adaptor *)cls)->cb_valuePropertyName_c0_0 = cb;
}


namespace gsi
{

gsi::Class<QItemEditorCreatorBase> &qtdecl_QItemEditorCreatorBase ();

static gsi::Methods methods_QItemEditorCreatorBase_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QItemEditorCreatorBase::QItemEditorCreatorBase()\nThis method creates an object of class QItemEditorCreatorBase.", &_init_ctor_QItemEditorCreatorBase_Adaptor_0, &_call_ctor_QItemEditorCreatorBase_Adaptor_0);
  methods += new qt_gsi::GenericMethod ("createWidget", "@brief Virtual method QWidget *QItemEditorCreatorBase::createWidget(QWidget *parent)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_createWidget_c1315_0, &_call_cbs_createWidget_c1315_0);
  methods += new qt_gsi::GenericMethod ("createWidget", "@hide", true, &_init_cbs_createWidget_c1315_0, &_call_cbs_createWidget_c1315_0, &_set_callback_cbs_createWidget_c1315_0);
  methods += new qt_gsi::GenericMethod ("valuePropertyName", "@brief Virtual method QByteArray QItemEditorCreatorBase::valuePropertyName()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_valuePropertyName_c0_0, &_call_cbs_valuePropertyName_c0_0);
  methods += new qt_gsi::GenericMethod ("valuePropertyName", "@hide", true, &_init_cbs_valuePropertyName_c0_0, &_call_cbs_valuePropertyName_c0_0, &_set_callback_cbs_valuePropertyName_c0_0);
  return methods;
}

gsi::Class<QItemEditorCreatorBase_Adaptor> decl_QItemEditorCreatorBase_Adaptor (qtdecl_QItemEditorCreatorBase (), "QtWidgets", "QItemEditorCreatorBase",
  methods_QItemEditorCreatorBase_Adaptor (),
  "@qt\n@brief Binding of QItemEditorCreatorBase");

}

