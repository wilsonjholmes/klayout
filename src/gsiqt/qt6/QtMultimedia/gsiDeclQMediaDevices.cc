
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
*  @file gsiDeclQMediaDevices.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QMediaDevices>
#include <QAudioDevice>
#include <QCameraDevice>
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
// class QMediaDevices

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QMediaDevices::staticMetaObject);
}


// void QMediaDevices::audioInputsChanged()


static void _init_f_audioInputsChanged_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_audioInputsChanged_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMediaDevices *)cls)->audioInputsChanged ();
}


// void QMediaDevices::audioOutputsChanged()


static void _init_f_audioOutputsChanged_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_audioOutputsChanged_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMediaDevices *)cls)->audioOutputsChanged ();
}


// void QMediaDevices::videoInputsChanged()


static void _init_f_videoInputsChanged_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_videoInputsChanged_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMediaDevices *)cls)->videoInputsChanged ();
}


// static QList<QAudioDevice> QMediaDevices::audioInputs()


static void _init_f_audioInputs_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<QList<QAudioDevice> > ();
}

static void _call_f_audioInputs_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<QAudioDevice> > ((QList<QAudioDevice>)QMediaDevices::audioInputs ());
}


// static QList<QAudioDevice> QMediaDevices::audioOutputs()


static void _init_f_audioOutputs_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<QList<QAudioDevice> > ();
}

static void _call_f_audioOutputs_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<QAudioDevice> > ((QList<QAudioDevice>)QMediaDevices::audioOutputs ());
}


// static QAudioDevice QMediaDevices::defaultAudioInput()


static void _init_f_defaultAudioInput_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<QAudioDevice > ();
}

static void _call_f_defaultAudioInput_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QAudioDevice > ((QAudioDevice)QMediaDevices::defaultAudioInput ());
}


// static QAudioDevice QMediaDevices::defaultAudioOutput()


static void _init_f_defaultAudioOutput_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<QAudioDevice > ();
}

static void _call_f_defaultAudioOutput_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QAudioDevice > ((QAudioDevice)QMediaDevices::defaultAudioOutput ());
}


// static QCameraDevice QMediaDevices::defaultVideoInput()


static void _init_f_defaultVideoInput_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<QCameraDevice > ();
}

static void _call_f_defaultVideoInput_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QCameraDevice > ((QCameraDevice)QMediaDevices::defaultVideoInput ());
}


// static QString QMediaDevices::tr(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QMediaDevices::tr (arg1, arg2, arg3));
}


// static QList<QCameraDevice> QMediaDevices::videoInputs()


static void _init_f_videoInputs_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<QList<QCameraDevice> > ();
}

static void _call_f_videoInputs_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<QCameraDevice> > ((QList<QCameraDevice>)QMediaDevices::videoInputs ());
}


namespace gsi
{

static gsi::Methods methods_QMediaDevices () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod ("audioInputsChanged", "@brief Method void QMediaDevices::audioInputsChanged()\n", false, &_init_f_audioInputsChanged_0, &_call_f_audioInputsChanged_0);
  methods += new qt_gsi::GenericMethod ("audioOutputsChanged", "@brief Method void QMediaDevices::audioOutputsChanged()\n", false, &_init_f_audioOutputsChanged_0, &_call_f_audioOutputsChanged_0);
  methods += new qt_gsi::GenericMethod ("videoInputsChanged", "@brief Method void QMediaDevices::videoInputsChanged()\n", false, &_init_f_videoInputsChanged_0, &_call_f_videoInputsChanged_0);
  methods += new qt_gsi::GenericStaticMethod ("audioInputs", "@brief Static method QList<QAudioDevice> QMediaDevices::audioInputs()\nThis method is static and can be called without an instance.", &_init_f_audioInputs_0, &_call_f_audioInputs_0);
  methods += new qt_gsi::GenericStaticMethod ("audioOutputs", "@brief Static method QList<QAudioDevice> QMediaDevices::audioOutputs()\nThis method is static and can be called without an instance.", &_init_f_audioOutputs_0, &_call_f_audioOutputs_0);
  methods += new qt_gsi::GenericStaticMethod ("defaultAudioInput", "@brief Static method QAudioDevice QMediaDevices::defaultAudioInput()\nThis method is static and can be called without an instance.", &_init_f_defaultAudioInput_0, &_call_f_defaultAudioInput_0);
  methods += new qt_gsi::GenericStaticMethod ("defaultAudioOutput", "@brief Static method QAudioDevice QMediaDevices::defaultAudioOutput()\nThis method is static and can be called without an instance.", &_init_f_defaultAudioOutput_0, &_call_f_defaultAudioOutput_0);
  methods += new qt_gsi::GenericStaticMethod ("defaultVideoInput", "@brief Static method QCameraDevice QMediaDevices::defaultVideoInput()\nThis method is static and can be called without an instance.", &_init_f_defaultVideoInput_0, &_call_f_defaultVideoInput_0);
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QMediaDevices::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  methods += new qt_gsi::GenericStaticMethod ("videoInputs", "@brief Static method QList<QCameraDevice> QMediaDevices::videoInputs()\nThis method is static and can be called without an instance.", &_init_f_videoInputs_0, &_call_f_videoInputs_0);
  return methods;
}

gsi::Class<QObject> &qtdecl_QObject ();

qt_gsi::QtNativeClass<QMediaDevices> decl_QMediaDevices (qtdecl_QObject (), "QtMultimedia", "QMediaDevices_Native",
  methods_QMediaDevices (),
  "@hide\n@alias QMediaDevices");

GSI_QTMULTIMEDIA_PUBLIC gsi::Class<QMediaDevices> &qtdecl_QMediaDevices () { return decl_QMediaDevices; }

}


class QMediaDevices_Adaptor : public QMediaDevices, public qt_gsi::QtObjectBase
{
public:

  virtual ~QMediaDevices_Adaptor();

  //  [adaptor ctor] QMediaDevices::QMediaDevices(QObject *parent)
  QMediaDevices_Adaptor() : QMediaDevices()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QMediaDevices::QMediaDevices(QObject *parent)
  QMediaDevices_Adaptor(QObject *parent) : QMediaDevices(parent)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [expose] bool QMediaDevices::isSignalConnected(const QMetaMethod &signal)
  bool fp_QMediaDevices_isSignalConnected_c2394 (const QMetaMethod &signal) const {
    return QMediaDevices::isSignalConnected(signal);
  }

  //  [expose] int QMediaDevices::receivers(const char *signal)
  int fp_QMediaDevices_receivers_c1731 (const char *signal) const {
    return QMediaDevices::receivers(signal);
  }

  //  [expose] QObject *QMediaDevices::sender()
  QObject * fp_QMediaDevices_sender_c0 () const {
    return QMediaDevices::sender();
  }

  //  [expose] int QMediaDevices::senderSignalIndex()
  int fp_QMediaDevices_senderSignalIndex_c0 () const {
    return QMediaDevices::senderSignalIndex();
  }

  //  [adaptor impl] bool QMediaDevices::event(QEvent *event)
  bool cbs_event_1217_0(QEvent *_event)
  {
    return QMediaDevices::event(_event);
  }

  virtual bool event(QEvent *_event)
  {
    if (cb_event_1217_0.can_issue()) {
      return cb_event_1217_0.issue<QMediaDevices_Adaptor, bool, QEvent *>(&QMediaDevices_Adaptor::cbs_event_1217_0, _event);
    } else {
      return QMediaDevices::event(_event);
    }
  }

  //  [adaptor impl] bool QMediaDevices::eventFilter(QObject *watched, QEvent *event)
  bool cbs_eventFilter_2411_0(QObject *watched, QEvent *event)
  {
    return QMediaDevices::eventFilter(watched, event);
  }

  virtual bool eventFilter(QObject *watched, QEvent *event)
  {
    if (cb_eventFilter_2411_0.can_issue()) {
      return cb_eventFilter_2411_0.issue<QMediaDevices_Adaptor, bool, QObject *, QEvent *>(&QMediaDevices_Adaptor::cbs_eventFilter_2411_0, watched, event);
    } else {
      return QMediaDevices::eventFilter(watched, event);
    }
  }

  //  [adaptor impl] void QMediaDevices::childEvent(QChildEvent *event)
  void cbs_childEvent_1701_0(QChildEvent *event)
  {
    QMediaDevices::childEvent(event);
  }

  virtual void childEvent(QChildEvent *event)
  {
    if (cb_childEvent_1701_0.can_issue()) {
      cb_childEvent_1701_0.issue<QMediaDevices_Adaptor, QChildEvent *>(&QMediaDevices_Adaptor::cbs_childEvent_1701_0, event);
    } else {
      QMediaDevices::childEvent(event);
    }
  }

  //  [adaptor impl] void QMediaDevices::customEvent(QEvent *event)
  void cbs_customEvent_1217_0(QEvent *event)
  {
    QMediaDevices::customEvent(event);
  }

  virtual void customEvent(QEvent *event)
  {
    if (cb_customEvent_1217_0.can_issue()) {
      cb_customEvent_1217_0.issue<QMediaDevices_Adaptor, QEvent *>(&QMediaDevices_Adaptor::cbs_customEvent_1217_0, event);
    } else {
      QMediaDevices::customEvent(event);
    }
  }

  //  [adaptor impl] void QMediaDevices::disconnectNotify(const QMetaMethod &signal)
  void cbs_disconnectNotify_2394_0(const QMetaMethod &signal)
  {
    QMediaDevices::disconnectNotify(signal);
  }

  virtual void disconnectNotify(const QMetaMethod &signal)
  {
    if (cb_disconnectNotify_2394_0.can_issue()) {
      cb_disconnectNotify_2394_0.issue<QMediaDevices_Adaptor, const QMetaMethod &>(&QMediaDevices_Adaptor::cbs_disconnectNotify_2394_0, signal);
    } else {
      QMediaDevices::disconnectNotify(signal);
    }
  }

  //  [adaptor impl] void QMediaDevices::timerEvent(QTimerEvent *event)
  void cbs_timerEvent_1730_0(QTimerEvent *event)
  {
    QMediaDevices::timerEvent(event);
  }

  virtual void timerEvent(QTimerEvent *event)
  {
    if (cb_timerEvent_1730_0.can_issue()) {
      cb_timerEvent_1730_0.issue<QMediaDevices_Adaptor, QTimerEvent *>(&QMediaDevices_Adaptor::cbs_timerEvent_1730_0, event);
    } else {
      QMediaDevices::timerEvent(event);
    }
  }

  gsi::Callback cb_event_1217_0;
  gsi::Callback cb_eventFilter_2411_0;
  gsi::Callback cb_childEvent_1701_0;
  gsi::Callback cb_customEvent_1217_0;
  gsi::Callback cb_disconnectNotify_2394_0;
  gsi::Callback cb_timerEvent_1730_0;
};

QMediaDevices_Adaptor::~QMediaDevices_Adaptor() { }

//  Constructor QMediaDevices::QMediaDevices(QObject *parent) (adaptor class)

static void _init_ctor_QMediaDevices_Adaptor_1302 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("parent", true, "nullptr");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return_new<QMediaDevices_Adaptor> ();
}

static void _call_ctor_QMediaDevices_Adaptor_1302 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args ? gsi::arg_reader<QObject * >() (args, heap) : gsi::arg_maker<QObject * >() (nullptr, heap);
  ret.write<QMediaDevices_Adaptor *> (new QMediaDevices_Adaptor (arg1));
}


// void QMediaDevices::childEvent(QChildEvent *event)

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
  ((QMediaDevices_Adaptor *)cls)->cbs_childEvent_1701_0 (arg1);
}

static void _set_callback_cbs_childEvent_1701_0 (void *cls, const gsi::Callback &cb)
{
  ((QMediaDevices_Adaptor *)cls)->cb_childEvent_1701_0 = cb;
}


// void QMediaDevices::customEvent(QEvent *event)

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
  ((QMediaDevices_Adaptor *)cls)->cbs_customEvent_1217_0 (arg1);
}

static void _set_callback_cbs_customEvent_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QMediaDevices_Adaptor *)cls)->cb_customEvent_1217_0 = cb;
}


// void QMediaDevices::disconnectNotify(const QMetaMethod &signal)

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
  ((QMediaDevices_Adaptor *)cls)->cbs_disconnectNotify_2394_0 (arg1);
}

static void _set_callback_cbs_disconnectNotify_2394_0 (void *cls, const gsi::Callback &cb)
{
  ((QMediaDevices_Adaptor *)cls)->cb_disconnectNotify_2394_0 = cb;
}


// bool QMediaDevices::event(QEvent *event)

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
  ret.write<bool > ((bool)((QMediaDevices_Adaptor *)cls)->cbs_event_1217_0 (arg1));
}

static void _set_callback_cbs_event_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QMediaDevices_Adaptor *)cls)->cb_event_1217_0 = cb;
}


// bool QMediaDevices::eventFilter(QObject *watched, QEvent *event)

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
  ret.write<bool > ((bool)((QMediaDevices_Adaptor *)cls)->cbs_eventFilter_2411_0 (arg1, arg2));
}

static void _set_callback_cbs_eventFilter_2411_0 (void *cls, const gsi::Callback &cb)
{
  ((QMediaDevices_Adaptor *)cls)->cb_eventFilter_2411_0 = cb;
}


// exposed bool QMediaDevices::isSignalConnected(const QMetaMethod &signal)

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
  ret.write<bool > ((bool)((QMediaDevices_Adaptor *)cls)->fp_QMediaDevices_isSignalConnected_c2394 (arg1));
}


// exposed int QMediaDevices::receivers(const char *signal)

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
  ret.write<int > ((int)((QMediaDevices_Adaptor *)cls)->fp_QMediaDevices_receivers_c1731 (arg1));
}


// exposed QObject *QMediaDevices::sender()

static void _init_fp_sender_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_fp_sender_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QMediaDevices_Adaptor *)cls)->fp_QMediaDevices_sender_c0 ());
}


// exposed int QMediaDevices::senderSignalIndex()

static void _init_fp_senderSignalIndex_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_fp_senderSignalIndex_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QMediaDevices_Adaptor *)cls)->fp_QMediaDevices_senderSignalIndex_c0 ());
}


// void QMediaDevices::timerEvent(QTimerEvent *event)

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
  ((QMediaDevices_Adaptor *)cls)->cbs_timerEvent_1730_0 (arg1);
}

static void _set_callback_cbs_timerEvent_1730_0 (void *cls, const gsi::Callback &cb)
{
  ((QMediaDevices_Adaptor *)cls)->cb_timerEvent_1730_0 = cb;
}


namespace gsi
{

gsi::Class<QMediaDevices> &qtdecl_QMediaDevices ();

static gsi::Methods methods_QMediaDevices_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QMediaDevices::QMediaDevices(QObject *parent)\nThis method creates an object of class QMediaDevices.", &_init_ctor_QMediaDevices_Adaptor_1302, &_call_ctor_QMediaDevices_Adaptor_1302);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@brief Virtual method void QMediaDevices::childEvent(QChildEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@hide", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0, &_set_callback_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@brief Virtual method void QMediaDevices::customEvent(QEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@hide", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0, &_set_callback_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@brief Virtual method void QMediaDevices::disconnectNotify(const QMetaMethod &signal)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@hide", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0, &_set_callback_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("event", "@brief Virtual method bool QMediaDevices::event(QEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("event", "@hide", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0, &_set_callback_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@brief Virtual method bool QMediaDevices::eventFilter(QObject *watched, QEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@hide", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0, &_set_callback_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("*isSignalConnected", "@brief Method bool QMediaDevices::isSignalConnected(const QMetaMethod &signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_isSignalConnected_c2394, &_call_fp_isSignalConnected_c2394);
  methods += new qt_gsi::GenericMethod ("*receivers", "@brief Method int QMediaDevices::receivers(const char *signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_receivers_c1731, &_call_fp_receivers_c1731);
  methods += new qt_gsi::GenericMethod ("*sender", "@brief Method QObject *QMediaDevices::sender()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_sender_c0, &_call_fp_sender_c0);
  methods += new qt_gsi::GenericMethod ("*senderSignalIndex", "@brief Method int QMediaDevices::senderSignalIndex()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_senderSignalIndex_c0, &_call_fp_senderSignalIndex_c0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@brief Virtual method void QMediaDevices::timerEvent(QTimerEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@hide", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0, &_set_callback_cbs_timerEvent_1730_0);
  return methods;
}

gsi::Class<QMediaDevices_Adaptor> decl_QMediaDevices_Adaptor (qtdecl_QMediaDevices (), "QtMultimedia", "QMediaDevices",
  methods_QMediaDevices_Adaptor (),
  "@qt\n@brief Binding of QMediaDevices");

}

