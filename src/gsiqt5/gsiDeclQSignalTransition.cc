
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
*  @file gsiDeclQSignalTransition.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QSignalTransition>
#include <QAbstractAnimation>
#include <QAbstractState>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QObject>
#include <QState>
#include <QStateMachine>
#include <QThread>
#include <QTimerEvent>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QSignalTransition

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QSignalTransition::staticMetaObject);
}


// QObject *QSignalTransition::senderObject()


static void _init_f_senderObject_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_f_senderObject_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QSignalTransition *)cls)->senderObject ());
}


// void QSignalTransition::setSenderObject(const QObject *sender)


static void _init_f_setSenderObject_1997 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("sender");
  decl->add_arg<const QObject * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setSenderObject_1997 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QObject *arg1 = args.read<const QObject * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSignalTransition *)cls)->setSenderObject (arg1);
}


// void QSignalTransition::setSignal(const QByteArray &signal)


static void _init_f_setSignal_2309 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("signal");
  decl->add_arg<const QByteArray & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setSignal_2309 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QByteArray &arg1 = args.read<const QByteArray & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSignalTransition *)cls)->setSignal (arg1);
}


// QByteArray QSignalTransition::signal()


static void _init_f_signal_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QByteArray > ();
}

static void _call_f_signal_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QByteArray > ((QByteArray)((QSignalTransition *)cls)->signal ());
}


// static QString QSignalTransition::tr(const char *s, const char *c, int n)


static void _init_f_tr_4013 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c", true, "__null");
  decl->add_arg<const char * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("n", true, "-1");
  decl->add_arg<int > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_f_tr_4013 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = args.read<const char * > (heap);
  const char *arg2 = args ? args.read<const char * > (heap) : (const char *)(__null);
  int arg3 = args ? args.read<int > (heap) : (int)(-1);
  ret.write<QString > ((QString)QSignalTransition::tr (arg1, arg2, arg3));
}


// static QString QSignalTransition::trUtf8(const char *s, const char *c, int n)


static void _init_f_trUtf8_4013 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c", true, "__null");
  decl->add_arg<const char * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("n", true, "-1");
  decl->add_arg<int > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_f_trUtf8_4013 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = args.read<const char * > (heap);
  const char *arg2 = args ? args.read<const char * > (heap) : (const char *)(__null);
  int arg3 = args ? args.read<int > (heap) : (int)(-1);
  ret.write<QString > ((QString)QSignalTransition::trUtf8 (arg1, arg2, arg3));
}


namespace gsi
{

static gsi::Methods methods_QSignalTransition () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod (":senderObject", "@brief Method QObject *QSignalTransition::senderObject()\n", true, &_init_f_senderObject_c0, &_call_f_senderObject_c0);
  methods += new qt_gsi::GenericMethod ("setSenderObject|senderObject=", "@brief Method void QSignalTransition::setSenderObject(const QObject *sender)\n", false, &_init_f_setSenderObject_1997, &_call_f_setSenderObject_1997);
  methods += new qt_gsi::GenericMethod ("setSignal|signal=", "@brief Method void QSignalTransition::setSignal(const QByteArray &signal)\n", false, &_init_f_setSignal_2309, &_call_f_setSignal_2309);
  methods += new qt_gsi::GenericMethod (":signal", "@brief Method QByteArray QSignalTransition::signal()\n", true, &_init_f_signal_c0, &_call_f_signal_c0);
  methods += gsi::qt_signal<QObject * > ("destroyed(QObject *)", "destroyed", gsi::arg("arg1"), "@brief Signal declaration for QSignalTransition::destroyed(QObject *)\nYou can bind a procedure to this signal.");
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QSignalTransition::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QSignalTransition::trUtf8(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_4013, &_call_f_trUtf8_4013);
  return methods;
}

gsi::Class<QAbstractTransition> &qtdecl_QAbstractTransition ();

gsi::Class<QSignalTransition> decl_QSignalTransition (qtdecl_QAbstractTransition (), "QSignalTransition_Native",
  methods_QSignalTransition (),
  "@hide\n@alias QSignalTransition");

GSIQT_PUBLIC gsi::Class<QSignalTransition> &qtdecl_QSignalTransition () { return decl_QSignalTransition; }

}


class QSignalTransition_Adaptor : public QSignalTransition, public qt_gsi::QtObjectBase
{
public:

  virtual ~QSignalTransition_Adaptor();

  //  [adaptor ctor] QSignalTransition::QSignalTransition(QState *sourceState)
  QSignalTransition_Adaptor() : QSignalTransition()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QSignalTransition::QSignalTransition(QState *sourceState)
  QSignalTransition_Adaptor(QState *sourceState) : QSignalTransition(sourceState)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QSignalTransition::QSignalTransition(const QObject *sender, const char *signal, QState *sourceState)
  QSignalTransition_Adaptor(const QObject *sender, const char *signal) : QSignalTransition(sender, signal)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QSignalTransition::QSignalTransition(const QObject *sender, const char *signal, QState *sourceState)
  QSignalTransition_Adaptor(const QObject *sender, const char *signal, QState *sourceState) : QSignalTransition(sender, signal, sourceState)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [expose] bool QSignalTransition::isSignalConnected(const QMetaMethod &signal)
  bool fp_QSignalTransition_isSignalConnected_c2394 (const QMetaMethod &signal) const {
    return QSignalTransition::isSignalConnected(signal);
  }

  //  [expose] int QSignalTransition::receivers(const char *signal)
  int fp_QSignalTransition_receivers_c1731 (const char *signal) const {
    return QSignalTransition::receivers(signal);
  }

  //  [expose] QObject *QSignalTransition::sender()
  QObject * fp_QSignalTransition_sender_c0 () const {
    return QSignalTransition::sender();
  }

  //  [expose] int QSignalTransition::senderSignalIndex()
  int fp_QSignalTransition_senderSignalIndex_c0 () const {
    return QSignalTransition::senderSignalIndex();
  }

  //  [emitter impl] void QSignalTransition::destroyed(QObject *)
  void emitter_QSignalTransition_destroyed_1302(QObject *arg1)
  {
    emit QSignalTransition::destroyed(arg1);
  }

  //  [adaptor impl] bool QSignalTransition::eventFilter(QObject *, QEvent *)
  bool cbs_eventFilter_2411_0(QObject *arg1, QEvent *arg2)
  {
    return QSignalTransition::eventFilter(arg1, arg2);
  }

  virtual bool eventFilter(QObject *arg1, QEvent *arg2)
  {
    if (cb_eventFilter_2411_0.can_issue()) {
      return cb_eventFilter_2411_0.issue<QSignalTransition_Adaptor, bool, QObject *, QEvent *>(&QSignalTransition_Adaptor::cbs_eventFilter_2411_0, arg1, arg2);
    } else {
      return QSignalTransition::eventFilter(arg1, arg2);
    }
  }

  //  [adaptor impl] void QSignalTransition::childEvent(QChildEvent *)
  void cbs_childEvent_1701_0(QChildEvent *arg1)
  {
    QSignalTransition::childEvent(arg1);
  }

  virtual void childEvent(QChildEvent *arg1)
  {
    if (cb_childEvent_1701_0.can_issue()) {
      cb_childEvent_1701_0.issue<QSignalTransition_Adaptor, QChildEvent *>(&QSignalTransition_Adaptor::cbs_childEvent_1701_0, arg1);
    } else {
      QSignalTransition::childEvent(arg1);
    }
  }

  //  [adaptor impl] void QSignalTransition::customEvent(QEvent *)
  void cbs_customEvent_1217_0(QEvent *arg1)
  {
    QSignalTransition::customEvent(arg1);
  }

  virtual void customEvent(QEvent *arg1)
  {
    if (cb_customEvent_1217_0.can_issue()) {
      cb_customEvent_1217_0.issue<QSignalTransition_Adaptor, QEvent *>(&QSignalTransition_Adaptor::cbs_customEvent_1217_0, arg1);
    } else {
      QSignalTransition::customEvent(arg1);
    }
  }

  //  [adaptor impl] void QSignalTransition::disconnectNotify(const QMetaMethod &signal)
  void cbs_disconnectNotify_2394_0(const QMetaMethod &signal)
  {
    QSignalTransition::disconnectNotify(signal);
  }

  virtual void disconnectNotify(const QMetaMethod &signal)
  {
    if (cb_disconnectNotify_2394_0.can_issue()) {
      cb_disconnectNotify_2394_0.issue<QSignalTransition_Adaptor, const QMetaMethod &>(&QSignalTransition_Adaptor::cbs_disconnectNotify_2394_0, signal);
    } else {
      QSignalTransition::disconnectNotify(signal);
    }
  }

  //  [adaptor impl] bool QSignalTransition::event(QEvent *e)
  bool cbs_event_1217_0(QEvent *e)
  {
    return QSignalTransition::event(e);
  }

  virtual bool event(QEvent *e)
  {
    if (cb_event_1217_0.can_issue()) {
      return cb_event_1217_0.issue<QSignalTransition_Adaptor, bool, QEvent *>(&QSignalTransition_Adaptor::cbs_event_1217_0, e);
    } else {
      return QSignalTransition::event(e);
    }
  }

  //  [adaptor impl] bool QSignalTransition::eventTest(QEvent *event)
  bool cbs_eventTest_1217_0(QEvent *event)
  {
    return QSignalTransition::eventTest(event);
  }

  virtual bool eventTest(QEvent *event)
  {
    if (cb_eventTest_1217_0.can_issue()) {
      return cb_eventTest_1217_0.issue<QSignalTransition_Adaptor, bool, QEvent *>(&QSignalTransition_Adaptor::cbs_eventTest_1217_0, event);
    } else {
      return QSignalTransition::eventTest(event);
    }
  }

  //  [adaptor impl] void QSignalTransition::onTransition(QEvent *event)
  void cbs_onTransition_1217_0(QEvent *event)
  {
    QSignalTransition::onTransition(event);
  }

  virtual void onTransition(QEvent *event)
  {
    if (cb_onTransition_1217_0.can_issue()) {
      cb_onTransition_1217_0.issue<QSignalTransition_Adaptor, QEvent *>(&QSignalTransition_Adaptor::cbs_onTransition_1217_0, event);
    } else {
      QSignalTransition::onTransition(event);
    }
  }

  //  [adaptor impl] void QSignalTransition::timerEvent(QTimerEvent *)
  void cbs_timerEvent_1730_0(QTimerEvent *arg1)
  {
    QSignalTransition::timerEvent(arg1);
  }

  virtual void timerEvent(QTimerEvent *arg1)
  {
    if (cb_timerEvent_1730_0.can_issue()) {
      cb_timerEvent_1730_0.issue<QSignalTransition_Adaptor, QTimerEvent *>(&QSignalTransition_Adaptor::cbs_timerEvent_1730_0, arg1);
    } else {
      QSignalTransition::timerEvent(arg1);
    }
  }

  gsi::Callback cb_eventFilter_2411_0;
  gsi::Callback cb_childEvent_1701_0;
  gsi::Callback cb_customEvent_1217_0;
  gsi::Callback cb_disconnectNotify_2394_0;
  gsi::Callback cb_event_1217_0;
  gsi::Callback cb_eventTest_1217_0;
  gsi::Callback cb_onTransition_1217_0;
  gsi::Callback cb_timerEvent_1730_0;
};

QSignalTransition_Adaptor::~QSignalTransition_Adaptor() { }

//  Constructor QSignalTransition::QSignalTransition(QState *sourceState) (adaptor class)

static void _init_ctor_QSignalTransition_Adaptor_1216 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("sourceState", true, "0");
  decl->add_arg<QState * > (argspec_0);
  decl->set_return_new<QSignalTransition_Adaptor> ();
}

static void _call_ctor_QSignalTransition_Adaptor_1216 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QState *arg1 = args ? args.read<QState * > (heap) : (QState *)(0);
  ret.write<QSignalTransition_Adaptor *> (new QSignalTransition_Adaptor (arg1));
}


//  Constructor QSignalTransition::QSignalTransition(const QObject *sender, const char *signal, QState *sourceState) (adaptor class)

static void _init_ctor_QSignalTransition_Adaptor_4728 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("sender");
  decl->add_arg<const QObject * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("signal");
  decl->add_arg<const char * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("sourceState", true, "0");
  decl->add_arg<QState * > (argspec_2);
  decl->set_return_new<QSignalTransition_Adaptor> ();
}

static void _call_ctor_QSignalTransition_Adaptor_4728 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QObject *arg1 = args.read<const QObject * > (heap);
  const char *arg2 = args.read<const char * > (heap);
  QState *arg3 = args ? args.read<QState * > (heap) : (QState *)(0);
  ret.write<QSignalTransition_Adaptor *> (new QSignalTransition_Adaptor (arg1, arg2, arg3));
}


// void QSignalTransition::childEvent(QChildEvent *)

static void _init_cbs_childEvent_1701_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QChildEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_childEvent_1701_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QChildEvent *arg1 = args.read<QChildEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSignalTransition_Adaptor *)cls)->cbs_childEvent_1701_0 (arg1);
}

static void _set_callback_cbs_childEvent_1701_0 (void *cls, const gsi::Callback &cb)
{
  ((QSignalTransition_Adaptor *)cls)->cb_childEvent_1701_0 = cb;
}


// void QSignalTransition::customEvent(QEvent *)

static void _init_cbs_customEvent_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_customEvent_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSignalTransition_Adaptor *)cls)->cbs_customEvent_1217_0 (arg1);
}

static void _set_callback_cbs_customEvent_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QSignalTransition_Adaptor *)cls)->cb_customEvent_1217_0 = cb;
}


// emitter void QSignalTransition::destroyed(QObject *)

static void _init_emitter_destroyed_1302 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1", true, "0");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_emitter_destroyed_1302 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args ? args.read<QObject * > (heap) : (QObject *)(0);
  ((QSignalTransition_Adaptor *)cls)->emitter_QSignalTransition_destroyed_1302 (arg1);
}


// void QSignalTransition::disconnectNotify(const QMetaMethod &signal)

static void _init_cbs_disconnectNotify_2394_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("signal");
  decl->add_arg<const QMetaMethod & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_disconnectNotify_2394_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMetaMethod &arg1 = args.read<const QMetaMethod & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSignalTransition_Adaptor *)cls)->cbs_disconnectNotify_2394_0 (arg1);
}

static void _set_callback_cbs_disconnectNotify_2394_0 (void *cls, const gsi::Callback &cb)
{
  ((QSignalTransition_Adaptor *)cls)->cb_disconnectNotify_2394_0 = cb;
}


// bool QSignalTransition::event(QEvent *e)

static void _init_cbs_event_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("e");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_cbs_event_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  ret.write<bool > ((bool)((QSignalTransition_Adaptor *)cls)->cbs_event_1217_0 (arg1));
}

static void _set_callback_cbs_event_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QSignalTransition_Adaptor *)cls)->cb_event_1217_0 = cb;
}


// bool QSignalTransition::eventFilter(QObject *, QEvent *)

static void _init_cbs_eventFilter_2411_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QObject * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("arg2");
  decl->add_arg<QEvent * > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_cbs_eventFilter_2411_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args.read<QObject * > (heap);
  QEvent *arg2 = args.read<QEvent * > (heap);
  ret.write<bool > ((bool)((QSignalTransition_Adaptor *)cls)->cbs_eventFilter_2411_0 (arg1, arg2));
}

static void _set_callback_cbs_eventFilter_2411_0 (void *cls, const gsi::Callback &cb)
{
  ((QSignalTransition_Adaptor *)cls)->cb_eventFilter_2411_0 = cb;
}


// bool QSignalTransition::eventTest(QEvent *event)

static void _init_cbs_eventTest_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("event");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_cbs_eventTest_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  ret.write<bool > ((bool)((QSignalTransition_Adaptor *)cls)->cbs_eventTest_1217_0 (arg1));
}

static void _set_callback_cbs_eventTest_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QSignalTransition_Adaptor *)cls)->cb_eventTest_1217_0 = cb;
}


// exposed bool QSignalTransition::isSignalConnected(const QMetaMethod &signal)

static void _init_fp_isSignalConnected_c2394 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("signal");
  decl->add_arg<const QMetaMethod & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_fp_isSignalConnected_c2394 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMetaMethod &arg1 = args.read<const QMetaMethod & > (heap);
  ret.write<bool > ((bool)((QSignalTransition_Adaptor *)cls)->fp_QSignalTransition_isSignalConnected_c2394 (arg1));
}


// void QSignalTransition::onTransition(QEvent *event)

static void _init_cbs_onTransition_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("event");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_onTransition_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSignalTransition_Adaptor *)cls)->cbs_onTransition_1217_0 (arg1);
}

static void _set_callback_cbs_onTransition_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QSignalTransition_Adaptor *)cls)->cb_onTransition_1217_0 = cb;
}


// exposed int QSignalTransition::receivers(const char *signal)

static void _init_fp_receivers_c1731 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("signal");
  decl->add_arg<const char * > (argspec_0);
  decl->set_return<int > ();
}

static void _call_fp_receivers_c1731 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = args.read<const char * > (heap);
  ret.write<int > ((int)((QSignalTransition_Adaptor *)cls)->fp_QSignalTransition_receivers_c1731 (arg1));
}


// exposed QObject *QSignalTransition::sender()

static void _init_fp_sender_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_fp_sender_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QSignalTransition_Adaptor *)cls)->fp_QSignalTransition_sender_c0 ());
}


// exposed int QSignalTransition::senderSignalIndex()

static void _init_fp_senderSignalIndex_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_fp_senderSignalIndex_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QSignalTransition_Adaptor *)cls)->fp_QSignalTransition_senderSignalIndex_c0 ());
}


// void QSignalTransition::timerEvent(QTimerEvent *)

static void _init_cbs_timerEvent_1730_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QTimerEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_timerEvent_1730_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QTimerEvent *arg1 = args.read<QTimerEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSignalTransition_Adaptor *)cls)->cbs_timerEvent_1730_0 (arg1);
}

static void _set_callback_cbs_timerEvent_1730_0 (void *cls, const gsi::Callback &cb)
{
  ((QSignalTransition_Adaptor *)cls)->cb_timerEvent_1730_0 = cb;
}


namespace gsi
{

gsi::Class<QSignalTransition> &qtdecl_QSignalTransition ();

static gsi::Methods methods_QSignalTransition_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QSignalTransition::QSignalTransition(QState *sourceState)\nThis method creates an object of class QSignalTransition.", &_init_ctor_QSignalTransition_Adaptor_1216, &_call_ctor_QSignalTransition_Adaptor_1216);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QSignalTransition::QSignalTransition(const QObject *sender, const char *signal, QState *sourceState)\nThis method creates an object of class QSignalTransition.", &_init_ctor_QSignalTransition_Adaptor_4728, &_call_ctor_QSignalTransition_Adaptor_4728);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@hide", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@brief Virtual method void QSignalTransition::childEvent(QChildEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0, &_set_callback_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@hide", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@brief Virtual method void QSignalTransition::customEvent(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0, &_set_callback_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("emit_destroyed", "@brief Emitter for signal void QSignalTransition::destroyed(QObject *)\nCall this method to emit this signal.", false, &_init_emitter_destroyed_1302, &_call_emitter_destroyed_1302);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@hide", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@brief Virtual method void QSignalTransition::disconnectNotify(const QMetaMethod &signal)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0, &_set_callback_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("*event", "@hide", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("*event", "@brief Virtual method bool QSignalTransition::event(QEvent *e)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0, &_set_callback_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@hide", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@brief Virtual method bool QSignalTransition::eventFilter(QObject *, QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0, &_set_callback_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("*eventTest", "@hide", false, &_init_cbs_eventTest_1217_0, &_call_cbs_eventTest_1217_0);
  methods += new qt_gsi::GenericMethod ("*eventTest", "@brief Virtual method bool QSignalTransition::eventTest(QEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_eventTest_1217_0, &_call_cbs_eventTest_1217_0, &_set_callback_cbs_eventTest_1217_0);
  methods += new qt_gsi::GenericMethod ("*isSignalConnected", "@brief Method bool QSignalTransition::isSignalConnected(const QMetaMethod &signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_isSignalConnected_c2394, &_call_fp_isSignalConnected_c2394);
  methods += new qt_gsi::GenericMethod ("*onTransition", "@hide", false, &_init_cbs_onTransition_1217_0, &_call_cbs_onTransition_1217_0);
  methods += new qt_gsi::GenericMethod ("*onTransition", "@brief Virtual method void QSignalTransition::onTransition(QEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_onTransition_1217_0, &_call_cbs_onTransition_1217_0, &_set_callback_cbs_onTransition_1217_0);
  methods += new qt_gsi::GenericMethod ("*receivers", "@brief Method int QSignalTransition::receivers(const char *signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_receivers_c1731, &_call_fp_receivers_c1731);
  methods += new qt_gsi::GenericMethod ("*sender", "@brief Method QObject *QSignalTransition::sender()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_sender_c0, &_call_fp_sender_c0);
  methods += new qt_gsi::GenericMethod ("*senderSignalIndex", "@brief Method int QSignalTransition::senderSignalIndex()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_senderSignalIndex_c0, &_call_fp_senderSignalIndex_c0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@hide", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@brief Virtual method void QSignalTransition::timerEvent(QTimerEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0, &_set_callback_cbs_timerEvent_1730_0);
  return methods;
}

gsi::Class<QSignalTransition_Adaptor> decl_QSignalTransition_Adaptor (qtdecl_QSignalTransition (), "QSignalTransition",
  methods_QSignalTransition_Adaptor (),
  "@qt\n@brief Binding of QSignalTransition");

}

