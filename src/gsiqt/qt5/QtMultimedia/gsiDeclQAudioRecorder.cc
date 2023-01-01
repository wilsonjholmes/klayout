
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
*  @file gsiDeclQAudioRecorder.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QAudioRecorder>
#include <QAudioEncoderSettings>
#include <QChildEvent>
#include <QEvent>
#include <QMediaObject>
#include <QMetaMethod>
#include <QObject>
#include <QSize>
#include <QThread>
#include <QTimerEvent>
#include <QUrl>
#include <QVideoEncoderSettings>
#include "gsiQt.h"
#include "gsiQtMultimediaCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QAudioRecorder

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QAudioRecorder::staticMetaObject);
}


// QString QAudioRecorder::audioInput()


static void _init_f_audioInput_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_audioInput_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QAudioRecorder *)cls)->audioInput ());
}


// void QAudioRecorder::audioInputChanged(const QString &name)


static void _init_f_audioInputChanged_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_audioInputChanged_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAudioRecorder *)cls)->audioInputChanged (arg1);
}


// QString QAudioRecorder::audioInputDescription(const QString &name)


static void _init_f_audioInputDescription_c2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_f_audioInputDescription_c2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QString > ((QString)((QAudioRecorder *)cls)->audioInputDescription (arg1));
}


// QStringList QAudioRecorder::audioInputs()


static void _init_f_audioInputs_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QStringList > ();
}

static void _call_f_audioInputs_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStringList > ((QStringList)((QAudioRecorder *)cls)->audioInputs ());
}


// void QAudioRecorder::availableAudioInputsChanged()


static void _init_f_availableAudioInputsChanged_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_availableAudioInputsChanged_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAudioRecorder *)cls)->availableAudioInputsChanged ();
}


// QString QAudioRecorder::defaultAudioInput()


static void _init_f_defaultAudioInput_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_defaultAudioInput_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QAudioRecorder *)cls)->defaultAudioInput ());
}


// void QAudioRecorder::setAudioInput(const QString &name)


static void _init_f_setAudioInput_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setAudioInput_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAudioRecorder *)cls)->setAudioInput (arg1);
}


// static QString QAudioRecorder::tr(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QAudioRecorder::tr (arg1, arg2, arg3));
}


// static QString QAudioRecorder::trUtf8(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QAudioRecorder::trUtf8 (arg1, arg2, arg3));
}


namespace gsi
{

static gsi::Methods methods_QAudioRecorder () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod (":audioInput", "@brief Method QString QAudioRecorder::audioInput()\n", true, &_init_f_audioInput_c0, &_call_f_audioInput_c0);
  methods += new qt_gsi::GenericMethod ("audioInputChanged", "@brief Method void QAudioRecorder::audioInputChanged(const QString &name)\n", false, &_init_f_audioInputChanged_2025, &_call_f_audioInputChanged_2025);
  methods += new qt_gsi::GenericMethod ("audioInputDescription", "@brief Method QString QAudioRecorder::audioInputDescription(const QString &name)\n", true, &_init_f_audioInputDescription_c2025, &_call_f_audioInputDescription_c2025);
  methods += new qt_gsi::GenericMethod ("audioInputs", "@brief Method QStringList QAudioRecorder::audioInputs()\n", true, &_init_f_audioInputs_c0, &_call_f_audioInputs_c0);
  methods += new qt_gsi::GenericMethod ("availableAudioInputsChanged", "@brief Method void QAudioRecorder::availableAudioInputsChanged()\n", false, &_init_f_availableAudioInputsChanged_0, &_call_f_availableAudioInputsChanged_0);
  methods += new qt_gsi::GenericMethod ("defaultAudioInput", "@brief Method QString QAudioRecorder::defaultAudioInput()\n", true, &_init_f_defaultAudioInput_c0, &_call_f_defaultAudioInput_c0);
  methods += new qt_gsi::GenericMethod ("setAudioInput|audioInput=", "@brief Method void QAudioRecorder::setAudioInput(const QString &name)\n", false, &_init_f_setAudioInput_2025, &_call_f_setAudioInput_2025);
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QAudioRecorder::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QAudioRecorder::trUtf8(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_4013, &_call_f_trUtf8_4013);
  return methods;
}

gsi::Class<QMediaRecorder> &qtdecl_QMediaRecorder ();

qt_gsi::QtNativeClass<QAudioRecorder> decl_QAudioRecorder (qtdecl_QMediaRecorder (), "QtMultimedia", "QAudioRecorder_Native",
  methods_QAudioRecorder (),
  "@hide\n@alias QAudioRecorder");

GSI_QTMULTIMEDIA_PUBLIC gsi::Class<QAudioRecorder> &qtdecl_QAudioRecorder () { return decl_QAudioRecorder; }

}


class QAudioRecorder_Adaptor : public QAudioRecorder, public qt_gsi::QtObjectBase
{
public:

  virtual ~QAudioRecorder_Adaptor();

  //  [adaptor ctor] QAudioRecorder::QAudioRecorder(QObject *parent)
  QAudioRecorder_Adaptor() : QAudioRecorder()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QAudioRecorder::QAudioRecorder(QObject *parent)
  QAudioRecorder_Adaptor(QObject *parent) : QAudioRecorder(parent)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [expose] bool QAudioRecorder::isSignalConnected(const QMetaMethod &signal)
  bool fp_QAudioRecorder_isSignalConnected_c2394 (const QMetaMethod &signal) const {
    return QAudioRecorder::isSignalConnected(signal);
  }

  //  [expose] int QAudioRecorder::receivers(const char *signal)
  int fp_QAudioRecorder_receivers_c1731 (const char *signal) const {
    return QAudioRecorder::receivers(signal);
  }

  //  [expose] QObject *QAudioRecorder::sender()
  QObject * fp_QAudioRecorder_sender_c0 () const {
    return QAudioRecorder::sender();
  }

  //  [expose] int QAudioRecorder::senderSignalIndex()
  int fp_QAudioRecorder_senderSignalIndex_c0 () const {
    return QAudioRecorder::senderSignalIndex();
  }

  //  [adaptor impl] bool QAudioRecorder::event(QEvent *)
  bool cbs_event_1217_0(QEvent *arg1)
  {
    return QAudioRecorder::event(arg1);
  }

  virtual bool event(QEvent *arg1)
  {
    if (cb_event_1217_0.can_issue()) {
      return cb_event_1217_0.issue<QAudioRecorder_Adaptor, bool, QEvent *>(&QAudioRecorder_Adaptor::cbs_event_1217_0, arg1);
    } else {
      return QAudioRecorder::event(arg1);
    }
  }

  //  [adaptor impl] bool QAudioRecorder::eventFilter(QObject *, QEvent *)
  bool cbs_eventFilter_2411_0(QObject *arg1, QEvent *arg2)
  {
    return QAudioRecorder::eventFilter(arg1, arg2);
  }

  virtual bool eventFilter(QObject *arg1, QEvent *arg2)
  {
    if (cb_eventFilter_2411_0.can_issue()) {
      return cb_eventFilter_2411_0.issue<QAudioRecorder_Adaptor, bool, QObject *, QEvent *>(&QAudioRecorder_Adaptor::cbs_eventFilter_2411_0, arg1, arg2);
    } else {
      return QAudioRecorder::eventFilter(arg1, arg2);
    }
  }

  //  [adaptor impl] QMediaObject *QAudioRecorder::mediaObject()
  QMediaObject * cbs_mediaObject_c0_0() const
  {
    return QAudioRecorder::mediaObject();
  }

  virtual QMediaObject * mediaObject() const
  {
    if (cb_mediaObject_c0_0.can_issue()) {
      return cb_mediaObject_c0_0.issue<QAudioRecorder_Adaptor, QMediaObject *>(&QAudioRecorder_Adaptor::cbs_mediaObject_c0_0);
    } else {
      return QAudioRecorder::mediaObject();
    }
  }

  //  [adaptor impl] void QAudioRecorder::childEvent(QChildEvent *)
  void cbs_childEvent_1701_0(QChildEvent *arg1)
  {
    QAudioRecorder::childEvent(arg1);
  }

  virtual void childEvent(QChildEvent *arg1)
  {
    if (cb_childEvent_1701_0.can_issue()) {
      cb_childEvent_1701_0.issue<QAudioRecorder_Adaptor, QChildEvent *>(&QAudioRecorder_Adaptor::cbs_childEvent_1701_0, arg1);
    } else {
      QAudioRecorder::childEvent(arg1);
    }
  }

  //  [adaptor impl] void QAudioRecorder::customEvent(QEvent *)
  void cbs_customEvent_1217_0(QEvent *arg1)
  {
    QAudioRecorder::customEvent(arg1);
  }

  virtual void customEvent(QEvent *arg1)
  {
    if (cb_customEvent_1217_0.can_issue()) {
      cb_customEvent_1217_0.issue<QAudioRecorder_Adaptor, QEvent *>(&QAudioRecorder_Adaptor::cbs_customEvent_1217_0, arg1);
    } else {
      QAudioRecorder::customEvent(arg1);
    }
  }

  //  [adaptor impl] void QAudioRecorder::disconnectNotify(const QMetaMethod &signal)
  void cbs_disconnectNotify_2394_0(const QMetaMethod &signal)
  {
    QAudioRecorder::disconnectNotify(signal);
  }

  virtual void disconnectNotify(const QMetaMethod &signal)
  {
    if (cb_disconnectNotify_2394_0.can_issue()) {
      cb_disconnectNotify_2394_0.issue<QAudioRecorder_Adaptor, const QMetaMethod &>(&QAudioRecorder_Adaptor::cbs_disconnectNotify_2394_0, signal);
    } else {
      QAudioRecorder::disconnectNotify(signal);
    }
  }

  //  [adaptor impl] bool QAudioRecorder::setMediaObject(QMediaObject *object)
  bool cbs_setMediaObject_1782_0(QMediaObject *object)
  {
    return QAudioRecorder::setMediaObject(object);
  }

  virtual bool setMediaObject(QMediaObject *object)
  {
    if (cb_setMediaObject_1782_0.can_issue()) {
      return cb_setMediaObject_1782_0.issue<QAudioRecorder_Adaptor, bool, QMediaObject *>(&QAudioRecorder_Adaptor::cbs_setMediaObject_1782_0, object);
    } else {
      return QAudioRecorder::setMediaObject(object);
    }
  }

  //  [adaptor impl] void QAudioRecorder::timerEvent(QTimerEvent *)
  void cbs_timerEvent_1730_0(QTimerEvent *arg1)
  {
    QAudioRecorder::timerEvent(arg1);
  }

  virtual void timerEvent(QTimerEvent *arg1)
  {
    if (cb_timerEvent_1730_0.can_issue()) {
      cb_timerEvent_1730_0.issue<QAudioRecorder_Adaptor, QTimerEvent *>(&QAudioRecorder_Adaptor::cbs_timerEvent_1730_0, arg1);
    } else {
      QAudioRecorder::timerEvent(arg1);
    }
  }

  gsi::Callback cb_event_1217_0;
  gsi::Callback cb_eventFilter_2411_0;
  gsi::Callback cb_mediaObject_c0_0;
  gsi::Callback cb_childEvent_1701_0;
  gsi::Callback cb_customEvent_1217_0;
  gsi::Callback cb_disconnectNotify_2394_0;
  gsi::Callback cb_setMediaObject_1782_0;
  gsi::Callback cb_timerEvent_1730_0;
};

QAudioRecorder_Adaptor::~QAudioRecorder_Adaptor() { }

//  Constructor QAudioRecorder::QAudioRecorder(QObject *parent) (adaptor class)

static void _init_ctor_QAudioRecorder_Adaptor_1302 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("parent", true, "0");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return_new<QAudioRecorder_Adaptor> ();
}

static void _call_ctor_QAudioRecorder_Adaptor_1302 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args ? gsi::arg_reader<QObject * >() (args, heap) : gsi::arg_maker<QObject * >() (0, heap);
  ret.write<QAudioRecorder_Adaptor *> (new QAudioRecorder_Adaptor (arg1));
}


// void QAudioRecorder::childEvent(QChildEvent *)

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
  ((QAudioRecorder_Adaptor *)cls)->cbs_childEvent_1701_0 (arg1);
}

static void _set_callback_cbs_childEvent_1701_0 (void *cls, const gsi::Callback &cb)
{
  ((QAudioRecorder_Adaptor *)cls)->cb_childEvent_1701_0 = cb;
}


// void QAudioRecorder::customEvent(QEvent *)

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
  ((QAudioRecorder_Adaptor *)cls)->cbs_customEvent_1217_0 (arg1);
}

static void _set_callback_cbs_customEvent_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QAudioRecorder_Adaptor *)cls)->cb_customEvent_1217_0 = cb;
}


// void QAudioRecorder::disconnectNotify(const QMetaMethod &signal)

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
  ((QAudioRecorder_Adaptor *)cls)->cbs_disconnectNotify_2394_0 (arg1);
}

static void _set_callback_cbs_disconnectNotify_2394_0 (void *cls, const gsi::Callback &cb)
{
  ((QAudioRecorder_Adaptor *)cls)->cb_disconnectNotify_2394_0 = cb;
}


// bool QAudioRecorder::event(QEvent *)

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
  ret.write<bool > ((bool)((QAudioRecorder_Adaptor *)cls)->cbs_event_1217_0 (arg1));
}

static void _set_callback_cbs_event_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QAudioRecorder_Adaptor *)cls)->cb_event_1217_0 = cb;
}


// bool QAudioRecorder::eventFilter(QObject *, QEvent *)

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
  ret.write<bool > ((bool)((QAudioRecorder_Adaptor *)cls)->cbs_eventFilter_2411_0 (arg1, arg2));
}

static void _set_callback_cbs_eventFilter_2411_0 (void *cls, const gsi::Callback &cb)
{
  ((QAudioRecorder_Adaptor *)cls)->cb_eventFilter_2411_0 = cb;
}


// exposed bool QAudioRecorder::isSignalConnected(const QMetaMethod &signal)

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
  ret.write<bool > ((bool)((QAudioRecorder_Adaptor *)cls)->fp_QAudioRecorder_isSignalConnected_c2394 (arg1));
}


// QMediaObject *QAudioRecorder::mediaObject()

static void _init_cbs_mediaObject_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QMediaObject * > ();
}

static void _call_cbs_mediaObject_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QMediaObject * > ((QMediaObject *)((QAudioRecorder_Adaptor *)cls)->cbs_mediaObject_c0_0 ());
}

static void _set_callback_cbs_mediaObject_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QAudioRecorder_Adaptor *)cls)->cb_mediaObject_c0_0 = cb;
}


// exposed int QAudioRecorder::receivers(const char *signal)

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
  ret.write<int > ((int)((QAudioRecorder_Adaptor *)cls)->fp_QAudioRecorder_receivers_c1731 (arg1));
}


// exposed QObject *QAudioRecorder::sender()

static void _init_fp_sender_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_fp_sender_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QAudioRecorder_Adaptor *)cls)->fp_QAudioRecorder_sender_c0 ());
}


// exposed int QAudioRecorder::senderSignalIndex()

static void _init_fp_senderSignalIndex_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_fp_senderSignalIndex_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QAudioRecorder_Adaptor *)cls)->fp_QAudioRecorder_senderSignalIndex_c0 ());
}


// bool QAudioRecorder::setMediaObject(QMediaObject *object)

static void _init_cbs_setMediaObject_1782_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("object");
  decl->add_arg<QMediaObject * > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_cbs_setMediaObject_1782_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QMediaObject *arg1 = args.read<QMediaObject * > (heap);
  ret.write<bool > ((bool)((QAudioRecorder_Adaptor *)cls)->cbs_setMediaObject_1782_0 (arg1));
}

static void _set_callback_cbs_setMediaObject_1782_0 (void *cls, const gsi::Callback &cb)
{
  ((QAudioRecorder_Adaptor *)cls)->cb_setMediaObject_1782_0 = cb;
}


// void QAudioRecorder::timerEvent(QTimerEvent *)

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
  ((QAudioRecorder_Adaptor *)cls)->cbs_timerEvent_1730_0 (arg1);
}

static void _set_callback_cbs_timerEvent_1730_0 (void *cls, const gsi::Callback &cb)
{
  ((QAudioRecorder_Adaptor *)cls)->cb_timerEvent_1730_0 = cb;
}


namespace gsi
{

gsi::Class<QAudioRecorder> &qtdecl_QAudioRecorder ();

static gsi::Methods methods_QAudioRecorder_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QAudioRecorder::QAudioRecorder(QObject *parent)\nThis method creates an object of class QAudioRecorder.", &_init_ctor_QAudioRecorder_Adaptor_1302, &_call_ctor_QAudioRecorder_Adaptor_1302);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@brief Virtual method void QAudioRecorder::childEvent(QChildEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@hide", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0, &_set_callback_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@brief Virtual method void QAudioRecorder::customEvent(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@hide", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0, &_set_callback_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@brief Virtual method void QAudioRecorder::disconnectNotify(const QMetaMethod &signal)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@hide", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0, &_set_callback_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("event", "@brief Virtual method bool QAudioRecorder::event(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("event", "@hide", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0, &_set_callback_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@brief Virtual method bool QAudioRecorder::eventFilter(QObject *, QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@hide", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0, &_set_callback_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("*isSignalConnected", "@brief Method bool QAudioRecorder::isSignalConnected(const QMetaMethod &signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_isSignalConnected_c2394, &_call_fp_isSignalConnected_c2394);
  methods += new qt_gsi::GenericMethod ("mediaObject", "@brief Virtual method QMediaObject *QAudioRecorder::mediaObject()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_mediaObject_c0_0, &_call_cbs_mediaObject_c0_0);
  methods += new qt_gsi::GenericMethod ("mediaObject", "@hide", true, &_init_cbs_mediaObject_c0_0, &_call_cbs_mediaObject_c0_0, &_set_callback_cbs_mediaObject_c0_0);
  methods += new qt_gsi::GenericMethod ("*receivers", "@brief Method int QAudioRecorder::receivers(const char *signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_receivers_c1731, &_call_fp_receivers_c1731);
  methods += new qt_gsi::GenericMethod ("*sender", "@brief Method QObject *QAudioRecorder::sender()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_sender_c0, &_call_fp_sender_c0);
  methods += new qt_gsi::GenericMethod ("*senderSignalIndex", "@brief Method int QAudioRecorder::senderSignalIndex()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_senderSignalIndex_c0, &_call_fp_senderSignalIndex_c0);
  methods += new qt_gsi::GenericMethod ("*setMediaObject", "@brief Virtual method bool QAudioRecorder::setMediaObject(QMediaObject *object)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_setMediaObject_1782_0, &_call_cbs_setMediaObject_1782_0);
  methods += new qt_gsi::GenericMethod ("*setMediaObject", "@hide", false, &_init_cbs_setMediaObject_1782_0, &_call_cbs_setMediaObject_1782_0, &_set_callback_cbs_setMediaObject_1782_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@brief Virtual method void QAudioRecorder::timerEvent(QTimerEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@hide", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0, &_set_callback_cbs_timerEvent_1730_0);
  return methods;
}

gsi::Class<QAudioRecorder_Adaptor> decl_QAudioRecorder_Adaptor (qtdecl_QAudioRecorder (), "QtMultimedia", "QAudioRecorder",
  methods_QAudioRecorder_Adaptor (),
  "@qt\n@brief Binding of QAudioRecorder");

}

