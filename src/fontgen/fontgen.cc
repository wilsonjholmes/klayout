
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

#include <QApplication>
#include <QFont>
#include <QBitmap>
#include <QPainter>
#include <QFontDialog>

#include <stdio.h>

//  The system font to use
//  NOTE: "Libration Mono" works only well for Ubuntu 16. The version from
//  Ubuntu 18++ does not come with good hinting and is bad without AA.
static const char *font_name = "Liberation Mono";

/**
 *  @brief A small utility program to produce the fixed font definition file
 *  Run this binary and redirect the output to "laybasic/fixedFont.h".
 */
int 
main (int argc, char *argv [])
{
  QApplication app (argc, argv);

  printf ("\n// generated by fontgen\n// DO NOT EDIT !\n\n");

  printf ("\nnamespace lay {\n");

  std::string table;

  //  33% increments:
  int sz[]              = { 9,       11,       13,      16,       21,        27         };
  const char *sz_name[] = { "Small", "Medium", "Large", "XLarge", "XXLarge", "XXXLarge" };

  int resolutions = 6;

  int font_sizes = int (sizeof (sz) / sizeof (sz[0]));

  printf("\nconst int ff_resolutions = %d;\n", resolutions);
  printf("const int ff_sizes = %d;\n", font_sizes);

  printf("\nconst char *ff_size_name (int sz) {\n");
  for (int s = 0; s < font_sizes; ++s) {
    printf("  if (sz == %d) { return \"%s\"; }\n", s, sz_name [s]);
  }
  printf("  return \"\";\n}\n");

  int os = 1;

  for (int r = 1; r <= resolutions; ++r) {

    for (int s = 0; s < font_sizes; ++s) {

      char b[1024];
      sprintf (b, "  FixedFont (ff%d_height, ff%d_line_height, ff%d_width, ff%d_first_char, sizeof (ff%d_data) / sizeof (uint32_t) / (ff%d_height * ff%d_stride), ff%d_data, ff%d_stride),\n", os, os, os, os, os, os, os, os, os);
      table += b;

      QFont f (QString::fromLatin1 (font_name), r * sz[s]);
      f.setStyleStrategy(QFont::StyleStrategy ((f.styleStrategy() & ~QFont::PreferAntialias) | QFont::NoAntialias));

      QFontMetrics fm (f);

      int w = fm.averageCharWidth ();

      printf ("\n// Font: %s\n", f.toString ().toLatin1 ().constData ());
      printf ("const unsigned int ff%d_height = %d;\nconst unsigned int ff%d_line_height = %d;\nconst unsigned int ff%d_width = %d;\nconst unsigned int ff%d_stride = %d;\n",
        os, fm.height (), os, fm.lineSpacing (), os, w, os, (w + 31) / 32);

      printf ("const unsigned char ff%d_first_char = ' ';\n\nuint32_t ff%d_data [] = {\n", os, os);

      for (int c = ' '; c < 256; ++c) {

        QImage img (w, fm.height (), QImage::Format_RGB32);
        img.fill (0xffffffff);
        QPainter p (&img);
        p.setPen (Qt::black);
        p.setRenderHints (QPainter::TextAntialiasing, false);
        p.setFont (f);

        char t[2];
        t[0] = c;
        t[1] = 0;
        p.drawText (0, fm.ascent (), QString::fromLatin1 (t));

        QImage b = img.convertToFormat (QImage::Format_MonoLSB);

        printf ("  // %d", c);
        int n = 0;
        for (int i = 0; i < fm.height (); ++i) {

          int ww = w;
          unsigned int *sl = (unsigned int *) b.scanLine (i);

          do {

            if ((n % 16) == 0) {
              printf ("\n  ");
            }
            ++n;

            printf ("0x%x,", ww < 32 ? *sl & ((1 << ww) - 1) : *sl);
            ww -= 32;
            ++sl;

          } while (ww > 0);

        }
        printf ("\n");

      }

      printf ("};\n");

      ++os;

    }

  }

  printf ("\nstatic FixedFont fonts[] = {\n%s};\n", table.c_str ());

  printf ("\n} // namespace lay\n");

  return 0;
}


