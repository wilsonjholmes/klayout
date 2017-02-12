
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
*  @file gsiDeclQActionEvent.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QActionEvent>
#include <QAction>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QActionEvent

// QAction *QActionEvent::action()


static void _init_f_action_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QAction * > ();
}

static void _call_f_action_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QAction * > ((QAction *)((QActionEvent *)cls)->action ());
}


// QAction *QActionEvent::before()


static void _init_f_before_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QAction * > ();
}

static void _call_f_before_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QAction * > ((QAction *)((QActionEvent *)cls)->before ());
}


namespace gsi
{

static gsi::Methods methods_QActionEvent () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("action", "@brief Method QAction *QActionEvent::action()\n", true, &_init_f_action_c0, &_call_f_action_c0);
  methods += new qt_gsi::GenericMethod ("before", "@brief Method QAction *QActionEvent::before()\n", true, &_init_f_before_c0, &_call_f_before_c0);
  return methods;
}

gsi::Class<QEvent> &qtdecl_QEvent ();

gsi::Class<QActionEvent> decl_QActionEvent (qtdecl_QEvent (), "QActionEvent_Native",
  methods_QActionEvent (),
  "@hide\n@alias QActionEvent");

GSIQT_PUBLIC gsi::Class<QActionEvent> &qtdecl_QActionEvent () { return decl_QActionEvent; }

}


class QActionEvent_Adaptor : public QActionEvent, public qt_gsi::QtObjectBase
{
public:

  virtual ~QActionEvent_Adaptor();

  //  [adaptor ctor] QActionEvent::QActionEvent(int type, QAction *action, QAction *before)
  QActionEvent_Adaptor(int type, QAction *action) : QActionEvent(type, action)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QActionEvent::QActionEvent(int type, QAction *action, QAction *before)
  QActionEvent_Adaptor(int type, QAction *action, QAction *before) : QActionEvent(type, action, before)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  
};

QActionEvent_Adaptor::~QActionEvent_Adaptor() { }

//  Constructor QActionEvent::QActionEvent(int type, QAction *action, QAction *before) (adaptor class)

static void _init_ctor_QActionEvent_Adaptor_3169 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("type");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("action");
  decl->add_arg<QAction * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("before", true, "0");
  decl->add_arg<QAction * > (argspec_2);
  decl->set_return_new<QActionEvent_Adaptor> ();
}

static void _call_ctor_QActionEvent_Adaptor_3169 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  QAction *arg2 = args.read<QAction * > (heap);
  QAction *arg3 = args ? args.read<QAction * > (heap) : (QAction *)(0);
  ret.write<QActionEvent_Adaptor *> (new QActionEvent_Adaptor (arg1, arg2, arg3));
}


namespace gsi
{

gsi::Class<QActionEvent> &qtdecl_QActionEvent ();

static gsi::Methods methods_QActionEvent_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QActionEvent::QActionEvent(int type, QAction *action, QAction *before)\nThis method creates an object of class QActionEvent.", &_init_ctor_QActionEvent_Adaptor_3169, &_call_ctor_QActionEvent_Adaptor_3169);
  return methods;
}

gsi::Class<QActionEvent_Adaptor> decl_QActionEvent_Adaptor (qtdecl_QActionEvent (), "QActionEvent",
  methods_QActionEvent_Adaptor (),
  "@qt\n@brief Binding of QActionEvent");

}

