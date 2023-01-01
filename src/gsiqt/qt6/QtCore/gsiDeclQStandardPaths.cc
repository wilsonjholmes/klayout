
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
*  @file gsiDeclQStandardPaths.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QStandardPaths>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QStandardPaths

// static QString QStandardPaths::displayName(QStandardPaths::StandardLocation type)


static void _init_f_displayName_3604 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("type");
  decl->add_arg<const qt_gsi::Converter<QStandardPaths::StandardLocation>::target_type & > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_f_displayName_3604 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QStandardPaths::StandardLocation>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QStandardPaths::StandardLocation>::target_type & >() (args, heap);
  ret.write<QString > ((QString)QStandardPaths::displayName (qt_gsi::QtToCppAdaptor<QStandardPaths::StandardLocation>(arg1).cref()));
}


// static QString QStandardPaths::findExecutable(const QString &executableName, const QStringList &paths)


static void _init_f_findExecutable_4354 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("executableName");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("paths", true, "QStringList()");
  decl->add_arg<const QStringList & > (argspec_1);
  decl->set_return<QString > ();
}

static void _call_f_findExecutable_4354 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  const QStringList &arg2 = args ? gsi::arg_reader<const QStringList & >() (args, heap) : gsi::arg_maker<const QStringList & >() (QStringList(), heap);
  ret.write<QString > ((QString)QStandardPaths::findExecutable (arg1, arg2));
}


// static bool QStandardPaths::isTestModeEnabled()


static void _init_f_isTestModeEnabled_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isTestModeEnabled_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)QStandardPaths::isTestModeEnabled ());
}


// static QString QStandardPaths::locate(QStandardPaths::StandardLocation type, const QString &fileName, QFlags<QStandardPaths::LocateOption> options)


static void _init_f_locate_9304 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("type");
  decl->add_arg<const qt_gsi::Converter<QStandardPaths::StandardLocation>::target_type & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("fileName");
  decl->add_arg<const QString & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("options", true, "QStandardPaths::LocateFile");
  decl->add_arg<QFlags<QStandardPaths::LocateOption> > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_f_locate_9304 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QStandardPaths::StandardLocation>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QStandardPaths::StandardLocation>::target_type & >() (args, heap);
  const QString &arg2 = gsi::arg_reader<const QString & >() (args, heap);
  QFlags<QStandardPaths::LocateOption> arg3 = args ? gsi::arg_reader<QFlags<QStandardPaths::LocateOption> >() (args, heap) : gsi::arg_maker<QFlags<QStandardPaths::LocateOption> >() (QStandardPaths::LocateFile, heap);
  ret.write<QString > ((QString)QStandardPaths::locate (qt_gsi::QtToCppAdaptor<QStandardPaths::StandardLocation>(arg1).cref(), arg2, arg3));
}


// static QStringList QStandardPaths::locateAll(QStandardPaths::StandardLocation type, const QString &fileName, QFlags<QStandardPaths::LocateOption> options)


static void _init_f_locateAll_9304 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("type");
  decl->add_arg<const qt_gsi::Converter<QStandardPaths::StandardLocation>::target_type & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("fileName");
  decl->add_arg<const QString & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("options", true, "QStandardPaths::LocateFile");
  decl->add_arg<QFlags<QStandardPaths::LocateOption> > (argspec_2);
  decl->set_return<QStringList > ();
}

static void _call_f_locateAll_9304 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QStandardPaths::StandardLocation>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QStandardPaths::StandardLocation>::target_type & >() (args, heap);
  const QString &arg2 = gsi::arg_reader<const QString & >() (args, heap);
  QFlags<QStandardPaths::LocateOption> arg3 = args ? gsi::arg_reader<QFlags<QStandardPaths::LocateOption> >() (args, heap) : gsi::arg_maker<QFlags<QStandardPaths::LocateOption> >() (QStandardPaths::LocateFile, heap);
  ret.write<QStringList > ((QStringList)QStandardPaths::locateAll (qt_gsi::QtToCppAdaptor<QStandardPaths::StandardLocation>(arg1).cref(), arg2, arg3));
}


// static void QStandardPaths::setTestModeEnabled(bool testMode)


static void _init_f_setTestModeEnabled_864 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("testMode");
  decl->add_arg<bool > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setTestModeEnabled_864 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  bool arg1 = gsi::arg_reader<bool >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  QStandardPaths::setTestModeEnabled (arg1);
}


// static QStringList QStandardPaths::standardLocations(QStandardPaths::StandardLocation type)


static void _init_f_standardLocations_3604 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("type");
  decl->add_arg<const qt_gsi::Converter<QStandardPaths::StandardLocation>::target_type & > (argspec_0);
  decl->set_return<QStringList > ();
}

static void _call_f_standardLocations_3604 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QStandardPaths::StandardLocation>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QStandardPaths::StandardLocation>::target_type & >() (args, heap);
  ret.write<QStringList > ((QStringList)QStandardPaths::standardLocations (qt_gsi::QtToCppAdaptor<QStandardPaths::StandardLocation>(arg1).cref()));
}


// static QString QStandardPaths::writableLocation(QStandardPaths::StandardLocation type)


static void _init_f_writableLocation_3604 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("type");
  decl->add_arg<const qt_gsi::Converter<QStandardPaths::StandardLocation>::target_type & > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_f_writableLocation_3604 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QStandardPaths::StandardLocation>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QStandardPaths::StandardLocation>::target_type & >() (args, heap);
  ret.write<QString > ((QString)QStandardPaths::writableLocation (qt_gsi::QtToCppAdaptor<QStandardPaths::StandardLocation>(arg1).cref()));
}



namespace gsi
{

static gsi::Methods methods_QStandardPaths () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("displayName", "@brief Static method QString QStandardPaths::displayName(QStandardPaths::StandardLocation type)\nThis method is static and can be called without an instance.", &_init_f_displayName_3604, &_call_f_displayName_3604);
  methods += new qt_gsi::GenericStaticMethod ("findExecutable", "@brief Static method QString QStandardPaths::findExecutable(const QString &executableName, const QStringList &paths)\nThis method is static and can be called without an instance.", &_init_f_findExecutable_4354, &_call_f_findExecutable_4354);
  methods += new qt_gsi::GenericStaticMethod ("isTestModeEnabled?|:testModeEnabled", "@brief Static method bool QStandardPaths::isTestModeEnabled()\nThis method is static and can be called without an instance.", &_init_f_isTestModeEnabled_0, &_call_f_isTestModeEnabled_0);
  methods += new qt_gsi::GenericStaticMethod ("locate", "@brief Static method QString QStandardPaths::locate(QStandardPaths::StandardLocation type, const QString &fileName, QFlags<QStandardPaths::LocateOption> options)\nThis method is static and can be called without an instance.", &_init_f_locate_9304, &_call_f_locate_9304);
  methods += new qt_gsi::GenericStaticMethod ("locateAll", "@brief Static method QStringList QStandardPaths::locateAll(QStandardPaths::StandardLocation type, const QString &fileName, QFlags<QStandardPaths::LocateOption> options)\nThis method is static and can be called without an instance.", &_init_f_locateAll_9304, &_call_f_locateAll_9304);
  methods += new qt_gsi::GenericStaticMethod ("setTestModeEnabled|testModeEnabled=", "@brief Static method void QStandardPaths::setTestModeEnabled(bool testMode)\nThis method is static and can be called without an instance.", &_init_f_setTestModeEnabled_864, &_call_f_setTestModeEnabled_864);
  methods += new qt_gsi::GenericStaticMethod ("standardLocations", "@brief Static method QStringList QStandardPaths::standardLocations(QStandardPaths::StandardLocation type)\nThis method is static and can be called without an instance.", &_init_f_standardLocations_3604, &_call_f_standardLocations_3604);
  methods += new qt_gsi::GenericStaticMethod ("writableLocation", "@brief Static method QString QStandardPaths::writableLocation(QStandardPaths::StandardLocation type)\nThis method is static and can be called without an instance.", &_init_f_writableLocation_3604, &_call_f_writableLocation_3604);
  return methods;
}

gsi::Class<QStandardPaths> decl_QStandardPaths ("QtCore", "QStandardPaths",
  methods_QStandardPaths (),
  "@qt\n@brief Binding of QStandardPaths");


GSI_QTCORE_PUBLIC gsi::Class<QStandardPaths> &qtdecl_QStandardPaths () { return decl_QStandardPaths; }

}


//  Implementation of the enum wrapper class for QStandardPaths::LocateOption
namespace qt_gsi
{

static gsi::Enum<QStandardPaths::LocateOption> decl_QStandardPaths_LocateOption_Enum ("QtCore", "QStandardPaths_LocateOption",
    gsi::enum_const ("LocateFile", QStandardPaths::LocateFile, "@brief Enum constant QStandardPaths::LocateFile") +
    gsi::enum_const ("LocateDirectory", QStandardPaths::LocateDirectory, "@brief Enum constant QStandardPaths::LocateDirectory"),
  "@qt\n@brief This class represents the QStandardPaths::LocateOption enum");

static gsi::QFlagsClass<QStandardPaths::LocateOption > decl_QStandardPaths_LocateOption_Enums ("QtCore", "QStandardPaths_QFlags_LocateOption",
  "@qt\n@brief This class represents the QFlags<QStandardPaths::LocateOption> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QStandardPaths> inject_QStandardPaths_LocateOption_Enum_in_parent (decl_QStandardPaths_LocateOption_Enum.defs ());
static gsi::ClassExt<QStandardPaths> decl_QStandardPaths_LocateOption_Enum_as_child (decl_QStandardPaths_LocateOption_Enum, "LocateOption");
static gsi::ClassExt<QStandardPaths> decl_QStandardPaths_LocateOption_Enums_as_child (decl_QStandardPaths_LocateOption_Enums, "QFlags_LocateOption");

}


//  Implementation of the enum wrapper class for QStandardPaths::StandardLocation
namespace qt_gsi
{

static gsi::Enum<QStandardPaths::StandardLocation> decl_QStandardPaths_StandardLocation_Enum ("QtCore", "QStandardPaths_StandardLocation",
    gsi::enum_const ("DesktopLocation", QStandardPaths::DesktopLocation, "@brief Enum constant QStandardPaths::DesktopLocation") +
    gsi::enum_const ("DocumentsLocation", QStandardPaths::DocumentsLocation, "@brief Enum constant QStandardPaths::DocumentsLocation") +
    gsi::enum_const ("FontsLocation", QStandardPaths::FontsLocation, "@brief Enum constant QStandardPaths::FontsLocation") +
    gsi::enum_const ("ApplicationsLocation", QStandardPaths::ApplicationsLocation, "@brief Enum constant QStandardPaths::ApplicationsLocation") +
    gsi::enum_const ("MusicLocation", QStandardPaths::MusicLocation, "@brief Enum constant QStandardPaths::MusicLocation") +
    gsi::enum_const ("MoviesLocation", QStandardPaths::MoviesLocation, "@brief Enum constant QStandardPaths::MoviesLocation") +
    gsi::enum_const ("PicturesLocation", QStandardPaths::PicturesLocation, "@brief Enum constant QStandardPaths::PicturesLocation") +
    gsi::enum_const ("TempLocation", QStandardPaths::TempLocation, "@brief Enum constant QStandardPaths::TempLocation") +
    gsi::enum_const ("HomeLocation", QStandardPaths::HomeLocation, "@brief Enum constant QStandardPaths::HomeLocation") +
    gsi::enum_const ("AppLocalDataLocation", QStandardPaths::AppLocalDataLocation, "@brief Enum constant QStandardPaths::AppLocalDataLocation") +
    gsi::enum_const ("CacheLocation", QStandardPaths::CacheLocation, "@brief Enum constant QStandardPaths::CacheLocation") +
    gsi::enum_const ("GenericDataLocation", QStandardPaths::GenericDataLocation, "@brief Enum constant QStandardPaths::GenericDataLocation") +
    gsi::enum_const ("RuntimeLocation", QStandardPaths::RuntimeLocation, "@brief Enum constant QStandardPaths::RuntimeLocation") +
    gsi::enum_const ("ConfigLocation", QStandardPaths::ConfigLocation, "@brief Enum constant QStandardPaths::ConfigLocation") +
    gsi::enum_const ("DownloadLocation", QStandardPaths::DownloadLocation, "@brief Enum constant QStandardPaths::DownloadLocation") +
    gsi::enum_const ("GenericCacheLocation", QStandardPaths::GenericCacheLocation, "@brief Enum constant QStandardPaths::GenericCacheLocation") +
    gsi::enum_const ("GenericConfigLocation", QStandardPaths::GenericConfigLocation, "@brief Enum constant QStandardPaths::GenericConfigLocation") +
    gsi::enum_const ("AppDataLocation", QStandardPaths::AppDataLocation, "@brief Enum constant QStandardPaths::AppDataLocation") +
    gsi::enum_const ("AppConfigLocation", QStandardPaths::AppConfigLocation, "@brief Enum constant QStandardPaths::AppConfigLocation"),
  "@qt\n@brief This class represents the QStandardPaths::StandardLocation enum");

static gsi::QFlagsClass<QStandardPaths::StandardLocation > decl_QStandardPaths_StandardLocation_Enums ("QtCore", "QStandardPaths_QFlags_StandardLocation",
  "@qt\n@brief This class represents the QFlags<QStandardPaths::StandardLocation> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QStandardPaths> inject_QStandardPaths_StandardLocation_Enum_in_parent (decl_QStandardPaths_StandardLocation_Enum.defs ());
static gsi::ClassExt<QStandardPaths> decl_QStandardPaths_StandardLocation_Enum_as_child (decl_QStandardPaths_StandardLocation_Enum, "StandardLocation");
static gsi::ClassExt<QStandardPaths> decl_QStandardPaths_StandardLocation_Enums_as_child (decl_QStandardPaths_StandardLocation_Enums, "QFlags_StandardLocation");

}

