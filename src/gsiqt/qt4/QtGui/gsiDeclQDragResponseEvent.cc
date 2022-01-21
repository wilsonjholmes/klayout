
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
*  @file gsiDeclQDragResponseEvent.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QDragResponseEvent>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QDragResponseEvent

// bool QDragResponseEvent::dragAccepted()


static void _init_f_dragAccepted_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_dragAccepted_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QDragResponseEvent *)cls)->dragAccepted ());
}


namespace gsi
{

static gsi::Methods methods_QDragResponseEvent () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("dragAccepted", "@brief Method bool QDragResponseEvent::dragAccepted()\n", true, &_init_f_dragAccepted_c0, &_call_f_dragAccepted_c0);
  return methods;
}

gsi::Class<QEvent> &qtdecl_QEvent ();

gsi::Class<QDragResponseEvent> decl_QDragResponseEvent (qtdecl_QEvent (), "QtGui", "QDragResponseEvent_Native",
  methods_QDragResponseEvent (),
  "@hide\n@alias QDragResponseEvent");

GSI_QTGUI_PUBLIC gsi::Class<QDragResponseEvent> &qtdecl_QDragResponseEvent () { return decl_QDragResponseEvent; }

}


class QDragResponseEvent_Adaptor : public QDragResponseEvent, public qt_gsi::QtObjectBase
{
public:

  virtual ~QDragResponseEvent_Adaptor();

  //  [adaptor ctor] QDragResponseEvent::QDragResponseEvent(bool accepted)
  QDragResponseEvent_Adaptor(bool accepted) : QDragResponseEvent(accepted)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  
};

QDragResponseEvent_Adaptor::~QDragResponseEvent_Adaptor() { }

//  Constructor QDragResponseEvent::QDragResponseEvent(bool accepted) (adaptor class)

static void _init_ctor_QDragResponseEvent_Adaptor_864 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("accepted");
  decl->add_arg<bool > (argspec_0);
  decl->set_return_new<QDragResponseEvent_Adaptor> ();
}

static void _call_ctor_QDragResponseEvent_Adaptor_864 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  bool arg1 = gsi::arg_reader<bool >() (args, heap);
  ret.write<QDragResponseEvent_Adaptor *> (new QDragResponseEvent_Adaptor (arg1));
}


namespace gsi
{

gsi::Class<QDragResponseEvent> &qtdecl_QDragResponseEvent ();

static gsi::Methods methods_QDragResponseEvent_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QDragResponseEvent::QDragResponseEvent(bool accepted)\nThis method creates an object of class QDragResponseEvent.", &_init_ctor_QDragResponseEvent_Adaptor_864, &_call_ctor_QDragResponseEvent_Adaptor_864);
  return methods;
}

gsi::Class<QDragResponseEvent_Adaptor> decl_QDragResponseEvent_Adaptor (qtdecl_QDragResponseEvent (), "QtGui", "QDragResponseEvent",
  methods_QDragResponseEvent_Adaptor (),
  "@qt\n@brief Binding of QDragResponseEvent");

}

