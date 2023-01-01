
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
*  @file gsiDeclQGraphicsSceneContextMenuEvent.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QGraphicsSceneContextMenuEvent>
#include <QPoint>
#include <QPointF>
#include <QWidget>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QGraphicsSceneContextMenuEvent

// QFlags<Qt::KeyboardModifier> QGraphicsSceneContextMenuEvent::modifiers()


static void _init_f_modifiers_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QFlags<Qt::KeyboardModifier> > ();
}

static void _call_f_modifiers_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QFlags<Qt::KeyboardModifier> > ((QFlags<Qt::KeyboardModifier>)((QGraphicsSceneContextMenuEvent *)cls)->modifiers ());
}


// QPointF QGraphicsSceneContextMenuEvent::pos()


static void _init_f_pos_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPointF > ();
}

static void _call_f_pos_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPointF > ((QPointF)((QGraphicsSceneContextMenuEvent *)cls)->pos ());
}


// QGraphicsSceneContextMenuEvent::Reason QGraphicsSceneContextMenuEvent::reason()


static void _init_f_reason_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QGraphicsSceneContextMenuEvent::Reason>::target_type > ();
}

static void _call_f_reason_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QGraphicsSceneContextMenuEvent::Reason>::target_type > ((qt_gsi::Converter<QGraphicsSceneContextMenuEvent::Reason>::target_type)qt_gsi::CppToQtAdaptor<QGraphicsSceneContextMenuEvent::Reason>(((QGraphicsSceneContextMenuEvent *)cls)->reason ()));
}


// QPointF QGraphicsSceneContextMenuEvent::scenePos()


static void _init_f_scenePos_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPointF > ();
}

static void _call_f_scenePos_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPointF > ((QPointF)((QGraphicsSceneContextMenuEvent *)cls)->scenePos ());
}


// QPoint QGraphicsSceneContextMenuEvent::screenPos()


static void _init_f_screenPos_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPoint > ();
}

static void _call_f_screenPos_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPoint > ((QPoint)((QGraphicsSceneContextMenuEvent *)cls)->screenPos ());
}


// void QGraphicsSceneContextMenuEvent::setModifiers(QFlags<Qt::KeyboardModifier> modifiers)


static void _init_f_setModifiers_3077 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("modifiers");
  decl->add_arg<QFlags<Qt::KeyboardModifier> > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setModifiers_3077 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QFlags<Qt::KeyboardModifier> arg1 = gsi::arg_reader<QFlags<Qt::KeyboardModifier> >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGraphicsSceneContextMenuEvent *)cls)->setModifiers (arg1);
}


// void QGraphicsSceneContextMenuEvent::setPos(const QPointF &pos)


static void _init_f_setPos_1986 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("pos");
  decl->add_arg<const QPointF & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setPos_1986 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPointF &arg1 = gsi::arg_reader<const QPointF & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGraphicsSceneContextMenuEvent *)cls)->setPos (arg1);
}


// void QGraphicsSceneContextMenuEvent::setReason(QGraphicsSceneContextMenuEvent::Reason reason)


static void _init_f_setReason_4220 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("reason");
  decl->add_arg<const qt_gsi::Converter<QGraphicsSceneContextMenuEvent::Reason>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setReason_4220 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QGraphicsSceneContextMenuEvent::Reason>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QGraphicsSceneContextMenuEvent::Reason>::target_type & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGraphicsSceneContextMenuEvent *)cls)->setReason (qt_gsi::QtToCppAdaptor<QGraphicsSceneContextMenuEvent::Reason>(arg1).cref());
}


// void QGraphicsSceneContextMenuEvent::setScenePos(const QPointF &pos)


static void _init_f_setScenePos_1986 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("pos");
  decl->add_arg<const QPointF & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setScenePos_1986 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPointF &arg1 = gsi::arg_reader<const QPointF & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGraphicsSceneContextMenuEvent *)cls)->setScenePos (arg1);
}


// void QGraphicsSceneContextMenuEvent::setScreenPos(const QPoint &pos)


static void _init_f_setScreenPos_1916 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("pos");
  decl->add_arg<const QPoint & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setScreenPos_1916 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPoint &arg1 = gsi::arg_reader<const QPoint & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGraphicsSceneContextMenuEvent *)cls)->setScreenPos (arg1);
}


namespace gsi
{

static gsi::Methods methods_QGraphicsSceneContextMenuEvent () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod (":modifiers", "@brief Method QFlags<Qt::KeyboardModifier> QGraphicsSceneContextMenuEvent::modifiers()\n", true, &_init_f_modifiers_c0, &_call_f_modifiers_c0);
  methods += new qt_gsi::GenericMethod (":pos", "@brief Method QPointF QGraphicsSceneContextMenuEvent::pos()\n", true, &_init_f_pos_c0, &_call_f_pos_c0);
  methods += new qt_gsi::GenericMethod (":reason", "@brief Method QGraphicsSceneContextMenuEvent::Reason QGraphicsSceneContextMenuEvent::reason()\n", true, &_init_f_reason_c0, &_call_f_reason_c0);
  methods += new qt_gsi::GenericMethod (":scenePos", "@brief Method QPointF QGraphicsSceneContextMenuEvent::scenePos()\n", true, &_init_f_scenePos_c0, &_call_f_scenePos_c0);
  methods += new qt_gsi::GenericMethod (":screenPos", "@brief Method QPoint QGraphicsSceneContextMenuEvent::screenPos()\n", true, &_init_f_screenPos_c0, &_call_f_screenPos_c0);
  methods += new qt_gsi::GenericMethod ("setModifiers|modifiers=", "@brief Method void QGraphicsSceneContextMenuEvent::setModifiers(QFlags<Qt::KeyboardModifier> modifiers)\n", false, &_init_f_setModifiers_3077, &_call_f_setModifiers_3077);
  methods += new qt_gsi::GenericMethod ("setPos|pos=", "@brief Method void QGraphicsSceneContextMenuEvent::setPos(const QPointF &pos)\n", false, &_init_f_setPos_1986, &_call_f_setPos_1986);
  methods += new qt_gsi::GenericMethod ("setReason|reason=", "@brief Method void QGraphicsSceneContextMenuEvent::setReason(QGraphicsSceneContextMenuEvent::Reason reason)\n", false, &_init_f_setReason_4220, &_call_f_setReason_4220);
  methods += new qt_gsi::GenericMethod ("setScenePos|scenePos=", "@brief Method void QGraphicsSceneContextMenuEvent::setScenePos(const QPointF &pos)\n", false, &_init_f_setScenePos_1986, &_call_f_setScenePos_1986);
  methods += new qt_gsi::GenericMethod ("setScreenPos|screenPos=", "@brief Method void QGraphicsSceneContextMenuEvent::setScreenPos(const QPoint &pos)\n", false, &_init_f_setScreenPos_1916, &_call_f_setScreenPos_1916);
  return methods;
}

gsi::Class<QGraphicsSceneEvent> &qtdecl_QGraphicsSceneEvent ();

gsi::Class<QGraphicsSceneContextMenuEvent> decl_QGraphicsSceneContextMenuEvent (qtdecl_QGraphicsSceneEvent (), "QtGui", "QGraphicsSceneContextMenuEvent_Native",
  methods_QGraphicsSceneContextMenuEvent (),
  "@hide\n@alias QGraphicsSceneContextMenuEvent");

GSI_QTGUI_PUBLIC gsi::Class<QGraphicsSceneContextMenuEvent> &qtdecl_QGraphicsSceneContextMenuEvent () { return decl_QGraphicsSceneContextMenuEvent; }

}


class QGraphicsSceneContextMenuEvent_Adaptor : public QGraphicsSceneContextMenuEvent, public qt_gsi::QtObjectBase
{
public:

  virtual ~QGraphicsSceneContextMenuEvent_Adaptor();

  //  [adaptor ctor] QGraphicsSceneContextMenuEvent::QGraphicsSceneContextMenuEvent(QEvent::Type type)
  QGraphicsSceneContextMenuEvent_Adaptor() : QGraphicsSceneContextMenuEvent()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QGraphicsSceneContextMenuEvent::QGraphicsSceneContextMenuEvent(QEvent::Type type)
  QGraphicsSceneContextMenuEvent_Adaptor(QEvent::Type type) : QGraphicsSceneContextMenuEvent(type)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  
};

QGraphicsSceneContextMenuEvent_Adaptor::~QGraphicsSceneContextMenuEvent_Adaptor() { }

//  Constructor QGraphicsSceneContextMenuEvent::QGraphicsSceneContextMenuEvent(QEvent::Type type) (adaptor class)

static void _init_ctor_QGraphicsSceneContextMenuEvent_Adaptor_1565 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("type", true, "QEvent::None");
  decl->add_arg<const qt_gsi::Converter<QEvent::Type>::target_type & > (argspec_0);
  decl->set_return_new<QGraphicsSceneContextMenuEvent_Adaptor> ();
}

static void _call_ctor_QGraphicsSceneContextMenuEvent_Adaptor_1565 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QEvent::Type>::target_type & arg1 = args ? gsi::arg_reader<const qt_gsi::Converter<QEvent::Type>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<QEvent::Type>::target_type & >() (qt_gsi::CppToQtReadAdaptor<QEvent::Type>(heap, QEvent::None), heap);
  ret.write<QGraphicsSceneContextMenuEvent_Adaptor *> (new QGraphicsSceneContextMenuEvent_Adaptor (qt_gsi::QtToCppAdaptor<QEvent::Type>(arg1).cref()));
}


namespace gsi
{

gsi::Class<QGraphicsSceneContextMenuEvent> &qtdecl_QGraphicsSceneContextMenuEvent ();

static gsi::Methods methods_QGraphicsSceneContextMenuEvent_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QGraphicsSceneContextMenuEvent::QGraphicsSceneContextMenuEvent(QEvent::Type type)\nThis method creates an object of class QGraphicsSceneContextMenuEvent.", &_init_ctor_QGraphicsSceneContextMenuEvent_Adaptor_1565, &_call_ctor_QGraphicsSceneContextMenuEvent_Adaptor_1565);
  return methods;
}

gsi::Class<QGraphicsSceneContextMenuEvent_Adaptor> decl_QGraphicsSceneContextMenuEvent_Adaptor (qtdecl_QGraphicsSceneContextMenuEvent (), "QtGui", "QGraphicsSceneContextMenuEvent",
  methods_QGraphicsSceneContextMenuEvent_Adaptor (),
  "@qt\n@brief Binding of QGraphicsSceneContextMenuEvent");

}


//  Implementation of the enum wrapper class for QGraphicsSceneContextMenuEvent::Reason
namespace qt_gsi
{

static gsi::Enum<QGraphicsSceneContextMenuEvent::Reason> decl_QGraphicsSceneContextMenuEvent_Reason_Enum ("QtGui", "QGraphicsSceneContextMenuEvent_Reason",
    gsi::enum_const ("Mouse", QGraphicsSceneContextMenuEvent::Mouse, "@brief Enum constant QGraphicsSceneContextMenuEvent::Mouse") +
    gsi::enum_const ("Keyboard", QGraphicsSceneContextMenuEvent::Keyboard, "@brief Enum constant QGraphicsSceneContextMenuEvent::Keyboard") +
    gsi::enum_const ("Other", QGraphicsSceneContextMenuEvent::Other, "@brief Enum constant QGraphicsSceneContextMenuEvent::Other"),
  "@qt\n@brief This class represents the QGraphicsSceneContextMenuEvent::Reason enum");

static gsi::QFlagsClass<QGraphicsSceneContextMenuEvent::Reason > decl_QGraphicsSceneContextMenuEvent_Reason_Enums ("QtGui", "QGraphicsSceneContextMenuEvent_QFlags_Reason",
  "@qt\n@brief This class represents the QFlags<QGraphicsSceneContextMenuEvent::Reason> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QGraphicsSceneContextMenuEvent> inject_QGraphicsSceneContextMenuEvent_Reason_Enum_in_parent (decl_QGraphicsSceneContextMenuEvent_Reason_Enum.defs ());
static gsi::ClassExt<QGraphicsSceneContextMenuEvent> decl_QGraphicsSceneContextMenuEvent_Reason_Enum_as_child (decl_QGraphicsSceneContextMenuEvent_Reason_Enum, "Reason");
static gsi::ClassExt<QGraphicsSceneContextMenuEvent> decl_QGraphicsSceneContextMenuEvent_Reason_Enums_as_child (decl_QGraphicsSceneContextMenuEvent_Reason_Enums, "QFlags_Reason");

}

