/*
 * Copyright (C) 2013 Roman I. Volkov
 *
 *  This driver is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License, version 2.
 *
 *  This driver is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this driver; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA
 *
 */

#include <ntddk.h>
#include "splice.h"

void __stdcall __FAKE_WRITE_PORT_UCHAR(PUCHAR Port, UCHAR Value);
void __stdcall __FAKE_WRITE_PORT_USHORT(PUSHORT Port, USHORT Value);
void __stdcall __FAKE_WRITE_PORT_ULONG(PULONG Port, ULONG Value);

extern SPLICE_BACKUP b_wpchar;
extern SPLICE_BACKUP b_wpshort;
extern SPLICE_BACKUP b_wplong;
extern ULONG fltCallerEntry;
extern ULONG fltCallerSize;