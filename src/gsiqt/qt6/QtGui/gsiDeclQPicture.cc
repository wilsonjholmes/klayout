
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
*  @file gsiDeclQPicture.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QPicture>
#include <QIODevice>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPainter>
#include <QPoint>
#include <QRect>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QPicture

// QRect QPicture::boundingRect()


static void _init_f_boundingRect_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QRect > ();
}

static void _call_f_boundingRect_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QRect > ((QRect)((QPicture *)cls)->boundingRect ());
}


// const char *QPicture::data()


static void _init_f_data_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const char * > ();
}

static void _call_f_data_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const char * > ((const char *)((QPicture *)cls)->data ());
}


// void QPicture::detach()


static void _init_f_detach_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_detach_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPicture *)cls)->detach ();
}


// bool QPicture::isDetached()


static void _init_f_isDetached_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isDetached_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QPicture *)cls)->isDetached ());
}


// bool QPicture::isNull()


static void _init_f_isNull_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isNull_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QPicture *)cls)->isNull ());
}


// bool QPicture::load(QIODevice *dev)


static void _init_f_load_1447 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("dev");
  decl->add_arg<QIODevice * > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_load_1447 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QIODevice *arg1 = gsi::arg_reader<QIODevice * >() (args, heap);
  ret.write<bool > ((bool)((QPicture *)cls)->load (arg1));
}


// bool QPicture::load(const QString &fileName)


static void _init_f_load_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("fileName");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_load_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<bool > ((bool)((QPicture *)cls)->load (arg1));
}


// QPicture &QPicture::operator=(const QPicture &p)


static void _init_f_operator_eq__2126u1 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("p");
  decl->add_arg<const QPicture & > (argspec_0);
  decl->set_return<QPicture & > ();
}

static void _call_f_operator_eq__2126u1 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPicture &arg1 = gsi::arg_reader<const QPicture & >() (args, heap);
  ret.write<QPicture & > ((QPicture &)((QPicture *)cls)->operator= (arg1));
}


// QPaintEngine *QPicture::paintEngine()


static void _init_f_paintEngine_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPaintEngine * > ();
}

static void _call_f_paintEngine_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPaintEngine * > ((QPaintEngine *)((QPicture *)cls)->paintEngine ());
}


// bool QPicture::play(QPainter *p)


static void _init_f_play_1426 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("p");
  decl->add_arg<QPainter * > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_play_1426 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QPainter *arg1 = gsi::arg_reader<QPainter * >() (args, heap);
  ret.write<bool > ((bool)((QPicture *)cls)->play (arg1));
}


// bool QPicture::save(QIODevice *dev)


static void _init_f_save_1447 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("dev");
  decl->add_arg<QIODevice * > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_save_1447 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QIODevice *arg1 = gsi::arg_reader<QIODevice * >() (args, heap);
  ret.write<bool > ((bool)((QPicture *)cls)->save (arg1));
}


// bool QPicture::save(const QString &fileName)


static void _init_f_save_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("fileName");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_save_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<bool > ((bool)((QPicture *)cls)->save (arg1));
}


// void QPicture::setBoundingRect(const QRect &r)


static void _init_f_setBoundingRect_1792 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("r");
  decl->add_arg<const QRect & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setBoundingRect_1792 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QRect &arg1 = gsi::arg_reader<const QRect & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPicture *)cls)->setBoundingRect (arg1);
}


// void QPicture::setData(const char *data, unsigned int size)


static void _init_f_setData_3395 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("data");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("size");
  decl->add_arg<unsigned int > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setData_3395 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  unsigned int arg2 = gsi::arg_reader<unsigned int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPicture *)cls)->setData (arg1, arg2);
}


// unsigned int QPicture::size()


static void _init_f_size_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<unsigned int > ();
}

static void _call_f_size_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<unsigned int > ((unsigned int)((QPicture *)cls)->size ());
}


// void QPicture::swap(QPicture &other)


static void _init_f_swap_1431 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<QPicture & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_swap_1431 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QPicture &arg1 = gsi::arg_reader<QPicture & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPicture *)cls)->swap (arg1);
}


namespace gsi
{

static gsi::Methods methods_QPicture () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod (":boundingRect", "@brief Method QRect QPicture::boundingRect()\n", true, &_init_f_boundingRect_c0, &_call_f_boundingRect_c0);
  methods += new qt_gsi::GenericMethod ("data", "@brief Method const char *QPicture::data()\n", true, &_init_f_data_c0, &_call_f_data_c0);
  methods += new qt_gsi::GenericMethod ("detach", "@brief Method void QPicture::detach()\n", false, &_init_f_detach_0, &_call_f_detach_0);
  methods += new qt_gsi::GenericMethod ("isDetached?", "@brief Method bool QPicture::isDetached()\n", true, &_init_f_isDetached_c0, &_call_f_isDetached_c0);
  methods += new qt_gsi::GenericMethod ("isNull?", "@brief Method bool QPicture::isNull()\n", true, &_init_f_isNull_c0, &_call_f_isNull_c0);
  methods += new qt_gsi::GenericMethod ("load", "@brief Method bool QPicture::load(QIODevice *dev)\n", false, &_init_f_load_1447, &_call_f_load_1447);
  methods += new qt_gsi::GenericMethod ("load", "@brief Method bool QPicture::load(const QString &fileName)\n", false, &_init_f_load_2025, &_call_f_load_2025);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QPicture &QPicture::operator=(const QPicture &p)\n", false, &_init_f_operator_eq__2126u1, &_call_f_operator_eq__2126u1);
  methods += new qt_gsi::GenericMethod ("paintEngine", "@brief Method QPaintEngine *QPicture::paintEngine()\nThis is a reimplementation of QPaintDevice::paintEngine", true, &_init_f_paintEngine_c0, &_call_f_paintEngine_c0);
  methods += new qt_gsi::GenericMethod ("play", "@brief Method bool QPicture::play(QPainter *p)\n", false, &_init_f_play_1426, &_call_f_play_1426);
  methods += new qt_gsi::GenericMethod ("save", "@brief Method bool QPicture::save(QIODevice *dev)\n", false, &_init_f_save_1447, &_call_f_save_1447);
  methods += new qt_gsi::GenericMethod ("save", "@brief Method bool QPicture::save(const QString &fileName)\n", false, &_init_f_save_2025, &_call_f_save_2025);
  methods += new qt_gsi::GenericMethod ("setBoundingRect|boundingRect=", "@brief Method void QPicture::setBoundingRect(const QRect &r)\n", false, &_init_f_setBoundingRect_1792, &_call_f_setBoundingRect_1792);
  methods += new qt_gsi::GenericMethod ("setData", "@brief Method void QPicture::setData(const char *data, unsigned int size)\n", false, &_init_f_setData_3395, &_call_f_setData_3395);
  methods += new qt_gsi::GenericMethod ("size", "@brief Method unsigned int QPicture::size()\n", true, &_init_f_size_c0, &_call_f_size_c0);
  methods += new qt_gsi::GenericMethod ("swap", "@brief Method void QPicture::swap(QPicture &other)\n", false, &_init_f_swap_1431, &_call_f_swap_1431);
  return methods;
}

gsi::Class<QPaintDevice> &qtdecl_QPaintDevice ();

gsi::Class<QPicture> decl_QPicture (qtdecl_QPaintDevice (), "QtGui", "QPicture_Native",
  methods_QPicture (),
  "@hide\n@alias QPicture");

GSI_QTGUI_PUBLIC gsi::Class<QPicture> &qtdecl_QPicture () { return decl_QPicture; }

}


class QPicture_Adaptor : public QPicture, public qt_gsi::QtObjectBase
{
public:

  virtual ~QPicture_Adaptor();

  //  [adaptor ctor] QPicture::QPicture(int formatVersion)
  QPicture_Adaptor() : QPicture()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QPicture::QPicture(int formatVersion)
  QPicture_Adaptor(int formatVersion) : QPicture(formatVersion)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QPicture::QPicture(const QPicture &)
  QPicture_Adaptor(const QPicture &arg1) : QPicture(arg1)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor impl] QPaintEngine *QPicture::paintEngine()
  QPaintEngine * cbs_paintEngine_c0_0() const
  {
    return QPicture::paintEngine();
  }

  virtual QPaintEngine * paintEngine() const
  {
    if (cb_paintEngine_c0_0.can_issue()) {
      return cb_paintEngine_c0_0.issue<QPicture_Adaptor, QPaintEngine *>(&QPicture_Adaptor::cbs_paintEngine_c0_0);
    } else {
      return QPicture::paintEngine();
    }
  }

  //  [adaptor impl] void QPicture::setData(const char *data, unsigned int size)
  void cbs_setData_3395_0(const char *data, unsigned int size)
  {
    QPicture::setData(data, size);
  }

  virtual void setData(const char *data, unsigned int size)
  {
    if (cb_setData_3395_0.can_issue()) {
      cb_setData_3395_0.issue<QPicture_Adaptor, const char *, unsigned int>(&QPicture_Adaptor::cbs_setData_3395_0, data, size);
    } else {
      QPicture::setData(data, size);
    }
  }

  //  [adaptor impl] void QPicture::initPainter(QPainter *painter)
  void cbs_initPainter_c1426_0(QPainter *painter) const
  {
    QPicture::initPainter(painter);
  }

  virtual void initPainter(QPainter *painter) const
  {
    if (cb_initPainter_c1426_0.can_issue()) {
      cb_initPainter_c1426_0.issue<QPicture_Adaptor, QPainter *>(&QPicture_Adaptor::cbs_initPainter_c1426_0, painter);
    } else {
      QPicture::initPainter(painter);
    }
  }

  //  [adaptor impl] int QPicture::metric(QPaintDevice::PaintDeviceMetric m)
  int cbs_metric_c3445_0(const qt_gsi::Converter<QPaintDevice::PaintDeviceMetric>::target_type & m) const
  {
    return QPicture::metric(qt_gsi::QtToCppAdaptor<QPaintDevice::PaintDeviceMetric>(m).cref());
  }

  virtual int metric(QPaintDevice::PaintDeviceMetric m) const
  {
    if (cb_metric_c3445_0.can_issue()) {
      return cb_metric_c3445_0.issue<QPicture_Adaptor, int, const qt_gsi::Converter<QPaintDevice::PaintDeviceMetric>::target_type &>(&QPicture_Adaptor::cbs_metric_c3445_0, qt_gsi::CppToQtAdaptor<QPaintDevice::PaintDeviceMetric>(m));
    } else {
      return QPicture::metric(m);
    }
  }

  //  [adaptor impl] QPaintDevice *QPicture::redirected(QPoint *offset)
  QPaintDevice * cbs_redirected_c1225_0(QPoint *offset) const
  {
    return QPicture::redirected(offset);
  }

  virtual QPaintDevice * redirected(QPoint *offset) const
  {
    if (cb_redirected_c1225_0.can_issue()) {
      return cb_redirected_c1225_0.issue<QPicture_Adaptor, QPaintDevice *, QPoint *>(&QPicture_Adaptor::cbs_redirected_c1225_0, offset);
    } else {
      return QPicture::redirected(offset);
    }
  }

  //  [adaptor impl] QPainter *QPicture::sharedPainter()
  QPainter * cbs_sharedPainter_c0_0() const
  {
    return QPicture::sharedPainter();
  }

  virtual QPainter * sharedPainter() const
  {
    if (cb_sharedPainter_c0_0.can_issue()) {
      return cb_sharedPainter_c0_0.issue<QPicture_Adaptor, QPainter *>(&QPicture_Adaptor::cbs_sharedPainter_c0_0);
    } else {
      return QPicture::sharedPainter();
    }
  }

  gsi::Callback cb_paintEngine_c0_0;
  gsi::Callback cb_setData_3395_0;
  gsi::Callback cb_initPainter_c1426_0;
  gsi::Callback cb_metric_c3445_0;
  gsi::Callback cb_redirected_c1225_0;
  gsi::Callback cb_sharedPainter_c0_0;
};

QPicture_Adaptor::~QPicture_Adaptor() { }

//  Constructor QPicture::QPicture(int formatVersion) (adaptor class)

static void _init_ctor_QPicture_Adaptor_767 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("formatVersion", true, "-1");
  decl->add_arg<int > (argspec_0);
  decl->set_return_new<QPicture_Adaptor> ();
}

static void _call_ctor_QPicture_Adaptor_767 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args ? gsi::arg_reader<int >() (args, heap) : gsi::arg_maker<int >() (-1, heap);
  ret.write<QPicture_Adaptor *> (new QPicture_Adaptor (arg1));
}


//  Constructor QPicture::QPicture(const QPicture &) (adaptor class)

static void _init_ctor_QPicture_Adaptor_2126 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QPicture & > (argspec_0);
  decl->set_return_new<QPicture_Adaptor> ();
}

static void _call_ctor_QPicture_Adaptor_2126 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPicture &arg1 = gsi::arg_reader<const QPicture & >() (args, heap);
  ret.write<QPicture_Adaptor *> (new QPicture_Adaptor (arg1));
}


// void QPicture::initPainter(QPainter *painter)

static void _init_cbs_initPainter_c1426_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("painter");
  decl->add_arg<QPainter * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_initPainter_c1426_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QPainter *arg1 = args.read<QPainter * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPicture_Adaptor *)cls)->cbs_initPainter_c1426_0 (arg1);
}

static void _set_callback_cbs_initPainter_c1426_0 (void *cls, const gsi::Callback &cb)
{
  ((QPicture_Adaptor *)cls)->cb_initPainter_c1426_0 = cb;
}


// int QPicture::metric(QPaintDevice::PaintDeviceMetric m)

static void _init_cbs_metric_c3445_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("m");
  decl->add_arg<const qt_gsi::Converter<QPaintDevice::PaintDeviceMetric>::target_type & > (argspec_0);
  decl->set_return<int > ();
}

static void _call_cbs_metric_c3445_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QPaintDevice::PaintDeviceMetric>::target_type & arg1 = args.read<const qt_gsi::Converter<QPaintDevice::PaintDeviceMetric>::target_type & > (heap);
  ret.write<int > ((int)((QPicture_Adaptor *)cls)->cbs_metric_c3445_0 (arg1));
}

static void _set_callback_cbs_metric_c3445_0 (void *cls, const gsi::Callback &cb)
{
  ((QPicture_Adaptor *)cls)->cb_metric_c3445_0 = cb;
}


// QPaintEngine *QPicture::paintEngine()

static void _init_cbs_paintEngine_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPaintEngine * > ();
}

static void _call_cbs_paintEngine_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPaintEngine * > ((QPaintEngine *)((QPicture_Adaptor *)cls)->cbs_paintEngine_c0_0 ());
}

static void _set_callback_cbs_paintEngine_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QPicture_Adaptor *)cls)->cb_paintEngine_c0_0 = cb;
}


// QPaintDevice *QPicture::redirected(QPoint *offset)

static void _init_cbs_redirected_c1225_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("offset");
  decl->add_arg<QPoint * > (argspec_0);
  decl->set_return<QPaintDevice * > ();
}

static void _call_cbs_redirected_c1225_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QPoint *arg1 = args.read<QPoint * > (heap);
  ret.write<QPaintDevice * > ((QPaintDevice *)((QPicture_Adaptor *)cls)->cbs_redirected_c1225_0 (arg1));
}

static void _set_callback_cbs_redirected_c1225_0 (void *cls, const gsi::Callback &cb)
{
  ((QPicture_Adaptor *)cls)->cb_redirected_c1225_0 = cb;
}


// void QPicture::setData(const char *data, unsigned int size)

static void _init_cbs_setData_3395_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("data");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("size");
  decl->add_arg<unsigned int > (argspec_1);
  decl->set_return<void > ();
}

static void _call_cbs_setData_3395_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = args.read<const char * > (heap);
  unsigned int arg2 = args.read<unsigned int > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPicture_Adaptor *)cls)->cbs_setData_3395_0 (arg1, arg2);
}

static void _set_callback_cbs_setData_3395_0 (void *cls, const gsi::Callback &cb)
{
  ((QPicture_Adaptor *)cls)->cb_setData_3395_0 = cb;
}


// QPainter *QPicture::sharedPainter()

static void _init_cbs_sharedPainter_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPainter * > ();
}

static void _call_cbs_sharedPainter_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPainter * > ((QPainter *)((QPicture_Adaptor *)cls)->cbs_sharedPainter_c0_0 ());
}

static void _set_callback_cbs_sharedPainter_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QPicture_Adaptor *)cls)->cb_sharedPainter_c0_0 = cb;
}


namespace gsi
{

gsi::Class<QPicture> &qtdecl_QPicture ();

static gsi::Methods methods_QPicture_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QPicture::QPicture(int formatVersion)\nThis method creates an object of class QPicture.", &_init_ctor_QPicture_Adaptor_767, &_call_ctor_QPicture_Adaptor_767);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QPicture::QPicture(const QPicture &)\nThis method creates an object of class QPicture.", &_init_ctor_QPicture_Adaptor_2126, &_call_ctor_QPicture_Adaptor_2126);
  methods += new qt_gsi::GenericMethod ("*initPainter", "@brief Virtual method void QPicture::initPainter(QPainter *painter)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_initPainter_c1426_0, &_call_cbs_initPainter_c1426_0);
  methods += new qt_gsi::GenericMethod ("*initPainter", "@hide", true, &_init_cbs_initPainter_c1426_0, &_call_cbs_initPainter_c1426_0, &_set_callback_cbs_initPainter_c1426_0);
  methods += new qt_gsi::GenericMethod ("*metric", "@brief Virtual method int QPicture::metric(QPaintDevice::PaintDeviceMetric m)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_metric_c3445_0, &_call_cbs_metric_c3445_0);
  methods += new qt_gsi::GenericMethod ("*metric", "@hide", true, &_init_cbs_metric_c3445_0, &_call_cbs_metric_c3445_0, &_set_callback_cbs_metric_c3445_0);
  methods += new qt_gsi::GenericMethod ("paintEngine", "@brief Virtual method QPaintEngine *QPicture::paintEngine()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_paintEngine_c0_0, &_call_cbs_paintEngine_c0_0);
  methods += new qt_gsi::GenericMethod ("paintEngine", "@hide", true, &_init_cbs_paintEngine_c0_0, &_call_cbs_paintEngine_c0_0, &_set_callback_cbs_paintEngine_c0_0);
  methods += new qt_gsi::GenericMethod ("*redirected", "@brief Virtual method QPaintDevice *QPicture::redirected(QPoint *offset)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_redirected_c1225_0, &_call_cbs_redirected_c1225_0);
  methods += new qt_gsi::GenericMethod ("*redirected", "@hide", true, &_init_cbs_redirected_c1225_0, &_call_cbs_redirected_c1225_0, &_set_callback_cbs_redirected_c1225_0);
  methods += new qt_gsi::GenericMethod ("setData", "@brief Virtual method void QPicture::setData(const char *data, unsigned int size)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_setData_3395_0, &_call_cbs_setData_3395_0);
  methods += new qt_gsi::GenericMethod ("setData", "@hide", false, &_init_cbs_setData_3395_0, &_call_cbs_setData_3395_0, &_set_callback_cbs_setData_3395_0);
  methods += new qt_gsi::GenericMethod ("*sharedPainter", "@brief Virtual method QPainter *QPicture::sharedPainter()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_sharedPainter_c0_0, &_call_cbs_sharedPainter_c0_0);
  methods += new qt_gsi::GenericMethod ("*sharedPainter", "@hide", true, &_init_cbs_sharedPainter_c0_0, &_call_cbs_sharedPainter_c0_0, &_set_callback_cbs_sharedPainter_c0_0);
  return methods;
}

gsi::Class<QPicture_Adaptor> decl_QPicture_Adaptor (qtdecl_QPicture (), "QtGui", "QPicture",
  methods_QPicture_Adaptor (),
  "@qt\n@brief Binding of QPicture");

}

