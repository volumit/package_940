/* Common functionalities for HighTec backends.
   Copyright (C) 2012 Free Software Foundation, Inc.
   Contributed by Zoltán Ördög <zoltan.ordog@hightec-rt.com>

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
#include "tree.h"
#include "tm.h"
#include "target.h"
#include "output.h"
#include "c-family/c-pragma.h"
#include "c-family/c-common.h"
#include "cpplib.h"

/* Define HighTec specific language independent macros.

   This can be used in the TARGET_{CPU,OS,OBJFMT}_CPP_BUILTINS macros or
   integrate it into a backend's existing TARGET_{CPP,OS,OBJFMT}_CPP_BUILTINS
   macro definition.  */

void
htc_cpu_cpp_builtins (cpp_reader *pfile)
{
  cpp_define (pfile, "__HIGHTEC__");
  cpp_define (pfile, "__GNUC_AURIX__");

  if (tree_to_uhwi (TYPE_SIZE_UNIT (float_type_node)) 
      == tree_to_uhwi (TYPE_SIZE_UNIT (double_type_node)))
    cpp_define (pfile, "__HAVE_SHORT_DOUBLE__");
}
