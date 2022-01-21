
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
*  @file gsiDeclQGraphicsScale.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QGraphicsScale>
#include <QChildEvent>
#include <QEvent>
#include <QMatrix4x4>
#include <QMetaMethod>
#include <QObject>
#include <QThread>
#include <QTimerEvent>
#include <QVector3D>
#include "gsiQt.h"
#include "gsiQtWidgetsCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QGraphicsScale

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QGraphicsScale::staticMetaObject);
}


// void QGraphicsScale::applyTo(QMatrix4x4 *matrix)


static void _init_f_applyTo_c1556 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("matrix");
  decl->add_arg<QMatrix4x4 * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_applyTo_c1556 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QMatrix4x4 *arg1 = gsi::arg_reader<QMatrix4x4 * >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGraphicsScale *)cls)->applyTo (arg1);
}


// QVector3D QGraphicsScale::origin()


static void _init_f_origin_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QVector3D > ();
}

static void _call_f_origin_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QVector3D > ((QVector3D)((QGraphicsScale *)cls)->origin ());
}


// void QGraphicsScale::setOrigin(const QVector3D &point)


static void _init_f_setOrigin_2140 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("point");
  decl->add_arg<const QVector3D & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setOrigin_2140 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QVector3D &arg1 = gsi::arg_reader<const QVector3D & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGraphicsScale *)cls)->setOrigin (arg1);
}


// void QGraphicsScale::setXScale(double)


static void _init_f_setXScale_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setXScale_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGraphicsScale *)cls)->setXScale (arg1);
}


// void QGraphicsScale::setYScale(double)


static void _init_f_setYScale_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setYScale_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGraphicsScale *)cls)->setYScale (arg1);
}


// void QGraphicsScale::setZScale(double)


static void _init_f_setZScale_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setZScale_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGraphicsScale *)cls)->setZScale (arg1);
}


// double QGraphicsScale::xScale()


static void _init_f_xScale_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_xScale_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QGraphicsScale *)cls)->xScale ());
}


// double QGraphicsScale::yScale()


static void _init_f_yScale_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_yScale_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QGraphicsScale *)cls)->yScale ());
}


// double QGraphicsScale::zScale()


static void _init_f_zScale_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_zScale_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QGraphicsScale *)cls)->zScale ());
}


// static QString QGraphicsScale::tr(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QGraphicsScale::tr (arg1, arg2, arg3));
}


namespace gsi
{

static gsi::Methods methods_QGraphicsScale () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod ("applyTo", "@brief Method void QGraphicsScale::applyTo(QMatrix4x4 *matrix)\nThis is a reimplementation of QGraphicsTransform::applyTo", true, &_init_f_applyTo_c1556, &_call_f_applyTo_c1556);
  methods += new qt_gsi::GenericMethod (":origin", "@brief Method QVector3D QGraphicsScale::origin()\n", true, &_init_f_origin_c0, &_call_f_origin_c0);
  methods += new qt_gsi::GenericMethod ("setOrigin|origin=", "@brief Method void QGraphicsScale::setOrigin(const QVector3D &point)\n", false, &_init_f_setOrigin_2140, &_call_f_setOrigin_2140);
  methods += new qt_gsi::GenericMethod ("setXScale|xScale=", "@brief Method void QGraphicsScale::setXScale(double)\n", false, &_init_f_setXScale_1071, &_call_f_setXScale_1071);
  methods += new qt_gsi::GenericMethod ("setYScale|yScale=", "@brief Method void QGraphicsScale::setYScale(double)\n", false, &_init_f_setYScale_1071, &_call_f_setYScale_1071);
  methods += new qt_gsi::GenericMethod ("setZScale|zScale=", "@brief Method void QGraphicsScale::setZScale(double)\n", false, &_init_f_setZScale_1071, &_call_f_setZScale_1071);
  methods += new qt_gsi::GenericMethod (":xScale", "@brief Method double QGraphicsScale::xScale()\n", true, &_init_f_xScale_c0, &_call_f_xScale_c0);
  methods += new qt_gsi::GenericMethod (":yScale", "@brief Method double QGraphicsScale::yScale()\n", true, &_init_f_yScale_c0, &_call_f_yScale_c0);
  methods += new qt_gsi::GenericMethod (":zScale", "@brief Method double QGraphicsScale::zScale()\n", true, &_init_f_zScale_c0, &_call_f_zScale_c0);
  methods += gsi::qt_signal<QObject * > ("destroyed(QObject *)", "destroyed", gsi::arg("arg1"), "@brief Signal declaration for QGraphicsScale::destroyed(QObject *)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<const QString & > ("objectNameChanged(const QString &)", "objectNameChanged", gsi::arg("objectName"), "@brief Signal declaration for QGraphicsScale::objectNameChanged(const QString &objectName)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal ("originChanged()", "originChanged", "@brief Signal declaration for QGraphicsScale::originChanged()\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal ("scaleChanged()", "scaleChanged", "@brief Signal declaration for QGraphicsScale::scaleChanged()\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal ("xScaleChanged()", "xScaleChanged", "@brief Signal declaration for QGraphicsScale::xScaleChanged()\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal ("yScaleChanged()", "yScaleChanged", "@brief Signal declaration for QGraphicsScale::yScaleChanged()\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal ("zScaleChanged()", "zScaleChanged", "@brief Signal declaration for QGraphicsScale::zScaleChanged()\nYou can bind a procedure to this signal.");
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QGraphicsScale::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  return methods;
}

gsi::Class<QGraphicsTransform> &qtdecl_QGraphicsTransform ();

qt_gsi::QtNativeClass<QGraphicsScale> decl_QGraphicsScale (qtdecl_QGraphicsTransform (), "QtWidgets", "QGraphicsScale_Native",
  methods_QGraphicsScale (),
  "@hide\n@alias QGraphicsScale");

GSI_QTWIDGETS_PUBLIC gsi::Class<QGraphicsScale> &qtdecl_QGraphicsScale () { return decl_QGraphicsScale; }

}


class QGraphicsScale_Adaptor : public QGraphicsScale, public qt_gsi::QtObjectBase
{
public:

  virtual ~QGraphicsScale_Adaptor();

  //  [adaptor ctor] QGraphicsScale::QGraphicsScale(QObject *parent)
  QGraphicsScale_Adaptor() : QGraphicsScale()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QGraphicsScale::QGraphicsScale(QObject *parent)
  QGraphicsScale_Adaptor(QObject *parent) : QGraphicsScale(parent)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [expose] bool QGraphicsScale::isSignalConnected(const QMetaMethod &signal)
  bool fp_QGraphicsScale_isSignalConnected_c2394 (const QMetaMethod &signal) const {
    return QGraphicsScale::isSignalConnected(signal);
  }

  //  [expose] int QGraphicsScale::receivers(const char *signal)
  int fp_QGraphicsScale_receivers_c1731 (const char *signal) const {
    return QGraphicsScale::receivers(signal);
  }

  //  [expose] QObject *QGraphicsScale::sender()
  QObject * fp_QGraphicsScale_sender_c0 () const {
    return QGraphicsScale::sender();
  }

  //  [expose] int QGraphicsScale::senderSignalIndex()
  int fp_QGraphicsScale_senderSignalIndex_c0 () const {
    return QGraphicsScale::senderSignalIndex();
  }

  //  [expose] void QGraphicsScale::update()
  void fp_QGraphicsScale_update_0 () {
    QGraphicsScale::update();
  }

  //  [adaptor impl] void QGraphicsScale::applyTo(QMatrix4x4 *matrix)
  void cbs_applyTo_c1556_0(QMatrix4x4 *matrix) const
  {
    QGraphicsScale::applyTo(matrix);
  }

  virtual void applyTo(QMatrix4x4 *matrix) const
  {
    if (cb_applyTo_c1556_0.can_issue()) {
      cb_applyTo_c1556_0.issue<QGraphicsScale_Adaptor, QMatrix4x4 *>(&QGraphicsScale_Adaptor::cbs_applyTo_c1556_0, matrix);
    } else {
      QGraphicsScale::applyTo(matrix);
    }
  }

  //  [emitter impl] void QGraphicsScale::destroyed(QObject *)
  void emitter_QGraphicsScale_destroyed_1302(QObject *arg1)
  {
    emit QGraphicsScale::destroyed(arg1);
  }

  //  [adaptor impl] bool QGraphicsScale::event(QEvent *event)
  bool cbs_event_1217_0(QEvent *_event)
  {
    return QGraphicsScale::event(_event);
  }

  virtual bool event(QEvent *_event)
  {
    if (cb_event_1217_0.can_issue()) {
      return cb_event_1217_0.issue<QGraphicsScale_Adaptor, bool, QEvent *>(&QGraphicsScale_Adaptor::cbs_event_1217_0, _event);
    } else {
      return QGraphicsScale::event(_event);
    }
  }

  //  [adaptor impl] bool QGraphicsScale::eventFilter(QObject *watched, QEvent *event)
  bool cbs_eventFilter_2411_0(QObject *watched, QEvent *event)
  {
    return QGraphicsScale::eventFilter(watched, event);
  }

  virtual bool eventFilter(QObject *watched, QEvent *event)
  {
    if (cb_eventFilter_2411_0.can_issue()) {
      return cb_eventFilter_2411_0.issue<QGraphicsScale_Adaptor, bool, QObject *, QEvent *>(&QGraphicsScale_Adaptor::cbs_eventFilter_2411_0, watched, event);
    } else {
      return QGraphicsScale::eventFilter(watched, event);
    }
  }

  //  [emitter impl] void QGraphicsScale::objectNameChanged(const QString &objectName)
  void emitter_QGraphicsScale_objectNameChanged_4567(const QString &objectName)
  {
    __SUPPRESS_UNUSED_WARNING (objectName);
    throw tl::Exception ("Can't emit private signal 'void QGraphicsScale::objectNameChanged(const QString &objectName)'");
  }

  //  [emitter impl] void QGraphicsScale::originChanged()
  void emitter_QGraphicsScale_originChanged_0()
  {
    emit QGraphicsScale::originChanged();
  }

  //  [emitter impl] void QGraphicsScale::scaleChanged()
  void emitter_QGraphicsScale_scaleChanged_0()
  {
    emit QGraphicsScale::scaleChanged();
  }

  //  [emitter impl] void QGraphicsScale::xScaleChanged()
  void emitter_QGraphicsScale_xScaleChanged_0()
  {
    emit QGraphicsScale::xScaleChanged();
  }

  //  [emitter impl] void QGraphicsScale::yScaleChanged()
  void emitter_QGraphicsScale_yScaleChanged_0()
  {
    emit QGraphicsScale::yScaleChanged();
  }

  //  [emitter impl] void QGraphicsScale::zScaleChanged()
  void emitter_QGraphicsScale_zScaleChanged_0()
  {
    emit QGraphicsScale::zScaleChanged();
  }

  //  [adaptor impl] void QGraphicsScale::childEvent(QChildEvent *event)
  void cbs_childEvent_1701_0(QChildEvent *event)
  {
    QGraphicsScale::childEvent(event);
  }

  virtual void childEvent(QChildEvent *event)
  {
    if (cb_childEvent_1701_0.can_issue()) {
      cb_childEvent_1701_0.issue<QGraphicsScale_Adaptor, QChildEvent *>(&QGraphicsScale_Adaptor::cbs_childEvent_1701_0, event);
    } else {
      QGraphicsScale::childEvent(event);
    }
  }

  //  [adaptor impl] void QGraphicsScale::customEvent(QEvent *event)
  void cbs_customEvent_1217_0(QEvent *event)
  {
    QGraphicsScale::customEvent(event);
  }

  virtual void customEvent(QEvent *event)
  {
    if (cb_customEvent_1217_0.can_issue()) {
      cb_customEvent_1217_0.issue<QGraphicsScale_Adaptor, QEvent *>(&QGraphicsScale_Adaptor::cbs_customEvent_1217_0, event);
    } else {
      QGraphicsScale::customEvent(event);
    }
  }

  //  [adaptor impl] void QGraphicsScale::disconnectNotify(const QMetaMethod &signal)
  void cbs_disconnectNotify_2394_0(const QMetaMethod &signal)
  {
    QGraphicsScale::disconnectNotify(signal);
  }

  virtual void disconnectNotify(const QMetaMethod &signal)
  {
    if (cb_disconnectNotify_2394_0.can_issue()) {
      cb_disconnectNotify_2394_0.issue<QGraphicsScale_Adaptor, const QMetaMethod &>(&QGraphicsScale_Adaptor::cbs_disconnectNotify_2394_0, signal);
    } else {
      QGraphicsScale::disconnectNotify(signal);
    }
  }

  //  [adaptor impl] void QGraphicsScale::timerEvent(QTimerEvent *event)
  void cbs_timerEvent_1730_0(QTimerEvent *event)
  {
    QGraphicsScale::timerEvent(event);
  }

  virtual void timerEvent(QTimerEvent *event)
  {
    if (cb_timerEvent_1730_0.can_issue()) {
      cb_timerEvent_1730_0.issue<QGraphicsScale_Adaptor, QTimerEvent *>(&QGraphicsScale_Adaptor::cbs_timerEvent_1730_0, event);
    } else {
      QGraphicsScale::timerEvent(event);
    }
  }

  gsi::Callback cb_applyTo_c1556_0;
  gsi::Callback cb_event_1217_0;
  gsi::Callback cb_eventFilter_2411_0;
  gsi::Callback cb_childEvent_1701_0;
  gsi::Callback cb_customEvent_1217_0;
  gsi::Callback cb_disconnectNotify_2394_0;
  gsi::Callback cb_timerEvent_1730_0;
};

QGraphicsScale_Adaptor::~QGraphicsScale_Adaptor() { }

//  Constructor QGraphicsScale::QGraphicsScale(QObject *parent) (adaptor class)

static void _init_ctor_QGraphicsScale_Adaptor_1302 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("parent", true, "nullptr");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return_new<QGraphicsScale_Adaptor> ();
}

static void _call_ctor_QGraphicsScale_Adaptor_1302 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args ? gsi::arg_reader<QObject * >() (args, heap) : gsi::arg_maker<QObject * >() (nullptr, heap);
  ret.write<QGraphicsScale_Adaptor *> (new QGraphicsScale_Adaptor (arg1));
}


// void QGraphicsScale::applyTo(QMatrix4x4 *matrix)

static void _init_cbs_applyTo_c1556_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("matrix");
  decl->add_arg<QMatrix4x4 * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_applyTo_c1556_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QMatrix4x4 *arg1 = args.read<QMatrix4x4 * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGraphicsScale_Adaptor *)cls)->cbs_applyTo_c1556_0 (arg1);
}

static void _set_callback_cbs_applyTo_c1556_0 (void *cls, const gsi::Callback &cb)
{
  ((QGraphicsScale_Adaptor *)cls)->cb_applyTo_c1556_0 = cb;
}


// void QGraphicsScale::childEvent(QChildEvent *event)

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
  ((QGraphicsScale_Adaptor *)cls)->cbs_childEvent_1701_0 (arg1);
}

static void _set_callback_cbs_childEvent_1701_0 (void *cls, const gsi::Callback &cb)
{
  ((QGraphicsScale_Adaptor *)cls)->cb_childEvent_1701_0 = cb;
}


// void QGraphicsScale::customEvent(QEvent *event)

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
  ((QGraphicsScale_Adaptor *)cls)->cbs_customEvent_1217_0 (arg1);
}

static void _set_callback_cbs_customEvent_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QGraphicsScale_Adaptor *)cls)->cb_customEvent_1217_0 = cb;
}


// emitter void QGraphicsScale::destroyed(QObject *)

static void _init_emitter_destroyed_1302 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1", true, "nullptr");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_emitter_destroyed_1302 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args ? gsi::arg_reader<QObject * >() (args, heap) : gsi::arg_maker<QObject * >() (nullptr, heap);
  ((QGraphicsScale_Adaptor *)cls)->emitter_QGraphicsScale_destroyed_1302 (arg1);
}


// void QGraphicsScale::disconnectNotify(const QMetaMethod &signal)

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
  ((QGraphicsScale_Adaptor *)cls)->cbs_disconnectNotify_2394_0 (arg1);
}

static void _set_callback_cbs_disconnectNotify_2394_0 (void *cls, const gsi::Callback &cb)
{
  ((QGraphicsScale_Adaptor *)cls)->cb_disconnectNotify_2394_0 = cb;
}


// bool QGraphicsScale::event(QEvent *event)

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
  ret.write<bool > ((bool)((QGraphicsScale_Adaptor *)cls)->cbs_event_1217_0 (arg1));
}

static void _set_callback_cbs_event_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QGraphicsScale_Adaptor *)cls)->cb_event_1217_0 = cb;
}


// bool QGraphicsScale::eventFilter(QObject *watched, QEvent *event)

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
  ret.write<bool > ((bool)((QGraphicsScale_Adaptor *)cls)->cbs_eventFilter_2411_0 (arg1, arg2));
}

static void _set_callback_cbs_eventFilter_2411_0 (void *cls, const gsi::Callback &cb)
{
  ((QGraphicsScale_Adaptor *)cls)->cb_eventFilter_2411_0 = cb;
}


// exposed bool QGraphicsScale::isSignalConnected(const QMetaMethod &signal)

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
  ret.write<bool > ((bool)((QGraphicsScale_Adaptor *)cls)->fp_QGraphicsScale_isSignalConnected_c2394 (arg1));
}


// emitter void QGraphicsScale::objectNameChanged(const QString &objectName)

static void _init_emitter_objectNameChanged_4567 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("objectName");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_emitter_objectNameChanged_4567 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ((QGraphicsScale_Adaptor *)cls)->emitter_QGraphicsScale_objectNameChanged_4567 (arg1);
}


// emitter void QGraphicsScale::originChanged()

static void _init_emitter_originChanged_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_emitter_originChanged_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ((QGraphicsScale_Adaptor *)cls)->emitter_QGraphicsScale_originChanged_0 ();
}


// exposed int QGraphicsScale::receivers(const char *signal)

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
  ret.write<int > ((int)((QGraphicsScale_Adaptor *)cls)->fp_QGraphicsScale_receivers_c1731 (arg1));
}


// emitter void QGraphicsScale::scaleChanged()

static void _init_emitter_scaleChanged_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_emitter_scaleChanged_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ((QGraphicsScale_Adaptor *)cls)->emitter_QGraphicsScale_scaleChanged_0 ();
}


// exposed QObject *QGraphicsScale::sender()

static void _init_fp_sender_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_fp_sender_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QGraphicsScale_Adaptor *)cls)->fp_QGraphicsScale_sender_c0 ());
}


// exposed int QGraphicsScale::senderSignalIndex()

static void _init_fp_senderSignalIndex_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_fp_senderSignalIndex_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QGraphicsScale_Adaptor *)cls)->fp_QGraphicsScale_senderSignalIndex_c0 ());
}


// void QGraphicsScale::timerEvent(QTimerEvent *event)

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
  ((QGraphicsScale_Adaptor *)cls)->cbs_timerEvent_1730_0 (arg1);
}

static void _set_callback_cbs_timerEvent_1730_0 (void *cls, const gsi::Callback &cb)
{
  ((QGraphicsScale_Adaptor *)cls)->cb_timerEvent_1730_0 = cb;
}


// exposed void QGraphicsScale::update()

static void _init_fp_update_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_fp_update_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGraphicsScale_Adaptor *)cls)->fp_QGraphicsScale_update_0 ();
}


// emitter void QGraphicsScale::xScaleChanged()

static void _init_emitter_xScaleChanged_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_emitter_xScaleChanged_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ((QGraphicsScale_Adaptor *)cls)->emitter_QGraphicsScale_xScaleChanged_0 ();
}


// emitter void QGraphicsScale::yScaleChanged()

static void _init_emitter_yScaleChanged_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_emitter_yScaleChanged_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ((QGraphicsScale_Adaptor *)cls)->emitter_QGraphicsScale_yScaleChanged_0 ();
}


// emitter void QGraphicsScale::zScaleChanged()

static void _init_emitter_zScaleChanged_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_emitter_zScaleChanged_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ((QGraphicsScale_Adaptor *)cls)->emitter_QGraphicsScale_zScaleChanged_0 ();
}


namespace gsi
{

gsi::Class<QGraphicsScale> &qtdecl_QGraphicsScale ();

static gsi::Methods methods_QGraphicsScale_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QGraphicsScale::QGraphicsScale(QObject *parent)\nThis method creates an object of class QGraphicsScale.", &_init_ctor_QGraphicsScale_Adaptor_1302, &_call_ctor_QGraphicsScale_Adaptor_1302);
  methods += new qt_gsi::GenericMethod ("applyTo", "@brief Virtual method void QGraphicsScale::applyTo(QMatrix4x4 *matrix)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_applyTo_c1556_0, &_call_cbs_applyTo_c1556_0);
  methods += new qt_gsi::GenericMethod ("applyTo", "@hide", true, &_init_cbs_applyTo_c1556_0, &_call_cbs_applyTo_c1556_0, &_set_callback_cbs_applyTo_c1556_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@brief Virtual method void QGraphicsScale::childEvent(QChildEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@hide", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0, &_set_callback_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@brief Virtual method void QGraphicsScale::customEvent(QEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@hide", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0, &_set_callback_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("emit_destroyed", "@brief Emitter for signal void QGraphicsScale::destroyed(QObject *)\nCall this method to emit this signal.", false, &_init_emitter_destroyed_1302, &_call_emitter_destroyed_1302);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@brief Virtual method void QGraphicsScale::disconnectNotify(const QMetaMethod &signal)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@hide", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0, &_set_callback_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("event", "@brief Virtual method bool QGraphicsScale::event(QEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("event", "@hide", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0, &_set_callback_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@brief Virtual method bool QGraphicsScale::eventFilter(QObject *watched, QEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@hide", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0, &_set_callback_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("*isSignalConnected", "@brief Method bool QGraphicsScale::isSignalConnected(const QMetaMethod &signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_isSignalConnected_c2394, &_call_fp_isSignalConnected_c2394);
  methods += new qt_gsi::GenericMethod ("emit_objectNameChanged", "@brief Emitter for signal void QGraphicsScale::objectNameChanged(const QString &objectName)\nCall this method to emit this signal.", false, &_init_emitter_objectNameChanged_4567, &_call_emitter_objectNameChanged_4567);
  methods += new qt_gsi::GenericMethod ("emit_originChanged", "@brief Emitter for signal void QGraphicsScale::originChanged()\nCall this method to emit this signal.", false, &_init_emitter_originChanged_0, &_call_emitter_originChanged_0);
  methods += new qt_gsi::GenericMethod ("*receivers", "@brief Method int QGraphicsScale::receivers(const char *signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_receivers_c1731, &_call_fp_receivers_c1731);
  methods += new qt_gsi::GenericMethod ("emit_scaleChanged", "@brief Emitter for signal void QGraphicsScale::scaleChanged()\nCall this method to emit this signal.", false, &_init_emitter_scaleChanged_0, &_call_emitter_scaleChanged_0);
  methods += new qt_gsi::GenericMethod ("*sender", "@brief Method QObject *QGraphicsScale::sender()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_sender_c0, &_call_fp_sender_c0);
  methods += new qt_gsi::GenericMethod ("*senderSignalIndex", "@brief Method int QGraphicsScale::senderSignalIndex()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_senderSignalIndex_c0, &_call_fp_senderSignalIndex_c0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@brief Virtual method void QGraphicsScale::timerEvent(QTimerEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@hide", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0, &_set_callback_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("*update", "@brief Method void QGraphicsScale::update()\nThis method is protected and can only be called from inside a derived class.", false, &_init_fp_update_0, &_call_fp_update_0);
  methods += new qt_gsi::GenericMethod ("emit_xScaleChanged", "@brief Emitter for signal void QGraphicsScale::xScaleChanged()\nCall this method to emit this signal.", false, &_init_emitter_xScaleChanged_0, &_call_emitter_xScaleChanged_0);
  methods += new qt_gsi::GenericMethod ("emit_yScaleChanged", "@brief Emitter for signal void QGraphicsScale::yScaleChanged()\nCall this method to emit this signal.", false, &_init_emitter_yScaleChanged_0, &_call_emitter_yScaleChanged_0);
  methods += new qt_gsi::GenericMethod ("emit_zScaleChanged", "@brief Emitter for signal void QGraphicsScale::zScaleChanged()\nCall this method to emit this signal.", false, &_init_emitter_zScaleChanged_0, &_call_emitter_zScaleChanged_0);
  return methods;
}

gsi::Class<QGraphicsScale_Adaptor> decl_QGraphicsScale_Adaptor (qtdecl_QGraphicsScale (), "QtWidgets", "QGraphicsScale",
  methods_QGraphicsScale_Adaptor (),
  "@qt\n@brief Binding of QGraphicsScale");

}

