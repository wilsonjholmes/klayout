
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
*  @file gsiDeclQGesture.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QGesture>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QObject>
#include <QPointF>
#include <QThread>
#include <QTimerEvent>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QGesture

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QGesture::staticMetaObject);
}


// QGesture::GestureCancelPolicy QGesture::gestureCancelPolicy()


static void _init_f_gestureCancelPolicy_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QGesture::GestureCancelPolicy>::target_type > ();
}

static void _call_f_gestureCancelPolicy_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QGesture::GestureCancelPolicy>::target_type > ((qt_gsi::Converter<QGesture::GestureCancelPolicy>::target_type)qt_gsi::CppToQtAdaptor<QGesture::GestureCancelPolicy>(((QGesture *)cls)->gestureCancelPolicy ()));
}


// Qt::GestureType QGesture::gestureType()


static void _init_f_gestureType_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<Qt::GestureType>::target_type > ();
}

static void _call_f_gestureType_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<Qt::GestureType>::target_type > ((qt_gsi::Converter<Qt::GestureType>::target_type)qt_gsi::CppToQtAdaptor<Qt::GestureType>(((QGesture *)cls)->gestureType ()));
}


// bool QGesture::hasHotSpot()


static void _init_f_hasHotSpot_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_hasHotSpot_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QGesture *)cls)->hasHotSpot ());
}


// QPointF QGesture::hotSpot()


static void _init_f_hotSpot_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPointF > ();
}

static void _call_f_hotSpot_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPointF > ((QPointF)((QGesture *)cls)->hotSpot ());
}


// void QGesture::setGestureCancelPolicy(QGesture::GestureCancelPolicy policy)


static void _init_f_setGestureCancelPolicy_3309 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("policy");
  decl->add_arg<const qt_gsi::Converter<QGesture::GestureCancelPolicy>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setGestureCancelPolicy_3309 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QGesture::GestureCancelPolicy>::target_type & arg1 = args.read<const qt_gsi::Converter<QGesture::GestureCancelPolicy>::target_type & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGesture *)cls)->setGestureCancelPolicy (qt_gsi::QtToCppAdaptor<QGesture::GestureCancelPolicy>(arg1).cref());
}


// void QGesture::setHotSpot(const QPointF &value)


static void _init_f_setHotSpot_1986 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("value");
  decl->add_arg<const QPointF & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setHotSpot_1986 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPointF &arg1 = args.read<const QPointF & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGesture *)cls)->setHotSpot (arg1);
}


// Qt::GestureState QGesture::state()


static void _init_f_state_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<Qt::GestureState>::target_type > ();
}

static void _call_f_state_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<Qt::GestureState>::target_type > ((qt_gsi::Converter<Qt::GestureState>::target_type)qt_gsi::CppToQtAdaptor<Qt::GestureState>(((QGesture *)cls)->state ()));
}


// void QGesture::unsetHotSpot()


static void _init_f_unsetHotSpot_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_unsetHotSpot_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGesture *)cls)->unsetHotSpot ();
}


// static QString QGesture::tr(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QGesture::tr (arg1, arg2, arg3));
}


// static QString QGesture::trUtf8(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QGesture::trUtf8 (arg1, arg2, arg3));
}


namespace gsi
{

static gsi::Methods methods_QGesture () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod (":gestureCancelPolicy", "@brief Method QGesture::GestureCancelPolicy QGesture::gestureCancelPolicy()\n", true, &_init_f_gestureCancelPolicy_c0, &_call_f_gestureCancelPolicy_c0);
  methods += new qt_gsi::GenericMethod (":gestureType", "@brief Method Qt::GestureType QGesture::gestureType()\n", true, &_init_f_gestureType_c0, &_call_f_gestureType_c0);
  methods += new qt_gsi::GenericMethod ("hasHotSpot|:hotSpot", "@brief Method bool QGesture::hasHotSpot()\n", true, &_init_f_hasHotSpot_c0, &_call_f_hasHotSpot_c0);
  methods += new qt_gsi::GenericMethod (":hotSpot", "@brief Method QPointF QGesture::hotSpot()\n", true, &_init_f_hotSpot_c0, &_call_f_hotSpot_c0);
  methods += new qt_gsi::GenericMethod ("setGestureCancelPolicy|gestureCancelPolicy=", "@brief Method void QGesture::setGestureCancelPolicy(QGesture::GestureCancelPolicy policy)\n", false, &_init_f_setGestureCancelPolicy_3309, &_call_f_setGestureCancelPolicy_3309);
  methods += new qt_gsi::GenericMethod ("setHotSpot|hotSpot=", "@brief Method void QGesture::setHotSpot(const QPointF &value)\n", false, &_init_f_setHotSpot_1986, &_call_f_setHotSpot_1986);
  methods += new qt_gsi::GenericMethod (":state", "@brief Method Qt::GestureState QGesture::state()\n", true, &_init_f_state_c0, &_call_f_state_c0);
  methods += new qt_gsi::GenericMethod ("unsetHotSpot", "@brief Method void QGesture::unsetHotSpot()\n", false, &_init_f_unsetHotSpot_0, &_call_f_unsetHotSpot_0);
  methods += gsi::qt_signal<QObject * > ("destroyed(QObject *)", "destroyed", gsi::arg("arg1"), "@brief Signal declaration for QGesture::destroyed(QObject *)\nYou can bind a procedure to this signal.");
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QGesture::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QGesture::trUtf8(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_4013, &_call_f_trUtf8_4013);
  return methods;
}

gsi::Class<QObject> &qtdecl_QObject ();

gsi::Class<QGesture> decl_QGesture (qtdecl_QObject (), "QGesture_Native",
  methods_QGesture (),
  "@hide\n@alias QGesture");

GSIQT_PUBLIC gsi::Class<QGesture> &qtdecl_QGesture () { return decl_QGesture; }

}


class QGesture_Adaptor : public QGesture, public qt_gsi::QtObjectBase
{
public:

  virtual ~QGesture_Adaptor();

  //  [adaptor ctor] QGesture::QGesture(QObject *parent)
  QGesture_Adaptor() : QGesture()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QGesture::QGesture(QObject *parent)
  QGesture_Adaptor(QObject *parent) : QGesture(parent)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [expose] bool QGesture::isSignalConnected(const QMetaMethod &signal)
  bool fp_QGesture_isSignalConnected_c2394 (const QMetaMethod &signal) const {
    return QGesture::isSignalConnected(signal);
  }

  //  [expose] int QGesture::receivers(const char *signal)
  int fp_QGesture_receivers_c1731 (const char *signal) const {
    return QGesture::receivers(signal);
  }

  //  [expose] QObject *QGesture::sender()
  QObject * fp_QGesture_sender_c0 () const {
    return QGesture::sender();
  }

  //  [expose] int QGesture::senderSignalIndex()
  int fp_QGesture_senderSignalIndex_c0 () const {
    return QGesture::senderSignalIndex();
  }

  //  [emitter impl] void QGesture::destroyed(QObject *)
  void emitter_QGesture_destroyed_1302(QObject *arg1)
  {
    emit QGesture::destroyed(arg1);
  }

  //  [adaptor impl] bool QGesture::event(QEvent *)
  bool cbs_event_1217_0(QEvent *arg1)
  {
    return QGesture::event(arg1);
  }

  virtual bool event(QEvent *arg1)
  {
    if (cb_event_1217_0.can_issue()) {
      return cb_event_1217_0.issue<QGesture_Adaptor, bool, QEvent *>(&QGesture_Adaptor::cbs_event_1217_0, arg1);
    } else {
      return QGesture::event(arg1);
    }
  }

  //  [adaptor impl] bool QGesture::eventFilter(QObject *, QEvent *)
  bool cbs_eventFilter_2411_0(QObject *arg1, QEvent *arg2)
  {
    return QGesture::eventFilter(arg1, arg2);
  }

  virtual bool eventFilter(QObject *arg1, QEvent *arg2)
  {
    if (cb_eventFilter_2411_0.can_issue()) {
      return cb_eventFilter_2411_0.issue<QGesture_Adaptor, bool, QObject *, QEvent *>(&QGesture_Adaptor::cbs_eventFilter_2411_0, arg1, arg2);
    } else {
      return QGesture::eventFilter(arg1, arg2);
    }
  }

  //  [adaptor impl] void QGesture::childEvent(QChildEvent *)
  void cbs_childEvent_1701_0(QChildEvent *arg1)
  {
    QGesture::childEvent(arg1);
  }

  virtual void childEvent(QChildEvent *arg1)
  {
    if (cb_childEvent_1701_0.can_issue()) {
      cb_childEvent_1701_0.issue<QGesture_Adaptor, QChildEvent *>(&QGesture_Adaptor::cbs_childEvent_1701_0, arg1);
    } else {
      QGesture::childEvent(arg1);
    }
  }

  //  [adaptor impl] void QGesture::customEvent(QEvent *)
  void cbs_customEvent_1217_0(QEvent *arg1)
  {
    QGesture::customEvent(arg1);
  }

  virtual void customEvent(QEvent *arg1)
  {
    if (cb_customEvent_1217_0.can_issue()) {
      cb_customEvent_1217_0.issue<QGesture_Adaptor, QEvent *>(&QGesture_Adaptor::cbs_customEvent_1217_0, arg1);
    } else {
      QGesture::customEvent(arg1);
    }
  }

  //  [adaptor impl] void QGesture::disconnectNotify(const QMetaMethod &signal)
  void cbs_disconnectNotify_2394_0(const QMetaMethod &signal)
  {
    QGesture::disconnectNotify(signal);
  }

  virtual void disconnectNotify(const QMetaMethod &signal)
  {
    if (cb_disconnectNotify_2394_0.can_issue()) {
      cb_disconnectNotify_2394_0.issue<QGesture_Adaptor, const QMetaMethod &>(&QGesture_Adaptor::cbs_disconnectNotify_2394_0, signal);
    } else {
      QGesture::disconnectNotify(signal);
    }
  }

  //  [adaptor impl] void QGesture::timerEvent(QTimerEvent *)
  void cbs_timerEvent_1730_0(QTimerEvent *arg1)
  {
    QGesture::timerEvent(arg1);
  }

  virtual void timerEvent(QTimerEvent *arg1)
  {
    if (cb_timerEvent_1730_0.can_issue()) {
      cb_timerEvent_1730_0.issue<QGesture_Adaptor, QTimerEvent *>(&QGesture_Adaptor::cbs_timerEvent_1730_0, arg1);
    } else {
      QGesture::timerEvent(arg1);
    }
  }

  gsi::Callback cb_event_1217_0;
  gsi::Callback cb_eventFilter_2411_0;
  gsi::Callback cb_childEvent_1701_0;
  gsi::Callback cb_customEvent_1217_0;
  gsi::Callback cb_disconnectNotify_2394_0;
  gsi::Callback cb_timerEvent_1730_0;
};

QGesture_Adaptor::~QGesture_Adaptor() { }

//  Constructor QGesture::QGesture(QObject *parent) (adaptor class)

static void _init_ctor_QGesture_Adaptor_1302 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("parent", true, "0");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return_new<QGesture_Adaptor> ();
}

static void _call_ctor_QGesture_Adaptor_1302 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args ? args.read<QObject * > (heap) : (QObject *)(0);
  ret.write<QGesture_Adaptor *> (new QGesture_Adaptor (arg1));
}


// void QGesture::childEvent(QChildEvent *)

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
  ((QGesture_Adaptor *)cls)->cbs_childEvent_1701_0 (arg1);
}

static void _set_callback_cbs_childEvent_1701_0 (void *cls, const gsi::Callback &cb)
{
  ((QGesture_Adaptor *)cls)->cb_childEvent_1701_0 = cb;
}


// void QGesture::customEvent(QEvent *)

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
  ((QGesture_Adaptor *)cls)->cbs_customEvent_1217_0 (arg1);
}

static void _set_callback_cbs_customEvent_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QGesture_Adaptor *)cls)->cb_customEvent_1217_0 = cb;
}


// emitter void QGesture::destroyed(QObject *)

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
  ((QGesture_Adaptor *)cls)->emitter_QGesture_destroyed_1302 (arg1);
}


// void QGesture::disconnectNotify(const QMetaMethod &signal)

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
  ((QGesture_Adaptor *)cls)->cbs_disconnectNotify_2394_0 (arg1);
}

static void _set_callback_cbs_disconnectNotify_2394_0 (void *cls, const gsi::Callback &cb)
{
  ((QGesture_Adaptor *)cls)->cb_disconnectNotify_2394_0 = cb;
}


// bool QGesture::event(QEvent *)

static void _init_cbs_event_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_cbs_event_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  ret.write<bool > ((bool)((QGesture_Adaptor *)cls)->cbs_event_1217_0 (arg1));
}

static void _set_callback_cbs_event_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QGesture_Adaptor *)cls)->cb_event_1217_0 = cb;
}


// bool QGesture::eventFilter(QObject *, QEvent *)

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
  ret.write<bool > ((bool)((QGesture_Adaptor *)cls)->cbs_eventFilter_2411_0 (arg1, arg2));
}

static void _set_callback_cbs_eventFilter_2411_0 (void *cls, const gsi::Callback &cb)
{
  ((QGesture_Adaptor *)cls)->cb_eventFilter_2411_0 = cb;
}


// exposed bool QGesture::isSignalConnected(const QMetaMethod &signal)

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
  ret.write<bool > ((bool)((QGesture_Adaptor *)cls)->fp_QGesture_isSignalConnected_c2394 (arg1));
}


// exposed int QGesture::receivers(const char *signal)

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
  ret.write<int > ((int)((QGesture_Adaptor *)cls)->fp_QGesture_receivers_c1731 (arg1));
}


// exposed QObject *QGesture::sender()

static void _init_fp_sender_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_fp_sender_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QGesture_Adaptor *)cls)->fp_QGesture_sender_c0 ());
}


// exposed int QGesture::senderSignalIndex()

static void _init_fp_senderSignalIndex_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_fp_senderSignalIndex_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QGesture_Adaptor *)cls)->fp_QGesture_senderSignalIndex_c0 ());
}


// void QGesture::timerEvent(QTimerEvent *)

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
  ((QGesture_Adaptor *)cls)->cbs_timerEvent_1730_0 (arg1);
}

static void _set_callback_cbs_timerEvent_1730_0 (void *cls, const gsi::Callback &cb)
{
  ((QGesture_Adaptor *)cls)->cb_timerEvent_1730_0 = cb;
}


namespace gsi
{

gsi::Class<QGesture> &qtdecl_QGesture ();

static gsi::Methods methods_QGesture_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QGesture::QGesture(QObject *parent)\nThis method creates an object of class QGesture.", &_init_ctor_QGesture_Adaptor_1302, &_call_ctor_QGesture_Adaptor_1302);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@hide", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@brief Virtual method void QGesture::childEvent(QChildEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0, &_set_callback_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@hide", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@brief Virtual method void QGesture::customEvent(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0, &_set_callback_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("emit_destroyed", "@brief Emitter for signal void QGesture::destroyed(QObject *)\nCall this method to emit this signal.", false, &_init_emitter_destroyed_1302, &_call_emitter_destroyed_1302);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@hide", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@brief Virtual method void QGesture::disconnectNotify(const QMetaMethod &signal)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0, &_set_callback_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("event", "@hide", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("event", "@brief Virtual method bool QGesture::event(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0, &_set_callback_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@hide", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@brief Virtual method bool QGesture::eventFilter(QObject *, QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0, &_set_callback_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("*isSignalConnected", "@brief Method bool QGesture::isSignalConnected(const QMetaMethod &signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_isSignalConnected_c2394, &_call_fp_isSignalConnected_c2394);
  methods += new qt_gsi::GenericMethod ("*receivers", "@brief Method int QGesture::receivers(const char *signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_receivers_c1731, &_call_fp_receivers_c1731);
  methods += new qt_gsi::GenericMethod ("*sender", "@brief Method QObject *QGesture::sender()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_sender_c0, &_call_fp_sender_c0);
  methods += new qt_gsi::GenericMethod ("*senderSignalIndex", "@brief Method int QGesture::senderSignalIndex()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_senderSignalIndex_c0, &_call_fp_senderSignalIndex_c0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@hide", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@brief Virtual method void QGesture::timerEvent(QTimerEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0, &_set_callback_cbs_timerEvent_1730_0);
  return methods;
}

gsi::Class<QGesture_Adaptor> decl_QGesture_Adaptor (qtdecl_QGesture (), "QGesture",
  methods_QGesture_Adaptor (),
  "@qt\n@brief Binding of QGesture");

}


//  Implementation of the enum wrapper class for QGesture::GestureCancelPolicy
namespace qt_gsi
{

static gsi::Enum<QGesture::GestureCancelPolicy> decl_QGesture_GestureCancelPolicy_Enum ("QGesture_GestureCancelPolicy",
    gsi::enum_const ("CancelNone", QGesture::CancelNone, "@brief Enum constant QGesture::CancelNone") +
    gsi::enum_const ("CancelAllInContext", QGesture::CancelAllInContext, "@brief Enum constant QGesture::CancelAllInContext"),
  "@qt\n@brief This class represents the QGesture::GestureCancelPolicy enum");

static gsi::QFlagsClass<QGesture::GestureCancelPolicy > decl_QGesture_GestureCancelPolicy_Enums ("QGesture_QFlags_GestureCancelPolicy",
  "@qt\n@brief This class represents the QFlags<QGesture::GestureCancelPolicy> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QGesture> inject_QGesture_GestureCancelPolicy_Enum_in_parent (decl_QGesture_GestureCancelPolicy_Enum.defs ());
static gsi::ClassExt<QGesture> decl_QGesture_GestureCancelPolicy_Enum_as_child (decl_QGesture_GestureCancelPolicy_Enum, "GestureCancelPolicy");
static gsi::ClassExt<QGesture> decl_QGesture_GestureCancelPolicy_Enums_as_child (decl_QGesture_GestureCancelPolicy_Enums, "QFlags_GestureCancelPolicy");

}

