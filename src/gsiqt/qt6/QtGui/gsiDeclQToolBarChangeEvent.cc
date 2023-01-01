
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
*  @file gsiDeclQToolBarChangeEvent.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QToolBarChangeEvent>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QToolBarChangeEvent

// bool QToolBarChangeEvent::toggle()


static void _init_f_toggle_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_toggle_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QToolBarChangeEvent *)cls)->toggle ());
}


namespace gsi
{

static gsi::Methods methods_QToolBarChangeEvent () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("toggle", "@brief Method bool QToolBarChangeEvent::toggle()\n", true, &_init_f_toggle_c0, &_call_f_toggle_c0);
  return methods;
}

gsi::Class<QEvent> &qtdecl_QEvent ();

gsi::Class<QToolBarChangeEvent> decl_QToolBarChangeEvent (qtdecl_QEvent (), "QtGui", "QToolBarChangeEvent_Native",
  methods_QToolBarChangeEvent (),
  "@hide\n@alias QToolBarChangeEvent");

GSI_QTGUI_PUBLIC gsi::Class<QToolBarChangeEvent> &qtdecl_QToolBarChangeEvent () { return decl_QToolBarChangeEvent; }

}


class QToolBarChangeEvent_Adaptor : public QToolBarChangeEvent, public qt_gsi::QtObjectBase
{
public:

  virtual ~QToolBarChangeEvent_Adaptor();

  //  [adaptor ctor] QToolBarChangeEvent::QToolBarChangeEvent(bool t)
  QToolBarChangeEvent_Adaptor(bool t) : QToolBarChangeEvent(t)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor impl] void QToolBarChangeEvent::setAccepted(bool accepted)
  void cbs_setAccepted_864_0(bool accepted)
  {
    QToolBarChangeEvent::setAccepted(accepted);
  }

  virtual void setAccepted(bool accepted)
  {
    if (cb_setAccepted_864_0.can_issue()) {
      cb_setAccepted_864_0.issue<QToolBarChangeEvent_Adaptor, bool>(&QToolBarChangeEvent_Adaptor::cbs_setAccepted_864_0, accepted);
    } else {
      QToolBarChangeEvent::setAccepted(accepted);
    }
  }

  gsi::Callback cb_setAccepted_864_0;
};

QToolBarChangeEvent_Adaptor::~QToolBarChangeEvent_Adaptor() { }

//  Constructor QToolBarChangeEvent::QToolBarChangeEvent(bool t) (adaptor class)

static void _init_ctor_QToolBarChangeEvent_Adaptor_864 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("t");
  decl->add_arg<bool > (argspec_0);
  decl->set_return_new<QToolBarChangeEvent_Adaptor> ();
}

static void _call_ctor_QToolBarChangeEvent_Adaptor_864 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  bool arg1 = gsi::arg_reader<bool >() (args, heap);
  ret.write<QToolBarChangeEvent_Adaptor *> (new QToolBarChangeEvent_Adaptor (arg1));
}


// void QToolBarChangeEvent::setAccepted(bool accepted)

static void _init_cbs_setAccepted_864_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("accepted");
  decl->add_arg<bool > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_setAccepted_864_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  bool arg1 = args.read<bool > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QToolBarChangeEvent_Adaptor *)cls)->cbs_setAccepted_864_0 (arg1);
}

static void _set_callback_cbs_setAccepted_864_0 (void *cls, const gsi::Callback &cb)
{
  ((QToolBarChangeEvent_Adaptor *)cls)->cb_setAccepted_864_0 = cb;
}


namespace gsi
{

gsi::Class<QToolBarChangeEvent> &qtdecl_QToolBarChangeEvent ();

static gsi::Methods methods_QToolBarChangeEvent_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QToolBarChangeEvent::QToolBarChangeEvent(bool t)\nThis method creates an object of class QToolBarChangeEvent.", &_init_ctor_QToolBarChangeEvent_Adaptor_864, &_call_ctor_QToolBarChangeEvent_Adaptor_864);
  methods += new qt_gsi::GenericMethod ("setAccepted", "@brief Virtual method void QToolBarChangeEvent::setAccepted(bool accepted)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_setAccepted_864_0, &_call_cbs_setAccepted_864_0);
  methods += new qt_gsi::GenericMethod ("setAccepted", "@hide", false, &_init_cbs_setAccepted_864_0, &_call_cbs_setAccepted_864_0, &_set_callback_cbs_setAccepted_864_0);
  return methods;
}

gsi::Class<QToolBarChangeEvent_Adaptor> decl_QToolBarChangeEvent_Adaptor (qtdecl_QToolBarChangeEvent (), "QtGui", "QToolBarChangeEvent",
  methods_QToolBarChangeEvent_Adaptor (),
  "@qt\n@brief Binding of QToolBarChangeEvent");

}

