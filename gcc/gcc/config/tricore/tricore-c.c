/* Copyright (C) 2012-2014 Free Software Foundation, Inc.
   This file is part of GCC.

   GCC is free software; you can redistribute it and/or modify it
   under the terms of the GNU General Public License as published
   by the Free Software Foundation; either version 3, or (at your
   option) any later version.

   GCC is distributed in the hope that it will be useful, but WITHOUT
   ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
   or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public
   License for more details.

   You should have received a copy of the GNU General Public License
   along with GCC; see the file COPYING3.  If not see
   <http://www.gnu.org/licenses/>.  */

/* Subroutines for the C front end of TriCore */
/*
#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "input.h"
#include "tm.h"
#include "c-family/c-pragma.h"
#include "target.h"
#include "c-family/c-common.h"
*/

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "input.h"
#include "tm.h"
#include "tm_p.h"
#include "tree.h"
#include "c-family/c-pragma.h"
#include "toplev.h"
#include "output.h"
#include "target.h"
#include "c-family/c-common.h"
#include "tricore-protos.h"

/* Transorm LO into uppercase and write the result to UP and return UP.
   You must provide enough space for UP.
   Static helper for function below.  */

static char*
tric_toupper (char *up, const char *lo)
{
  char *up0 = up;
  
  for (; *lo; lo++, up++)
    *up = TOUPPER (*lo);

  *up = '\0';

  return up0;
}


/* Worker function for `TARGET_CPU_CPP_BUILTINS' */

void
tric_cpu_cpp_builtins (struct cpp_reader *pfile)
{
  static const char *const tric_builtin_names[] =
    {
#define DEF_BUILTIN(NAME, N_ARGS, ID, TYPE, INSN, TCODE)    \
      "__builtin_tricore_" NAME,
#include "builtins.def"
#undef DEF_BUILTIN
      NULL
    };

  const char *const *pname;
  const tric_erratum_t *erratum;

#ifdef HTC_CPU_CPP_BUILTINS
  HTC_CPU_CPP_BUILTINS (pfile);
#endif

  builtin_define_std ("tricore");

  cpp_define (pfile, "__TRICORE__");
  
  cpp_define_formatted (pfile, "__TC%s__", tric_core->name);
  cpp_define_formatted (pfile, "__TRICORE_CORE__=0x%3x", tric_core->id);

  if (tric_device)
    {
      char *Name = (char*) alloca (1 + strlen (tric_device->name));
      Name = tric_toupper (Name, tric_device->name);

      cpp_define_formatted (pfile, "__%s__", Name);
      cpp_define_formatted (pfile, "__TRICORE_NAME__=%s",
                            tric_device->target_name);
    }

  if (TRIC_HAVE_DIV)
    cpp_define (pfile, "__TRICORE_HAVE_DIV__");
  
  if (TRIC_HAVE_FTOIZ)
    cpp_define (pfile, "__TRICORE_HAVE_FTOIZ__");

  if (TRIC_HAVE_MOV64)
    cpp_define (pfile, "__TRICORE_HAVE_MOV64__");

  if (TRIC_HAVE_POPCNT)
    cpp_define (pfile, "__TRICORE_HAVE_POPCNT__");

  if (TRIC_HAVE_LHA)
    cpp_define (pfile, "__TRICORE_HAVE_LHA__");

  if (TRIC_HAVE_CRCN)
    cpp_define (pfile, "__TRICORE_HAVE_CRCN__");

  if (TRIC_HAVE_SHUFFLE)
    cpp_define (pfile, "__TRICORE_HAVE_SHUFFLE__");

  if (TRIC_HAVE_HP_CONVERT)
    {
      cpp_define (pfile, "__TRICORE_HAVE_FTOHP__");
      cpp_define (pfile, "__TRICORE_HAVE_HPTOF__");
    }

  cpp_define (pfile, "__TRICORE_HAVE_FLOAT16__");

  for (erratum = tric_errata; erratum->macro != NULL; erratum++)
    {
      if (erratum->fixit)
        cpp_define_formatted (pfile, "ERRATA_%s", erratum->macro);
    }

  if (TRIC_ERRATA_048)
    {
      /* For legacy code.  */

      cpp_define (pfile, "ERRATA_CPU48_1");
      cpp_define (pfile, "ERRATA_CPU48_2");
    }

  /* Define builtin macros so that the user can easily query if or
     if not a specific builtin is available.  Don't provide built-in
     defines for builtins that are used internally only.  */

  for (pname = tric_builtin_names; *pname != NULL; pname++)
    {
      if (strncmp  (*pname, "__builtin_tricore__",
                    strlen ("__builtin_tricore__")))
        {
          char *Name = (char*) alloca (1 + strlen (*pname));
          cpp_define (pfile, tric_toupper (Name, *pname));
        }
    }
}


/* IDs for all the TriCore builtins.  */

enum tric_builtin_id
  {
#define DEF_BUILTIN(NAME, N_ARGS, ID, TYPE, INSN, TCODE)        \
    TRIC_BUILTIN_ ## ID,
#include "builtins.def"
#undef DEF_BUILTIN

    TRIC_BUILTIN_COUNT
  };


/* Implement `TARGET_RESOLVE_OVERLOADED_BUILTIN' */

static tree
tric_resolve_overloaded_builtin (location_t loc, tree fndecl, void *vargs)
{
  vec<tree, va_gc> *args = static_cast<vec<tree, va_gc> *> (vargs);
  unsigned int nargs = vec_safe_length (args);
  enum built_in_function fcode = DECL_FUNCTION_CODE (fndecl);
  tree ret = NULL_TREE;
  tree fndeclx = NULL_TREE;

  switch (fcode)
    {
    default:
      break;

    case TRIC_BUILTIN_LDMST:
      
      if (3 == nargs)
        fndeclx = targetm.builtin_decl (TRIC_BUILTIN_LDMST3, true);
      else if (4 == nargs)
        fndeclx = targetm.builtin_decl (TRIC_BUILTIN_LDMST4, true);
      else
        {
          error_at (loc, "function %qE expects 3 or 4 arguments but %d given",
                    fndecl, nargs);
          ret = error_mark_node;
        }

      break;

    case TRIC_BUILTIN_CMPSWAPW:
      if (!TRIC_HAVE_CMPSWAP_W)
        {
          error_at (loc, "instruction %qs is not supported by this device",
                    "cmpswap.w");
          ret = error_mark_node;
        }
      break;

    case TRIC_BUILTIN_SWAPMSKW:
      if (!TRIC_HAVE_SWAPMSK_W)
        {
          error_at (loc, "instruction %qs is not supported by this device",
                    "swapmsk.w");
          ret = error_mark_node;
        }
      break;
    }

  if (fndeclx)
    {
      tree tnamex = DECL_NAME (fndeclx);

      /* Use name of the overloaded plugin in diagnostics, not the name
         of the builtin it is mapped to.  */

      DECL_NAME (fndeclx) = DECL_NAME (fndecl);
      ret = build_function_call_vec (loc, vNULL, fndeclx, args, NULL);
      DECL_NAME (fndeclx) = tnamex;
    }

  return ret;
}

/***********************************************************************
 ** Pragma implementation
 ***********************************************************************/

/* If RETURN is NULL then the section pragma ends, i.e. the complete line
   is "#pragma section" with no tokens thereafter.

   If RETURN is non-NULL, then
   - RETURN is a xmalloc'ed string that might serve as section name.
            There was no sanity check for reasonable section name yet.
   - *PTYPE is the type of the token after the section name.
   - *X     is the tree representing the token after the section name.  */

static char*
tric_pragma_scan_section_name (enum cpp_ttype *ptype, tree *x)
{
  char *secname;

  *ptype = pragma_lex (x);

  if (*ptype == CPP_EOF)
    {
      /* pragma section ends: switch to default section */

      return NULL;
    }
  else if (*ptype == CPP_STRING)
    {
      /* New style: Specify section name as string.  */

      secname = xstrdup (TREE_STRING_POINTER (*x));
      *ptype = pragma_lex (x);
    }
  else
    {
      /* Old style:  Dreaded syntax tries to recover section name
         from various tokens like CPP_DOT and CPP_NAME.

         Presumably, the reason for this weird syntax was to try to be
         compatible with other compiler vendors.

         Specifying section names as identifiers/dots instead of
         as string is odd. E.g. this results in mappings like
             . foo     -> .foo
             foo .     -> foo
             foo.      -> foo
             foo. aw   -> foo.aw (instead of foo. with flags=aw)
             foo.5a    -> invalid suffix "a" on floating constant

         To fix this we would have to extend the lexer and allow dots in
         identifiers which is quite tedious and generally not wanted.
      */

      secname = xstrdup ("");

      do
        {
          if (*ptype == CPP_DOT)
            {
              secname = reconcat (secname, secname, ".", NULL);

              /* Assumption is that a section name does not end with '.'.
                 Thus, unconditionally scan the next token.  */

              *ptype = pragma_lex (x);
            }

          if (*ptype == CPP_NAME)
            {
              secname = reconcat (secname, secname,
                                  IDENTIFIER_POINTER (*x), NULL);
              *ptype = pragma_lex (x);
            }
        }
      while (*ptype == CPP_DOT);

      warning (OPT_Wdeprecated_pragma_section_name,
               "section name %qs is not a string", secname);
    }

  return secname;
}


void
tric_pragma_section (cpp_reader *pfile ATTRIBUTE_UNUSED)
{
  static tric_section_t *last_section_pragma = NULL;
  static location_t last_code_section_location = UNKNOWN_LOCATION;
  static location_t last_data_section_location = UNKNOWN_LOCATION;

  tree x = NULL_TREE;
  enum cpp_ttype type = CPP_EOF;
  char *secname;
  tric_section_t *secinfo;
  unsigned int align = 0;
  const char *s_flags = NULL;

  secname = tric_pragma_scan_section_name (&type, &x);
  //fprintf(stdout,"Pragma Scan Section\n");
  if (secname == NULL)
    {
      /* No section name specified: pragma section ends */

      if (htc_log.section)
        {
          if (last_section_pragma == NULL)
            {
              htc_edump ("%H: useless pragma section\n",
                          input_location);
            }
          else if (last_section_pragma->flags & SECTION_CODE)
            {
        	  htc_edump ("%H: closing pragma for code section %s"
                          " opened in %H\n",
                          input_location, last_section_pragma->name,
                          last_code_section_location);
            }
          else
            {
        	  htc_edump ("%H: closing pragma for data section %s"
                          " opened in %H\n",
                          input_location, last_section_pragma->name,
                          last_data_section_location);
            }
        }

      if (last_section_pragma == NULL)
        {
          /* pragma section ends without pragma section define */
          return;
        }

      if (last_section_pragma->flags & SECTION_CODE)
        {
          tric_pragma_section_code = NULL;
          last_code_section_location = UNKNOWN_LOCATION;
          last_section_pragma = tric_pragma_section_data;
        }
      else
        {
          tric_pragma_section_data = NULL;
          last_data_section_location = UNKNOWN_LOCATION;
          last_section_pragma = tric_pragma_section_code;
        }

      return;
    } /* secname == NULL */

  /* pragma section starts: scan arguments after section name */

  do
    {
      switch (type)
        {
        case CPP_EOF:
          break;

        case CPP_NUMBER:
          /* get the section alignment */

          if (align)
            {
              error ("section alignment specified more than once");
              free (secname);
              return;
            }

          align = TREE_INT_CST_LOW (x);

          if (exact_log2 (align) < 0)
            {
              error ("section alignment %<%d%> is not a power of 2", align);
              free (secname);
              return;
            }

          break;

        case CPP_NAME:
          /* get the section flags */

          if (s_flags)
            {
              error ("section flags specified more than once");
              free (secname);
              return;
            }

          s_flags = IDENTIFIER_POINTER (x);
          break;

        default:
          error ("unexpected token in pragma section");
          break;
        }
    }
  while (type != CPP_EOF
         && (type = pragma_lex (&x)) != CPP_EOF);

  /* Find or create section named `secname' and check if everything
     is consistent. */

  secinfo = tric_insert_section (secname, s_flags, align, input_location);

  /* secinfo now either points to a legal section named `secname'
     (known or newly created) or is NULL and an error message had been
     issued */

  if (NULL == secinfo)
    {
      /* tric_insert_section issued an error */

      free (secname);
      return;
    }

  if (secinfo->flags & SECTION_CODE)
    {
      if (tric_pragma_section_code != NULL)
        {
          /* Opening a code section within a code section in not allowed. */

          error ("missing pragma section end for code section %qs",
                 tric_pragma_section_code->name);
          inform (last_code_section_location,
                  "pragma section %qs started here",
                  tric_pragma_section_code->name);
        }

      tric_pragma_section_code = secinfo;
      last_code_section_location = input_location;
    }
  else
    {
      if (tric_pragma_section_data != NULL)
        {
          /* Opening a data section within a data section in not allowed. */

          error ("missing pragma section end for data section %qs",
                 tric_pragma_section_data->name);
          inform (last_data_section_location,
                  "pragma section %qs started here",
                  tric_pragma_section_data->name);
        }

      tric_pragma_section_data = secinfo;
      last_data_section_location = input_location;
    }

  last_section_pragma = secinfo;
}

void
tric_register_pragmas (void)
{
//  c_register_pragma (0, "section", htc_handle_pragma_section);
  c_register_pragma (0, "section", tric_pragma_section);
  targetm.resolve_overloaded_builtin = tric_resolve_overloaded_builtin;
}
