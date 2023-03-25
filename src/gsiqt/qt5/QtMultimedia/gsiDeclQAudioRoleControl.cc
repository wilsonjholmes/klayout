
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
*  @file gsiDeclQAudioRoleControl.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QAudioRoleControl>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QObject>
#include <QThread>
#include <QTimerEvent>
#include "gsiQt.h"
#include "gsiQtMultimediaCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QAudioRoleControl

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QAudioRoleControl::staticMetaObject);
}


// QAudio::Role QAudioRoleControl::audioRole()


static void _init_f_audioRole_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QAudio::Role>::target_type > ();
}

static void _call_f_audioRole_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QAudio::Role>::target_type > ((qt_gsi::Converter<QAudio::Role>::target_type)qt_gsi::CppToQtAdaptor<QAudio::Role>(((QAudioRoleControl *)cls)->audioRole ()));
}


// void QAudioRoleControl::audioRoleChanged(QAudio::Role role)


static void _init_f_audioRoleChanged_1533 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("role");
  decl->add_arg<const qt_gsi::Converter<QAudio::Role>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_audioRoleChanged_1533 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QAudio::Role>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QAudio::Role>::target_type & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAudioRoleControl *)cls)->audioRoleChanged (qt_gsi::QtToCppAdaptor<QAudio::Role>(arg1).cref());
}


// void QAudioRoleControl::setAudioRole(QAudio::Role role)


static void _init_f_setAudioRole_1533 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("role");
  decl->add_arg<const qt_gsi::Converter<QAudio::Role>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setAudioRole_1533 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QAudio::Role>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QAudio::Role>::target_type & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAudioRoleControl *)cls)->setAudioRole (qt_gsi::QtToCppAdaptor<QAudio::Role>(arg1).cref());
}


// QList<QAudio::Role> QAudioRoleControl::supportedAudioRoles()


static void _init_f_supportedAudioRoles_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QList<QAudio::Role> > ();
}

static void _call_f_supportedAudioRoles_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<QAudio::Role> > ((QList<QAudio::Role>)((QAudioRoleControl *)cls)->supportedAudioRoles ());
}


// static QString QAudioRoleControl::tr(const char *s, const char *c, int n)


static void _init_f_tr_4013 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c", true, "nullptr");
  decl->add_arg<const char * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("n", true, "-1");
  decl->add_arg<int > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_f_tr_4013 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  const char *arg2 = args ? gsi::arg_reader<const char * >() (args, heap) : gsi::arg_maker<const char * >() (nullptr, heap);
  int arg3 = args ? gsi::arg_reader<int >() (args, heap) : gsi::arg_maker<int >() (-1, heap);
  ret.write<QString > ((QString)QAudioRoleControl::tr (arg1, arg2, arg3));
}


// static QString QAudioRoleControl::trUtf8(const char *s, const char *c, int n)


static void _init_f_trUtf8_4013 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c", true, "nullptr");
  decl->add_arg<const char * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("n", true, "-1");
  decl->add_arg<int > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_f_trUtf8_4013 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  const char *arg2 = args ? gsi::arg_reader<const char * >() (args, heap) : gsi::arg_maker<const char * >() (nullptr, heap);
  int arg3 = args ? gsi::arg_reader<int >() (args, heap) : gsi::arg_maker<int >() (-1, heap);
  ret.write<QString > ((QString)QAudioRoleControl::trUtf8 (arg1, arg2, arg3));
}


namespace gsi
{

static gsi::Methods methods_QAudioRoleControl () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod ("audioRole", "@brief Method QAudio::Role QAudioRoleControl::audioRole()\n", true, &_init_f_audioRole_c0, &_call_f_audioRole_c0);
  methods += new qt_gsi::GenericMethod ("audioRoleChanged", "@brief Method void QAudioRoleControl::audioRoleChanged(QAudio::Role role)\n", false, &_init_f_audioRoleChanged_1533, &_call_f_audioRoleChanged_1533);
  methods += new qt_gsi::GenericMethod ("setAudioRole", "@brief Method void QAudioRoleControl::setAudioRole(QAudio::Role role)\n", false, &_init_f_setAudioRole_1533, &_call_f_setAudioRole_1533);
  methods += new qt_gsi::GenericMethod ("supportedAudioRoles", "@brief Method QList<QAudio::Role> QAudioRoleControl::supportedAudioRoles()\n", true, &_init_f_supportedAudioRoles_c0, &_call_f_supportedAudioRoles_c0);
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QAudioRoleControl::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QAudioRoleControl::trUtf8(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_4013, &_call_f_trUtf8_4013);
  return methods;
}

gsi::Class<QMediaControl> &qtdecl_QMediaControl ();

qt_gsi::QtNativeClass<QAudioRoleControl> decl_QAudioRoleControl (qtdecl_QMediaControl (), "QtMultimedia", "QAudioRoleControl_Native",
  methods_QAudioRoleControl (),
  "@hide\n@alias QAudioRoleControl");

GSI_QTMULTIMEDIA_PUBLIC gsi::Class<QAudioRoleControl> &qtdecl_QAudioRoleControl () { return decl_QAudioRoleControl; }

}


class QAudioRoleControl_Adaptor : public QAudioRoleControl, public qt_gsi::QtObjectBase
{
public:

  virtual ~QAudioRoleControl_Adaptor();

  //  [adaptor ctor] QAudioRoleControl::QAudioRoleControl()
  QAudioRoleControl_Adaptor() : QAudioRoleControl()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [expose] bool QAudioRoleControl::isSignalConnected(const QMetaMethod &signal)
  bool fp_QAudioRoleControl_isSignalConnected_c2394 (const QMetaMethod &signal) const {
    return QAudioRoleControl::isSignalConnected(signal);
  }

  //  [expose] int QAudioRoleControl::receivers(const char *signal)
  int fp_QAudioRoleControl_receivers_c1731 (const char *signal) const {
    return QAudioRoleControl::receivers(signal);
  }

  //  [expose] QObject *QAudioRoleControl::sender()
  QObject * fp_QAudioRoleControl_sender_c0 () const {
    return QAudioRoleControl::sender();
  }

  //  [expose] int QAudioRoleControl::senderSignalIndex()
  int fp_QAudioRoleControl_senderSignalIndex_c0 () const {
    return QAudioRoleControl::senderSignalIndex();
  }

  //  [adaptor impl] QAudio::Role QAudioRoleControl::audioRole()
  qt_gsi::Converter<QAudio::Role>::target_type cbs_audioRole_c0_0() const
  {
    throw qt_gsi::AbstractMethodCalledException("audioRole");
  }

  virtual QAudio::Role audioRole() const
  {
    if (cb_audioRole_c0_0.can_issue()) {
      return qt_gsi::QtToCppAdaptor<QAudio::Role>(cb_audioRole_c0_0.issue<QAudioRoleControl_Adaptor, qt_gsi::Converter<QAudio::Role>::target_type>(&QAudioRoleControl_Adaptor::cbs_audioRole_c0_0)).cref();
    } else {
      throw qt_gsi::AbstractMethodCalledException("audioRole");
    }
  }

  //  [adaptor impl] bool QAudioRoleControl::event(QEvent *event)
  bool cbs_event_1217_0(QEvent *_event)
  {
    return QAudioRoleControl::event(_event);
  }

  virtual bool event(QEvent *_event)
  {
    if (cb_event_1217_0.can_issue()) {
      return cb_event_1217_0.issue<QAudioRoleControl_Adaptor, bool, QEvent *>(&QAudioRoleControl_Adaptor::cbs_event_1217_0, _event);
    } else {
      return QAudioRoleControl::event(_event);
    }
  }

  //  [adaptor impl] bool QAudioRoleControl::eventFilter(QObject *watched, QEvent *event)
  bool cbs_eventFilter_2411_0(QObject *watched, QEvent *event)
  {
    return QAudioRoleControl::eventFilter(watched, event);
  }

  virtual bool eventFilter(QObject *watched, QEvent *event)
  {
    if (cb_eventFilter_2411_0.can_issue()) {
      return cb_eventFilter_2411_0.issue<QAudioRoleControl_Adaptor, bool, QObject *, QEvent *>(&QAudioRoleControl_Adaptor::cbs_eventFilter_2411_0, watched, event);
    } else {
      return QAudioRoleControl::eventFilter(watched, event);
    }
  }

  //  [adaptor impl] void QAudioRoleControl::setAudioRole(QAudio::Role role)
  void cbs_setAudioRole_1533_0(const qt_gsi::Converter<QAudio::Role>::target_type & role)
  {
    __SUPPRESS_UNUSED_WARNING (role);
    throw qt_gsi::AbstractMethodCalledException("setAudioRole");
  }

  virtual void setAudioRole(QAudio::Role role)
  {
    if (cb_setAudioRole_1533_0.can_issue()) {
      cb_setAudioRole_1533_0.issue<QAudioRoleControl_Adaptor, const qt_gsi::Converter<QAudio::Role>::target_type &>(&QAudioRoleControl_Adaptor::cbs_setAudioRole_1533_0, qt_gsi::CppToQtAdaptor<QAudio::Role>(role));
    } else {
      throw qt_gsi::AbstractMethodCalledException("setAudioRole");
    }
  }

  //  [adaptor impl] QList<QAudio::Role> QAudioRoleControl::supportedAudioRoles()
  QList<QAudio::Role> cbs_supportedAudioRoles_c0_0() const
  {
    throw qt_gsi::AbstractMethodCalledException("supportedAudioRoles");
  }

  virtual QList<QAudio::Role> supportedAudioRoles() const
  {
    if (cb_supportedAudioRoles_c0_0.can_issue()) {
      return cb_supportedAudioRoles_c0_0.issue<QAudioRoleControl_Adaptor, QList<QAudio::Role> >(&QAudioRoleControl_Adaptor::cbs_supportedAudioRoles_c0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("supportedAudioRoles");
    }
  }

  //  [adaptor impl] void QAudioRoleControl::childEvent(QChildEvent *event)
  void cbs_childEvent_1701_0(QChildEvent *event)
  {
    QAudioRoleControl::childEvent(event);
  }

  virtual void childEvent(QChildEvent *event)
  {
    if (cb_childEvent_1701_0.can_issue()) {
      cb_childEvent_1701_0.issue<QAudioRoleControl_Adaptor, QChildEvent *>(&QAudioRoleControl_Adaptor::cbs_childEvent_1701_0, event);
    } else {
      QAudioRoleControl::childEvent(event);
    }
  }

  //  [adaptor impl] void QAudioRoleControl::customEvent(QEvent *event)
  void cbs_customEvent_1217_0(QEvent *event)
  {
    QAudioRoleControl::customEvent(event);
  }

  virtual void customEvent(QEvent *event)
  {
    if (cb_customEvent_1217_0.can_issue()) {
      cb_customEvent_1217_0.issue<QAudioRoleControl_Adaptor, QEvent *>(&QAudioRoleControl_Adaptor::cbs_customEvent_1217_0, event);
    } else {
      QAudioRoleControl::customEvent(event);
    }
  }

  //  [adaptor impl] void QAudioRoleControl::disconnectNotify(const QMetaMethod &signal)
  void cbs_disconnectNotify_2394_0(const QMetaMethod &signal)
  {
    QAudioRoleControl::disconnectNotify(signal);
  }

  virtual void disconnectNotify(const QMetaMethod &signal)
  {
    if (cb_disconnectNotify_2394_0.can_issue()) {
      cb_disconnectNotify_2394_0.issue<QAudioRoleControl_Adaptor, const QMetaMethod &>(&QAudioRoleControl_Adaptor::cbs_disconnectNotify_2394_0, signal);
    } else {
      QAudioRoleControl::disconnectNotify(signal);
    }
  }

  //  [adaptor impl] void QAudioRoleControl::timerEvent(QTimerEvent *event)
  void cbs_timerEvent_1730_0(QTimerEvent *event)
  {
    QAudioRoleControl::timerEvent(event);
  }

  virtual void timerEvent(QTimerEvent *event)
  {
    if (cb_timerEvent_1730_0.can_issue()) {
      cb_timerEvent_1730_0.issue<QAudioRoleControl_Adaptor, QTimerEvent *>(&QAudioRoleControl_Adaptor::cbs_timerEvent_1730_0, event);
    } else {
      QAudioRoleControl::timerEvent(event);
    }
  }

  gsi::Callback cb_audioRole_c0_0;
  gsi::Callback cb_event_1217_0;
  gsi::Callback cb_eventFilter_2411_0;
  gsi::Callback cb_setAudioRole_1533_0;
  gsi::Callback cb_supportedAudioRoles_c0_0;
  gsi::Callback cb_childEvent_1701_0;
  gsi::Callback cb_customEvent_1217_0;
  gsi::Callback cb_disconnectNotify_2394_0;
  gsi::Callback cb_timerEvent_1730_0;
};

QAudioRoleControl_Adaptor::~QAudioRoleControl_Adaptor() { }

//  Constructor QAudioRoleControl::QAudioRoleControl() (adaptor class)

static void _init_ctor_QAudioRoleControl_Adaptor_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QAudioRoleControl_Adaptor> ();
}

static void _call_ctor_QAudioRoleControl_Adaptor_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QAudioRoleControl_Adaptor *> (new QAudioRoleControl_Adaptor ());
}


// QAudio::Role QAudioRoleControl::audioRole()

static void _init_cbs_audioRole_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QAudio::Role>::target_type > ();
}

static void _call_cbs_audioRole_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QAudio::Role>::target_type > ((qt_gsi::Converter<QAudio::Role>::target_type)((QAudioRoleControl_Adaptor *)cls)->cbs_audioRole_c0_0 ());
}

static void _set_callback_cbs_audioRole_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QAudioRoleControl_Adaptor *)cls)->cb_audioRole_c0_0 = cb;
}


// void QAudioRoleControl::childEvent(QChildEvent *event)

static void _init_cbs_childEvent_1701_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("event");
  decl->add_arg<QChildEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_childEvent_1701_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QChildEvent *arg1 = args.read<QChildEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAudioRoleControl_Adaptor *)cls)->cbs_childEvent_1701_0 (arg1);
}

static void _set_callback_cbs_childEvent_1701_0 (void *cls, const gsi::Callback &cb)
{
  ((QAudioRoleControl_Adaptor *)cls)->cb_childEvent_1701_0 = cb;
}


// void QAudioRoleControl::customEvent(QEvent *event)

static void _init_cbs_customEvent_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("event");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_customEvent_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAudioRoleControl_Adaptor *)cls)->cbs_customEvent_1217_0 (arg1);
}

static void _set_callback_cbs_customEvent_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QAudioRoleControl_Adaptor *)cls)->cb_customEvent_1217_0 = cb;
}


// void QAudioRoleControl::disconnectNotify(const QMetaMethod &signal)

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
  ((QAudioRoleControl_Adaptor *)cls)->cbs_disconnectNotify_2394_0 (arg1);
}

static void _set_callback_cbs_disconnectNotify_2394_0 (void *cls, const gsi::Callback &cb)
{
  ((QAudioRoleControl_Adaptor *)cls)->cb_disconnectNotify_2394_0 = cb;
}


// bool QAudioRoleControl::event(QEvent *event)

static void _init_cbs_event_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("event");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_cbs_event_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  ret.write<bool > ((bool)((QAudioRoleControl_Adaptor *)cls)->cbs_event_1217_0 (arg1));
}

static void _set_callback_cbs_event_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QAudioRoleControl_Adaptor *)cls)->cb_event_1217_0 = cb;
}


// bool QAudioRoleControl::eventFilter(QObject *watched, QEvent *event)

static void _init_cbs_eventFilter_2411_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("watched");
  decl->add_arg<QObject * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("event");
  decl->add_arg<QEvent * > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_cbs_eventFilter_2411_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args.read<QObject * > (heap);
  QEvent *arg2 = args.read<QEvent * > (heap);
  ret.write<bool > ((bool)((QAudioRoleControl_Adaptor *)cls)->cbs_eventFilter_2411_0 (arg1, arg2));
}

static void _set_callback_cbs_eventFilter_2411_0 (void *cls, const gsi::Callback &cb)
{
  ((QAudioRoleControl_Adaptor *)cls)->cb_eventFilter_2411_0 = cb;
}


// exposed bool QAudioRoleControl::isSignalConnected(const QMetaMethod &signal)

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
  const QMetaMethod &arg1 = gsi::arg_reader<const QMetaMethod & >() (args, heap);
  ret.write<bool > ((bool)((QAudioRoleControl_Adaptor *)cls)->fp_QAudioRoleControl_isSignalConnected_c2394 (arg1));
}


// exposed int QAudioRoleControl::receivers(const char *signal)

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
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  ret.write<int > ((int)((QAudioRoleControl_Adaptor *)cls)->fp_QAudioRoleControl_receivers_c1731 (arg1));
}


// exposed QObject *QAudioRoleControl::sender()

static void _init_fp_sender_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_fp_sender_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QAudioRoleControl_Adaptor *)cls)->fp_QAudioRoleControl_sender_c0 ());
}


// exposed int QAudioRoleControl::senderSignalIndex()

static void _init_fp_senderSignalIndex_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_fp_senderSignalIndex_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QAudioRoleControl_Adaptor *)cls)->fp_QAudioRoleControl_senderSignalIndex_c0 ());
}


// void QAudioRoleControl::setAudioRole(QAudio::Role role)

static void _init_cbs_setAudioRole_1533_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("role");
  decl->add_arg<const qt_gsi::Converter<QAudio::Role>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_setAudioRole_1533_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QAudio::Role>::target_type & arg1 = args.read<const qt_gsi::Converter<QAudio::Role>::target_type & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAudioRoleControl_Adaptor *)cls)->cbs_setAudioRole_1533_0 (arg1);
}

static void _set_callback_cbs_setAudioRole_1533_0 (void *cls, const gsi::Callback &cb)
{
  ((QAudioRoleControl_Adaptor *)cls)->cb_setAudioRole_1533_0 = cb;
}


// QList<QAudio::Role> QAudioRoleControl::supportedAudioRoles()

static void _init_cbs_supportedAudioRoles_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QList<QAudio::Role> > ();
}

static void _call_cbs_supportedAudioRoles_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<QAudio::Role> > ((QList<QAudio::Role>)((QAudioRoleControl_Adaptor *)cls)->cbs_supportedAudioRoles_c0_0 ());
}

static void _set_callback_cbs_supportedAudioRoles_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QAudioRoleControl_Adaptor *)cls)->cb_supportedAudioRoles_c0_0 = cb;
}


// void QAudioRoleControl::timerEvent(QTimerEvent *event)

static void _init_cbs_timerEvent_1730_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("event");
  decl->add_arg<QTimerEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_timerEvent_1730_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QTimerEvent *arg1 = args.read<QTimerEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAudioRoleControl_Adaptor *)cls)->cbs_timerEvent_1730_0 (arg1);
}

static void _set_callback_cbs_timerEvent_1730_0 (void *cls, const gsi::Callback &cb)
{
  ((QAudioRoleControl_Adaptor *)cls)->cb_timerEvent_1730_0 = cb;
}


namespace gsi
{

gsi::Class<QAudioRoleControl> &qtdecl_QAudioRoleControl ();

static gsi::Methods methods_QAudioRoleControl_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QAudioRoleControl::QAudioRoleControl()\nThis method creates an object of class QAudioRoleControl.", &_init_ctor_QAudioRoleControl_Adaptor_0, &_call_ctor_QAudioRoleControl_Adaptor_0);
  methods += new qt_gsi::GenericMethod ("audioRole", "@brief Virtual method QAudio::Role QAudioRoleControl::audioRole()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_audioRole_c0_0, &_call_cbs_audioRole_c0_0);
  methods += new qt_gsi::GenericMethod ("audioRole", "@hide", true, &_init_cbs_audioRole_c0_0, &_call_cbs_audioRole_c0_0, &_set_callback_cbs_audioRole_c0_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@brief Virtual method void QAudioRoleControl::childEvent(QChildEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@hide", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0, &_set_callback_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@brief Virtual method void QAudioRoleControl::customEvent(QEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@hide", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0, &_set_callback_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@brief Virtual method void QAudioRoleControl::disconnectNotify(const QMetaMethod &signal)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@hide", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0, &_set_callback_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("event", "@brief Virtual method bool QAudioRoleControl::event(QEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("event", "@hide", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0, &_set_callback_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@brief Virtual method bool QAudioRoleControl::eventFilter(QObject *watched, QEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@hide", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0, &_set_callback_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("*isSignalConnected", "@brief Method bool QAudioRoleControl::isSignalConnected(const QMetaMethod &signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_isSignalConnected_c2394, &_call_fp_isSignalConnected_c2394);
  methods += new qt_gsi::GenericMethod ("*receivers", "@brief Method int QAudioRoleControl::receivers(const char *signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_receivers_c1731, &_call_fp_receivers_c1731);
  methods += new qt_gsi::GenericMethod ("*sender", "@brief Method QObject *QAudioRoleControl::sender()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_sender_c0, &_call_fp_sender_c0);
  methods += new qt_gsi::GenericMethod ("*senderSignalIndex", "@brief Method int QAudioRoleControl::senderSignalIndex()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_senderSignalIndex_c0, &_call_fp_senderSignalIndex_c0);
  methods += new qt_gsi::GenericMethod ("setAudioRole", "@brief Virtual method void QAudioRoleControl::setAudioRole(QAudio::Role role)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_setAudioRole_1533_0, &_call_cbs_setAudioRole_1533_0);
  methods += new qt_gsi::GenericMethod ("setAudioRole", "@hide", false, &_init_cbs_setAudioRole_1533_0, &_call_cbs_setAudioRole_1533_0, &_set_callback_cbs_setAudioRole_1533_0);
  methods += new qt_gsi::GenericMethod ("supportedAudioRoles", "@brief Virtual method QList<QAudio::Role> QAudioRoleControl::supportedAudioRoles()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_supportedAudioRoles_c0_0, &_call_cbs_supportedAudioRoles_c0_0);
  methods += new qt_gsi::GenericMethod ("supportedAudioRoles", "@hide", true, &_init_cbs_supportedAudioRoles_c0_0, &_call_cbs_supportedAudioRoles_c0_0, &_set_callback_cbs_supportedAudioRoles_c0_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@brief Virtual method void QAudioRoleControl::timerEvent(QTimerEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@hide", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0, &_set_callback_cbs_timerEvent_1730_0);
  return methods;
}

gsi::Class<QAudioRoleControl_Adaptor> decl_QAudioRoleControl_Adaptor (qtdecl_QAudioRoleControl (), "QtMultimedia", "QAudioRoleControl",
  methods_QAudioRoleControl_Adaptor (),
  "@qt\n@brief Binding of QAudioRoleControl");

}

