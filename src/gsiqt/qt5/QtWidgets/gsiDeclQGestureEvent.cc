
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
*  @file gsiDeclQGestureEvent.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QGestureEvent>
#include <QEvent>
#include <QGesture>
#include <QPointF>
#include <QWidget>
#include "gsiQt.h"
#include "gsiQtWidgetsCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QGestureEvent

// void QGestureEvent::accept()


static void _init_f_accept_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_accept_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGestureEvent *)cls)->accept ();
}


// void QGestureEvent::accept(QGesture *)


static void _init_f_accept_1438 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QGesture * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_accept_1438 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QGesture *arg1 = gsi::arg_reader<QGesture * >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGestureEvent *)cls)->accept (arg1);
}


// void QGestureEvent::accept(Qt::GestureType)


static void _init_f_accept_1902 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const qt_gsi::Converter<Qt::GestureType>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_accept_1902 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<Qt::GestureType>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<Qt::GestureType>::target_type & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGestureEvent *)cls)->accept (qt_gsi::QtToCppAdaptor<Qt::GestureType>(arg1).cref());
}


// QList<QGesture *> QGestureEvent::activeGestures()


static void _init_f_activeGestures_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QList<QGesture *> > ();
}

static void _call_f_activeGestures_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<QGesture *> > ((QList<QGesture *>)((QGestureEvent *)cls)->activeGestures ());
}


// QList<QGesture *> QGestureEvent::canceledGestures()


static void _init_f_canceledGestures_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QList<QGesture *> > ();
}

static void _call_f_canceledGestures_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<QGesture *> > ((QList<QGesture *>)((QGestureEvent *)cls)->canceledGestures ());
}


// QGesture *QGestureEvent::gesture(Qt::GestureType type)


static void _init_f_gesture_c1902 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("type");
  decl->add_arg<const qt_gsi::Converter<Qt::GestureType>::target_type & > (argspec_0);
  decl->set_return<QGesture * > ();
}

static void _call_f_gesture_c1902 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<Qt::GestureType>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<Qt::GestureType>::target_type & >() (args, heap);
  ret.write<QGesture * > ((QGesture *)((QGestureEvent *)cls)->gesture (qt_gsi::QtToCppAdaptor<Qt::GestureType>(arg1).cref()));
}


// QList<QGesture *> QGestureEvent::gestures()


static void _init_f_gestures_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QList<QGesture *> > ();
}

static void _call_f_gestures_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<QGesture *> > ((QList<QGesture *>)((QGestureEvent *)cls)->gestures ());
}


// void QGestureEvent::ignore()


static void _init_f_ignore_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_ignore_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGestureEvent *)cls)->ignore ();
}


// void QGestureEvent::ignore(QGesture *)


static void _init_f_ignore_1438 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QGesture * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_ignore_1438 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QGesture *arg1 = gsi::arg_reader<QGesture * >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGestureEvent *)cls)->ignore (arg1);
}


// void QGestureEvent::ignore(Qt::GestureType)


static void _init_f_ignore_1902 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const qt_gsi::Converter<Qt::GestureType>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_ignore_1902 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<Qt::GestureType>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<Qt::GestureType>::target_type & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGestureEvent *)cls)->ignore (qt_gsi::QtToCppAdaptor<Qt::GestureType>(arg1).cref());
}


// bool QGestureEvent::isAccepted()


static void _init_f_isAccepted_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isAccepted_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QGestureEvent *)cls)->isAccepted ());
}


// bool QGestureEvent::isAccepted(QGesture *)


static void _init_f_isAccepted_c1438 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QGesture * > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_isAccepted_c1438 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QGesture *arg1 = gsi::arg_reader<QGesture * >() (args, heap);
  ret.write<bool > ((bool)((QGestureEvent *)cls)->isAccepted (arg1));
}


// bool QGestureEvent::isAccepted(Qt::GestureType)


static void _init_f_isAccepted_c1902 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const qt_gsi::Converter<Qt::GestureType>::target_type & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_isAccepted_c1902 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<Qt::GestureType>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<Qt::GestureType>::target_type & >() (args, heap);
  ret.write<bool > ((bool)((QGestureEvent *)cls)->isAccepted (qt_gsi::QtToCppAdaptor<Qt::GestureType>(arg1).cref()));
}


// QPointF QGestureEvent::mapToGraphicsScene(const QPointF &gesturePoint)


static void _init_f_mapToGraphicsScene_c1986 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("gesturePoint");
  decl->add_arg<const QPointF & > (argspec_0);
  decl->set_return<QPointF > ();
}

static void _call_f_mapToGraphicsScene_c1986 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPointF &arg1 = gsi::arg_reader<const QPointF & >() (args, heap);
  ret.write<QPointF > ((QPointF)((QGestureEvent *)cls)->mapToGraphicsScene (arg1));
}


// void QGestureEvent::setAccepted(bool accepted)


static void _init_f_setAccepted_864 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("accepted");
  decl->add_arg<bool > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setAccepted_864 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  bool arg1 = gsi::arg_reader<bool >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGestureEvent *)cls)->setAccepted (arg1);
}


// void QGestureEvent::setAccepted(QGesture *, bool)


static void _init_f_setAccepted_2194 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QGesture * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("arg2");
  decl->add_arg<bool > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setAccepted_2194 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QGesture *arg1 = gsi::arg_reader<QGesture * >() (args, heap);
  bool arg2 = gsi::arg_reader<bool >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGestureEvent *)cls)->setAccepted (arg1, arg2);
}


// void QGestureEvent::setAccepted(Qt::GestureType, bool)


static void _init_f_setAccepted_2658 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const qt_gsi::Converter<Qt::GestureType>::target_type & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("arg2");
  decl->add_arg<bool > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setAccepted_2658 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<Qt::GestureType>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<Qt::GestureType>::target_type & >() (args, heap);
  bool arg2 = gsi::arg_reader<bool >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGestureEvent *)cls)->setAccepted (qt_gsi::QtToCppAdaptor<Qt::GestureType>(arg1).cref(), arg2);
}


// void QGestureEvent::setWidget(QWidget *widget)


static void _init_f_setWidget_1315 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("widget");
  decl->add_arg<QWidget * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setWidget_1315 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QWidget *arg1 = gsi::arg_reader<QWidget * >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGestureEvent *)cls)->setWidget (arg1);
}


// QWidget *QGestureEvent::widget()


static void _init_f_widget_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QWidget * > ();
}

static void _call_f_widget_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QWidget * > ((QWidget *)((QGestureEvent *)cls)->widget ());
}


namespace gsi
{

static gsi::Methods methods_QGestureEvent () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("accept", "@brief Method void QGestureEvent::accept()\n", false, &_init_f_accept_0, &_call_f_accept_0);
  methods += new qt_gsi::GenericMethod ("accept", "@brief Method void QGestureEvent::accept(QGesture *)\n", false, &_init_f_accept_1438, &_call_f_accept_1438);
  methods += new qt_gsi::GenericMethod ("accept", "@brief Method void QGestureEvent::accept(Qt::GestureType)\n", false, &_init_f_accept_1902, &_call_f_accept_1902);
  methods += new qt_gsi::GenericMethod ("activeGestures", "@brief Method QList<QGesture *> QGestureEvent::activeGestures()\n", true, &_init_f_activeGestures_c0, &_call_f_activeGestures_c0);
  methods += new qt_gsi::GenericMethod ("canceledGestures", "@brief Method QList<QGesture *> QGestureEvent::canceledGestures()\n", true, &_init_f_canceledGestures_c0, &_call_f_canceledGestures_c0);
  methods += new qt_gsi::GenericMethod ("gesture", "@brief Method QGesture *QGestureEvent::gesture(Qt::GestureType type)\n", true, &_init_f_gesture_c1902, &_call_f_gesture_c1902);
  methods += new qt_gsi::GenericMethod ("gestures", "@brief Method QList<QGesture *> QGestureEvent::gestures()\n", true, &_init_f_gestures_c0, &_call_f_gestures_c0);
  methods += new qt_gsi::GenericMethod ("ignore", "@brief Method void QGestureEvent::ignore()\n", false, &_init_f_ignore_0, &_call_f_ignore_0);
  methods += new qt_gsi::GenericMethod ("ignore", "@brief Method void QGestureEvent::ignore(QGesture *)\n", false, &_init_f_ignore_1438, &_call_f_ignore_1438);
  methods += new qt_gsi::GenericMethod ("ignore", "@brief Method void QGestureEvent::ignore(Qt::GestureType)\n", false, &_init_f_ignore_1902, &_call_f_ignore_1902);
  methods += new qt_gsi::GenericMethod ("isAccepted?|:accepted", "@brief Method bool QGestureEvent::isAccepted()\n", true, &_init_f_isAccepted_c0, &_call_f_isAccepted_c0);
  methods += new qt_gsi::GenericMethod ("isAccepted?", "@brief Method bool QGestureEvent::isAccepted(QGesture *)\n", true, &_init_f_isAccepted_c1438, &_call_f_isAccepted_c1438);
  methods += new qt_gsi::GenericMethod ("isAccepted?", "@brief Method bool QGestureEvent::isAccepted(Qt::GestureType)\n", true, &_init_f_isAccepted_c1902, &_call_f_isAccepted_c1902);
  methods += new qt_gsi::GenericMethod ("mapToGraphicsScene", "@brief Method QPointF QGestureEvent::mapToGraphicsScene(const QPointF &gesturePoint)\n", true, &_init_f_mapToGraphicsScene_c1986, &_call_f_mapToGraphicsScene_c1986);
  methods += new qt_gsi::GenericMethod ("setAccepted|accepted=", "@brief Method void QGestureEvent::setAccepted(bool accepted)\n", false, &_init_f_setAccepted_864, &_call_f_setAccepted_864);
  methods += new qt_gsi::GenericMethod ("setAccepted", "@brief Method void QGestureEvent::setAccepted(QGesture *, bool)\n", false, &_init_f_setAccepted_2194, &_call_f_setAccepted_2194);
  methods += new qt_gsi::GenericMethod ("setAccepted", "@brief Method void QGestureEvent::setAccepted(Qt::GestureType, bool)\n", false, &_init_f_setAccepted_2658, &_call_f_setAccepted_2658);
  methods += new qt_gsi::GenericMethod ("setWidget|widget=", "@brief Method void QGestureEvent::setWidget(QWidget *widget)\n", false, &_init_f_setWidget_1315, &_call_f_setWidget_1315);
  methods += new qt_gsi::GenericMethod (":widget", "@brief Method QWidget *QGestureEvent::widget()\n", true, &_init_f_widget_c0, &_call_f_widget_c0);
  return methods;
}

gsi::Class<QEvent> &qtdecl_QEvent ();

gsi::Class<QGestureEvent> decl_QGestureEvent (qtdecl_QEvent (), "QtWidgets", "QGestureEvent_Native",
  methods_QGestureEvent (),
  "@hide\n@alias QGestureEvent");

GSI_QTWIDGETS_PUBLIC gsi::Class<QGestureEvent> &qtdecl_QGestureEvent () { return decl_QGestureEvent; }

}


class QGestureEvent_Adaptor : public QGestureEvent, public qt_gsi::QtObjectBase
{
public:

  virtual ~QGestureEvent_Adaptor();

  //  [adaptor ctor] QGestureEvent::QGestureEvent(const QList<QGesture *> &gestures)
  QGestureEvent_Adaptor(const QList<QGesture *> &gestures) : QGestureEvent(gestures)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  
};

QGestureEvent_Adaptor::~QGestureEvent_Adaptor() { }

//  Constructor QGestureEvent::QGestureEvent(const QList<QGesture *> &gestures) (adaptor class)

static void _init_ctor_QGestureEvent_Adaptor_2930 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("gestures");
  decl->add_arg<const QList<QGesture *> & > (argspec_0);
  decl->set_return_new<QGestureEvent_Adaptor> ();
}

static void _call_ctor_QGestureEvent_Adaptor_2930 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QList<QGesture *> &arg1 = gsi::arg_reader<const QList<QGesture *> & >() (args, heap);
  ret.write<QGestureEvent_Adaptor *> (new QGestureEvent_Adaptor (arg1));
}


namespace gsi
{

gsi::Class<QGestureEvent> &qtdecl_QGestureEvent ();

static gsi::Methods methods_QGestureEvent_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QGestureEvent::QGestureEvent(const QList<QGesture *> &gestures)\nThis method creates an object of class QGestureEvent.", &_init_ctor_QGestureEvent_Adaptor_2930, &_call_ctor_QGestureEvent_Adaptor_2930);
  return methods;
}

gsi::Class<QGestureEvent_Adaptor> decl_QGestureEvent_Adaptor (qtdecl_QGestureEvent (), "QtWidgets", "QGestureEvent",
  methods_QGestureEvent_Adaptor (),
  "@qt\n@brief Binding of QGestureEvent");

}

