
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2016 Matthias Koefferlein

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
*  @file gsiDeclQRegularExpressionMatch.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QRegularExpressionMatch>
#include <QRegularExpression>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QRegularExpressionMatch

//  Constructor QRegularExpressionMatch::QRegularExpressionMatch()


static void _init_ctor_QRegularExpressionMatch_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QRegularExpressionMatch> ();
}

static void _call_ctor_QRegularExpressionMatch_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QRegularExpressionMatch *> (new QRegularExpressionMatch ());
}


//  Constructor QRegularExpressionMatch::QRegularExpressionMatch(const QRegularExpressionMatch &match)


static void _init_ctor_QRegularExpressionMatch_3681 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("match");
  decl->add_arg<const QRegularExpressionMatch & > (argspec_0);
  decl->set_return_new<QRegularExpressionMatch> ();
}

static void _call_ctor_QRegularExpressionMatch_3681 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QRegularExpressionMatch &arg1 = args.read<const QRegularExpressionMatch & > (heap);
  ret.write<QRegularExpressionMatch *> (new QRegularExpressionMatch (arg1));
}


// QString QRegularExpressionMatch::captured(int nth)


static void _init_f_captured_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("nth", true, "0");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_f_captured_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args ? args.read<int > (heap) : (int)(0);
  ret.write<QString > ((QString)((QRegularExpressionMatch *)cls)->captured (arg1));
}


// QString QRegularExpressionMatch::captured(const QString &name)


static void _init_f_captured_c2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_f_captured_c2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  ret.write<QString > ((QString)((QRegularExpressionMatch *)cls)->captured (arg1));
}


// int QRegularExpressionMatch::capturedEnd(int nth)


static void _init_f_capturedEnd_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("nth", true, "0");
  decl->add_arg<int > (argspec_0);
  decl->set_return<int > ();
}

static void _call_f_capturedEnd_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args ? args.read<int > (heap) : (int)(0);
  ret.write<int > ((int)((QRegularExpressionMatch *)cls)->capturedEnd (arg1));
}


// int QRegularExpressionMatch::capturedEnd(const QString &name)


static void _init_f_capturedEnd_c2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<int > ();
}

static void _call_f_capturedEnd_c2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  ret.write<int > ((int)((QRegularExpressionMatch *)cls)->capturedEnd (arg1));
}


// int QRegularExpressionMatch::capturedLength(int nth)


static void _init_f_capturedLength_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("nth", true, "0");
  decl->add_arg<int > (argspec_0);
  decl->set_return<int > ();
}

static void _call_f_capturedLength_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args ? args.read<int > (heap) : (int)(0);
  ret.write<int > ((int)((QRegularExpressionMatch *)cls)->capturedLength (arg1));
}


// int QRegularExpressionMatch::capturedLength(const QString &name)


static void _init_f_capturedLength_c2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<int > ();
}

static void _call_f_capturedLength_c2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  ret.write<int > ((int)((QRegularExpressionMatch *)cls)->capturedLength (arg1));
}


// QStringRef QRegularExpressionMatch::capturedRef(int nth)


static void _init_f_capturedRef_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("nth", true, "0");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QStringRef > ();
}

static void _call_f_capturedRef_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args ? args.read<int > (heap) : (int)(0);
  ret.write<QStringRef > ((QStringRef)((QRegularExpressionMatch *)cls)->capturedRef (arg1));
}


// QStringRef QRegularExpressionMatch::capturedRef(const QString &name)


static void _init_f_capturedRef_c2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QStringRef > ();
}

static void _call_f_capturedRef_c2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  ret.write<QStringRef > ((QStringRef)((QRegularExpressionMatch *)cls)->capturedRef (arg1));
}


// int QRegularExpressionMatch::capturedStart(int nth)


static void _init_f_capturedStart_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("nth", true, "0");
  decl->add_arg<int > (argspec_0);
  decl->set_return<int > ();
}

static void _call_f_capturedStart_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args ? args.read<int > (heap) : (int)(0);
  ret.write<int > ((int)((QRegularExpressionMatch *)cls)->capturedStart (arg1));
}


// int QRegularExpressionMatch::capturedStart(const QString &name)


static void _init_f_capturedStart_c2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<int > ();
}

static void _call_f_capturedStart_c2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  ret.write<int > ((int)((QRegularExpressionMatch *)cls)->capturedStart (arg1));
}


// QStringList QRegularExpressionMatch::capturedTexts()


static void _init_f_capturedTexts_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QStringList > ();
}

static void _call_f_capturedTexts_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStringList > ((QStringList)((QRegularExpressionMatch *)cls)->capturedTexts ());
}


// bool QRegularExpressionMatch::hasMatch()


static void _init_f_hasMatch_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_hasMatch_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QRegularExpressionMatch *)cls)->hasMatch ());
}


// bool QRegularExpressionMatch::hasPartialMatch()


static void _init_f_hasPartialMatch_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_hasPartialMatch_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QRegularExpressionMatch *)cls)->hasPartialMatch ());
}


// bool QRegularExpressionMatch::isValid()


static void _init_f_isValid_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isValid_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QRegularExpressionMatch *)cls)->isValid ());
}


// int QRegularExpressionMatch::lastCapturedIndex()


static void _init_f_lastCapturedIndex_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_lastCapturedIndex_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QRegularExpressionMatch *)cls)->lastCapturedIndex ());
}


// QFlags<QRegularExpression::MatchOption> QRegularExpressionMatch::matchOptions()


static void _init_f_matchOptions_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QFlags<QRegularExpression::MatchOption> > ();
}

static void _call_f_matchOptions_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QFlags<QRegularExpression::MatchOption> > ((QFlags<QRegularExpression::MatchOption>)((QRegularExpressionMatch *)cls)->matchOptions ());
}


// QRegularExpression::MatchType QRegularExpressionMatch::matchType()


static void _init_f_matchType_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QRegularExpression::MatchType>::target_type > ();
}

static void _call_f_matchType_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QRegularExpression::MatchType>::target_type > ((qt_gsi::Converter<QRegularExpression::MatchType>::target_type)qt_gsi::CppToQtAdaptor<QRegularExpression::MatchType>(((QRegularExpressionMatch *)cls)->matchType ()));
}


// QRegularExpressionMatch &QRegularExpressionMatch::operator=(const QRegularExpressionMatch &match)


static void _init_f_operator_eq__3681 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("match");
  decl->add_arg<const QRegularExpressionMatch & > (argspec_0);
  decl->set_return<QRegularExpressionMatch & > ();
}

static void _call_f_operator_eq__3681 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QRegularExpressionMatch &arg1 = args.read<const QRegularExpressionMatch & > (heap);
  ret.write<QRegularExpressionMatch & > ((QRegularExpressionMatch &)((QRegularExpressionMatch *)cls)->operator= (arg1));
}


// QRegularExpression QRegularExpressionMatch::regularExpression()


static void _init_f_regularExpression_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QRegularExpression > ();
}

static void _call_f_regularExpression_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QRegularExpression > ((QRegularExpression)((QRegularExpressionMatch *)cls)->regularExpression ());
}


// void QRegularExpressionMatch::swap(QRegularExpressionMatch &other)


static void _init_f_swap_2986 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<QRegularExpressionMatch & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_swap_2986 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QRegularExpressionMatch &arg1 = args.read<QRegularExpressionMatch & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QRegularExpressionMatch *)cls)->swap (arg1);
}



namespace gsi
{

static gsi::Methods methods_QRegularExpressionMatch () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QRegularExpressionMatch::QRegularExpressionMatch()\nThis method creates an object of class QRegularExpressionMatch.", &_init_ctor_QRegularExpressionMatch_0, &_call_ctor_QRegularExpressionMatch_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QRegularExpressionMatch::QRegularExpressionMatch(const QRegularExpressionMatch &match)\nThis method creates an object of class QRegularExpressionMatch.", &_init_ctor_QRegularExpressionMatch_3681, &_call_ctor_QRegularExpressionMatch_3681);
  methods += new qt_gsi::GenericMethod ("captured", "@brief Method QString QRegularExpressionMatch::captured(int nth)\n", true, &_init_f_captured_c767, &_call_f_captured_c767);
  methods += new qt_gsi::GenericMethod ("captured", "@brief Method QString QRegularExpressionMatch::captured(const QString &name)\n", true, &_init_f_captured_c2025, &_call_f_captured_c2025);
  methods += new qt_gsi::GenericMethod ("capturedEnd", "@brief Method int QRegularExpressionMatch::capturedEnd(int nth)\n", true, &_init_f_capturedEnd_c767, &_call_f_capturedEnd_c767);
  methods += new qt_gsi::GenericMethod ("capturedEnd", "@brief Method int QRegularExpressionMatch::capturedEnd(const QString &name)\n", true, &_init_f_capturedEnd_c2025, &_call_f_capturedEnd_c2025);
  methods += new qt_gsi::GenericMethod ("capturedLength", "@brief Method int QRegularExpressionMatch::capturedLength(int nth)\n", true, &_init_f_capturedLength_c767, &_call_f_capturedLength_c767);
  methods += new qt_gsi::GenericMethod ("capturedLength", "@brief Method int QRegularExpressionMatch::capturedLength(const QString &name)\n", true, &_init_f_capturedLength_c2025, &_call_f_capturedLength_c2025);
  methods += new qt_gsi::GenericMethod ("capturedRef", "@brief Method QStringRef QRegularExpressionMatch::capturedRef(int nth)\n", true, &_init_f_capturedRef_c767, &_call_f_capturedRef_c767);
  methods += new qt_gsi::GenericMethod ("capturedRef", "@brief Method QStringRef QRegularExpressionMatch::capturedRef(const QString &name)\n", true, &_init_f_capturedRef_c2025, &_call_f_capturedRef_c2025);
  methods += new qt_gsi::GenericMethod ("capturedStart", "@brief Method int QRegularExpressionMatch::capturedStart(int nth)\n", true, &_init_f_capturedStart_c767, &_call_f_capturedStart_c767);
  methods += new qt_gsi::GenericMethod ("capturedStart", "@brief Method int QRegularExpressionMatch::capturedStart(const QString &name)\n", true, &_init_f_capturedStart_c2025, &_call_f_capturedStart_c2025);
  methods += new qt_gsi::GenericMethod ("capturedTexts", "@brief Method QStringList QRegularExpressionMatch::capturedTexts()\n", true, &_init_f_capturedTexts_c0, &_call_f_capturedTexts_c0);
  methods += new qt_gsi::GenericMethod ("hasMatch", "@brief Method bool QRegularExpressionMatch::hasMatch()\n", true, &_init_f_hasMatch_c0, &_call_f_hasMatch_c0);
  methods += new qt_gsi::GenericMethod ("hasPartialMatch", "@brief Method bool QRegularExpressionMatch::hasPartialMatch()\n", true, &_init_f_hasPartialMatch_c0, &_call_f_hasPartialMatch_c0);
  methods += new qt_gsi::GenericMethod ("isValid?", "@brief Method bool QRegularExpressionMatch::isValid()\n", true, &_init_f_isValid_c0, &_call_f_isValid_c0);
  methods += new qt_gsi::GenericMethod ("lastCapturedIndex", "@brief Method int QRegularExpressionMatch::lastCapturedIndex()\n", true, &_init_f_lastCapturedIndex_c0, &_call_f_lastCapturedIndex_c0);
  methods += new qt_gsi::GenericMethod ("matchOptions", "@brief Method QFlags<QRegularExpression::MatchOption> QRegularExpressionMatch::matchOptions()\n", true, &_init_f_matchOptions_c0, &_call_f_matchOptions_c0);
  methods += new qt_gsi::GenericMethod ("matchType", "@brief Method QRegularExpression::MatchType QRegularExpressionMatch::matchType()\n", true, &_init_f_matchType_c0, &_call_f_matchType_c0);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QRegularExpressionMatch &QRegularExpressionMatch::operator=(const QRegularExpressionMatch &match)\n", false, &_init_f_operator_eq__3681, &_call_f_operator_eq__3681);
  methods += new qt_gsi::GenericMethod ("regularExpression", "@brief Method QRegularExpression QRegularExpressionMatch::regularExpression()\n", true, &_init_f_regularExpression_c0, &_call_f_regularExpression_c0);
  methods += new qt_gsi::GenericMethod ("swap", "@brief Method void QRegularExpressionMatch::swap(QRegularExpressionMatch &other)\n", false, &_init_f_swap_2986, &_call_f_swap_2986);
  return methods;
}

gsi::Class<QRegularExpressionMatch> decl_QRegularExpressionMatch ("QRegularExpressionMatch",
  methods_QRegularExpressionMatch (),
  "@qt\n@brief Binding of QRegularExpressionMatch");


GSIQT_PUBLIC gsi::Class<QRegularExpressionMatch> &qtdecl_QRegularExpressionMatch () { return decl_QRegularExpressionMatch; }

}

