
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
*  @file gsiDeclQStringConverter.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QStringConverter>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QStringConverter

// bool QStringConverter::hasError()


static void _init_f_hasError_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_hasError_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QStringConverter *)cls)->hasError ());
}


// bool QStringConverter::isValid()


static void _init_f_isValid_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isValid_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QStringConverter *)cls)->isValid ());
}


// const char *QStringConverter::name()


static void _init_f_name_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const char * > ();
}

static void _call_f_name_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const char * > ((const char *)((QStringConverter *)cls)->name ());
}


// void QStringConverter::resetState()


static void _init_f_resetState_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_resetState_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QStringConverter *)cls)->resetState ();
}


// static std::optional<QStringConverter::Encoding> QStringConverter::encodingForData(QByteArrayView data, char16_t expectedFirstCharacter)


static void _init_f_encodingForData_2899 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("data");
  decl->add_arg<QByteArrayView > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("expectedFirstCharacter", true, "0");
  decl->add_arg<char16_t > (argspec_1);
  decl->set_return<std::optional<QStringConverter::Encoding> > ();
}

static void _call_f_encodingForData_2899 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QByteArrayView arg1 = gsi::arg_reader<QByteArrayView >() (args, heap);
  char16_t arg2 = args ? gsi::arg_reader<char16_t >() (args, heap) : gsi::arg_maker<char16_t >() (0, heap);
  ret.write<std::optional<QStringConverter::Encoding> > ((std::optional<QStringConverter::Encoding>)QStringConverter::encodingForData (arg1, arg2));
}


// static std::optional<QStringConverter::Encoding> QStringConverter::encodingForHtml(QByteArrayView data)


static void _init_f_encodingForHtml_1843 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("data");
  decl->add_arg<QByteArrayView > (argspec_0);
  decl->set_return<std::optional<QStringConverter::Encoding> > ();
}

static void _call_f_encodingForHtml_1843 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QByteArrayView arg1 = gsi::arg_reader<QByteArrayView >() (args, heap);
  ret.write<std::optional<QStringConverter::Encoding> > ((std::optional<QStringConverter::Encoding>)QStringConverter::encodingForHtml (arg1));
}


// static std::optional<QStringConverter::Encoding> QStringConverter::encodingForName(const char *name)


static void _init_f_encodingForName_1731 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const char * > (argspec_0);
  decl->set_return<std::optional<QStringConverter::Encoding> > ();
}

static void _call_f_encodingForName_1731 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  ret.write<std::optional<QStringConverter::Encoding> > ((std::optional<QStringConverter::Encoding>)QStringConverter::encodingForName (arg1));
}


// static const char *QStringConverter::nameForEncoding(QStringConverter::Encoding e)


static void _init_f_nameForEncoding_3023 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("e");
  decl->add_arg<const qt_gsi::Converter<QStringConverter::Encoding>::target_type & > (argspec_0);
  decl->set_return<const char * > ();
}

static void _call_f_nameForEncoding_3023 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QStringConverter::Encoding>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QStringConverter::Encoding>::target_type & >() (args, heap);
  ret.write<const char * > ((const char *)QStringConverter::nameForEncoding (qt_gsi::QtToCppAdaptor<QStringConverter::Encoding>(arg1).cref()));
}



namespace gsi
{

static gsi::Methods methods_QStringConverter () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("hasError", "@brief Method bool QStringConverter::hasError()\n", true, &_init_f_hasError_c0, &_call_f_hasError_c0);
  methods += new qt_gsi::GenericMethod ("isValid?", "@brief Method bool QStringConverter::isValid()\n", true, &_init_f_isValid_c0, &_call_f_isValid_c0);
  methods += new qt_gsi::GenericMethod ("name", "@brief Method const char *QStringConverter::name()\n", true, &_init_f_name_c0, &_call_f_name_c0);
  methods += new qt_gsi::GenericMethod ("resetState", "@brief Method void QStringConverter::resetState()\n", false, &_init_f_resetState_0, &_call_f_resetState_0);
  methods += new qt_gsi::GenericStaticMethod ("encodingForData", "@brief Static method std::optional<QStringConverter::Encoding> QStringConverter::encodingForData(QByteArrayView data, char16_t expectedFirstCharacter)\nThis method is static and can be called without an instance.", &_init_f_encodingForData_2899, &_call_f_encodingForData_2899);
  methods += new qt_gsi::GenericStaticMethod ("encodingForHtml", "@brief Static method std::optional<QStringConverter::Encoding> QStringConverter::encodingForHtml(QByteArrayView data)\nThis method is static and can be called without an instance.", &_init_f_encodingForHtml_1843, &_call_f_encodingForHtml_1843);
  methods += new qt_gsi::GenericStaticMethod ("encodingForName", "@brief Static method std::optional<QStringConverter::Encoding> QStringConverter::encodingForName(const char *name)\nThis method is static and can be called without an instance.", &_init_f_encodingForName_1731, &_call_f_encodingForName_1731);
  methods += new qt_gsi::GenericStaticMethod ("nameForEncoding", "@brief Static method const char *QStringConverter::nameForEncoding(QStringConverter::Encoding e)\nThis method is static and can be called without an instance.", &_init_f_nameForEncoding_3023, &_call_f_nameForEncoding_3023);
  return methods;
}

gsi::Class<QStringConverterBase> &qtdecl_QStringConverterBase ();

gsi::Class<QStringConverter> decl_QStringConverter (qtdecl_QStringConverterBase (), "QtCore", "QStringConverter",
  methods_QStringConverter (),
  "@qt\n@brief Binding of QStringConverter");


GSI_QTCORE_PUBLIC gsi::Class<QStringConverter> &qtdecl_QStringConverter () { return decl_QStringConverter; }

}


//  Implementation of the enum wrapper class for QStringConverter::Encoding
namespace qt_gsi
{

static gsi::Enum<QStringConverter::Encoding> decl_QStringConverter_Encoding_Enum ("QtCore", "QStringConverter_Encoding",
    gsi::enum_const ("Utf8", QStringConverter::Utf8, "@brief Enum constant QStringConverter::Utf8") +
    gsi::enum_const ("Utf16", QStringConverter::Utf16, "@brief Enum constant QStringConverter::Utf16") +
    gsi::enum_const ("Utf16LE", QStringConverter::Utf16LE, "@brief Enum constant QStringConverter::Utf16LE") +
    gsi::enum_const ("Utf16BE", QStringConverter::Utf16BE, "@brief Enum constant QStringConverter::Utf16BE") +
    gsi::enum_const ("Utf32", QStringConverter::Utf32, "@brief Enum constant QStringConverter::Utf32") +
    gsi::enum_const ("Utf32LE", QStringConverter::Utf32LE, "@brief Enum constant QStringConverter::Utf32LE") +
    gsi::enum_const ("Utf32BE", QStringConverter::Utf32BE, "@brief Enum constant QStringConverter::Utf32BE") +
    gsi::enum_const ("Latin1", QStringConverter::Latin1, "@brief Enum constant QStringConverter::Latin1") +
    gsi::enum_const ("System", QStringConverter::System, "@brief Enum constant QStringConverter::System") +
    gsi::enum_const ("LastEncoding", QStringConverter::LastEncoding, "@brief Enum constant QStringConverter::LastEncoding"),
  "@qt\n@brief This class represents the QStringConverter::Encoding enum");

static gsi::QFlagsClass<QStringConverter::Encoding > decl_QStringConverter_Encoding_Enums ("QtCore", "QStringConverter_QFlags_Encoding",
  "@qt\n@brief This class represents the QFlags<QStringConverter::Encoding> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QStringConverter> inject_QStringConverter_Encoding_Enum_in_parent (decl_QStringConverter_Encoding_Enum.defs ());
static gsi::ClassExt<QStringConverter> decl_QStringConverter_Encoding_Enum_as_child (decl_QStringConverter_Encoding_Enum, "Encoding");
static gsi::ClassExt<QStringConverter> decl_QStringConverter_Encoding_Enums_as_child (decl_QStringConverter_Encoding_Enums, "QFlags_Encoding");

}

