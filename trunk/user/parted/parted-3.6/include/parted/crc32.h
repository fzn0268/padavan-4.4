/*
    libparted - a library for manipulating disk partitions
    Copyright (C) 1998-2000, 2007, 2009-2014, 2019-2023 Free Software
    Foundation, Inc.

    crc32.h

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef _CRC32_H
#define _CRC32_H

#include <stdint.h>

/*
 * This computes a 32 bit CRC of the data in the buffer, and returns the CRC.
 * The polynomial used is 0xedb88320.
 */

extern uint32_t __efi_crc32 (const void *buf, unsigned long len,
			     uint32_t seed)
#if __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 96)
  __attribute ((__pure__))
#endif
;

#endif /* _CRC32_H */
