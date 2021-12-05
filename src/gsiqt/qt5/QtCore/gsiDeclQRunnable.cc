
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
*  @file gsiDeclQRunnable.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QRunnable>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QRunnable

// bool QRunnable::autoDelete()


static void _init_f_autoDelete_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_autoDelete_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QRunnable *)cls)->autoDelete ());
}


// void QRunnable::run()


static void _init_f_run_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_run_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QRunnable *)cls)->run ();
}


// void QRunnable::setAutoDelete(bool _autoDelete)


static void _init_f_setAutoDelete_864 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("_autoDelete");
  decl->add_arg<bool > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setAutoDelete_864 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  bool arg1 = gsi::arg_reader<bool >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QRunnable *)cls)->setAutoDelete (arg1);
}


namespace gsi
{

static gsi::Methods methods_QRunnable () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod (":autoDelete", "@brief Method bool QRunnable::autoDelete()\n", true, &_init_f_autoDelete_c0, &_call_f_autoDelete_c0);
  methods += new qt_gsi::GenericMethod ("run", "@brief Method void QRunnable::run()\n", false, &_init_f_run_0, &_call_f_run_0);
  methods += new qt_gsi::GenericMethod ("setAutoDelete|autoDelete=", "@brief Method void QRunnable::setAutoDelete(bool _autoDelete)\n", false, &_init_f_setAutoDelete_864, &_call_f_setAutoDelete_864);
  return methods;
}

gsi::Class<QRunnable> decl_QRunnable ("QtCore", "QRunnable_Native",
  methods_QRunnable (),
  "@hide\n@alias QRunnable");

GSI_QTCORE_PUBLIC gsi::Class<QRunnable> &qtdecl_QRunnable () { return decl_QRunnable; }

}


class QRunnable_Adaptor : public QRunnable, public qt_gsi::QtObjectBase
{
public:

  virtual ~QRunnable_Adaptor();

  //  [adaptor ctor] QRunnable::QRunnable()
  QRunnable_Adaptor() : QRunnable()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor impl] void QRunnable::run()
  void cbs_run_0_0()
  {
    throw qt_gsi::AbstractMethodCalledException("run");
  }

  virtual void run()
  {
    if (cb_run_0_0.can_issue()) {
      cb_run_0_0.issue<QRunnable_Adaptor>(&QRunnable_Adaptor::cbs_run_0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("run");
    }
  }

  gsi::Callback cb_run_0_0;
};

QRunnable_Adaptor::~QRunnable_Adaptor() { }

//  Constructor QRunnable::QRunnable() (adaptor class)

static void _init_ctor_QRunnable_Adaptor_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QRunnable_Adaptor> ();
}

static void _call_ctor_QRunnable_Adaptor_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QRunnable_Adaptor *> (new QRunnable_Adaptor ());
}


// void QRunnable::run()

static void _init_cbs_run_0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_cbs_run_0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QRunnable_Adaptor *)cls)->cbs_run_0_0 ();
}

static void _set_callback_cbs_run_0_0 (void *cls, const gsi::Callback &cb)
{
  ((QRunnable_Adaptor *)cls)->cb_run_0_0 = cb;
}


namespace gsi
{

gsi::Class<QRunnable> &qtdecl_QRunnable ();

static gsi::Methods methods_QRunnable_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QRunnable::QRunnable()\nThis method creates an object of class QRunnable.", &_init_ctor_QRunnable_Adaptor_0, &_call_ctor_QRunnable_Adaptor_0);
  methods += new qt_gsi::GenericMethod ("run", "@brief Virtual method void QRunnable::run()\nThis method can be reimplemented in a derived class.", false, &_init_cbs_run_0_0, &_call_cbs_run_0_0);
  methods += new qt_gsi::GenericMethod ("run", "@hide", false, &_init_cbs_run_0_0, &_call_cbs_run_0_0, &_set_callback_cbs_run_0_0);
  return methods;
}

gsi::Class<QRunnable_Adaptor> decl_QRunnable_Adaptor (qtdecl_QRunnable (), "QtCore", "QRunnable",
  methods_QRunnable_Adaptor (),
  "@qt\n@brief Binding of QRunnable");

}

