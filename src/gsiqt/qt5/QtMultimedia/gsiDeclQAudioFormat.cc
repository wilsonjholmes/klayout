
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
*  @file gsiDeclQAudioFormat.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QAudioFormat>
#include "gsiQt.h"
#include "gsiQtMultimediaCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QAudioFormat

//  Constructor QAudioFormat::QAudioFormat()


static void _init_ctor_QAudioFormat_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QAudioFormat> ();
}

static void _call_ctor_QAudioFormat_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QAudioFormat *> (new QAudioFormat ());
}


//  Constructor QAudioFormat::QAudioFormat(const QAudioFormat &other)


static void _init_ctor_QAudioFormat_2509 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QAudioFormat & > (argspec_0);
  decl->set_return_new<QAudioFormat> ();
}

static void _call_ctor_QAudioFormat_2509 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QAudioFormat &arg1 = gsi::arg_reader<const QAudioFormat & >() (args, heap);
  ret.write<QAudioFormat *> (new QAudioFormat (arg1));
}


// QAudioFormat::Endian QAudioFormat::byteOrder()


static void _init_f_byteOrder_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QAudioFormat::Endian>::target_type > ();
}

static void _call_f_byteOrder_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QAudioFormat::Endian>::target_type > ((qt_gsi::Converter<QAudioFormat::Endian>::target_type)qt_gsi::CppToQtAdaptor<QAudioFormat::Endian>(((QAudioFormat *)cls)->byteOrder ()));
}


// qint32 QAudioFormat::bytesForDuration(qint64 duration)


static void _init_f_bytesForDuration_c986 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("duration");
  decl->add_arg<qint64 > (argspec_0);
  decl->set_return<qint32 > ();
}

static void _call_f_bytesForDuration_c986 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  qint64 arg1 = gsi::arg_reader<qint64 >() (args, heap);
  ret.write<qint32 > ((qint32)((QAudioFormat *)cls)->bytesForDuration (arg1));
}


// qint32 QAudioFormat::bytesForFrames(qint32 frameCount)


static void _init_f_bytesForFrames_c981 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("frameCount");
  decl->add_arg<qint32 > (argspec_0);
  decl->set_return<qint32 > ();
}

static void _call_f_bytesForFrames_c981 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  qint32 arg1 = gsi::arg_reader<qint32 >() (args, heap);
  ret.write<qint32 > ((qint32)((QAudioFormat *)cls)->bytesForFrames (arg1));
}


// int QAudioFormat::bytesPerFrame()


static void _init_f_bytesPerFrame_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_bytesPerFrame_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QAudioFormat *)cls)->bytesPerFrame ());
}


// int QAudioFormat::channelCount()


static void _init_f_channelCount_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_channelCount_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QAudioFormat *)cls)->channelCount ());
}


// QString QAudioFormat::codec()


static void _init_f_codec_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_codec_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QAudioFormat *)cls)->codec ());
}


// qint64 QAudioFormat::durationForBytes(qint32 byteCount)


static void _init_f_durationForBytes_c981 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("byteCount");
  decl->add_arg<qint32 > (argspec_0);
  decl->set_return<qint64 > ();
}

static void _call_f_durationForBytes_c981 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  qint32 arg1 = gsi::arg_reader<qint32 >() (args, heap);
  ret.write<qint64 > ((qint64)((QAudioFormat *)cls)->durationForBytes (arg1));
}


// qint64 QAudioFormat::durationForFrames(qint32 frameCount)


static void _init_f_durationForFrames_c981 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("frameCount");
  decl->add_arg<qint32 > (argspec_0);
  decl->set_return<qint64 > ();
}

static void _call_f_durationForFrames_c981 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  qint32 arg1 = gsi::arg_reader<qint32 >() (args, heap);
  ret.write<qint64 > ((qint64)((QAudioFormat *)cls)->durationForFrames (arg1));
}


// qint32 QAudioFormat::framesForBytes(qint32 byteCount)


static void _init_f_framesForBytes_c981 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("byteCount");
  decl->add_arg<qint32 > (argspec_0);
  decl->set_return<qint32 > ();
}

static void _call_f_framesForBytes_c981 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  qint32 arg1 = gsi::arg_reader<qint32 >() (args, heap);
  ret.write<qint32 > ((qint32)((QAudioFormat *)cls)->framesForBytes (arg1));
}


// qint32 QAudioFormat::framesForDuration(qint64 duration)


static void _init_f_framesForDuration_c986 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("duration");
  decl->add_arg<qint64 > (argspec_0);
  decl->set_return<qint32 > ();
}

static void _call_f_framesForDuration_c986 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  qint64 arg1 = gsi::arg_reader<qint64 >() (args, heap);
  ret.write<qint32 > ((qint32)((QAudioFormat *)cls)->framesForDuration (arg1));
}


// bool QAudioFormat::isValid()


static void _init_f_isValid_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isValid_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QAudioFormat *)cls)->isValid ());
}


// bool QAudioFormat::operator!=(const QAudioFormat &other)


static void _init_f_operator_excl__eq__c2509 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QAudioFormat & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_excl__eq__c2509 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QAudioFormat &arg1 = gsi::arg_reader<const QAudioFormat & >() (args, heap);
  ret.write<bool > ((bool)((QAudioFormat *)cls)->operator!= (arg1));
}


// QAudioFormat &QAudioFormat::operator=(const QAudioFormat &other)


static void _init_f_operator_eq__2509 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QAudioFormat & > (argspec_0);
  decl->set_return<QAudioFormat & > ();
}

static void _call_f_operator_eq__2509 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QAudioFormat &arg1 = gsi::arg_reader<const QAudioFormat & >() (args, heap);
  ret.write<QAudioFormat & > ((QAudioFormat &)((QAudioFormat *)cls)->operator= (arg1));
}


// bool QAudioFormat::operator==(const QAudioFormat &other)


static void _init_f_operator_eq__eq__c2509 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QAudioFormat & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c2509 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QAudioFormat &arg1 = gsi::arg_reader<const QAudioFormat & >() (args, heap);
  ret.write<bool > ((bool)((QAudioFormat *)cls)->operator== (arg1));
}


// int QAudioFormat::sampleRate()


static void _init_f_sampleRate_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_sampleRate_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QAudioFormat *)cls)->sampleRate ());
}


// int QAudioFormat::sampleSize()


static void _init_f_sampleSize_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_sampleSize_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QAudioFormat *)cls)->sampleSize ());
}


// QAudioFormat::SampleType QAudioFormat::sampleType()


static void _init_f_sampleType_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QAudioFormat::SampleType>::target_type > ();
}

static void _call_f_sampleType_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QAudioFormat::SampleType>::target_type > ((qt_gsi::Converter<QAudioFormat::SampleType>::target_type)qt_gsi::CppToQtAdaptor<QAudioFormat::SampleType>(((QAudioFormat *)cls)->sampleType ()));
}


// void QAudioFormat::setByteOrder(QAudioFormat::Endian byteOrder)


static void _init_f_setByteOrder_2339 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("byteOrder");
  decl->add_arg<const qt_gsi::Converter<QAudioFormat::Endian>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setByteOrder_2339 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QAudioFormat::Endian>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QAudioFormat::Endian>::target_type & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAudioFormat *)cls)->setByteOrder (qt_gsi::QtToCppAdaptor<QAudioFormat::Endian>(arg1).cref());
}


// void QAudioFormat::setChannelCount(int channelCount)


static void _init_f_setChannelCount_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("channelCount");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setChannelCount_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAudioFormat *)cls)->setChannelCount (arg1);
}


// void QAudioFormat::setCodec(const QString &codec)


static void _init_f_setCodec_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("codec");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setCodec_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAudioFormat *)cls)->setCodec (arg1);
}


// void QAudioFormat::setSampleRate(int sampleRate)


static void _init_f_setSampleRate_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("sampleRate");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setSampleRate_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAudioFormat *)cls)->setSampleRate (arg1);
}


// void QAudioFormat::setSampleSize(int sampleSize)


static void _init_f_setSampleSize_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("sampleSize");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setSampleSize_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAudioFormat *)cls)->setSampleSize (arg1);
}


// void QAudioFormat::setSampleType(QAudioFormat::SampleType sampleType)


static void _init_f_setSampleType_2776 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("sampleType");
  decl->add_arg<const qt_gsi::Converter<QAudioFormat::SampleType>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setSampleType_2776 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QAudioFormat::SampleType>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QAudioFormat::SampleType>::target_type & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAudioFormat *)cls)->setSampleType (qt_gsi::QtToCppAdaptor<QAudioFormat::SampleType>(arg1).cref());
}



namespace gsi
{

static gsi::Methods methods_QAudioFormat () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QAudioFormat::QAudioFormat()\nThis method creates an object of class QAudioFormat.", &_init_ctor_QAudioFormat_0, &_call_ctor_QAudioFormat_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QAudioFormat::QAudioFormat(const QAudioFormat &other)\nThis method creates an object of class QAudioFormat.", &_init_ctor_QAudioFormat_2509, &_call_ctor_QAudioFormat_2509);
  methods += new qt_gsi::GenericMethod (":byteOrder", "@brief Method QAudioFormat::Endian QAudioFormat::byteOrder()\n", true, &_init_f_byteOrder_c0, &_call_f_byteOrder_c0);
  methods += new qt_gsi::GenericMethod ("bytesForDuration", "@brief Method qint32 QAudioFormat::bytesForDuration(qint64 duration)\n", true, &_init_f_bytesForDuration_c986, &_call_f_bytesForDuration_c986);
  methods += new qt_gsi::GenericMethod ("bytesForFrames", "@brief Method qint32 QAudioFormat::bytesForFrames(qint32 frameCount)\n", true, &_init_f_bytesForFrames_c981, &_call_f_bytesForFrames_c981);
  methods += new qt_gsi::GenericMethod ("bytesPerFrame", "@brief Method int QAudioFormat::bytesPerFrame()\n", true, &_init_f_bytesPerFrame_c0, &_call_f_bytesPerFrame_c0);
  methods += new qt_gsi::GenericMethod (":channelCount", "@brief Method int QAudioFormat::channelCount()\n", true, &_init_f_channelCount_c0, &_call_f_channelCount_c0);
  methods += new qt_gsi::GenericMethod (":codec", "@brief Method QString QAudioFormat::codec()\n", true, &_init_f_codec_c0, &_call_f_codec_c0);
  methods += new qt_gsi::GenericMethod ("durationForBytes", "@brief Method qint64 QAudioFormat::durationForBytes(qint32 byteCount)\n", true, &_init_f_durationForBytes_c981, &_call_f_durationForBytes_c981);
  methods += new qt_gsi::GenericMethod ("durationForFrames", "@brief Method qint64 QAudioFormat::durationForFrames(qint32 frameCount)\n", true, &_init_f_durationForFrames_c981, &_call_f_durationForFrames_c981);
  methods += new qt_gsi::GenericMethod ("framesForBytes", "@brief Method qint32 QAudioFormat::framesForBytes(qint32 byteCount)\n", true, &_init_f_framesForBytes_c981, &_call_f_framesForBytes_c981);
  methods += new qt_gsi::GenericMethod ("framesForDuration", "@brief Method qint32 QAudioFormat::framesForDuration(qint64 duration)\n", true, &_init_f_framesForDuration_c986, &_call_f_framesForDuration_c986);
  methods += new qt_gsi::GenericMethod ("isValid?", "@brief Method bool QAudioFormat::isValid()\n", true, &_init_f_isValid_c0, &_call_f_isValid_c0);
  methods += new qt_gsi::GenericMethod ("!=", "@brief Method bool QAudioFormat::operator!=(const QAudioFormat &other)\n", true, &_init_f_operator_excl__eq__c2509, &_call_f_operator_excl__eq__c2509);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QAudioFormat &QAudioFormat::operator=(const QAudioFormat &other)\n", false, &_init_f_operator_eq__2509, &_call_f_operator_eq__2509);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QAudioFormat::operator==(const QAudioFormat &other)\n", true, &_init_f_operator_eq__eq__c2509, &_call_f_operator_eq__eq__c2509);
  methods += new qt_gsi::GenericMethod (":sampleRate", "@brief Method int QAudioFormat::sampleRate()\n", true, &_init_f_sampleRate_c0, &_call_f_sampleRate_c0);
  methods += new qt_gsi::GenericMethod (":sampleSize", "@brief Method int QAudioFormat::sampleSize()\n", true, &_init_f_sampleSize_c0, &_call_f_sampleSize_c0);
  methods += new qt_gsi::GenericMethod (":sampleType", "@brief Method QAudioFormat::SampleType QAudioFormat::sampleType()\n", true, &_init_f_sampleType_c0, &_call_f_sampleType_c0);
  methods += new qt_gsi::GenericMethod ("setByteOrder|byteOrder=", "@brief Method void QAudioFormat::setByteOrder(QAudioFormat::Endian byteOrder)\n", false, &_init_f_setByteOrder_2339, &_call_f_setByteOrder_2339);
  methods += new qt_gsi::GenericMethod ("setChannelCount|channelCount=", "@brief Method void QAudioFormat::setChannelCount(int channelCount)\n", false, &_init_f_setChannelCount_767, &_call_f_setChannelCount_767);
  methods += new qt_gsi::GenericMethod ("setCodec|codec=", "@brief Method void QAudioFormat::setCodec(const QString &codec)\n", false, &_init_f_setCodec_2025, &_call_f_setCodec_2025);
  methods += new qt_gsi::GenericMethod ("setSampleRate|sampleRate=", "@brief Method void QAudioFormat::setSampleRate(int sampleRate)\n", false, &_init_f_setSampleRate_767, &_call_f_setSampleRate_767);
  methods += new qt_gsi::GenericMethod ("setSampleSize|sampleSize=", "@brief Method void QAudioFormat::setSampleSize(int sampleSize)\n", false, &_init_f_setSampleSize_767, &_call_f_setSampleSize_767);
  methods += new qt_gsi::GenericMethod ("setSampleType|sampleType=", "@brief Method void QAudioFormat::setSampleType(QAudioFormat::SampleType sampleType)\n", false, &_init_f_setSampleType_2776, &_call_f_setSampleType_2776);
  return methods;
}

gsi::Class<QAudioFormat> decl_QAudioFormat ("QtMultimedia", "QAudioFormat",
  methods_QAudioFormat (),
  "@qt\n@brief Binding of QAudioFormat");


GSI_QTMULTIMEDIA_PUBLIC gsi::Class<QAudioFormat> &qtdecl_QAudioFormat () { return decl_QAudioFormat; }

}


//  Implementation of the enum wrapper class for QAudioFormat::Endian
namespace qt_gsi
{

static gsi::Enum<QAudioFormat::Endian> decl_QAudioFormat_Endian_Enum ("QtMultimedia", "QAudioFormat_Endian",
    gsi::enum_const ("BigEndian", QAudioFormat::BigEndian, "@brief Enum constant QAudioFormat::BigEndian") +
    gsi::enum_const ("LittleEndian", QAudioFormat::LittleEndian, "@brief Enum constant QAudioFormat::LittleEndian"),
  "@qt\n@brief This class represents the QAudioFormat::Endian enum");

static gsi::QFlagsClass<QAudioFormat::Endian > decl_QAudioFormat_Endian_Enums ("QtMultimedia", "QAudioFormat_QFlags_Endian",
  "@qt\n@brief This class represents the QFlags<QAudioFormat::Endian> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QAudioFormat> inject_QAudioFormat_Endian_Enum_in_parent (decl_QAudioFormat_Endian_Enum.defs ());
static gsi::ClassExt<QAudioFormat> decl_QAudioFormat_Endian_Enum_as_child (decl_QAudioFormat_Endian_Enum, "Endian");
static gsi::ClassExt<QAudioFormat> decl_QAudioFormat_Endian_Enums_as_child (decl_QAudioFormat_Endian_Enums, "QFlags_Endian");

}


//  Implementation of the enum wrapper class for QAudioFormat::SampleType
namespace qt_gsi
{

static gsi::Enum<QAudioFormat::SampleType> decl_QAudioFormat_SampleType_Enum ("QtMultimedia", "QAudioFormat_SampleType",
    gsi::enum_const ("Unknown", QAudioFormat::Unknown, "@brief Enum constant QAudioFormat::Unknown") +
    gsi::enum_const ("SignedInt", QAudioFormat::SignedInt, "@brief Enum constant QAudioFormat::SignedInt") +
    gsi::enum_const ("UnSignedInt", QAudioFormat::UnSignedInt, "@brief Enum constant QAudioFormat::UnSignedInt") +
    gsi::enum_const ("Float", QAudioFormat::Float, "@brief Enum constant QAudioFormat::Float"),
  "@qt\n@brief This class represents the QAudioFormat::SampleType enum");

static gsi::QFlagsClass<QAudioFormat::SampleType > decl_QAudioFormat_SampleType_Enums ("QtMultimedia", "QAudioFormat_QFlags_SampleType",
  "@qt\n@brief This class represents the QFlags<QAudioFormat::SampleType> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QAudioFormat> inject_QAudioFormat_SampleType_Enum_in_parent (decl_QAudioFormat_SampleType_Enum.defs ());
static gsi::ClassExt<QAudioFormat> decl_QAudioFormat_SampleType_Enum_as_child (decl_QAudioFormat_SampleType_Enum, "SampleType");
static gsi::ClassExt<QAudioFormat> decl_QAudioFormat_SampleType_Enums_as_child (decl_QAudioFormat_SampleType_Enums, "QFlags_SampleType");

}

