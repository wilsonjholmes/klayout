
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
*  @file gsiDeclQMediaServiceFeaturesInterface.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QMediaServiceFeaturesInterface>
#include "gsiQt.h"
#include "gsiQtMultimediaCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// struct QMediaServiceFeaturesInterface

// QFlags<QMediaServiceProviderHint::Feature> QMediaServiceFeaturesInterface::supportedFeatures(const QByteArray &service)


static void _init_f_supportedFeatures_c2309 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("service");
  decl->add_arg<const QByteArray & > (argspec_0);
  decl->set_return<QFlags<QMediaServiceProviderHint::Feature> > ();
}

static void _call_f_supportedFeatures_c2309 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QByteArray &arg1 = gsi::arg_reader<const QByteArray & >() (args, heap);
  ret.write<QFlags<QMediaServiceProviderHint::Feature> > ((QFlags<QMediaServiceProviderHint::Feature>)((QMediaServiceFeaturesInterface *)cls)->supportedFeatures (arg1));
}


namespace gsi
{

static gsi::Methods methods_QMediaServiceFeaturesInterface () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("supportedFeatures", "@brief Method QFlags<QMediaServiceProviderHint::Feature> QMediaServiceFeaturesInterface::supportedFeatures(const QByteArray &service)\n", true, &_init_f_supportedFeatures_c2309, &_call_f_supportedFeatures_c2309);
  return methods;
}

gsi::Class<QMediaServiceFeaturesInterface> decl_QMediaServiceFeaturesInterface ("QtMultimedia", "QMediaServiceFeaturesInterface_Native",
  methods_QMediaServiceFeaturesInterface (),
  "@hide\n@alias QMediaServiceFeaturesInterface");

GSI_QTMULTIMEDIA_PUBLIC gsi::Class<QMediaServiceFeaturesInterface> &qtdecl_QMediaServiceFeaturesInterface () { return decl_QMediaServiceFeaturesInterface; }

}


class QMediaServiceFeaturesInterface_Adaptor : public QMediaServiceFeaturesInterface, public qt_gsi::QtObjectBase
{
public:

  virtual ~QMediaServiceFeaturesInterface_Adaptor();

  //  [adaptor ctor] QMediaServiceFeaturesInterface::QMediaServiceFeaturesInterface()
  QMediaServiceFeaturesInterface_Adaptor() : QMediaServiceFeaturesInterface()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor impl] QFlags<QMediaServiceProviderHint::Feature> QMediaServiceFeaturesInterface::supportedFeatures(const QByteArray &service)
  QFlags<QMediaServiceProviderHint::Feature> cbs_supportedFeatures_c2309_0(const QByteArray &service) const
  {
    __SUPPRESS_UNUSED_WARNING (service);
    throw qt_gsi::AbstractMethodCalledException("supportedFeatures");
  }

  virtual QFlags<QMediaServiceProviderHint::Feature> supportedFeatures(const QByteArray &service) const
  {
    if (cb_supportedFeatures_c2309_0.can_issue()) {
      return cb_supportedFeatures_c2309_0.issue<QMediaServiceFeaturesInterface_Adaptor, QFlags<QMediaServiceProviderHint::Feature>, const QByteArray &>(&QMediaServiceFeaturesInterface_Adaptor::cbs_supportedFeatures_c2309_0, service);
    } else {
      throw qt_gsi::AbstractMethodCalledException("supportedFeatures");
    }
  }

  gsi::Callback cb_supportedFeatures_c2309_0;
};

QMediaServiceFeaturesInterface_Adaptor::~QMediaServiceFeaturesInterface_Adaptor() { }

//  Constructor QMediaServiceFeaturesInterface::QMediaServiceFeaturesInterface() (adaptor class)

static void _init_ctor_QMediaServiceFeaturesInterface_Adaptor_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QMediaServiceFeaturesInterface_Adaptor> ();
}

static void _call_ctor_QMediaServiceFeaturesInterface_Adaptor_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QMediaServiceFeaturesInterface_Adaptor *> (new QMediaServiceFeaturesInterface_Adaptor ());
}


// QFlags<QMediaServiceProviderHint::Feature> QMediaServiceFeaturesInterface::supportedFeatures(const QByteArray &service)

static void _init_cbs_supportedFeatures_c2309_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("service");
  decl->add_arg<const QByteArray & > (argspec_0);
  decl->set_return<QFlags<QMediaServiceProviderHint::Feature> > ();
}

static void _call_cbs_supportedFeatures_c2309_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QByteArray &arg1 = args.read<const QByteArray & > (heap);
  ret.write<QFlags<QMediaServiceProviderHint::Feature> > ((QFlags<QMediaServiceProviderHint::Feature>)((QMediaServiceFeaturesInterface_Adaptor *)cls)->cbs_supportedFeatures_c2309_0 (arg1));
}

static void _set_callback_cbs_supportedFeatures_c2309_0 (void *cls, const gsi::Callback &cb)
{
  ((QMediaServiceFeaturesInterface_Adaptor *)cls)->cb_supportedFeatures_c2309_0 = cb;
}


namespace gsi
{

gsi::Class<QMediaServiceFeaturesInterface> &qtdecl_QMediaServiceFeaturesInterface ();

static gsi::Methods methods_QMediaServiceFeaturesInterface_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QMediaServiceFeaturesInterface::QMediaServiceFeaturesInterface()\nThis method creates an object of class QMediaServiceFeaturesInterface.", &_init_ctor_QMediaServiceFeaturesInterface_Adaptor_0, &_call_ctor_QMediaServiceFeaturesInterface_Adaptor_0);
  methods += new qt_gsi::GenericMethod ("supportedFeatures", "@brief Virtual method QFlags<QMediaServiceProviderHint::Feature> QMediaServiceFeaturesInterface::supportedFeatures(const QByteArray &service)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_supportedFeatures_c2309_0, &_call_cbs_supportedFeatures_c2309_0);
  methods += new qt_gsi::GenericMethod ("supportedFeatures", "@hide", true, &_init_cbs_supportedFeatures_c2309_0, &_call_cbs_supportedFeatures_c2309_0, &_set_callback_cbs_supportedFeatures_c2309_0);
  return methods;
}

gsi::Class<QMediaServiceFeaturesInterface_Adaptor> decl_QMediaServiceFeaturesInterface_Adaptor (qtdecl_QMediaServiceFeaturesInterface (), "QtMultimedia", "QMediaServiceFeaturesInterface",
  methods_QMediaServiceFeaturesInterface_Adaptor (),
  "@qt\n@brief Binding of QMediaServiceFeaturesInterface");

}

