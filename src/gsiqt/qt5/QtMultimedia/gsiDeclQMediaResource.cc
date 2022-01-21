
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
*  @file gsiDeclQMediaResource.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QMediaResource>
#include <QNetworkRequest>
#include <QSize>
#include <QUrl>
#include "gsiQt.h"
#include "gsiQtMultimediaCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QMediaResource

//  Constructor QMediaResource::QMediaResource()


static void _init_ctor_QMediaResource_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QMediaResource> ();
}

static void _call_ctor_QMediaResource_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QMediaResource *> (new QMediaResource ());
}


//  Constructor QMediaResource::QMediaResource(const QUrl &url, const QString &mimeType)


static void _init_ctor_QMediaResource_3618 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("url");
  decl->add_arg<const QUrl & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("mimeType", true, "QString()");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return_new<QMediaResource> ();
}

static void _call_ctor_QMediaResource_3618 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QUrl &arg1 = gsi::arg_reader<const QUrl & >() (args, heap);
  const QString &arg2 = args ? gsi::arg_reader<const QString & >() (args, heap) : gsi::arg_maker<const QString & >() (QString(), heap);
  ret.write<QMediaResource *> (new QMediaResource (arg1, arg2));
}


//  Constructor QMediaResource::QMediaResource(const QNetworkRequest &request, const QString &mimeType)


static void _init_ctor_QMediaResource_4802 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("request");
  decl->add_arg<const QNetworkRequest & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("mimeType", true, "QString()");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return_new<QMediaResource> ();
}

static void _call_ctor_QMediaResource_4802 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QNetworkRequest &arg1 = gsi::arg_reader<const QNetworkRequest & >() (args, heap);
  const QString &arg2 = args ? gsi::arg_reader<const QString & >() (args, heap) : gsi::arg_maker<const QString & >() (QString(), heap);
  ret.write<QMediaResource *> (new QMediaResource (arg1, arg2));
}


//  Constructor QMediaResource::QMediaResource(const QMediaResource &other)


static void _init_ctor_QMediaResource_2714 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QMediaResource & > (argspec_0);
  decl->set_return_new<QMediaResource> ();
}

static void _call_ctor_QMediaResource_2714 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMediaResource &arg1 = gsi::arg_reader<const QMediaResource & >() (args, heap);
  ret.write<QMediaResource *> (new QMediaResource (arg1));
}


// int QMediaResource::audioBitRate()


static void _init_f_audioBitRate_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_audioBitRate_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QMediaResource *)cls)->audioBitRate ());
}


// QString QMediaResource::audioCodec()


static void _init_f_audioCodec_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_audioCodec_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QMediaResource *)cls)->audioCodec ());
}


// int QMediaResource::channelCount()


static void _init_f_channelCount_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_channelCount_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QMediaResource *)cls)->channelCount ());
}


// qint64 QMediaResource::dataSize()


static void _init_f_dataSize_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qint64 > ();
}

static void _call_f_dataSize_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qint64 > ((qint64)((QMediaResource *)cls)->dataSize ());
}


// bool QMediaResource::isNull()


static void _init_f_isNull_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isNull_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QMediaResource *)cls)->isNull ());
}


// QString QMediaResource::language()


static void _init_f_language_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_language_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QMediaResource *)cls)->language ());
}


// QString QMediaResource::mimeType()


static void _init_f_mimeType_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_mimeType_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QMediaResource *)cls)->mimeType ());
}


// bool QMediaResource::operator !=(const QMediaResource &other)


static void _init_f_operator_excl__eq__c2714 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QMediaResource & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_excl__eq__c2714 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMediaResource &arg1 = gsi::arg_reader<const QMediaResource & >() (args, heap);
  ret.write<bool > ((bool)((QMediaResource *)cls)->operator != (arg1));
}


// QMediaResource &QMediaResource::operator =(const QMediaResource &other)


static void _init_f_operator_eq__2714 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QMediaResource & > (argspec_0);
  decl->set_return<QMediaResource & > ();
}

static void _call_f_operator_eq__2714 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMediaResource &arg1 = gsi::arg_reader<const QMediaResource & >() (args, heap);
  ret.write<QMediaResource & > ((QMediaResource &)((QMediaResource *)cls)->operator = (arg1));
}


// bool QMediaResource::operator ==(const QMediaResource &other)


static void _init_f_operator_eq__eq__c2714 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QMediaResource & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c2714 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMediaResource &arg1 = gsi::arg_reader<const QMediaResource & >() (args, heap);
  ret.write<bool > ((bool)((QMediaResource *)cls)->operator == (arg1));
}


// QNetworkRequest QMediaResource::request()


static void _init_f_request_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QNetworkRequest > ();
}

static void _call_f_request_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QNetworkRequest > ((QNetworkRequest)((QMediaResource *)cls)->request ());
}


// QSize QMediaResource::resolution()


static void _init_f_resolution_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QSize > ();
}

static void _call_f_resolution_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSize > ((QSize)((QMediaResource *)cls)->resolution ());
}


// int QMediaResource::sampleRate()


static void _init_f_sampleRate_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_sampleRate_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QMediaResource *)cls)->sampleRate ());
}


// void QMediaResource::setAudioBitRate(int rate)


static void _init_f_setAudioBitRate_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("rate");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setAudioBitRate_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMediaResource *)cls)->setAudioBitRate (arg1);
}


// void QMediaResource::setAudioCodec(const QString &codec)


static void _init_f_setAudioCodec_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("codec");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setAudioCodec_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMediaResource *)cls)->setAudioCodec (arg1);
}


// void QMediaResource::setChannelCount(int channels)


static void _init_f_setChannelCount_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("channels");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setChannelCount_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMediaResource *)cls)->setChannelCount (arg1);
}


// void QMediaResource::setDataSize(const qint64 size)


static void _init_f_setDataSize_1681 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("size");
  decl->add_arg<const qint64 > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setDataSize_1681 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qint64 arg1 = gsi::arg_reader<const qint64 >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMediaResource *)cls)->setDataSize (arg1);
}


// void QMediaResource::setLanguage(const QString &language)


static void _init_f_setLanguage_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("language");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setLanguage_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMediaResource *)cls)->setLanguage (arg1);
}


// void QMediaResource::setResolution(const QSize &resolution)


static void _init_f_setResolution_1805 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("resolution");
  decl->add_arg<const QSize & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setResolution_1805 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QSize &arg1 = gsi::arg_reader<const QSize & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMediaResource *)cls)->setResolution (arg1);
}


// void QMediaResource::setResolution(int width, int height)


static void _init_f_setResolution_1426 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("width");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("height");
  decl->add_arg<int > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setResolution_1426 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  int arg2 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMediaResource *)cls)->setResolution (arg1, arg2);
}


// void QMediaResource::setSampleRate(int frequency)


static void _init_f_setSampleRate_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("frequency");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setSampleRate_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMediaResource *)cls)->setSampleRate (arg1);
}


// void QMediaResource::setVideoBitRate(int rate)


static void _init_f_setVideoBitRate_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("rate");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setVideoBitRate_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMediaResource *)cls)->setVideoBitRate (arg1);
}


// void QMediaResource::setVideoCodec(const QString &codec)


static void _init_f_setVideoCodec_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("codec");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setVideoCodec_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMediaResource *)cls)->setVideoCodec (arg1);
}


// QUrl QMediaResource::url()


static void _init_f_url_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QUrl > ();
}

static void _call_f_url_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QUrl > ((QUrl)((QMediaResource *)cls)->url ());
}


// int QMediaResource::videoBitRate()


static void _init_f_videoBitRate_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_videoBitRate_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QMediaResource *)cls)->videoBitRate ());
}


// QString QMediaResource::videoCodec()


static void _init_f_videoCodec_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_videoCodec_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QMediaResource *)cls)->videoCodec ());
}



namespace gsi
{

static gsi::Methods methods_QMediaResource () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QMediaResource::QMediaResource()\nThis method creates an object of class QMediaResource.", &_init_ctor_QMediaResource_0, &_call_ctor_QMediaResource_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QMediaResource::QMediaResource(const QUrl &url, const QString &mimeType)\nThis method creates an object of class QMediaResource.", &_init_ctor_QMediaResource_3618, &_call_ctor_QMediaResource_3618);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QMediaResource::QMediaResource(const QNetworkRequest &request, const QString &mimeType)\nThis method creates an object of class QMediaResource.", &_init_ctor_QMediaResource_4802, &_call_ctor_QMediaResource_4802);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QMediaResource::QMediaResource(const QMediaResource &other)\nThis method creates an object of class QMediaResource.", &_init_ctor_QMediaResource_2714, &_call_ctor_QMediaResource_2714);
  methods += new qt_gsi::GenericMethod (":audioBitRate", "@brief Method int QMediaResource::audioBitRate()\n", true, &_init_f_audioBitRate_c0, &_call_f_audioBitRate_c0);
  methods += new qt_gsi::GenericMethod (":audioCodec", "@brief Method QString QMediaResource::audioCodec()\n", true, &_init_f_audioCodec_c0, &_call_f_audioCodec_c0);
  methods += new qt_gsi::GenericMethod (":channelCount", "@brief Method int QMediaResource::channelCount()\n", true, &_init_f_channelCount_c0, &_call_f_channelCount_c0);
  methods += new qt_gsi::GenericMethod (":dataSize", "@brief Method qint64 QMediaResource::dataSize()\n", true, &_init_f_dataSize_c0, &_call_f_dataSize_c0);
  methods += new qt_gsi::GenericMethod ("isNull?", "@brief Method bool QMediaResource::isNull()\n", true, &_init_f_isNull_c0, &_call_f_isNull_c0);
  methods += new qt_gsi::GenericMethod (":language", "@brief Method QString QMediaResource::language()\n", true, &_init_f_language_c0, &_call_f_language_c0);
  methods += new qt_gsi::GenericMethod ("mimeType", "@brief Method QString QMediaResource::mimeType()\n", true, &_init_f_mimeType_c0, &_call_f_mimeType_c0);
  methods += new qt_gsi::GenericMethod ("!=", "@brief Method bool QMediaResource::operator !=(const QMediaResource &other)\n", true, &_init_f_operator_excl__eq__c2714, &_call_f_operator_excl__eq__c2714);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QMediaResource &QMediaResource::operator =(const QMediaResource &other)\n", false, &_init_f_operator_eq__2714, &_call_f_operator_eq__2714);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QMediaResource::operator ==(const QMediaResource &other)\n", true, &_init_f_operator_eq__eq__c2714, &_call_f_operator_eq__eq__c2714);
  methods += new qt_gsi::GenericMethod ("request", "@brief Method QNetworkRequest QMediaResource::request()\n", true, &_init_f_request_c0, &_call_f_request_c0);
  methods += new qt_gsi::GenericMethod (":resolution", "@brief Method QSize QMediaResource::resolution()\n", true, &_init_f_resolution_c0, &_call_f_resolution_c0);
  methods += new qt_gsi::GenericMethod (":sampleRate", "@brief Method int QMediaResource::sampleRate()\n", true, &_init_f_sampleRate_c0, &_call_f_sampleRate_c0);
  methods += new qt_gsi::GenericMethod ("setAudioBitRate|audioBitRate=", "@brief Method void QMediaResource::setAudioBitRate(int rate)\n", false, &_init_f_setAudioBitRate_767, &_call_f_setAudioBitRate_767);
  methods += new qt_gsi::GenericMethod ("setAudioCodec|audioCodec=", "@brief Method void QMediaResource::setAudioCodec(const QString &codec)\n", false, &_init_f_setAudioCodec_2025, &_call_f_setAudioCodec_2025);
  methods += new qt_gsi::GenericMethod ("setChannelCount|channelCount=", "@brief Method void QMediaResource::setChannelCount(int channels)\n", false, &_init_f_setChannelCount_767, &_call_f_setChannelCount_767);
  methods += new qt_gsi::GenericMethod ("setDataSize|dataSize=", "@brief Method void QMediaResource::setDataSize(const qint64 size)\n", false, &_init_f_setDataSize_1681, &_call_f_setDataSize_1681);
  methods += new qt_gsi::GenericMethod ("setLanguage|language=", "@brief Method void QMediaResource::setLanguage(const QString &language)\n", false, &_init_f_setLanguage_2025, &_call_f_setLanguage_2025);
  methods += new qt_gsi::GenericMethod ("setResolution|resolution=", "@brief Method void QMediaResource::setResolution(const QSize &resolution)\n", false, &_init_f_setResolution_1805, &_call_f_setResolution_1805);
  methods += new qt_gsi::GenericMethod ("setResolution", "@brief Method void QMediaResource::setResolution(int width, int height)\n", false, &_init_f_setResolution_1426, &_call_f_setResolution_1426);
  methods += new qt_gsi::GenericMethod ("setSampleRate|sampleRate=", "@brief Method void QMediaResource::setSampleRate(int frequency)\n", false, &_init_f_setSampleRate_767, &_call_f_setSampleRate_767);
  methods += new qt_gsi::GenericMethod ("setVideoBitRate|videoBitRate=", "@brief Method void QMediaResource::setVideoBitRate(int rate)\n", false, &_init_f_setVideoBitRate_767, &_call_f_setVideoBitRate_767);
  methods += new qt_gsi::GenericMethod ("setVideoCodec|videoCodec=", "@brief Method void QMediaResource::setVideoCodec(const QString &codec)\n", false, &_init_f_setVideoCodec_2025, &_call_f_setVideoCodec_2025);
  methods += new qt_gsi::GenericMethod ("url", "@brief Method QUrl QMediaResource::url()\n", true, &_init_f_url_c0, &_call_f_url_c0);
  methods += new qt_gsi::GenericMethod (":videoBitRate", "@brief Method int QMediaResource::videoBitRate()\n", true, &_init_f_videoBitRate_c0, &_call_f_videoBitRate_c0);
  methods += new qt_gsi::GenericMethod (":videoCodec", "@brief Method QString QMediaResource::videoCodec()\n", true, &_init_f_videoCodec_c0, &_call_f_videoCodec_c0);
  return methods;
}

gsi::Class<QMediaResource> decl_QMediaResource ("QtMultimedia", "QMediaResource",
  methods_QMediaResource (),
  "@qt\n@brief Binding of QMediaResource");


GSI_QTMULTIMEDIA_PUBLIC gsi::Class<QMediaResource> &qtdecl_QMediaResource () { return decl_QMediaResource; }

}

