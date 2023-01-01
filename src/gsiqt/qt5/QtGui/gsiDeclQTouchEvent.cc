
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
*  @file gsiDeclQTouchEvent.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QTouchEvent>
#include <QEvent>
#include <QObject>
#include <QTouchDevice>
#include <QWindow>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QTouchEvent

// QTouchDevice *QTouchEvent::device()


static void _init_f_device_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QTouchDevice * > ();
}

static void _call_f_device_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTouchDevice * > ((QTouchDevice *)((QTouchEvent *)cls)->device ());
}


// void QTouchEvent::setDevice(QTouchDevice *adevice)


static void _init_f_setDevice_1810 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("adevice");
  decl->add_arg<QTouchDevice * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setDevice_1810 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QTouchDevice *arg1 = gsi::arg_reader<QTouchDevice * >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTouchEvent *)cls)->setDevice (arg1);
}


// void QTouchEvent::setTarget(QObject *atarget)


static void _init_f_setTarget_1302 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("atarget");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setTarget_1302 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = gsi::arg_reader<QObject * >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTouchEvent *)cls)->setTarget (arg1);
}


// void QTouchEvent::setTouchPointStates(QFlags<Qt::TouchPointState> aTouchPointStates)


static void _init_f_setTouchPointStates_2995 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("aTouchPointStates");
  decl->add_arg<QFlags<Qt::TouchPointState> > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setTouchPointStates_2995 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QFlags<Qt::TouchPointState> arg1 = gsi::arg_reader<QFlags<Qt::TouchPointState> >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTouchEvent *)cls)->setTouchPointStates (arg1);
}


// void QTouchEvent::setTouchPoints(const QList<QTouchEvent::TouchPoint> &atouchPoints)


static void _init_f_setTouchPoints_4191 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("atouchPoints");
  decl->add_arg<const QList<QTouchEvent::TouchPoint> & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setTouchPoints_4191 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QList<QTouchEvent::TouchPoint> &arg1 = gsi::arg_reader<const QList<QTouchEvent::TouchPoint> & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTouchEvent *)cls)->setTouchPoints (arg1);
}


// void QTouchEvent::setWindow(QWindow *awindow)


static void _init_f_setWindow_1335 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("awindow");
  decl->add_arg<QWindow * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setWindow_1335 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QWindow *arg1 = gsi::arg_reader<QWindow * >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTouchEvent *)cls)->setWindow (arg1);
}


// QObject *QTouchEvent::target()


static void _init_f_target_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_f_target_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QTouchEvent *)cls)->target ());
}


// QFlags<Qt::TouchPointState> QTouchEvent::touchPointStates()


static void _init_f_touchPointStates_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QFlags<Qt::TouchPointState> > ();
}

static void _call_f_touchPointStates_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QFlags<Qt::TouchPointState> > ((QFlags<Qt::TouchPointState>)((QTouchEvent *)cls)->touchPointStates ());
}


// const QList<QTouchEvent::TouchPoint> &QTouchEvent::touchPoints()


static void _init_f_touchPoints_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const QList<QTouchEvent::TouchPoint> & > ();
}

static void _call_f_touchPoints_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const QList<QTouchEvent::TouchPoint> & > ((const QList<QTouchEvent::TouchPoint> &)((QTouchEvent *)cls)->touchPoints ());
}


// QWindow *QTouchEvent::window()


static void _init_f_window_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QWindow * > ();
}

static void _call_f_window_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QWindow * > ((QWindow *)((QTouchEvent *)cls)->window ());
}


namespace gsi
{

static gsi::Methods methods_QTouchEvent () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod (":device", "@brief Method QTouchDevice *QTouchEvent::device()\n", true, &_init_f_device_c0, &_call_f_device_c0);
  methods += new qt_gsi::GenericMethod ("setDevice|device=", "@brief Method void QTouchEvent::setDevice(QTouchDevice *adevice)\n", false, &_init_f_setDevice_1810, &_call_f_setDevice_1810);
  methods += new qt_gsi::GenericMethod ("setTarget|target=", "@brief Method void QTouchEvent::setTarget(QObject *atarget)\n", false, &_init_f_setTarget_1302, &_call_f_setTarget_1302);
  methods += new qt_gsi::GenericMethod ("setTouchPointStates|touchPointStates=", "@brief Method void QTouchEvent::setTouchPointStates(QFlags<Qt::TouchPointState> aTouchPointStates)\n", false, &_init_f_setTouchPointStates_2995, &_call_f_setTouchPointStates_2995);
  methods += new qt_gsi::GenericMethod ("setTouchPoints|touchPoints=", "@brief Method void QTouchEvent::setTouchPoints(const QList<QTouchEvent::TouchPoint> &atouchPoints)\n", false, &_init_f_setTouchPoints_4191, &_call_f_setTouchPoints_4191);
  methods += new qt_gsi::GenericMethod ("setWindow|window=", "@brief Method void QTouchEvent::setWindow(QWindow *awindow)\n", false, &_init_f_setWindow_1335, &_call_f_setWindow_1335);
  methods += new qt_gsi::GenericMethod (":target", "@brief Method QObject *QTouchEvent::target()\n", true, &_init_f_target_c0, &_call_f_target_c0);
  methods += new qt_gsi::GenericMethod (":touchPointStates", "@brief Method QFlags<Qt::TouchPointState> QTouchEvent::touchPointStates()\n", true, &_init_f_touchPointStates_c0, &_call_f_touchPointStates_c0);
  methods += new qt_gsi::GenericMethod (":touchPoints", "@brief Method const QList<QTouchEvent::TouchPoint> &QTouchEvent::touchPoints()\n", true, &_init_f_touchPoints_c0, &_call_f_touchPoints_c0);
  methods += new qt_gsi::GenericMethod (":window", "@brief Method QWindow *QTouchEvent::window()\n", true, &_init_f_window_c0, &_call_f_window_c0);
  return methods;
}

gsi::Class<QInputEvent> &qtdecl_QInputEvent ();

gsi::Class<QTouchEvent> decl_QTouchEvent (qtdecl_QInputEvent (), "QtGui", "QTouchEvent_Native",
  methods_QTouchEvent (),
  "@hide\n@alias QTouchEvent");

GSI_QTGUI_PUBLIC gsi::Class<QTouchEvent> &qtdecl_QTouchEvent () { return decl_QTouchEvent; }

}


class QTouchEvent_Adaptor : public QTouchEvent, public qt_gsi::QtObjectBase
{
public:

  virtual ~QTouchEvent_Adaptor();

  //  [adaptor ctor] QTouchEvent::QTouchEvent(QEvent::Type eventType, QTouchDevice *device, QFlags<Qt::KeyboardModifier> modifiers, QFlags<Qt::TouchPointState> touchPointStates, const QList<QTouchEvent::TouchPoint> &touchPoints)
  QTouchEvent_Adaptor(QEvent::Type eventType) : QTouchEvent(eventType)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QTouchEvent::QTouchEvent(QEvent::Type eventType, QTouchDevice *device, QFlags<Qt::KeyboardModifier> modifiers, QFlags<Qt::TouchPointState> touchPointStates, const QList<QTouchEvent::TouchPoint> &touchPoints)
  QTouchEvent_Adaptor(QEvent::Type eventType, QTouchDevice *device) : QTouchEvent(eventType, device)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QTouchEvent::QTouchEvent(QEvent::Type eventType, QTouchDevice *device, QFlags<Qt::KeyboardModifier> modifiers, QFlags<Qt::TouchPointState> touchPointStates, const QList<QTouchEvent::TouchPoint> &touchPoints)
  QTouchEvent_Adaptor(QEvent::Type eventType, QTouchDevice *device, QFlags<Qt::KeyboardModifier> modifiers) : QTouchEvent(eventType, device, modifiers)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QTouchEvent::QTouchEvent(QEvent::Type eventType, QTouchDevice *device, QFlags<Qt::KeyboardModifier> modifiers, QFlags<Qt::TouchPointState> touchPointStates, const QList<QTouchEvent::TouchPoint> &touchPoints)
  QTouchEvent_Adaptor(QEvent::Type eventType, QTouchDevice *device, QFlags<Qt::KeyboardModifier> modifiers, QFlags<Qt::TouchPointState> touchPointStates) : QTouchEvent(eventType, device, modifiers, touchPointStates)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QTouchEvent::QTouchEvent(QEvent::Type eventType, QTouchDevice *device, QFlags<Qt::KeyboardModifier> modifiers, QFlags<Qt::TouchPointState> touchPointStates, const QList<QTouchEvent::TouchPoint> &touchPoints)
  QTouchEvent_Adaptor(QEvent::Type eventType, QTouchDevice *device, QFlags<Qt::KeyboardModifier> modifiers, QFlags<Qt::TouchPointState> touchPointStates, const QList<QTouchEvent::TouchPoint> &touchPoints) : QTouchEvent(eventType, device, modifiers, touchPointStates, touchPoints)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  
};

QTouchEvent_Adaptor::~QTouchEvent_Adaptor() { }

//  Constructor QTouchEvent::QTouchEvent(QEvent::Type eventType, QTouchDevice *device, QFlags<Qt::KeyboardModifier> modifiers, QFlags<Qt::TouchPointState> touchPointStates, const QList<QTouchEvent::TouchPoint> &touchPoints) (adaptor class)

static void _init_ctor_QTouchEvent_Adaptor_13206 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("eventType");
  decl->add_arg<const qt_gsi::Converter<QEvent::Type>::target_type & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("device", true, "0");
  decl->add_arg<QTouchDevice * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("modifiers", true, "Qt::NoModifier");
  decl->add_arg<QFlags<Qt::KeyboardModifier> > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("touchPointStates", true, "0");
  decl->add_arg<QFlags<Qt::TouchPointState> > (argspec_3);
  static gsi::ArgSpecBase argspec_4 ("touchPoints", true, "QList<QTouchEvent::TouchPoint>()");
  decl->add_arg<const QList<QTouchEvent::TouchPoint> & > (argspec_4);
  decl->set_return_new<QTouchEvent_Adaptor> ();
}

static void _call_ctor_QTouchEvent_Adaptor_13206 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QEvent::Type>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QEvent::Type>::target_type & >() (args, heap);
  QTouchDevice *arg2 = args ? gsi::arg_reader<QTouchDevice * >() (args, heap) : gsi::arg_maker<QTouchDevice * >() (0, heap);
  QFlags<Qt::KeyboardModifier> arg3 = args ? gsi::arg_reader<QFlags<Qt::KeyboardModifier> >() (args, heap) : gsi::arg_maker<QFlags<Qt::KeyboardModifier> >() (Qt::NoModifier, heap);
  QFlags<Qt::TouchPointState> arg4 = args ? gsi::arg_reader<QFlags<Qt::TouchPointState> >() (args, heap) : gsi::arg_maker<QFlags<Qt::TouchPointState> >() (0, heap);
  const QList<QTouchEvent::TouchPoint> &arg5 = args ? gsi::arg_reader<const QList<QTouchEvent::TouchPoint> & >() (args, heap) : gsi::arg_maker<const QList<QTouchEvent::TouchPoint> & >() (QList<QTouchEvent::TouchPoint>(), heap);
  ret.write<QTouchEvent_Adaptor *> (new QTouchEvent_Adaptor (qt_gsi::QtToCppAdaptor<QEvent::Type>(arg1).cref(), arg2, arg3, arg4, arg5));
}


namespace gsi
{

gsi::Class<QTouchEvent> &qtdecl_QTouchEvent ();

static gsi::Methods methods_QTouchEvent_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QTouchEvent::QTouchEvent(QEvent::Type eventType, QTouchDevice *device, QFlags<Qt::KeyboardModifier> modifiers, QFlags<Qt::TouchPointState> touchPointStates, const QList<QTouchEvent::TouchPoint> &touchPoints)\nThis method creates an object of class QTouchEvent.", &_init_ctor_QTouchEvent_Adaptor_13206, &_call_ctor_QTouchEvent_Adaptor_13206);
  return methods;
}

gsi::Class<QTouchEvent_Adaptor> decl_QTouchEvent_Adaptor (qtdecl_QTouchEvent (), "QtGui", "QTouchEvent",
  methods_QTouchEvent_Adaptor (),
  "@qt\n@brief Binding of QTouchEvent");

}

