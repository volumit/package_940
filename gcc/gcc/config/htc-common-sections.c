/* Common sections related functionalities for HighTec backends.
   Copyright (C) 2015 Free Software Foundation, Inc.
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

   You should have received a copy of the GNU General Public License
   along with GCC; see the file COPYING3.
   If not see <http://www.gnu.org/licenses/>.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tree.h"
#include "tm.h"
#include "diagnostic-core.h"
#include "ggc.h"
#include "opts.h"
#include "options.h"
#include "hashtab.h"
#include "target.h"
#include "langhooks.h"
#include "output.h"
#include "timevar.h"
#include "stringpool.h"
#include "attribs.h"
#include "fold-const.h"
#include "print-tree.h"
#include "common/common-target.h"


