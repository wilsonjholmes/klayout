
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
*  @file gsiDeclQDropEvent.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QDropEvent>
#include <QMimeData>
#include <QObject>
#include <QPoint>
#include <QPointF>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QDropEvent

// void QDropEvent::acceptProposedAction()


static void _init_f_acceptProposedAction_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_acceptProposedAction_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QDropEvent *)cls)->acceptProposedAction ();
}


// QFlags<Qt::MouseButton> QDropEvent::buttons()


static void _init_f_buttons_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QFlags<Qt::MouseButton> > ();
}

static void _call_f_buttons_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QFlags<Qt::MouseButton> > ((QFlags<Qt::MouseButton>)((QDropEvent *)cls)->buttons ());
}


// Qt::DropAction QDropEvent::dropAction()


static void _init_f_dropAction_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<Qt::DropAction>::target_type > ();
}

static void _call_f_dropAction_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<Qt::DropAction>::target_type > ((qt_gsi::Converter<Qt::DropAction>::target_type)qt_gsi::CppToQtAdaptor<Qt::DropAction>(((QDropEvent *)cls)->dropAction ()));
}


// QFlags<Qt::KeyboardModifier> QDropEvent::keyboardModifiers()


static void _init_f_keyboardModifiers_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QFlags<Qt::KeyboardModifier> > ();
}

static void _call_f_keyboardModifiers_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QFlags<Qt::KeyboardModifier> > ((QFlags<Qt::KeyboardModifier>)((QDropEvent *)cls)->keyboardModifiers ());
}


// const QMimeData *QDropEvent::mimeData()


static void _init_f_mimeData_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const QMimeData * > ();
}

static void _call_f_mimeData_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const QMimeData * > ((const QMimeData *)((QDropEvent *)cls)->mimeData ());
}


// QFlags<Qt::KeyboardModifier> QDropEvent::modifiers()


static void _init_f_modifiers_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QFlags<Qt::KeyboardModifier> > ();
}

static void _call_f_modifiers_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QFlags<Qt::KeyboardModifier> > ((QFlags<Qt::KeyboardModifier>)((QDropEvent *)cls)->modifiers ());
}


// QFlags<Qt::MouseButton> QDropEvent::mouseButtons()


static void _init_f_mouseButtons_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QFlags<Qt::MouseButton> > ();
}

static void _call_f_mouseButtons_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QFlags<Qt::MouseButton> > ((QFlags<Qt::MouseButton>)((QDropEvent *)cls)->mouseButtons ());
}


// QPoint QDropEvent::pos()


static void _init_f_pos_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPoint > ();
}

static void _call_f_pos_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPoint > ((QPoint)((QDropEvent *)cls)->pos ());
}


// QPointF QDropEvent::posF()


static void _init_f_posF_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPointF > ();
}

static void _call_f_posF_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPointF > ((QPointF)((QDropEvent *)cls)->posF ());
}


// QPointF QDropEvent::position()


static void _init_f_position_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPointF > ();
}

static void _call_f_position_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPointF > ((QPointF)((QDropEvent *)cls)->position ());
}


// QFlags<Qt::DropAction> QDropEvent::possibleActions()


static void _init_f_possibleActions_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QFlags<Qt::DropAction> > ();
}

static void _call_f_possibleActions_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QFlags<Qt::DropAction> > ((QFlags<Qt::DropAction>)((QDropEvent *)cls)->possibleActions ());
}


// Qt::DropAction QDropEvent::proposedAction()


static void _init_f_proposedAction_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<Qt::DropAction>::target_type > ();
}

static void _call_f_proposedAction_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<Qt::DropAction>::target_type > ((qt_gsi::Converter<Qt::DropAction>::target_type)qt_gsi::CppToQtAdaptor<Qt::DropAction>(((QDropEvent *)cls)->proposedAction ()));
}


// void QDropEvent::setDropAction(Qt::DropAction action)


static void _init_f_setDropAction_1760 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("action");
  decl->add_arg<const qt_gsi::Converter<Qt::DropAction>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setDropAction_1760 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<Qt::DropAction>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<Qt::DropAction>::target_type & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QDropEvent *)cls)->setDropAction (qt_gsi::QtToCppAdaptor<Qt::DropAction>(arg1).cref());
}


// QObject *QDropEvent::source()


static void _init_f_source_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_f_source_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QDropEvent *)cls)->source ());
}


namespace gsi
{

static gsi::Methods methods_QDropEvent () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("acceptProposedAction", "@brief Method void QDropEvent::acceptProposedAction()\n", false, &_init_f_acceptProposedAction_0, &_call_f_acceptProposedAction_0);
  methods += new qt_gsi::GenericMethod ("buttons", "@brief Method QFlags<Qt::MouseButton> QDropEvent::buttons()\n", true, &_init_f_buttons_c0, &_call_f_buttons_c0);
  methods += new qt_gsi::GenericMethod (":dropAction", "@brief Method Qt::DropAction QDropEvent::dropAction()\n", true, &_init_f_dropAction_c0, &_call_f_dropAction_c0);
  methods += new qt_gsi::GenericMethod ("keyboardModifiers", "@brief Method QFlags<Qt::KeyboardModifier> QDropEvent::keyboardModifiers()\n", true, &_init_f_keyboardModifiers_c0, &_call_f_keyboardModifiers_c0);
  methods += new qt_gsi::GenericMethod ("mimeData", "@brief Method const QMimeData *QDropEvent::mimeData()\n", true, &_init_f_mimeData_c0, &_call_f_mimeData_c0);
  methods += new qt_gsi::GenericMethod ("modifiers", "@brief Method QFlags<Qt::KeyboardModifier> QDropEvent::modifiers()\n", true, &_init_f_modifiers_c0, &_call_f_modifiers_c0);
  methods += new qt_gsi::GenericMethod ("mouseButtons", "@brief Method QFlags<Qt::MouseButton> QDropEvent::mouseButtons()\n", true, &_init_f_mouseButtons_c0, &_call_f_mouseButtons_c0);
  methods += new qt_gsi::GenericMethod ("pos", "@brief Method QPoint QDropEvent::pos()\n", true, &_init_f_pos_c0, &_call_f_pos_c0);
  methods += new qt_gsi::GenericMethod ("posF", "@brief Method QPointF QDropEvent::posF()\n", true, &_init_f_posF_c0, &_call_f_posF_c0);
  methods += new qt_gsi::GenericMethod ("position", "@brief Method QPointF QDropEvent::position()\n", true, &_init_f_position_c0, &_call_f_position_c0);
  methods += new qt_gsi::GenericMethod ("possibleActions", "@brief Method QFlags<Qt::DropAction> QDropEvent::possibleActions()\n", true, &_init_f_possibleActions_c0, &_call_f_possibleActions_c0);
  methods += new qt_gsi::GenericMethod ("proposedAction", "@brief Method Qt::DropAction QDropEvent::proposedAction()\n", true, &_init_f_proposedAction_c0, &_call_f_proposedAction_c0);
  methods += new qt_gsi::GenericMethod ("setDropAction|dropAction=", "@brief Method void QDropEvent::setDropAction(Qt::DropAction action)\n", false, &_init_f_setDropAction_1760, &_call_f_setDropAction_1760);
  methods += new qt_gsi::GenericMethod ("source", "@brief Method QObject *QDropEvent::source()\n", true, &_init_f_source_c0, &_call_f_source_c0);
  return methods;
}

gsi::Class<QEvent> &qtdecl_QEvent ();

gsi::Class<QDropEvent> decl_QDropEvent (qtdecl_QEvent (), "QtGui", "QDropEvent_Native",
  methods_QDropEvent (),
  "@hide\n@alias QDropEvent");

GSI_QTGUI_PUBLIC gsi::Class<QDropEvent> &qtdecl_QDropEvent () { return decl_QDropEvent; }

}


class QDropEvent_Adaptor : public QDropEvent, public qt_gsi::QtObjectBase
{
public:

  virtual ~QDropEvent_Adaptor();

  //  [adaptor ctor] QDropEvent::QDropEvent(const QPointF &pos, QFlags<Qt::DropAction> actions, const QMimeData *data, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, QEvent::Type type)
  QDropEvent_Adaptor(const QPointF &pos, QFlags<Qt::DropAction> actions, const QMimeData *data, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers) : QDropEvent(pos, actions, data, buttons, modifiers)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QDropEvent::QDropEvent(const QPointF &pos, QFlags<Qt::DropAction> actions, const QMimeData *data, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, QEvent::Type type)
  QDropEvent_Adaptor(const QPointF &pos, QFlags<Qt::DropAction> actions, const QMimeData *data, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, QEvent::Type type) : QDropEvent(pos, actions, data, buttons, modifiers, type)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor impl] void QDropEvent::setAccepted(bool accepted)
  void cbs_setAccepted_864_0(bool accepted)
  {
    QDropEvent::setAccepted(accepted);
  }

  virtual void setAccepted(bool accepted)
  {
    if (cb_setAccepted_864_0.can_issue()) {
      cb_setAccepted_864_0.issue<QDropEvent_Adaptor, bool>(&QDropEvent_Adaptor::cbs_setAccepted_864_0, accepted);
    } else {
      QDropEvent::setAccepted(accepted);
    }
  }

  gsi::Callback cb_setAccepted_864_0;
};

QDropEvent_Adaptor::~QDropEvent_Adaptor() { }

//  Constructor QDropEvent::QDropEvent(const QPointF &pos, QFlags<Qt::DropAction> actions, const QMimeData *data, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, QEvent::Type type) (adaptor class)

static void _init_ctor_QDropEvent_Adaptor_13314 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("pos");
  decl->add_arg<const QPointF & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("actions");
  decl->add_arg<QFlags<Qt::DropAction> > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("data");
  decl->add_arg<const QMimeData * > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("buttons");
  decl->add_arg<QFlags<Qt::MouseButton> > (argspec_3);
  static gsi::ArgSpecBase argspec_4 ("modifiers");
  decl->add_arg<QFlags<Qt::KeyboardModifier> > (argspec_4);
  static gsi::ArgSpecBase argspec_5 ("type", true, "QEvent::Drop");
  decl->add_arg<const qt_gsi::Converter<QEvent::Type>::target_type & > (argspec_5);
  decl->set_return_new<QDropEvent_Adaptor> ();
}

static void _call_ctor_QDropEvent_Adaptor_13314 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPointF &arg1 = gsi::arg_reader<const QPointF & >() (args, heap);
  QFlags<Qt::DropAction> arg2 = gsi::arg_reader<QFlags<Qt::DropAction> >() (args, heap);
  const QMimeData *arg3 = gsi::arg_reader<const QMimeData * >() (args, heap);
  QFlags<Qt::MouseButton> arg4 = gsi::arg_reader<QFlags<Qt::MouseButton> >() (args, heap);
  QFlags<Qt::KeyboardModifier> arg5 = gsi::arg_reader<QFlags<Qt::KeyboardModifier> >() (args, heap);
  const qt_gsi::Converter<QEvent::Type>::target_type & arg6 = args ? gsi::arg_reader<const qt_gsi::Converter<QEvent::Type>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<QEvent::Type>::target_type & >() (qt_gsi::CppToQtReadAdaptor<QEvent::Type>(heap, QEvent::Drop), heap);
  ret.write<QDropEvent_Adaptor *> (new QDropEvent_Adaptor (arg1, arg2, arg3, arg4, arg5, qt_gsi::QtToCppAdaptor<QEvent::Type>(arg6).cref()));
}


// void QDropEvent::setAccepted(bool accepted)

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
  ((QDropEvent_Adaptor *)cls)->cbs_setAccepted_864_0 (arg1);
}

static void _set_callback_cbs_setAccepted_864_0 (void *cls, const gsi::Callback &cb)
{
  ((QDropEvent_Adaptor *)cls)->cb_setAccepted_864_0 = cb;
}


namespace gsi
{

gsi::Class<QDropEvent> &qtdecl_QDropEvent ();

static gsi::Methods methods_QDropEvent_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QDropEvent::QDropEvent(const QPointF &pos, QFlags<Qt::DropAction> actions, const QMimeData *data, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, QEvent::Type type)\nThis method creates an object of class QDropEvent.", &_init_ctor_QDropEvent_Adaptor_13314, &_call_ctor_QDropEvent_Adaptor_13314);
  methods += new qt_gsi::GenericMethod ("setAccepted", "@brief Virtual method void QDropEvent::setAccepted(bool accepted)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_setAccepted_864_0, &_call_cbs_setAccepted_864_0);
  methods += new qt_gsi::GenericMethod ("setAccepted", "@hide", false, &_init_cbs_setAccepted_864_0, &_call_cbs_setAccepted_864_0, &_set_callback_cbs_setAccepted_864_0);
  return methods;
}

gsi::Class<QDropEvent_Adaptor> decl_QDropEvent_Adaptor (qtdecl_QDropEvent (), "QtGui", "QDropEvent",
  methods_QDropEvent_Adaptor (),
  "@qt\n@brief Binding of QDropEvent");

}

