/* Common functionalities for HighTec backends.
   Copyright (C) 2012-2014 Free Software Foundation, Inc.
   Contributed by Peter Gal <peter.gal@hightec-rt.com>

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.
*/


#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "ggc.h"
#include "rtl.h"
#include "tree.h"
#include "output.h"
#include "version.h"
#include "target.h"
#include "langhooks.h"

#include "c-family/c-common.h"
#include "diagnostic-core.h"
#include "intl.h"


void
htc_init_once (void)
{
  htc_log_init();
}


