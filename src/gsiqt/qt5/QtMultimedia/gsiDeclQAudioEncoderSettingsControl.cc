
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
*  @file gsiDeclQAudioEncoderSettingsControl.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QAudioEncoderSettingsControl>
#include <QAudioEncoderSettings>
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
// class QAudioEncoderSettingsControl

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QAudioEncoderSettingsControl::staticMetaObject);
}


// QAudioEncoderSettings QAudioEncoderSettingsControl::audioSettings()


static void _init_f_audioSettings_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QAudioEncoderSettings > ();
}

static void _call_f_audioSettings_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QAudioEncoderSettings > ((QAudioEncoderSettings)((QAudioEncoderSettingsControl *)cls)->audioSettings ());
}


// QString QAudioEncoderSettingsControl::codecDescription(const QString &codecName)


static void _init_f_codecDescription_c2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("codecName");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_f_codecDescription_c2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QString > ((QString)((QAudioEncoderSettingsControl *)cls)->codecDescription (arg1));
}


// void QAudioEncoderSettingsControl::setAudioSettings(const QAudioEncoderSettings &settings)


static void _init_f_setAudioSettings_3445 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("settings");
  decl->add_arg<const QAudioEncoderSettings & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setAudioSettings_3445 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QAudioEncoderSettings &arg1 = gsi::arg_reader<const QAudioEncoderSettings & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAudioEncoderSettingsControl *)cls)->setAudioSettings (arg1);
}


// QStringList QAudioEncoderSettingsControl::supportedAudioCodecs()


static void _init_f_supportedAudioCodecs_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QStringList > ();
}

static void _call_f_supportedAudioCodecs_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStringList > ((QStringList)((QAudioEncoderSettingsControl *)cls)->supportedAudioCodecs ());
}


// QList<int> QAudioEncoderSettingsControl::supportedSampleRates(const QAudioEncoderSettings &settings, bool *continuous)


static void _init_f_supportedSampleRates_c4387 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("settings");
  decl->add_arg<const QAudioEncoderSettings & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("continuous", true, "nullptr");
  decl->add_arg<bool * > (argspec_1);
  decl->set_return<QList<int> > ();
}

static void _call_f_supportedSampleRates_c4387 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QAudioEncoderSettings &arg1 = gsi::arg_reader<const QAudioEncoderSettings & >() (args, heap);
  bool *arg2 = args ? gsi::arg_reader<bool * >() (args, heap) : gsi::arg_maker<bool * >() (nullptr, heap);
  ret.write<QList<int> > ((QList<int>)((QAudioEncoderSettingsControl *)cls)->supportedSampleRates (arg1, arg2));
}


// static QString QAudioEncoderSettingsControl::tr(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QAudioEncoderSettingsControl::tr (arg1, arg2, arg3));
}


// static QString QAudioEncoderSettingsControl::trUtf8(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QAudioEncoderSettingsControl::trUtf8 (arg1, arg2, arg3));
}


namespace gsi
{

static gsi::Methods methods_QAudioEncoderSettingsControl () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod (":audioSettings", "@brief Method QAudioEncoderSettings QAudioEncoderSettingsControl::audioSettings()\n", true, &_init_f_audioSettings_c0, &_call_f_audioSettings_c0);
  methods += new qt_gsi::GenericMethod ("codecDescription", "@brief Method QString QAudioEncoderSettingsControl::codecDescription(const QString &codecName)\n", true, &_init_f_codecDescription_c2025, &_call_f_codecDescription_c2025);
  methods += new qt_gsi::GenericMethod ("setAudioSettings|audioSettings=", "@brief Method void QAudioEncoderSettingsControl::setAudioSettings(const QAudioEncoderSettings &settings)\n", false, &_init_f_setAudioSettings_3445, &_call_f_setAudioSettings_3445);
  methods += new qt_gsi::GenericMethod ("supportedAudioCodecs", "@brief Method QStringList QAudioEncoderSettingsControl::supportedAudioCodecs()\n", true, &_init_f_supportedAudioCodecs_c0, &_call_f_supportedAudioCodecs_c0);
  methods += new qt_gsi::GenericMethod ("supportedSampleRates", "@brief Method QList<int> QAudioEncoderSettingsControl::supportedSampleRates(const QAudioEncoderSettings &settings, bool *continuous)\n", true, &_init_f_supportedSampleRates_c4387, &_call_f_supportedSampleRates_c4387);
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QAudioEncoderSettingsControl::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QAudioEncoderSettingsControl::trUtf8(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_4013, &_call_f_trUtf8_4013);
  return methods;
}

gsi::Class<QMediaControl> &qtdecl_QMediaControl ();

qt_gsi::QtNativeClass<QAudioEncoderSettingsControl> decl_QAudioEncoderSettingsControl (qtdecl_QMediaControl (), "QtMultimedia", "QAudioEncoderSettingsControl_Native",
  methods_QAudioEncoderSettingsControl (),
  "@hide\n@alias QAudioEncoderSettingsControl");

GSI_QTMULTIMEDIA_PUBLIC gsi::Class<QAudioEncoderSettingsControl> &qtdecl_QAudioEncoderSettingsControl () { return decl_QAudioEncoderSettingsControl; }

}


class QAudioEncoderSettingsControl_Adaptor : public QAudioEncoderSettingsControl, public qt_gsi::QtObjectBase
{
public:

  virtual ~QAudioEncoderSettingsControl_Adaptor();

  //  [adaptor ctor] QAudioEncoderSettingsControl::QAudioEncoderSettingsControl()
  QAudioEncoderSettingsControl_Adaptor() : QAudioEncoderSettingsControl()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [expose] bool QAudioEncoderSettingsControl::isSignalConnected(const QMetaMethod &signal)
  bool fp_QAudioEncoderSettingsControl_isSignalConnected_c2394 (const QMetaMethod &signal) const {
    return QAudioEncoderSettingsControl::isSignalConnected(signal);
  }

  //  [expose] int QAudioEncoderSettingsControl::receivers(const char *signal)
  int fp_QAudioEncoderSettingsControl_receivers_c1731 (const char *signal) const {
    return QAudioEncoderSettingsControl::receivers(signal);
  }

  //  [expose] QObject *QAudioEncoderSettingsControl::sender()
  QObject * fp_QAudioEncoderSettingsControl_sender_c0 () const {
    return QAudioEncoderSettingsControl::sender();
  }

  //  [expose] int QAudioEncoderSettingsControl::senderSignalIndex()
  int fp_QAudioEncoderSettingsControl_senderSignalIndex_c0 () const {
    return QAudioEncoderSettingsControl::senderSignalIndex();
  }

  //  [adaptor impl] QAudioEncoderSettings QAudioEncoderSettingsControl::audioSettings()
  QAudioEncoderSettings cbs_audioSettings_c0_0() const
  {
    throw qt_gsi::AbstractMethodCalledException("audioSettings");
  }

  virtual QAudioEncoderSettings audioSettings() const
  {
    if (cb_audioSettings_c0_0.can_issue()) {
      return cb_audioSettings_c0_0.issue<QAudioEncoderSettingsControl_Adaptor, QAudioEncoderSettings>(&QAudioEncoderSettingsControl_Adaptor::cbs_audioSettings_c0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("audioSettings");
    }
  }

  //  [adaptor impl] QString QAudioEncoderSettingsControl::codecDescription(const QString &codecName)
  QString cbs_codecDescription_c2025_0(const QString &codecName) const
  {
    __SUPPRESS_UNUSED_WARNING (codecName);
    throw qt_gsi::AbstractMethodCalledException("codecDescription");
  }

  virtual QString codecDescription(const QString &codecName) const
  {
    if (cb_codecDescription_c2025_0.can_issue()) {
      return cb_codecDescription_c2025_0.issue<QAudioEncoderSettingsControl_Adaptor, QString, const QString &>(&QAudioEncoderSettingsControl_Adaptor::cbs_codecDescription_c2025_0, codecName);
    } else {
      throw qt_gsi::AbstractMethodCalledException("codecDescription");
    }
  }

  //  [adaptor impl] bool QAudioEncoderSettingsControl::event(QEvent *event)
  bool cbs_event_1217_0(QEvent *_event)
  {
    return QAudioEncoderSettingsControl::event(_event);
  }

  virtual bool event(QEvent *_event)
  {
    if (cb_event_1217_0.can_issue()) {
      return cb_event_1217_0.issue<QAudioEncoderSettingsControl_Adaptor, bool, QEvent *>(&QAudioEncoderSettingsControl_Adaptor::cbs_event_1217_0, _event);
    } else {
      return QAudioEncoderSettingsControl::event(_event);
    }
  }

  //  [adaptor impl] bool QAudioEncoderSettingsControl::eventFilter(QObject *watched, QEvent *event)
  bool cbs_eventFilter_2411_0(QObject *watched, QEvent *event)
  {
    return QAudioEncoderSettingsControl::eventFilter(watched, event);
  }

  virtual bool eventFilter(QObject *watched, QEvent *event)
  {
    if (cb_eventFilter_2411_0.can_issue()) {
      return cb_eventFilter_2411_0.issue<QAudioEncoderSettingsControl_Adaptor, bool, QObject *, QEvent *>(&QAudioEncoderSettingsControl_Adaptor::cbs_eventFilter_2411_0, watched, event);
    } else {
      return QAudioEncoderSettingsControl::eventFilter(watched, event);
    }
  }

  //  [adaptor impl] void QAudioEncoderSettingsControl::setAudioSettings(const QAudioEncoderSettings &settings)
  void cbs_setAudioSettings_3445_0(const QAudioEncoderSettings &settings)
  {
    __SUPPRESS_UNUSED_WARNING (settings);
    throw qt_gsi::AbstractMethodCalledException("setAudioSettings");
  }

  virtual void setAudioSettings(const QAudioEncoderSettings &settings)
  {
    if (cb_setAudioSettings_3445_0.can_issue()) {
      cb_setAudioSettings_3445_0.issue<QAudioEncoderSettingsControl_Adaptor, const QAudioEncoderSettings &>(&QAudioEncoderSettingsControl_Adaptor::cbs_setAudioSettings_3445_0, settings);
    } else {
      throw qt_gsi::AbstractMethodCalledException("setAudioSettings");
    }
  }

  //  [adaptor impl] QStringList QAudioEncoderSettingsControl::supportedAudioCodecs()
  QStringList cbs_supportedAudioCodecs_c0_0() const
  {
    throw qt_gsi::AbstractMethodCalledException("supportedAudioCodecs");
  }

  virtual QStringList supportedAudioCodecs() const
  {
    if (cb_supportedAudioCodecs_c0_0.can_issue()) {
      return cb_supportedAudioCodecs_c0_0.issue<QAudioEncoderSettingsControl_Adaptor, QStringList>(&QAudioEncoderSettingsControl_Adaptor::cbs_supportedAudioCodecs_c0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("supportedAudioCodecs");
    }
  }

  //  [adaptor impl] QList<int> QAudioEncoderSettingsControl::supportedSampleRates(const QAudioEncoderSettings &settings, bool *continuous)
  QList<int> cbs_supportedSampleRates_c4387_1(const QAudioEncoderSettings &settings, bool *continuous) const
  {
    __SUPPRESS_UNUSED_WARNING (settings);
    __SUPPRESS_UNUSED_WARNING (continuous);
    throw qt_gsi::AbstractMethodCalledException("supportedSampleRates");
  }

  virtual QList<int> supportedSampleRates(const QAudioEncoderSettings &settings, bool *continuous) const
  {
    if (cb_supportedSampleRates_c4387_1.can_issue()) {
      return cb_supportedSampleRates_c4387_1.issue<QAudioEncoderSettingsControl_Adaptor, QList<int>, const QAudioEncoderSettings &, bool *>(&QAudioEncoderSettingsControl_Adaptor::cbs_supportedSampleRates_c4387_1, settings, continuous);
    } else {
      throw qt_gsi::AbstractMethodCalledException("supportedSampleRates");
    }
  }

  //  [adaptor impl] void QAudioEncoderSettingsControl::childEvent(QChildEvent *event)
  void cbs_childEvent_1701_0(QChildEvent *event)
  {
    QAudioEncoderSettingsControl::childEvent(event);
  }

  virtual void childEvent(QChildEvent *event)
  {
    if (cb_childEvent_1701_0.can_issue()) {
      cb_childEvent_1701_0.issue<QAudioEncoderSettingsControl_Adaptor, QChildEvent *>(&QAudioEncoderSettingsControl_Adaptor::cbs_childEvent_1701_0, event);
    } else {
      QAudioEncoderSettingsControl::childEvent(event);
    }
  }

  //  [adaptor impl] void QAudioEncoderSettingsControl::customEvent(QEvent *event)
  void cbs_customEvent_1217_0(QEvent *event)
  {
    QAudioEncoderSettingsControl::customEvent(event);
  }

  virtual void customEvent(QEvent *event)
  {
    if (cb_customEvent_1217_0.can_issue()) {
      cb_customEvent_1217_0.issue<QAudioEncoderSettingsControl_Adaptor, QEvent *>(&QAudioEncoderSettingsControl_Adaptor::cbs_customEvent_1217_0, event);
    } else {
      QAudioEncoderSettingsControl::customEvent(event);
    }
  }

  //  [adaptor impl] void QAudioEncoderSettingsControl::disconnectNotify(const QMetaMethod &signal)
  void cbs_disconnectNotify_2394_0(const QMetaMethod &signal)
  {
    QAudioEncoderSettingsControl::disconnectNotify(signal);
  }

  virtual void disconnectNotify(const QMetaMethod &signal)
  {
    if (cb_disconnectNotify_2394_0.can_issue()) {
      cb_disconnectNotify_2394_0.issue<QAudioEncoderSettingsControl_Adaptor, const QMetaMethod &>(&QAudioEncoderSettingsControl_Adaptor::cbs_disconnectNotify_2394_0, signal);
    } else {
      QAudioEncoderSettingsControl::disconnectNotify(signal);
    }
  }

  //  [adaptor impl] void QAudioEncoderSettingsControl::timerEvent(QTimerEvent *event)
  void cbs_timerEvent_1730_0(QTimerEvent *event)
  {
    QAudioEncoderSettingsControl::timerEvent(event);
  }

  virtual void timerEvent(QTimerEvent *event)
  {
    if (cb_timerEvent_1730_0.can_issue()) {
      cb_timerEvent_1730_0.issue<QAudioEncoderSettingsControl_Adaptor, QTimerEvent *>(&QAudioEncoderSettingsControl_Adaptor::cbs_timerEvent_1730_0, event);
    } else {
      QAudioEncoderSettingsControl::timerEvent(event);
    }
  }

  gsi::Callback cb_audioSettings_c0_0;
  gsi::Callback cb_codecDescription_c2025_0;
  gsi::Callback cb_event_1217_0;
  gsi::Callback cb_eventFilter_2411_0;
  gsi::Callback cb_setAudioSettings_3445_0;
  gsi::Callback cb_supportedAudioCodecs_c0_0;
  gsi::Callback cb_supportedSampleRates_c4387_1;
  gsi::Callback cb_childEvent_1701_0;
  gsi::Callback cb_customEvent_1217_0;
  gsi::Callback cb_disconnectNotify_2394_0;
  gsi::Callback cb_timerEvent_1730_0;
};

QAudioEncoderSettingsControl_Adaptor::~QAudioEncoderSettingsControl_Adaptor() { }

//  Constructor QAudioEncoderSettingsControl::QAudioEncoderSettingsControl() (adaptor class)

static void _init_ctor_QAudioEncoderSettingsControl_Adaptor_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QAudioEncoderSettingsControl_Adaptor> ();
}

static void _call_ctor_QAudioEncoderSettingsControl_Adaptor_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QAudioEncoderSettingsControl_Adaptor *> (new QAudioEncoderSettingsControl_Adaptor ());
}


// QAudioEncoderSettings QAudioEncoderSettingsControl::audioSettings()

static void _init_cbs_audioSettings_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QAudioEncoderSettings > ();
}

static void _call_cbs_audioSettings_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QAudioEncoderSettings > ((QAudioEncoderSettings)((QAudioEncoderSettingsControl_Adaptor *)cls)->cbs_audioSettings_c0_0 ());
}

static void _set_callback_cbs_audioSettings_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QAudioEncoderSettingsControl_Adaptor *)cls)->cb_audioSettings_c0_0 = cb;
}


// void QAudioEncoderSettingsControl::childEvent(QChildEvent *event)

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
  ((QAudioEncoderSettingsControl_Adaptor *)cls)->cbs_childEvent_1701_0 (arg1);
}

static void _set_callback_cbs_childEvent_1701_0 (void *cls, const gsi::Callback &cb)
{
  ((QAudioEncoderSettingsControl_Adaptor *)cls)->cb_childEvent_1701_0 = cb;
}


// QString QAudioEncoderSettingsControl::codecDescription(const QString &codecName)

static void _init_cbs_codecDescription_c2025_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("codecName");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_cbs_codecDescription_c2025_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  ret.write<QString > ((QString)((QAudioEncoderSettingsControl_Adaptor *)cls)->cbs_codecDescription_c2025_0 (arg1));
}

static void _set_callback_cbs_codecDescription_c2025_0 (void *cls, const gsi::Callback &cb)
{
  ((QAudioEncoderSettingsControl_Adaptor *)cls)->cb_codecDescription_c2025_0 = cb;
}


// void QAudioEncoderSettingsControl::customEvent(QEvent *event)

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
  ((QAudioEncoderSettingsControl_Adaptor *)cls)->cbs_customEvent_1217_0 (arg1);
}

static void _set_callback_cbs_customEvent_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QAudioEncoderSettingsControl_Adaptor *)cls)->cb_customEvent_1217_0 = cb;
}


// void QAudioEncoderSettingsControl::disconnectNotify(const QMetaMethod &signal)

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
  ((QAudioEncoderSettingsControl_Adaptor *)cls)->cbs_disconnectNotify_2394_0 (arg1);
}

static void _set_callback_cbs_disconnectNotify_2394_0 (void *cls, const gsi::Callback &cb)
{
  ((QAudioEncoderSettingsControl_Adaptor *)cls)->cb_disconnectNotify_2394_0 = cb;
}


// bool QAudioEncoderSettingsControl::event(QEvent *event)

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
  ret.write<bool > ((bool)((QAudioEncoderSettingsControl_Adaptor *)cls)->cbs_event_1217_0 (arg1));
}

static void _set_callback_cbs_event_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QAudioEncoderSettingsControl_Adaptor *)cls)->cb_event_1217_0 = cb;
}


// bool QAudioEncoderSettingsControl::eventFilter(QObject *watched, QEvent *event)

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
  ret.write<bool > ((bool)((QAudioEncoderSettingsControl_Adaptor *)cls)->cbs_eventFilter_2411_0 (arg1, arg2));
}

static void _set_callback_cbs_eventFilter_2411_0 (void *cls, const gsi::Callback &cb)
{
  ((QAudioEncoderSettingsControl_Adaptor *)cls)->cb_eventFilter_2411_0 = cb;
}


// exposed bool QAudioEncoderSettingsControl::isSignalConnected(const QMetaMethod &signal)

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
  ret.write<bool > ((bool)((QAudioEncoderSettingsControl_Adaptor *)cls)->fp_QAudioEncoderSettingsControl_isSignalConnected_c2394 (arg1));
}


// exposed int QAudioEncoderSettingsControl::receivers(const char *signal)

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
  ret.write<int > ((int)((QAudioEncoderSettingsControl_Adaptor *)cls)->fp_QAudioEncoderSettingsControl_receivers_c1731 (arg1));
}


// exposed QObject *QAudioEncoderSettingsControl::sender()

static void _init_fp_sender_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_fp_sender_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QAudioEncoderSettingsControl_Adaptor *)cls)->fp_QAudioEncoderSettingsControl_sender_c0 ());
}


// exposed int QAudioEncoderSettingsControl::senderSignalIndex()

static void _init_fp_senderSignalIndex_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_fp_senderSignalIndex_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QAudioEncoderSettingsControl_Adaptor *)cls)->fp_QAudioEncoderSettingsControl_senderSignalIndex_c0 ());
}


// void QAudioEncoderSettingsControl::setAudioSettings(const QAudioEncoderSettings &settings)

static void _init_cbs_setAudioSettings_3445_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("settings");
  decl->add_arg<const QAudioEncoderSettings & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_setAudioSettings_3445_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QAudioEncoderSettings &arg1 = args.read<const QAudioEncoderSettings & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAudioEncoderSettingsControl_Adaptor *)cls)->cbs_setAudioSettings_3445_0 (arg1);
}

static void _set_callback_cbs_setAudioSettings_3445_0 (void *cls, const gsi::Callback &cb)
{
  ((QAudioEncoderSettingsControl_Adaptor *)cls)->cb_setAudioSettings_3445_0 = cb;
}


// QStringList QAudioEncoderSettingsControl::supportedAudioCodecs()

static void _init_cbs_supportedAudioCodecs_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QStringList > ();
}

static void _call_cbs_supportedAudioCodecs_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStringList > ((QStringList)((QAudioEncoderSettingsControl_Adaptor *)cls)->cbs_supportedAudioCodecs_c0_0 ());
}

static void _set_callback_cbs_supportedAudioCodecs_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QAudioEncoderSettingsControl_Adaptor *)cls)->cb_supportedAudioCodecs_c0_0 = cb;
}


// QList<int> QAudioEncoderSettingsControl::supportedSampleRates(const QAudioEncoderSettings &settings, bool *continuous)

static void _init_cbs_supportedSampleRates_c4387_1 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("settings");
  decl->add_arg<const QAudioEncoderSettings & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("continuous");
  decl->add_arg<bool * > (argspec_1);
  decl->set_return<QList<int> > ();
}

static void _call_cbs_supportedSampleRates_c4387_1 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QAudioEncoderSettings &arg1 = args.read<const QAudioEncoderSettings & > (heap);
  bool *arg2 = args.read<bool * > (heap);
  ret.write<QList<int> > ((QList<int>)((QAudioEncoderSettingsControl_Adaptor *)cls)->cbs_supportedSampleRates_c4387_1 (arg1, arg2));
}

static void _set_callback_cbs_supportedSampleRates_c4387_1 (void *cls, const gsi::Callback &cb)
{
  ((QAudioEncoderSettingsControl_Adaptor *)cls)->cb_supportedSampleRates_c4387_1 = cb;
}


// void QAudioEncoderSettingsControl::timerEvent(QTimerEvent *event)

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
  ((QAudioEncoderSettingsControl_Adaptor *)cls)->cbs_timerEvent_1730_0 (arg1);
}

static void _set_callback_cbs_timerEvent_1730_0 (void *cls, const gsi::Callback &cb)
{
  ((QAudioEncoderSettingsControl_Adaptor *)cls)->cb_timerEvent_1730_0 = cb;
}


namespace gsi
{

gsi::Class<QAudioEncoderSettingsControl> &qtdecl_QAudioEncoderSettingsControl ();

static gsi::Methods methods_QAudioEncoderSettingsControl_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QAudioEncoderSettingsControl::QAudioEncoderSettingsControl()\nThis method creates an object of class QAudioEncoderSettingsControl.", &_init_ctor_QAudioEncoderSettingsControl_Adaptor_0, &_call_ctor_QAudioEncoderSettingsControl_Adaptor_0);
  methods += new qt_gsi::GenericMethod ("audioSettings", "@brief Virtual method QAudioEncoderSettings QAudioEncoderSettingsControl::audioSettings()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_audioSettings_c0_0, &_call_cbs_audioSettings_c0_0);
  methods += new qt_gsi::GenericMethod ("audioSettings", "@hide", true, &_init_cbs_audioSettings_c0_0, &_call_cbs_audioSettings_c0_0, &_set_callback_cbs_audioSettings_c0_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@brief Virtual method void QAudioEncoderSettingsControl::childEvent(QChildEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@hide", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0, &_set_callback_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("codecDescription", "@brief Virtual method QString QAudioEncoderSettingsControl::codecDescription(const QString &codecName)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_codecDescription_c2025_0, &_call_cbs_codecDescription_c2025_0);
  methods += new qt_gsi::GenericMethod ("codecDescription", "@hide", true, &_init_cbs_codecDescription_c2025_0, &_call_cbs_codecDescription_c2025_0, &_set_callback_cbs_codecDescription_c2025_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@brief Virtual method void QAudioEncoderSettingsControl::customEvent(QEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@hide", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0, &_set_callback_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@brief Virtual method void QAudioEncoderSettingsControl::disconnectNotify(const QMetaMethod &signal)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@hide", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0, &_set_callback_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("event", "@brief Virtual method bool QAudioEncoderSettingsControl::event(QEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("event", "@hide", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0, &_set_callback_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@brief Virtual method bool QAudioEncoderSettingsControl::eventFilter(QObject *watched, QEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@hide", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0, &_set_callback_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("*isSignalConnected", "@brief Method bool QAudioEncoderSettingsControl::isSignalConnected(const QMetaMethod &signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_isSignalConnected_c2394, &_call_fp_isSignalConnected_c2394);
  methods += new qt_gsi::GenericMethod ("*receivers", "@brief Method int QAudioEncoderSettingsControl::receivers(const char *signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_receivers_c1731, &_call_fp_receivers_c1731);
  methods += new qt_gsi::GenericMethod ("*sender", "@brief Method QObject *QAudioEncoderSettingsControl::sender()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_sender_c0, &_call_fp_sender_c0);
  methods += new qt_gsi::GenericMethod ("*senderSignalIndex", "@brief Method int QAudioEncoderSettingsControl::senderSignalIndex()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_senderSignalIndex_c0, &_call_fp_senderSignalIndex_c0);
  methods += new qt_gsi::GenericMethod ("setAudioSettings", "@brief Virtual method void QAudioEncoderSettingsControl::setAudioSettings(const QAudioEncoderSettings &settings)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_setAudioSettings_3445_0, &_call_cbs_setAudioSettings_3445_0);
  methods += new qt_gsi::GenericMethod ("setAudioSettings", "@hide", false, &_init_cbs_setAudioSettings_3445_0, &_call_cbs_setAudioSettings_3445_0, &_set_callback_cbs_setAudioSettings_3445_0);
  methods += new qt_gsi::GenericMethod ("supportedAudioCodecs", "@brief Virtual method QStringList QAudioEncoderSettingsControl::supportedAudioCodecs()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_supportedAudioCodecs_c0_0, &_call_cbs_supportedAudioCodecs_c0_0);
  methods += new qt_gsi::GenericMethod ("supportedAudioCodecs", "@hide", true, &_init_cbs_supportedAudioCodecs_c0_0, &_call_cbs_supportedAudioCodecs_c0_0, &_set_callback_cbs_supportedAudioCodecs_c0_0);
  methods += new qt_gsi::GenericMethod ("supportedSampleRates", "@brief Virtual method QList<int> QAudioEncoderSettingsControl::supportedSampleRates(const QAudioEncoderSettings &settings, bool *continuous)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_supportedSampleRates_c4387_1, &_call_cbs_supportedSampleRates_c4387_1);
  methods += new qt_gsi::GenericMethod ("supportedSampleRates", "@hide", true, &_init_cbs_supportedSampleRates_c4387_1, &_call_cbs_supportedSampleRates_c4387_1, &_set_callback_cbs_supportedSampleRates_c4387_1);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@brief Virtual method void QAudioEncoderSettingsControl::timerEvent(QTimerEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@hide", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0, &_set_callback_cbs_timerEvent_1730_0);
  return methods;
}

gsi::Class<QAudioEncoderSettingsControl_Adaptor> decl_QAudioEncoderSettingsControl_Adaptor (qtdecl_QAudioEncoderSettingsControl (), "QtMultimedia", "QAudioEncoderSettingsControl",
  methods_QAudioEncoderSettingsControl_Adaptor (),
  "@qt\n@brief Binding of QAudioEncoderSettingsControl");

}

