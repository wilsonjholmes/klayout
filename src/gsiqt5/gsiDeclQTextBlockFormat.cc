
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
*  @file gsiDeclQTextBlockFormat.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QTextBlockFormat>
#include <QBrush>
#include <QColor>
#include <QPen>
#include <QTextCharFormat>
#include <QTextFormat>
#include <QTextFrameFormat>
#include <QTextImageFormat>
#include <QTextLength>
#include <QTextListFormat>
#include <QTextTableCellFormat>
#include <QTextTableFormat>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QTextBlockFormat

//  Constructor QTextBlockFormat::QTextBlockFormat()


static void _init_ctor_QTextBlockFormat_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QTextBlockFormat> ();
}

static void _call_ctor_QTextBlockFormat_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTextBlockFormat *> (new QTextBlockFormat ());
}


// QFlags<Qt::AlignmentFlag> QTextBlockFormat::alignment()


static void _init_f_alignment_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QFlags<Qt::AlignmentFlag> > ();
}

static void _call_f_alignment_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QFlags<Qt::AlignmentFlag> > ((QFlags<Qt::AlignmentFlag>)((QTextBlockFormat *)cls)->alignment ());
}


// double QTextBlockFormat::bottomMargin()


static void _init_f_bottomMargin_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_bottomMargin_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QTextBlockFormat *)cls)->bottomMargin ());
}


// int QTextBlockFormat::indent()


static void _init_f_indent_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_indent_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QTextBlockFormat *)cls)->indent ());
}


// () const


static void _init_f_isValid_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isValid_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QTextBlockFormat *)cls)->isValid ());
}


// double QTextBlockFormat::leftMargin()


static void _init_f_leftMargin_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_leftMargin_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QTextBlockFormat *)cls)->leftMargin ());
}


// double QTextBlockFormat::lineHeight(double scriptLineHeight, double scaling)


static void _init_f_lineHeight_c2034 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("scriptLineHeight");
  decl->add_arg<double > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("scaling");
  decl->add_arg<double > (argspec_1);
  decl->set_return<double > ();
}

static void _call_f_lineHeight_c2034 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = args.read<double > (heap);
  double arg2 = args.read<double > (heap);
  ret.write<double > ((double)((QTextBlockFormat *)cls)->lineHeight (arg1, arg2));
}


// double QTextBlockFormat::lineHeight()


static void _init_f_lineHeight_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_lineHeight_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QTextBlockFormat *)cls)->lineHeight ());
}


// int QTextBlockFormat::lineHeightType()


static void _init_f_lineHeightType_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_lineHeightType_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QTextBlockFormat *)cls)->lineHeightType ());
}


// bool QTextBlockFormat::nonBreakableLines()


static void _init_f_nonBreakableLines_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_nonBreakableLines_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QTextBlockFormat *)cls)->nonBreakableLines ());
}


// QFlags<QTextFormat::PageBreakFlag> QTextBlockFormat::pageBreakPolicy()


static void _init_f_pageBreakPolicy_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QFlags<QTextFormat::PageBreakFlag> > ();
}

static void _call_f_pageBreakPolicy_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QFlags<QTextFormat::PageBreakFlag> > ((QFlags<QTextFormat::PageBreakFlag>)((QTextBlockFormat *)cls)->pageBreakPolicy ());
}


// double QTextBlockFormat::rightMargin()


static void _init_f_rightMargin_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_rightMargin_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QTextBlockFormat *)cls)->rightMargin ());
}


// void QTextBlockFormat::setAlignment(QFlags<Qt::AlignmentFlag> alignment)


static void _init_f_setAlignment_2750 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("alignment");
  decl->add_arg<QFlags<Qt::AlignmentFlag> > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setAlignment_2750 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QFlags<Qt::AlignmentFlag> arg1 = args.read<QFlags<Qt::AlignmentFlag> > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextBlockFormat *)cls)->setAlignment (arg1);
}


// void QTextBlockFormat::setBottomMargin(double margin)


static void _init_f_setBottomMargin_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("margin");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setBottomMargin_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = args.read<double > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextBlockFormat *)cls)->setBottomMargin (arg1);
}


// void QTextBlockFormat::setIndent(int indent)


static void _init_f_setIndent_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("indent");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setIndent_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextBlockFormat *)cls)->setIndent (arg1);
}


// void QTextBlockFormat::setLeftMargin(double margin)


static void _init_f_setLeftMargin_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("margin");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setLeftMargin_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = args.read<double > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextBlockFormat *)cls)->setLeftMargin (arg1);
}


// void QTextBlockFormat::setLineHeight(double height, int heightType)


static void _init_f_setLineHeight_1730 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("height");
  decl->add_arg<double > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("heightType");
  decl->add_arg<int > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setLineHeight_1730 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = args.read<double > (heap);
  int arg2 = args.read<int > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextBlockFormat *)cls)->setLineHeight (arg1, arg2);
}


// void QTextBlockFormat::setNonBreakableLines(bool b)


static void _init_f_setNonBreakableLines_864 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("b");
  decl->add_arg<bool > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setNonBreakableLines_864 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  bool arg1 = args.read<bool > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextBlockFormat *)cls)->setNonBreakableLines (arg1);
}


// void QTextBlockFormat::setPageBreakPolicy(QFlags<QTextFormat::PageBreakFlag> flags)


static void _init_f_setPageBreakPolicy_3611 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("flags");
  decl->add_arg<QFlags<QTextFormat::PageBreakFlag> > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setPageBreakPolicy_3611 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QFlags<QTextFormat::PageBreakFlag> arg1 = args.read<QFlags<QTextFormat::PageBreakFlag> > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextBlockFormat *)cls)->setPageBreakPolicy (arg1);
}


// void QTextBlockFormat::setRightMargin(double margin)


static void _init_f_setRightMargin_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("margin");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setRightMargin_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = args.read<double > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextBlockFormat *)cls)->setRightMargin (arg1);
}


// void QTextBlockFormat::setTabPositions(const QList<QTextOption::Tab> &tabs)


static void _init_f_setTabPositions_3458 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("tabs");
  decl->add_arg<const QList<QTextOption::Tab> & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setTabPositions_3458 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QList<QTextOption::Tab> &arg1 = args.read<const QList<QTextOption::Tab> & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextBlockFormat *)cls)->setTabPositions (arg1);
}


// void QTextBlockFormat::setTextIndent(double aindent)


static void _init_f_setTextIndent_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("aindent");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setTextIndent_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = args.read<double > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextBlockFormat *)cls)->setTextIndent (arg1);
}


// void QTextBlockFormat::setTopMargin(double margin)


static void _init_f_setTopMargin_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("margin");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setTopMargin_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = args.read<double > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextBlockFormat *)cls)->setTopMargin (arg1);
}


// QList<QTextOption::Tab> QTextBlockFormat::tabPositions()


static void _init_f_tabPositions_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QList<QTextOption::Tab> > ();
}

static void _call_f_tabPositions_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<QTextOption::Tab> > ((QList<QTextOption::Tab>)((QTextBlockFormat *)cls)->tabPositions ());
}


// double QTextBlockFormat::textIndent()


static void _init_f_textIndent_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_textIndent_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QTextBlockFormat *)cls)->textIndent ());
}


// double QTextBlockFormat::topMargin()


static void _init_f_topMargin_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_topMargin_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QTextBlockFormat *)cls)->topMargin ());
}



namespace gsi
{

static gsi::Methods methods_QTextBlockFormat () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QTextBlockFormat::QTextBlockFormat()\nThis method creates an object of class QTextBlockFormat.", &_init_ctor_QTextBlockFormat_0, &_call_ctor_QTextBlockFormat_0);
  methods += new qt_gsi::GenericMethod (":alignment", "@brief Method QFlags<Qt::AlignmentFlag> QTextBlockFormat::alignment()\n", true, &_init_f_alignment_c0, &_call_f_alignment_c0);
  methods += new qt_gsi::GenericMethod (":bottomMargin", "@brief Method double QTextBlockFormat::bottomMargin()\n", true, &_init_f_bottomMargin_c0, &_call_f_bottomMargin_c0);
  methods += new qt_gsi::GenericMethod (":indent", "@brief Method int QTextBlockFormat::indent()\n", true, &_init_f_indent_c0, &_call_f_indent_c0);
  methods += new qt_gsi::GenericMethod ("isValid?", "@brief Method () const\n", true, &_init_f_isValid_c0, &_call_f_isValid_c0);
  methods += new qt_gsi::GenericMethod (":leftMargin", "@brief Method double QTextBlockFormat::leftMargin()\n", true, &_init_f_leftMargin_c0, &_call_f_leftMargin_c0);
  methods += new qt_gsi::GenericMethod ("lineHeight", "@brief Method double QTextBlockFormat::lineHeight(double scriptLineHeight, double scaling)\n", true, &_init_f_lineHeight_c2034, &_call_f_lineHeight_c2034);
  methods += new qt_gsi::GenericMethod ("lineHeight", "@brief Method double QTextBlockFormat::lineHeight()\n", true, &_init_f_lineHeight_c0, &_call_f_lineHeight_c0);
  methods += new qt_gsi::GenericMethod ("lineHeightType", "@brief Method int QTextBlockFormat::lineHeightType()\n", true, &_init_f_lineHeightType_c0, &_call_f_lineHeightType_c0);
  methods += new qt_gsi::GenericMethod (":nonBreakableLines", "@brief Method bool QTextBlockFormat::nonBreakableLines()\n", true, &_init_f_nonBreakableLines_c0, &_call_f_nonBreakableLines_c0);
  methods += new qt_gsi::GenericMethod (":pageBreakPolicy", "@brief Method QFlags<QTextFormat::PageBreakFlag> QTextBlockFormat::pageBreakPolicy()\n", true, &_init_f_pageBreakPolicy_c0, &_call_f_pageBreakPolicy_c0);
  methods += new qt_gsi::GenericMethod (":rightMargin", "@brief Method double QTextBlockFormat::rightMargin()\n", true, &_init_f_rightMargin_c0, &_call_f_rightMargin_c0);
  methods += new qt_gsi::GenericMethod ("setAlignment|alignment=", "@brief Method void QTextBlockFormat::setAlignment(QFlags<Qt::AlignmentFlag> alignment)\n", false, &_init_f_setAlignment_2750, &_call_f_setAlignment_2750);
  methods += new qt_gsi::GenericMethod ("setBottomMargin|bottomMargin=", "@brief Method void QTextBlockFormat::setBottomMargin(double margin)\n", false, &_init_f_setBottomMargin_1071, &_call_f_setBottomMargin_1071);
  methods += new qt_gsi::GenericMethod ("setIndent|indent=", "@brief Method void QTextBlockFormat::setIndent(int indent)\n", false, &_init_f_setIndent_767, &_call_f_setIndent_767);
  methods += new qt_gsi::GenericMethod ("setLeftMargin|leftMargin=", "@brief Method void QTextBlockFormat::setLeftMargin(double margin)\n", false, &_init_f_setLeftMargin_1071, &_call_f_setLeftMargin_1071);
  methods += new qt_gsi::GenericMethod ("setLineHeight", "@brief Method void QTextBlockFormat::setLineHeight(double height, int heightType)\n", false, &_init_f_setLineHeight_1730, &_call_f_setLineHeight_1730);
  methods += new qt_gsi::GenericMethod ("setNonBreakableLines|nonBreakableLines=", "@brief Method void QTextBlockFormat::setNonBreakableLines(bool b)\n", false, &_init_f_setNonBreakableLines_864, &_call_f_setNonBreakableLines_864);
  methods += new qt_gsi::GenericMethod ("setPageBreakPolicy|pageBreakPolicy=", "@brief Method void QTextBlockFormat::setPageBreakPolicy(QFlags<QTextFormat::PageBreakFlag> flags)\n", false, &_init_f_setPageBreakPolicy_3611, &_call_f_setPageBreakPolicy_3611);
  methods += new qt_gsi::GenericMethod ("setRightMargin|rightMargin=", "@brief Method void QTextBlockFormat::setRightMargin(double margin)\n", false, &_init_f_setRightMargin_1071, &_call_f_setRightMargin_1071);
  methods += new qt_gsi::GenericMethod ("setTabPositions|tabPositions=", "@brief Method void QTextBlockFormat::setTabPositions(const QList<QTextOption::Tab> &tabs)\n", false, &_init_f_setTabPositions_3458, &_call_f_setTabPositions_3458);
  methods += new qt_gsi::GenericMethod ("setTextIndent|textIndent=", "@brief Method void QTextBlockFormat::setTextIndent(double aindent)\n", false, &_init_f_setTextIndent_1071, &_call_f_setTextIndent_1071);
  methods += new qt_gsi::GenericMethod ("setTopMargin|topMargin=", "@brief Method void QTextBlockFormat::setTopMargin(double margin)\n", false, &_init_f_setTopMargin_1071, &_call_f_setTopMargin_1071);
  methods += new qt_gsi::GenericMethod (":tabPositions", "@brief Method QList<QTextOption::Tab> QTextBlockFormat::tabPositions()\n", true, &_init_f_tabPositions_c0, &_call_f_tabPositions_c0);
  methods += new qt_gsi::GenericMethod (":textIndent", "@brief Method double QTextBlockFormat::textIndent()\n", true, &_init_f_textIndent_c0, &_call_f_textIndent_c0);
  methods += new qt_gsi::GenericMethod (":topMargin", "@brief Method double QTextBlockFormat::topMargin()\n", true, &_init_f_topMargin_c0, &_call_f_topMargin_c0);
  return methods;
}

gsi::Class<QTextFormat> &qtdecl_QTextFormat ();

gsi::Class<QTextBlockFormat> decl_QTextBlockFormat (qtdecl_QTextFormat (), "QTextBlockFormat",
  methods_QTextBlockFormat (),
  "@qt\n@brief Binding of QTextBlockFormat");


GSIQT_PUBLIC gsi::Class<QTextBlockFormat> &qtdecl_QTextBlockFormat () { return decl_QTextBlockFormat; }

}

