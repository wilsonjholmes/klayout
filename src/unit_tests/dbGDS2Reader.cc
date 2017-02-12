
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



#include "dbGDS2Reader.h"
#include "dbLayoutDiff.h"
#include "utHead.h"

#include <iostream>

unsigned char data [] = {
  0x00,0x06,0x00,0x02,0x02,0x58,0x00,0x1c,0x01,0x02,0x00,0x02,0x00,0x02,0x00,0x08,
  0x00,0x12,0x00,0x12,0x00,0x1c,0x00,0x02,0x00,0x02,0x00,0x08,0x00,0x12,0x00,0x12,
  0x00,0x1c,0x00,0x0a,0x02,0x06,0x4c,0x49,0x42,0x2e,0x44,0x42,0x00,0x14,0x03,0x05,
  0x3e,0x41,0x89,0x37,0x4b,0xc6,0xa7,0xf0,0x39,0x44,0xb8,0x2f,0xa0,0x9b,0x5a,0x54,
  0x00,0x1c,0x05,0x02,0x00,0x02,0x00,0x02,0x00,0x08,0x00,0x12,0x00,0x12,0x00,0x1c,
  0x00,0x02,0x00,0x02,0x00,0x08,0x00,0x12,0x00,0x12,0x00,0x1c,0x00,0x0a,0x06,0x06,
  0x54,0x52,0x41,0x4e,0x53,0x00,0x00,0x04,0x08,0x00,0x00,0x06,0x0d,0x02,0x00,0x02,
  0x00,0x06,0x0e,0x02,0x00,0x00,0x00,0x2c,0x10,0x03,0xff,0xff,0xfd,0x76,0xff,0xff,
  0xfe,0x25,0xff,0xff,0xfd,0x76,0x00,0x00,0x01,0xdb,0x00,0x00,0x02,0x8a,0x00,0x00,
  0x01,0xdb,0x00,0x00,0x02,0x8a,0xff,0xff,0xfe,0x25,0xff,0xff,0xfd,0x76,0xff,0xff,
  0xfe,0x25,0x00,0x04,0x11,0x00,0x00,0x04,0x08,0x00,0x00,0x06,0x0d,0x02,0x00,0x04,
  0x00,0x06,0x0e,0x02,0x00,0x00,0x00,0x2c,0x10,0x03,0xff,0xff,0xfe,0x02,0xff,0xff,
  0xfe,0xca,0xff,0xff,0xfe,0x02,0xff,0xff,0xff,0xa6,0xff,0xff,0xfe,0xde,0xff,0xff,
  0xff,0xa6,0xff,0xff,0xfe,0xde,0xff,0xff,0xfe,0xca,0xff,0xff,0xfe,0x02,0xff,0xff,
  0xfe,0xca,0x00,0x04,0x11,0x00,0x00,0x04,0x08,0x00,0x00,0x06,0x0d,0x02,0x00,0x04,
  0x00,0x06,0x0e,0x02,0x00,0x00,0x00,0x2c,0x10,0x03,0xff,0xff,0xfe,0x02,0x00,0x00,
  0x00,0x5a,0xff,0xff,0xfe,0x02,0x00,0x00,0x01,0x36,0xff,0xff,0xfe,0xde,0x00,0x00,
  0x01,0x36,0xff,0xff,0xfe,0xde,0x00,0x00,0x00,0x5a,0xff,0xff,0xfe,0x02,0x00,0x00,
  0x00,0x5a,0x00,0x04,0x11,0x00,0x00,0x04,0x08,0x00,0x00,0x06,0x0d,0x02,0x00,0x04,
  0x00,0x06,0x0e,0x02,0x00,0x00,0x00,0x2c,0x10,0x03,0x00,0x00,0x01,0x22,0xff,0xff,
  0xfe,0xca,0x00,0x00,0x01,0x22,0xff,0xff,0xff,0xa6,0x00,0x00,0x01,0xfe,0xff,0xff,
  0xff,0xa6,0x00,0x00,0x01,0xfe,0xff,0xff,0xfe,0xca,0x00,0x00,0x01,0x22,0xff,0xff,
  0xfe,0xca,0x00,0x04,0x11,0x00,0x00,0x04,0x08,0x00,0x00,0x06,0x0d,0x02,0x00,0x04,
  0x00,0x06,0x0e,0x02,0x00,0x00,0x00,0x2c,0x10,0x03,0x00,0x00,0x01,0x22,0x00,0x00,
  0x00,0x5a,0x00,0x00,0x01,0x22,0x00,0x00,0x01,0x36,0x00,0x00,0x01,0xfe,0x00,0x00,
  0x01,0x36,0x00,0x00,0x01,0xfe,0x00,0x00,0x00,0x5a,0x00,0x00,0x01,0x22,0x00,0x00,
  0x00,0x5a,0x00,0x04,0x11,0x00,0x00,0x04,0x08,0x00,0x00,0x06,0x0d,0x02,0x00,0x06,
  0x00,0x06,0x0e,0x02,0x00,0x00,0x00,0x2c,0x10,0x03,0xff,0xff,0xfd,0xbc,0xff,0xff,
  0xfe,0x84,0xff,0xff,0xfd,0xbc,0x00,0x00,0x01,0x7c,0xff,0xff,0xff,0x24,0x00,0x00,
  0x01,0x7c,0xff,0xff,0xff,0x24,0xff,0xff,0xfe,0x84,0xff,0xff,0xfd,0xbc,0xff,0xff,
  0xfe,0x84,0x00,0x04,0x11,0x00,0x00,0x04,0x08,0x00,0x00,0x06,0x0d,0x02,0x00,0x06,
  0x00,0x06,0x0e,0x02,0x00,0x00,0x00,0x2c,0x10,0x03,0x00,0x00,0x00,0xdc,0xff,0xff,
  0xfe,0x84,0x00,0x00,0x00,0xdc,0x00,0x00,0x01,0x7c,0x00,0x00,0x02,0x44,0x00,0x00,
  0x01,0x7c,0x00,0x00,0x02,0x44,0xff,0xff,0xfe,0x84,0x00,0x00,0x00,0xdc,0xff,0xff,
  0xfe,0x84,0x00,0x04,0x11,0x00,0x00,0x04,0x09,0x00,0x00,0x06,0x0d,0x02,0x00,0x03,
  0x00,0x06,0x0e,0x02,0x00,0x00,0x00,0x08,0x0f,0x03,0x00,0x00,0x00,0xfa,0x00,0x14,
  0x10,0x03,0x00,0x00,0x00,0x00,0xff,0xff,0xfc,0xe0,0x00,0x00,0x00,0x00,0x00,0x00,
  0x03,0x20,0x00,0x04,0x11,0x00,0x00,0x04,0x07,0x00,0x00,0x1c,0x05,0x02,0x00,0x02,
  0x00,0x02,0x00,0x08,0x00,0x12,0x00,0x12,0x00,0x1c,0x00,0x02,0x00,0x02,0x00,0x08,
  0x00,0x12,0x00,0x12,0x00,0x1c,0x00,0x08,0x06,0x06,0x49,0x4e,0x56,0x32,0x00,0x04,
  0x0a,0x00,0x00,0x0a,0x12,0x06,0x54,0x52,0x41,0x4e,0x53,0x00,0x00,0x06,0x1a,0x01,
  0x00,0x00,0x00,0x0c,0x1c,0x05,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0c,
  0x10,0x03,0xff,0xff,0xfe,0x70,0x00,0x00,0x00,0x00,0x00,0x04,0x11,0x00,0x00,0x04,
  0x0a,0x00,0x00,0x0a,0x12,0x06,0x54,0x52,0x41,0x4e,0x53,0x00,0x00,0x06,0x1a,0x01,
  0x00,0x00,0x00,0x0c,0x1c,0x05,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0c,
  0x10,0x03,0xff,0xff,0xfe,0x70,0x00,0x00,0x0a,0xf0,0x00,0x04,0x11,0x00,0x00,0x04,
  0x0a,0x00,0x00,0x0a,0x12,0x06,0x54,0x52,0x41,0x4e,0x53,0x00,0x00,0x06,0x1a,0x01,
  0x80,0x00,0x00,0x0c,0x1c,0x05,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0c,
  0x10,0x03,0x00,0x00,0x01,0x90,0x00,0x00,0x00,0x00,0x00,0x04,0x11,0x00,0x00,0x04,
  0x0a,0x00,0x00,0x0a,0x12,0x06,0x54,0x52,0x41,0x4e,0x53,0x00,0x00,0x06,0x1a,0x01,
  0x80,0x00,0x00,0x0c,0x1c,0x05,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0c,
  0x10,0x03,0x00,0x00,0x01,0x90,0x00,0x00,0x0a,0xf0,0x00,0x04,0x11,0x00,0x00,0x04,
  0x08,0x00,0x00,0x06,0x0d,0x02,0x00,0x08,0x00,0x06,0x0e,0x02,0x00,0x00,0x00,0x2c,
  0x10,0x03,0xff,0xff,0xfa,0x88,0xff,0xff,0xfe,0x3e,0xff,0xff,0xfa,0x88,0x00,0x00,
  0x01,0xc2,0x00,0x00,0x05,0x78,0x00,0x00,0x01,0xc2,0x00,0x00,0x05,0x78,0xff,0xff,
  0xfe,0x3e,0xff,0xff,0xfa,0x88,0xff,0xff,0xfe,0x3e,0x00,0x04,0x11,0x00,0x00,0x04,
  0x08,0x00,0x00,0x06,0x0d,0x02,0x00,0x08,0x00,0x06,0x0e,0x02,0x00,0x00,0x00,0x2c,
  0x10,0x03,0xff,0xff,0xfa,0x88,0x00,0x00,0x09,0x2e,0xff,0xff,0xfa,0x88,0x00,0x00,
  0x0c,0xb2,0x00,0x00,0x05,0x78,0x00,0x00,0x0c,0xb2,0x00,0x00,0x05,0x78,0x00,0x00,
  0x09,0x2e,0xff,0xff,0xfa,0x88,0x00,0x00,0x09,0x2e,0x00,0x04,0x11,0x00,0x00,0x04,
  0x08,0x00,0x00,0x06,0x0d,0x02,0x00,0x01,0x00,0x06,0x0e,0x02,0x00,0x00,0x00,0x2c,
  0x10,0x03,0xff,0xff,0xfa,0x88,0x00,0x00,0x07,0x08,0xff,0xff,0xfa,0x88,0x00,0x00,
  0x0e,0xd8,0x00,0x00,0x05,0x78,0x00,0x00,0x0e,0xd8,0x00,0x00,0x05,0x78,0x00,0x00,
  0x07,0x08,0xff,0xff,0xfa,0x88,0x00,0x00,0x07,0x08,0x00,0x04,0x11,0x00,0x00,0x04,
  0x08,0x00,0x00,0x06,0x0d,0x02,0x00,0x03,0x00,0x06,0x0e,0x02,0x00,0x00,0x00,0x2c,
  0x10,0x03,0xff,0xff,0xfd,0xf3,0xff,0xff,0xff,0x06,0xff,0xff,0xfd,0xf3,0x00,0x00,
  0x08,0xca,0xff,0xff,0xfe,0xed,0x00,0x00,0x08,0xca,0xff,0xff,0xfe,0xed,0xff,0xff,
  0xff,0x06,0xff,0xff,0xfd,0xf3,0xff,0xff,0xff,0x06,0x00,0x04,0x11,0x00,0x00,0x04,
  0x08,0x00,0x00,0x06,0x0d,0x02,0x00,0x03,0x00,0x06,0x0e,0x02,0x00,0x00,0x00,0x2c,
  0x10,0x03,0x00,0x00,0x01,0x13,0xff,0xff,0xff,0x06,0x00,0x00,0x01,0x13,0x00,0x00,
  0x08,0xca,0x00,0x00,0x02,0x0d,0x00,0x00,0x08,0xca,0x00,0x00,0x02,0x0d,0xff,0xff,
  0xff,0x06,0x00,0x00,0x01,0x13,0xff,0xff,0xff,0x06,0x00,0x04,0x11,0x00,0x00,0x04,
  0x08,0x00,0x00,0x06,0x0d,0x02,0x00,0x06,0x00,0x06,0x0e,0x02,0x00,0x00,0x00,0x2c,
  0x10,0x03,0xff,0xff,0xfc,0x2c,0xff,0xff,0xfe,0x5c,0xff,0xff,0xfc,0x2c,0x00,0x00,
  0x09,0x74,0xff,0xff,0xfd,0x94,0x00,0x00,0x09,0x74,0xff,0xff,0xfd,0x94,0xff,0xff,
  0xfe,0x5c,0xff,0xff,0xfc,0x2c,0xff,0xff,0xfe,0x5c,0x00,0x04,0x11,0x00,0x00,0x04,
  0x08,0x00,0x00,0x06,0x0d,0x02,0x00,0x06,0x00,0x06,0x0e,0x02,0x00,0x00,0x00,0x2c,
  0x10,0x03,0xff,0xff,0xfc,0xe0,0x00,0x00,0x03,0x34,0xff,0xff,0xfc,0xe0,0x00,0x00,
  0x04,0x9c,0x00,0x00,0x02,0x44,0x00,0x00,0x04,0x9c,0x00,0x00,0x02,0x44,0x00,0x00,
  0x03,0x34,0xff,0xff,0xfc,0xe0,0x00,0x00,0x03,0x34,0x00,0x04,0x11,0x00,0x00,0x04,
  0x08,0x00,0x00,0x06,0x0d,0x02,0x00,0x03,0x00,0x06,0x0e,0x02,0x00,0x00,0x00,0x2c,
  0x10,0x03,0x00,0x00,0x00,0xdc,0x00,0x00,0x03,0x34,0x00,0x00,0x00,0xdc,0x00,0x00,
  0x04,0x9c,0x00,0x00,0x02,0x44,0x00,0x00,0x04,0x9c,0x00,0x00,0x02,0x44,0x00,0x00,
  0x03,0x34,0x00,0x00,0x00,0xdc,0x00,0x00,0x03,0x34,0x00,0x04,0x11,0x00,0x00,0x04,
  0x08,0x00,0x00,0x06,0x0d,0x02,0x00,0x05,0x00,0x06,0x0e,0x02,0x00,0x00,0x00,0x2c,
  0x10,0x03,0x00,0x00,0x01,0x22,0x00,0x00,0x03,0x7a,0x00,0x00,0x01,0x22,0x00,0x00,
  0x04,0x56,0x00,0x00,0x01,0xfe,0x00,0x00,0x04,0x56,0x00,0x00,0x01,0xfe,0x00,0x00,
  0x03,0x7a,0x00,0x00,0x01,0x22,0x00,0x00,0x03,0x7a,0x00,0x04,0x11,0x00,0x00,0x04,
  0x09,0x00,0x00,0x06,0x0d,0x02,0x00,0x06,0x00,0x06,0x0e,0x02,0x00,0x00,0x00,0x08,
  0x0f,0x03,0x00,0x00,0x01,0x68,0x00,0x2c,0x10,0x03,0x00,0x00,0x03,0x20,0x00,0x00,
  0x00,0xc8,0x00,0x00,0x04,0x60,0x00,0x00,0x00,0xc8,0x00,0x00,0x04,0x60,0x00,0x00,
  0x07,0x08,0x00,0x00,0x03,0x20,0x00,0x00,0x07,0x08,0x00,0x00,0x03,0x20,0x00,0x00,
  0x09,0x74,0x00,0x04,0x11,0x00,0x00,0x04,0x08,0x00,0x00,0x06,0x0d,0x02,0x00,0x07,
  0x00,0x06,0x0e,0x02,0x00,0x00,0x00,0x2c,0x10,0x03,0xff,0xff,0xff,0x83,0xff,0xff,
  0xfe,0xbb,0xff,0xff,0xff,0x83,0xff,0xff,0xff,0xb5,0x00,0x00,0x00,0x7d,0xff,0xff,
  0xff,0xb5,0x00,0x00,0x00,0x7d,0xff,0xff,0xfe,0xbb,0xff,0xff,0xff,0x83,0xff,0xff,
  0xfe,0xbb,0x00,0x04,0x11,0x00,0x00,0x04,0x08,0x00,0x00,0x06,0x0d,0x02,0x00,0x07,
  0x00,0x06,0x0e,0x02,0x00,0x00,0x00,0x2c,0x10,0x03,0xff,0xff,0xff,0x83,0x00,0x00,
  0x00,0x4b,0xff,0xff,0xff,0x83,0x00,0x00,0x01,0x45,0x00,0x00,0x00,0x7d,0x00,0x00,
  0x01,0x45,0x00,0x00,0x00,0x7d,0x00,0x00,0x00,0x4b,0xff,0xff,0xff,0x83,0x00,0x00,
  0x00,0x4b,0x00,0x04,0x11,0x00,0x00,0x04,0x08,0x00,0x00,0x06,0x0d,0x02,0x00,0x07,
  0x00,0x06,0x0e,0x02,0x00,0x00,0x00,0x2c,0x10,0x03,0xff,0xff,0xff,0x83,0x00,0x00,
  0x09,0xab,0xff,0xff,0xff,0x83,0x00,0x00,0x0a,0xa5,0x00,0x00,0x00,0x7d,0x00,0x00,
  0x0a,0xa5,0x00,0x00,0x00,0x7d,0x00,0x00,0x09,0xab,0xff,0xff,0xff,0x83,0x00,0x00,
  0x09,0xab,0x00,0x04,0x11,0x00,0x00,0x04,0x08,0x00,0x00,0x06,0x0d,0x02,0x00,0x07,
  0x00,0x06,0x0e,0x02,0x00,0x00,0x00,0x2c,0x10,0x03,0xff,0xff,0xff,0x83,0x00,0x00,
  0x0b,0x3b,0xff,0xff,0xff,0x83,0x00,0x00,0x0c,0x35,0x00,0x00,0x00,0x7d,0x00,0x00,
  0x0c,0x35,0x00,0x00,0x00,0x7d,0x00,0x00,0x0b,0x3b,0xff,0xff,0xff,0x83,0x00,0x00,
  0x0b,0x3b,0x00,0x04,0x11,0x00,0x00,0x04,0x08,0x00,0x00,0x06,0x0d,0x02,0x00,0x03,
  0x00,0x06,0x0e,0x02,0x00,0x00,0x00,0x2c,0x10,0x03,0xff,0xff,0xf9,0x5c,0x00,0x00,
  0x06,0x54,0xff,0xff,0xf9,0x5c,0x00,0x00,0x07,0xbc,0xff,0xff,0xfe,0x70,0x00,0x00,
  0x07,0xbc,0xff,0xff,0xfe,0x70,0x00,0x00,0x06,0x54,0xff,0xff,0xf9,0x5c,0x00,0x00,
  0x06,0x54,0x00,0x04,0x11,0x00,0x00,0x04,0x08,0x00,0x00,0x06,0x0d,0x02,0x00,0x05,
  0x00,0x06,0x0e,0x02,0x00,0x00,0x00,0x2c,0x10,0x03,0xff,0xff,0xf9,0xa2,0x00,0x00,
  0x06,0x9a,0xff,0xff,0xf9,0xa2,0x00,0x00,0x07,0x76,0xff,0xff,0xfa,0x7e,0x00,0x00,
  0x07,0x76,0xff,0xff,0xfa,0x7e,0x00,0x00,0x06,0x9a,0xff,0xff,0xf9,0xa2,0x00,0x00,
  0x06,0x9a,0x00,0x04,0x11,0x00,0x00,0x04,0x0c,0x00,0x00,0x06,0x0d,0x02,0x00,0x03,
  0x00,0x06,0x16,0x02,0x00,0x01,0x00,0x0c,0x10,0x03,0xff,0xff,0xfc,0xe0,0x00,0x00,
  0x07,0x08,0x00,0x06,0x19,0x06,0x49,0x4e,0x00,0x04,0x11,0x00,0x00,0x04,0x0c,0x00,
  0x00,0x06,0x0d,0x02,0x00,0x06,0x00,0x06,0x16,0x02,0x00,0x01,0x00,0x0c,0x10,0x03,
  0x00,0x00,0x03,0x20,0x00,0x00,0x07,0x08,0x00,0x08,0x19,0x06,0x4f,0x55,0x54,0x00,
  0x00,0x04,0x11,0x00,0x00,0x04,0x07,0x00,0x00,0x1c,0x05,0x02,0x00,0x02,0x00,0x02,
  0x00,0x08,0x00,0x12,0x00,0x12,0x00,0x1c,0x00,0x02,0x00,0x02,0x00,0x08,0x00,0x12,
  0x00,0x12,0x00,0x1c,0x00,0x0a,0x06,0x06,0x52,0x49,0x4e,0x47,0x4f,0x00,0x00,0x04,
  0x08,0x00,0x00,0x06,0x0d,0x02,0x00,0x06,0x00,0x06,0x0e,0x02,0x00,0x00,0x00,0x2c,
  0x10,0x03,0xff,0xff,0xf9,0x5c,0x00,0x00,0x06,0x54,0xff,0xff,0xf9,0x5c,0x00,0x00,
  0x07,0xbc,0xff,0xff,0xfa,0xc4,0x00,0x00,0x07,0xbc,0xff,0xff,0xfa,0xc4,0x00,0x00,
  0x06,0x54,0xff,0xff,0xf9,0x5c,0x00,0x00,0x06,0x54,0x00,0x04,0x11,0x00,0x00,0x04,
  0x08,0x00,0x00,0x06,0x0d,0x02,0x00,0x07,0x00,0x06,0x0e,0x02,0x00,0x00,0x00,0x2c,
  0x10,0x03,0xff,0xff,0xf9,0x93,0x00,0x00,0x06,0x8b,0xff,0xff,0xf9,0x93,0x00,0x00,
  0x07,0x85,0xff,0xff,0xfa,0x8d,0x00,0x00,0x07,0x85,0xff,0xff,0xfa,0x8d,0x00,0x00,
  0x06,0x8b,0xff,0xff,0xf9,0x93,0x00,0x00,0x06,0x8b,0x00,0x04,0x11,0x00,0x00,0x04,
  0x08,0x00,0x00,0x06,0x0d,0x02,0x00,0x08,0x00,0x06,0x0e,0x02,0x00,0x00,0x00,0x2c,
  0x10,0x03,0xff,0xff,0xf9,0x48,0x00,0x00,0x06,0x40,0xff,0xff,0xf9,0x48,0x00,0x00,
  0x07,0xd0,0x00,0x00,0x5a,0x78,0x00,0x00,0x07,0xd0,0x00,0x00,0x5a,0x78,0x00,0x00,
  0x06,0x40,0xff,0xff,0xf9,0x48,0x00,0x00,0x06,0x40,0x00,0x04,0x11,0x00,0x00,0x04,
  0x08,0x00,0x00,0x06,0x0d,0x02,0x00,0x07,0x00,0x06,0x0e,0x02,0x00,0x00,0x00,0x2c,
  0x10,0x03,0x00,0x00,0x59,0x33,0x00,0x00,0x06,0x8b,0x00,0x00,0x59,0x33,0x00,0x00,
  0x07,0x85,0x00,0x00,0x5a,0x2d,0x00,0x00,0x07,0x85,0x00,0x00,0x5a,0x2d,0x00,0x00,
  0x06,0x8b,0x00,0x00,0x59,0x33,0x00,0x00,0x06,0x8b,0x00,0x04,0x11,0x00,0x00,0x04,
  0x08,0x00,0x00,0x06,0x0d,0x02,0x00,0x07,0x00,0x06,0x0e,0x02,0x00,0x00,0x00,0x2c,
  0x10,0x03,0x00,0x00,0x5f,0x73,0x00,0x00,0x06,0x8b,0x00,0x00,0x5f,0x73,0x00,0x00,
  0x07,0x85,0x00,0x00,0x60,0x6d,0x00,0x00,0x07,0x85,0x00,0x00,0x60,0x6d,0x00,0x00,
  0x06,0x8b,0x00,0x00,0x5f,0x73,0x00,0x00,0x06,0x8b,0x00,0x04,0x11,0x00,0x00,0x04,
  0x08,0x00,0x00,0x06,0x0d,0x02,0x00,0x08,0x00,0x06,0x0e,0x02,0x00,0x00,0x00,0x2c,
  0x10,0x03,0x00,0x00,0x5f,0x28,0x00,0x00,0x06,0x40,0x00,0x00,0x5f,0x28,0x00,0x00,
  0x07,0xd0,0x00,0x00,0x60,0xb8,0x00,0x00,0x07,0xd0,0x00,0x00,0x60,0xb8,0x00,0x00,
  0x06,0x40,0x00,0x00,0x5f,0x28,0x00,0x00,0x06,0x40,0x00,0x04,0x11,0x00,0x00,0x04,
  0x0a,0x00,0x00,0x08,0x12,0x06,0x49,0x4e,0x56,0x32,0x00,0x06,0x1a,0x01,0x00,0x00,
  0x00,0x0c,0x1c,0x05,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0c,0x10,0x03,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x11,0x00,0x00,0x04,0x0a,0x00,
  0x00,0x08,0x12,0x06,0x49,0x4e,0x56,0x32,0x00,0x06,0x1a,0x01,0x00,0x00,0x00,0x0c,
  0x1c,0x05,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0c,0x10,0x03,0x00,0x00,
  0x0a,0x50,0x00,0x00,0x00,0x00,0x00,0x04,0x11,0x00,0x00,0x04,0x0a,0x00,0x00,0x08,
  0x12,0x06,0x49,0x4e,0x56,0x32,0x00,0x06,0x1a,0x01,0x00,0x00,0x00,0x0c,0x1c,0x05,
  0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0c,0x10,0x03,0x00,0x00,0x14,0xa0,
  0x00,0x00,0x00,0x00,0x00,0x04,0x11,0x00,0x00,0x04,0x0a,0x00,0x00,0x08,0x12,0x06,
  0x49,0x4e,0x56,0x32,0x00,0x06,0x1a,0x01,0x00,0x00,0x00,0x0c,0x1c,0x05,0x40,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0c,0x10,0x03,0x00,0x00,0x1e,0xf0,0x00,0x00,
  0x00,0x00,0x00,0x04,0x11,0x00,0x00,0x04,0x0a,0x00,0x00,0x08,0x12,0x06,0x49,0x4e,
  0x56,0x32,0x00,0x06,0x1a,0x01,0x00,0x00,0x00,0x0c,0x1c,0x05,0x40,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x0c,0x10,0x03,0x00,0x00,0x29,0x40,0x00,0x00,0x00,0x00,
  0x00,0x04,0x11,0x00,0x00,0x04,0x0a,0x00,0x00,0x08,0x12,0x06,0x49,0x4e,0x56,0x32,
  0x00,0x06,0x1a,0x01,0x00,0x00,0x00,0x0c,0x1c,0x05,0x40,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x0c,0x10,0x03,0x00,0x00,0x33,0x90,0x00,0x00,0x00,0x00,0x00,0x04,
  0x11,0x00,0x00,0x04,0x0a,0x00,0x00,0x08,0x12,0x06,0x49,0x4e,0x56,0x32,0x00,0x06,
  0x1a,0x01,0x00,0x00,0x00,0x0c,0x1c,0x05,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x0c,0x10,0x03,0x00,0x00,0x3d,0xe0,0x00,0x00,0x00,0x00,0x00,0x04,0x11,0x00,
  0x00,0x04,0x0a,0x00,0x00,0x08,0x12,0x06,0x49,0x4e,0x56,0x32,0x00,0x06,0x1a,0x01,
  0x00,0x00,0x00,0x0c,0x1c,0x05,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0c,
  0x10,0x03,0x00,0x00,0x48,0x30,0x00,0x00,0x00,0x00,0x00,0x04,0x11,0x00,0x00,0x04,
  0x0a,0x00,0x00,0x08,0x12,0x06,0x49,0x4e,0x56,0x32,0x00,0x06,0x1a,0x01,0x00,0x00,
  0x00,0x0c,0x1c,0x05,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0c,0x10,0x03,
  0x00,0x00,0x52,0x80,0x00,0x00,0x00,0x00,0x00,0x04,0x11,0x00,0x00,0x04,0x0a,0x00,
  0x00,0x08,0x12,0x06,0x49,0x4e,0x56,0x32,0x00,0x06,0x1a,0x01,0x00,0x00,0x00,0x0c,
  0x1c,0x05,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0c,0x10,0x03,0x00,0x00,
  0x5c,0xd0,0x00,0x00,0x00,0x00,0x00,0x04,0x11,0x00,0x00,0x04,0x0c,0x00,0x00,0x06,
  0x0d,0x02,0x00,0x08,0x00,0x06,0x16,0x02,0x00,0x01,0x00,0x0c,0x10,0x03,0x00,0x00,
  0x5f,0xf0,0x00,0x00,0x07,0x08,0x00,0x08,0x19,0x06,0x4f,0x53,0x43,0x00,0x00,0x04,
  0x11,0x00,0x00,0x04,0x0c,0x00,0x00,0x06,0x0d,0x02,0x00,0x08,0x00,0x06,0x16,0x02,
  0x00,0x01,0x00,0x0c,0x10,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x08,0x00,0x06,
  0x19,0x06,0x46,0x42,0x00,0x04,0x11,0x00,0x00,0x04,0x0c,0x00,0x00,0x06,0x0d,0x02,
  0x00,0x08,0x00,0x06,0x16,0x02,0x00,0x01,0x00,0x0c,0x10,0x03,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x08,0x19,0x06,0x56,0x53,0x53,0x00,0x00,0x04,0x11,0x00,
  0x00,0x04,0x0c,0x00,0x00,0x06,0x0d,0x02,0x00,0x08,0x00,0x06,0x16,0x02,0x00,0x01,
  0x00,0x0c,0x10,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x0a,0xf0,0x00,0x08,0x19,0x06,
  0x56,0x44,0x44,0x00,0x00,0x04,0x11,0x00,0x00,0x04,0x07,0x00,0x00,0x04,0x04,0x00
};

TEST(1) 
{
  tl::InputMemoryStream im ((const char *) data, sizeof (data));

  db::Manager m;
  db::Layout layout (&m);
  tl::InputStream file (im);
  db::GDS2Reader reader (file);
  db::LayerMap map = reader.read (layout);

  EXPECT_EQ (fabs (layout.dbu () / 0.001 - 1.0) < 1e-6, true);
  EXPECT_EQ (reader.libname (), "LIB.DB");

  EXPECT_EQ (layout.layers (), 11);
  EXPECT_EQ (map.mapping_str (0), "2/0 : 2/0");
  EXPECT_EQ (map.mapping_str (1), "4/0 : 4/0");
  EXPECT_EQ (map.mapping_str (2), "6/0 : 6/0");
  EXPECT_EQ (map.mapping_str (3), "3/0 : 3/0");
  EXPECT_EQ (map.mapping_str (4), "8/0 : 8/0");
  EXPECT_EQ (map.mapping_str (5), "1/0 : 1/0");
  EXPECT_EQ (map.mapping_str (6), "5/0 : 5/0");
  EXPECT_EQ (map.mapping_str (7), "7/0 : 7/0");
  EXPECT_EQ (map.mapping_str (8), "3/1 : 3/1");
  EXPECT_EQ (map.mapping_str (9), "6/1 : 6/1");
  EXPECT_EQ (map.mapping_str (10), "8/1 : 8/1");
  EXPECT_EQ (map.mapping (10).layer, 8);
  EXPECT_EQ (map.mapping (10).datatype, 1);

  EXPECT_EQ (layout.cells (), 3);
  EXPECT_EQ (std::string (layout.cell_name (0)), "TRANS");
  EXPECT_EQ (std::string (layout.cell_name (1)), "INV2");
  EXPECT_EQ (std::string (layout.cell_name (2)), "RINGO");

  db::Layout layout2 (&m);
  layout2 = layout;

  EXPECT_EQ (layout2.cells (), 3);
  EXPECT_EQ (std::string (layout2.cell_name (0)), "TRANS");
  EXPECT_EQ (std::string (layout2.cell_name (1)), "INV2");
  EXPECT_EQ (std::string (layout2.cell_name (2)), "RINGO");
}

TEST(2) 
{
  tl::InputMemoryStream im ((const char *) data, sizeof (data));

  db::Manager m;
  db::Layout layout (&m);

  db::LayerMap map_full;
  {
    tl::InputStream file (im);
    db::GDS2Reader reader (file);
    map_full = reader.read (layout);
  }

  db::LoadLayoutOptions empty_options;
  empty_options.get_options<db::CommonReaderOptions> ().create_other_layers = false;

  db::LoadLayoutOptions options;

  db::Layout layout_none(&m);

  db::LayerMap map;
  {
    im.reset ();
    options = empty_options;
    tl::InputStream file (im);
    db::GDS2Reader reader (file);
    map = reader.read (layout_none, options);
    EXPECT_EQ (fabs (layout_none.dbu () / 0.001 - 1.0) < 1e-6, true);
    EXPECT_EQ (reader.libname (), "LIB.DB");
  }

  EXPECT_EQ (layout_none.layers (), 0);

  db::LDPair pairs[] = {
    db::LDPair(1, 0),
    db::LDPair(2, 0),
    db::LDPair(3, 0),
    db::LDPair(3, 1),
    db::LDPair(4, 0),
    db::LDPair(5, 0),
    db::LDPair(6, 0),
    db::LDPair(6, 1),
    db::LDPair(7, 0),
    db::LDPair(8, 0),
    db::LDPair(8, 1)
  };

  for (unsigned int i = 0; i < sizeof(pairs) / sizeof(pairs[0]); ++i) {

    db::Layout layout_layer (&m);

    options = empty_options;
    options.get_options<db::CommonReaderOptions> ().layer_map.map (pairs [i], 0);

    db::LayerProperties lp;
    lp.layer = pairs [i].layer;
    lp.datatype = pairs [i].datatype;
    layout_layer.insert_layer (0, lp);

    im.reset ();
    tl::InputStream file (im);
    db::GDS2Reader reader (file);
    reader.read (layout_layer, options);

    EXPECT_EQ (layout_layer.layers (), 1);
    EXPECT_EQ (layout_layer.get_properties (0).layer, pairs[i].layer);
    EXPECT_EQ (layout_layer.get_properties (0).datatype, pairs[i].datatype);

    db::Layout layout_piece (&m);
    layout_piece = layout;

    std::pair<bool, unsigned int> jj = map_full.logical (pairs[i]);
    EXPECT_EQ (jj.first, true);

    for (unsigned int j = 0; j < layout_piece.layers(); ++j) {
      if (j != jj.second) {
        layout_piece.delete_layer(j);
      }
    }

    bool equal = db::compare_layouts (layout_layer, layout_piece, db::layout_diff::f_verbose, 0);
    EXPECT_EQ (equal, true);

  }
}

