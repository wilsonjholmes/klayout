
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2021 Matthias Koefferlein

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
*  @file gsiDeclQElapsedTimer.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QElapsedTimer>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QElapsedTimer

//  Constructor QElapsedTimer::QElapsedTimer()


static void _init_ctor_QElapsedTimer_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QElapsedTimer> ();
}

static void _call_ctor_QElapsedTimer_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QElapsedTimer *> (new QElapsedTimer ());
}


// qint64 QElapsedTimer::elapsed()


static void _init_f_elapsed_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qint64 > ();
}

static void _call_f_elapsed_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qint64 > ((qint64)((QElapsedTimer *)cls)->elapsed ());
}


// bool QElapsedTimer::hasExpired(qint64 timeout)


static void _init_f_hasExpired_c986 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("timeout");
  decl->add_arg<qint64 > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_hasExpired_c986 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  qint64 arg1 = gsi::arg_reader<qint64 >() (args, heap);
  ret.write<bool > ((bool)((QElapsedTimer *)cls)->hasExpired (arg1));
}


// void QElapsedTimer::invalidate()


static void _init_f_invalidate_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_invalidate_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QElapsedTimer *)cls)->invalidate ();
}


// bool QElapsedTimer::isValid()


static void _init_f_isValid_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isValid_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QElapsedTimer *)cls)->isValid ());
}


// qint64 QElapsedTimer::msecsSinceReference()


static void _init_f_msecsSinceReference_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qint64 > ();
}

static void _call_f_msecsSinceReference_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qint64 > ((qint64)((QElapsedTimer *)cls)->msecsSinceReference ());
}


// qint64 QElapsedTimer::msecsTo(const QElapsedTimer &other)


static void _init_f_msecsTo_c2609 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QElapsedTimer & > (argspec_0);
  decl->set_return<qint64 > ();
}

static void _call_f_msecsTo_c2609 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QElapsedTimer &arg1 = gsi::arg_reader<const QElapsedTimer & >() (args, heap);
  ret.write<qint64 > ((qint64)((QElapsedTimer *)cls)->msecsTo (arg1));
}


// qint64 QElapsedTimer::nsecsElapsed()


static void _init_f_nsecsElapsed_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qint64 > ();
}

static void _call_f_nsecsElapsed_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qint64 > ((qint64)((QElapsedTimer *)cls)->nsecsElapsed ());
}


// bool QElapsedTimer::operator!=(const QElapsedTimer &other)


static void _init_f_operator_excl__eq__c2609 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QElapsedTimer & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_excl__eq__c2609 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QElapsedTimer &arg1 = gsi::arg_reader<const QElapsedTimer & >() (args, heap);
  ret.write<bool > ((bool)((QElapsedTimer *)cls)->operator!= (arg1));
}


// bool QElapsedTimer::operator==(const QElapsedTimer &other)


static void _init_f_operator_eq__eq__c2609 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QElapsedTimer & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c2609 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QElapsedTimer &arg1 = gsi::arg_reader<const QElapsedTimer & >() (args, heap);
  ret.write<bool > ((bool)((QElapsedTimer *)cls)->operator== (arg1));
}


// qint64 QElapsedTimer::restart()


static void _init_f_restart_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qint64 > ();
}

static void _call_f_restart_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qint64 > ((qint64)((QElapsedTimer *)cls)->restart ());
}


// qint64 QElapsedTimer::secsTo(const QElapsedTimer &other)


static void _init_f_secsTo_c2609 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QElapsedTimer & > (argspec_0);
  decl->set_return<qint64 > ();
}

static void _call_f_secsTo_c2609 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QElapsedTimer &arg1 = gsi::arg_reader<const QElapsedTimer & >() (args, heap);
  ret.write<qint64 > ((qint64)((QElapsedTimer *)cls)->secsTo (arg1));
}


// void QElapsedTimer::start()


static void _init_f_start_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_start_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QElapsedTimer *)cls)->start ();
}


// static QElapsedTimer::ClockType QElapsedTimer::clockType()


static void _init_f_clockType_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QElapsedTimer::ClockType>::target_type > ();
}

static void _call_f_clockType_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QElapsedTimer::ClockType>::target_type > ((qt_gsi::Converter<QElapsedTimer::ClockType>::target_type)qt_gsi::CppToQtAdaptor<QElapsedTimer::ClockType>(QElapsedTimer::clockType ()));
}


// static bool QElapsedTimer::isMonotonic()


static void _init_f_isMonotonic_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isMonotonic_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)QElapsedTimer::isMonotonic ());
}



namespace gsi
{

static gsi::Methods methods_QElapsedTimer () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QElapsedTimer::QElapsedTimer()\nThis method creates an object of class QElapsedTimer.", &_init_ctor_QElapsedTimer_0, &_call_ctor_QElapsedTimer_0);
  methods += new qt_gsi::GenericMethod ("elapsed", "@brief Method qint64 QElapsedTimer::elapsed()\n", true, &_init_f_elapsed_c0, &_call_f_elapsed_c0);
  methods += new qt_gsi::GenericMethod ("hasExpired", "@brief Method bool QElapsedTimer::hasExpired(qint64 timeout)\n", true, &_init_f_hasExpired_c986, &_call_f_hasExpired_c986);
  methods += new qt_gsi::GenericMethod ("invalidate", "@brief Method void QElapsedTimer::invalidate()\n", false, &_init_f_invalidate_0, &_call_f_invalidate_0);
  methods += new qt_gsi::GenericMethod ("isValid?", "@brief Method bool QElapsedTimer::isValid()\n", true, &_init_f_isValid_c0, &_call_f_isValid_c0);
  methods += new qt_gsi::GenericMethod ("msecsSinceReference", "@brief Method qint64 QElapsedTimer::msecsSinceReference()\n", true, &_init_f_msecsSinceReference_c0, &_call_f_msecsSinceReference_c0);
  methods += new qt_gsi::GenericMethod ("msecsTo", "@brief Method qint64 QElapsedTimer::msecsTo(const QElapsedTimer &other)\n", true, &_init_f_msecsTo_c2609, &_call_f_msecsTo_c2609);
  methods += new qt_gsi::GenericMethod ("nsecsElapsed", "@brief Method qint64 QElapsedTimer::nsecsElapsed()\n", true, &_init_f_nsecsElapsed_c0, &_call_f_nsecsElapsed_c0);
  methods += new qt_gsi::GenericMethod ("!=", "@brief Method bool QElapsedTimer::operator!=(const QElapsedTimer &other)\n", true, &_init_f_operator_excl__eq__c2609, &_call_f_operator_excl__eq__c2609);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QElapsedTimer::operator==(const QElapsedTimer &other)\n", true, &_init_f_operator_eq__eq__c2609, &_call_f_operator_eq__eq__c2609);
  methods += new qt_gsi::GenericMethod ("restart", "@brief Method qint64 QElapsedTimer::restart()\n", false, &_init_f_restart_0, &_call_f_restart_0);
  methods += new qt_gsi::GenericMethod ("secsTo", "@brief Method qint64 QElapsedTimer::secsTo(const QElapsedTimer &other)\n", true, &_init_f_secsTo_c2609, &_call_f_secsTo_c2609);
  methods += new qt_gsi::GenericMethod ("start", "@brief Method void QElapsedTimer::start()\n", false, &_init_f_start_0, &_call_f_start_0);
  methods += new qt_gsi::GenericStaticMethod ("clockType", "@brief Static method QElapsedTimer::ClockType QElapsedTimer::clockType()\nThis method is static and can be called without an instance.", &_init_f_clockType_0, &_call_f_clockType_0);
  methods += new qt_gsi::GenericStaticMethod ("isMonotonic?", "@brief Static method bool QElapsedTimer::isMonotonic()\nThis method is static and can be called without an instance.", &_init_f_isMonotonic_0, &_call_f_isMonotonic_0);
  return methods;
}

gsi::Class<QElapsedTimer> decl_QElapsedTimer ("QtCore", "QElapsedTimer",
  methods_QElapsedTimer (),
  "@qt\n@brief Binding of QElapsedTimer");


GSI_QTCORE_PUBLIC gsi::Class<QElapsedTimer> &qtdecl_QElapsedTimer () { return decl_QElapsedTimer; }

}


//  Implementation of the enum wrapper class for QElapsedTimer::ClockType
namespace qt_gsi
{

static gsi::Enum<QElapsedTimer::ClockType> decl_QElapsedTimer_ClockType_Enum ("QtCore", "QElapsedTimer_ClockType",
    gsi::enum_const ("SystemTime", QElapsedTimer::SystemTime, "@brief Enum constant QElapsedTimer::SystemTime") +
    gsi::enum_const ("MonotonicClock", QElapsedTimer::MonotonicClock, "@brief Enum constant QElapsedTimer::MonotonicClock") +
    gsi::enum_const ("TickCounter", QElapsedTimer::TickCounter, "@brief Enum constant QElapsedTimer::TickCounter") +
    gsi::enum_const ("MachAbsoluteTime", QElapsedTimer::MachAbsoluteTime, "@brief Enum constant QElapsedTimer::MachAbsoluteTime") +
    gsi::enum_const ("PerformanceCounter", QElapsedTimer::PerformanceCounter, "@brief Enum constant QElapsedTimer::PerformanceCounter"),
  "@qt\n@brief This class represents the QElapsedTimer::ClockType enum");

static gsi::QFlagsClass<QElapsedTimer::ClockType > decl_QElapsedTimer_ClockType_Enums ("QtCore", "QElapsedTimer_QFlags_ClockType",
  "@qt\n@brief This class represents the QFlags<QElapsedTimer::ClockType> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QElapsedTimer> inject_QElapsedTimer_ClockType_Enum_in_parent (decl_QElapsedTimer_ClockType_Enum.defs ());
static gsi::ClassExt<QElapsedTimer> decl_QElapsedTimer_ClockType_Enum_as_child (decl_QElapsedTimer_ClockType_Enum, "ClockType");
static gsi::ClassExt<QElapsedTimer> decl_QElapsedTimer_ClockType_Enums_as_child (decl_QElapsedTimer_ClockType_Enums, "QFlags_ClockType");

}

