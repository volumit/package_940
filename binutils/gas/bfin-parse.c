/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     BYTEOP16P = 258,
     BYTEOP16M = 259,
     BYTEOP1P = 260,
     BYTEOP2P = 261,
     BYTEOP2M = 262,
     BYTEOP3P = 263,
     BYTEUNPACK = 264,
     BYTEPACK = 265,
     PACK = 266,
     SAA = 267,
     ALIGN8 = 268,
     ALIGN16 = 269,
     ALIGN24 = 270,
     VIT_MAX = 271,
     EXTRACT = 272,
     DEPOSIT = 273,
     EXPADJ = 274,
     SEARCH = 275,
     ONES = 276,
     SIGN = 277,
     SIGNBITS = 278,
     LINK = 279,
     UNLINK = 280,
     REG = 281,
     PC = 282,
     CCREG = 283,
     BYTE_DREG = 284,
     REG_A_DOUBLE_ZERO = 285,
     REG_A_DOUBLE_ONE = 286,
     A_ZERO_DOT_L = 287,
     A_ZERO_DOT_H = 288,
     A_ONE_DOT_L = 289,
     A_ONE_DOT_H = 290,
     HALF_REG = 291,
     NOP = 292,
     RTI = 293,
     RTS = 294,
     RTX = 295,
     RTN = 296,
     RTE = 297,
     HLT = 298,
     IDLE = 299,
     STI = 300,
     CLI = 301,
     CSYNC = 302,
     SSYNC = 303,
     EMUEXCPT = 304,
     RAISE = 305,
     EXCPT = 306,
     LSETUP = 307,
     LOOP = 308,
     LOOP_BEGIN = 309,
     LOOP_END = 310,
     DISALGNEXCPT = 311,
     JUMP = 312,
     JUMP_DOT_S = 313,
     JUMP_DOT_L = 314,
     CALL = 315,
     ABORT = 316,
     NOT = 317,
     TILDA = 318,
     BANG = 319,
     AMPERSAND = 320,
     BAR = 321,
     PERCENT = 322,
     CARET = 323,
     BXOR = 324,
     MINUS = 325,
     PLUS = 326,
     STAR = 327,
     SLASH = 328,
     NEG = 329,
     MIN = 330,
     MAX = 331,
     ABS = 332,
     DOUBLE_BAR = 333,
     _PLUS_BAR_PLUS = 334,
     _PLUS_BAR_MINUS = 335,
     _MINUS_BAR_PLUS = 336,
     _MINUS_BAR_MINUS = 337,
     _MINUS_MINUS = 338,
     _PLUS_PLUS = 339,
     SHIFT = 340,
     LSHIFT = 341,
     ASHIFT = 342,
     BXORSHIFT = 343,
     _GREATER_GREATER_GREATER_THAN_ASSIGN = 344,
     ROT = 345,
     LESS_LESS = 346,
     GREATER_GREATER = 347,
     _GREATER_GREATER_GREATER = 348,
     _LESS_LESS_ASSIGN = 349,
     _GREATER_GREATER_ASSIGN = 350,
     DIVS = 351,
     DIVQ = 352,
     ASSIGN = 353,
     _STAR_ASSIGN = 354,
     _BAR_ASSIGN = 355,
     _CARET_ASSIGN = 356,
     _AMPERSAND_ASSIGN = 357,
     _MINUS_ASSIGN = 358,
     _PLUS_ASSIGN = 359,
     _ASSIGN_BANG = 360,
     _LESS_THAN_ASSIGN = 361,
     _ASSIGN_ASSIGN = 362,
     GE = 363,
     LT = 364,
     LE = 365,
     GT = 366,
     LESS_THAN = 367,
     FLUSHINV = 368,
     FLUSH = 369,
     IFLUSH = 370,
     PREFETCH = 371,
     PRNT = 372,
     OUTC = 373,
     WHATREG = 374,
     TESTSET = 375,
     ASL = 376,
     ASR = 377,
     B = 378,
     W = 379,
     NS = 380,
     S = 381,
     CO = 382,
     SCO = 383,
     TH = 384,
     TL = 385,
     BP = 386,
     BREV = 387,
     X = 388,
     Z = 389,
     M = 390,
     MMOD = 391,
     R = 392,
     RND = 393,
     RNDL = 394,
     RNDH = 395,
     RND12 = 396,
     RND20 = 397,
     V = 398,
     LO = 399,
     HI = 400,
     BITTGL = 401,
     BITCLR = 402,
     BITSET = 403,
     BITTST = 404,
     BITMUX = 405,
     DBGAL = 406,
     DBGAH = 407,
     DBGHALT = 408,
     DBG = 409,
     DBGA = 410,
     DBGCMPLX = 411,
     IF = 412,
     COMMA = 413,
     BY = 414,
     COLON = 415,
     SEMICOLON = 416,
     RPAREN = 417,
     LPAREN = 418,
     LBRACK = 419,
     RBRACK = 420,
     STATUS_REG = 421,
     MNOP = 422,
     SYMBOL = 423,
     NUMBER = 424,
     GOT = 425,
     GOT17M4 = 426,
     FUNCDESC_GOT17M4 = 427,
     AT = 428,
     PLTPC = 429
   };
#endif
/* Tokens.  */
#define BYTEOP16P 258
#define BYTEOP16M 259
#define BYTEOP1P 260
#define BYTEOP2P 261
#define BYTEOP2M 262
#define BYTEOP3P 263
#define BYTEUNPACK 264
#define BYTEPACK 265
#define PACK 266
#define SAA 267
#define ALIGN8 268
#define ALIGN16 269
#define ALIGN24 270
#define VIT_MAX 271
#define EXTRACT 272
#define DEPOSIT 273
#define EXPADJ 274
#define SEARCH 275
#define ONES 276
#define SIGN 277
#define SIGNBITS 278
#define LINK 279
#define UNLINK 280
#define REG 281
#define PC 282
#define CCREG 283
#define BYTE_DREG 284
#define REG_A_DOUBLE_ZERO 285
#define REG_A_DOUBLE_ONE 286
#define A_ZERO_DOT_L 287
#define A_ZERO_DOT_H 288
#define A_ONE_DOT_L 289
#define A_ONE_DOT_H 290
#define HALF_REG 291
#define NOP 292
#define RTI 293
#define RTS 294
#define RTX 295
#define RTN 296
#define RTE 297
#define HLT 298
#define IDLE 299
#define STI 300
#define CLI 301
#define CSYNC 302
#define SSYNC 303
#define EMUEXCPT 304
#define RAISE 305
#define EXCPT 306
#define LSETUP 307
#define LOOP 308
#define LOOP_BEGIN 309
#define LOOP_END 310
#define DISALGNEXCPT 311
#define JUMP 312
#define JUMP_DOT_S 313
#define JUMP_DOT_L 314
#define CALL 315
#define ABORT 316
#define NOT 317
#define TILDA 318
#define BANG 319
#define AMPERSAND 320
#define BAR 321
#define PERCENT 322
#define CARET 323
#define BXOR 324
#define MINUS 325
#define PLUS 326
#define STAR 327
#define SLASH 328
#define NEG 329
#define MIN 330
#define MAX 331
#define ABS 332
#define DOUBLE_BAR 333
#define _PLUS_BAR_PLUS 334
#define _PLUS_BAR_MINUS 335
#define _MINUS_BAR_PLUS 336
#define _MINUS_BAR_MINUS 337
#define _MINUS_MINUS 338
#define _PLUS_PLUS 339
#define SHIFT 340
#define LSHIFT 341
#define ASHIFT 342
#define BXORSHIFT 343
#define _GREATER_GREATER_GREATER_THAN_ASSIGN 344
#define ROT 345
#define LESS_LESS 346
#define GREATER_GREATER 347
#define _GREATER_GREATER_GREATER 348
#define _LESS_LESS_ASSIGN 349
#define _GREATER_GREATER_ASSIGN 350
#define DIVS 351
#define DIVQ 352
#define ASSIGN 353
#define _STAR_ASSIGN 354
#define _BAR_ASSIGN 355
#define _CARET_ASSIGN 356
#define _AMPERSAND_ASSIGN 357
#define _MINUS_ASSIGN 358
#define _PLUS_ASSIGN 359
#define _ASSIGN_BANG 360
#define _LESS_THAN_ASSIGN 361
#define _ASSIGN_ASSIGN 362
#define GE 363
#define LT 364
#define LE 365
#define GT 366
#define LESS_THAN 367
#define FLUSHINV 368
#define FLUSH 369
#define IFLUSH 370
#define PREFETCH 371
#define PRNT 372
#define OUTC 373
#define WHATREG 374
#define TESTSET 375
#define ASL 376
#define ASR 377
#define B 378
#define W 379
#define NS 380
#define S 381
#define CO 382
#define SCO 383
#define TH 384
#define TL 385
#define BP 386
#define BREV 387
#define X 388
#define Z 389
#define M 390
#define MMOD 391
#define R 392
#define RND 393
#define RNDL 394
#define RNDH 395
#define RND12 396
#define RND20 397
#define V 398
#define LO 399
#define HI 400
#define BITTGL 401
#define BITCLR 402
#define BITSET 403
#define BITTST 404
#define BITMUX 405
#define DBGAL 406
#define DBGAH 407
#define DBGHALT 408
#define DBG 409
#define DBGA 410
#define DBGCMPLX 411
#define IF 412
#define COMMA 413
#define BY 414
#define COLON 415
#define SEMICOLON 416
#define RPAREN 417
#define LPAREN 418
#define LBRACK 419
#define RBRACK 420
#define STATUS_REG 421
#define MNOP 422
#define SYMBOL 423
#define NUMBER 424
#define GOT 425
#define GOT17M4 426
#define FUNCDESC_GOT17M4 427
#define AT 428
#define PLTPC 429




/* Copy the first part of user declarations.  */
#line 21 "bfin-parse.y"


#include "as.h"
#include <obstack.h>

#include "bfin-aux.h"  /* Opcode generating auxiliaries.  */
#include "libbfd.h"
#include "elf/common.h"
#include "elf/bfin.h"

#define DSP32ALU(aopcde, HL, dst1, dst0, src0, src1, s, x, aop) \
	bfin_gen_dsp32alu (HL, aopcde, aop, s, x, dst0, dst1, src0, src1)

#define DSP32MAC(op1, MM, mmod, w1, P, h01, h11, h00, h10, dst, op0, src0, src1, w0) \
	bfin_gen_dsp32mac (op1, MM, mmod, w1, P, h01, h11, h00, h10, op0, \
	                   dst, src0, src1, w0)

#define DSP32MULT(op1, MM, mmod, w1, P, h01, h11, h00, h10, dst, op0, src0, src1, w0) \
	bfin_gen_dsp32mult (op1, MM, mmod, w1, P, h01, h11, h00, h10, op0, \
	                    dst, src0, src1, w0)

#define DSP32SHIFT(sopcde, dst0, src0, src1, sop, hls)  \
	bfin_gen_dsp32shift (sopcde, dst0, src0, src1, sop, hls)

#define DSP32SHIFTIMM(sopcde, dst0, immag, src1, sop, hls)  \
	bfin_gen_dsp32shiftimm (sopcde, dst0, immag, src1, sop, hls)

#define LDIMMHALF_R(reg, h, s, z, hword) \
	bfin_gen_ldimmhalf (reg, h, s, z, hword, 1)

#define LDIMMHALF_R5(reg, h, s, z, hword) \
        bfin_gen_ldimmhalf (reg, h, s, z, hword, 2)

#define LDSTIDXI(ptr, reg, w, sz, z, offset)  \
	bfin_gen_ldstidxi (ptr, reg, w, sz, z, offset)

#define LDST(ptr, reg, aop, sz, z, w)  \
	bfin_gen_ldst (ptr, reg, aop, sz, z, w)

#define LDSTII(ptr, reg, offset, w, op)  \
	bfin_gen_ldstii (ptr, reg, offset, w, op)

#define DSPLDST(i, m, reg, aop, w) \
	bfin_gen_dspldst (i, reg, aop, w, m)

#define LDSTPMOD(ptr, reg, idx, aop, w) \
	bfin_gen_ldstpmod (ptr, reg, aop, w, idx)

#define LDSTIIFP(offset, reg, w)  \
	bfin_gen_ldstiifp (reg, offset, w)

#define LOGI2OP(dst, src, opc) \
	bfin_gen_logi2op (opc, src, dst.regno & CODE_MASK)

#define ALU2OP(dst, src, opc)  \
	bfin_gen_alu2op (dst, src, opc)

#define BRCC(t, b, offset) \
	bfin_gen_brcc (t, b, offset)

#define UJUMP(offset) \
	bfin_gen_ujump (offset)

#define PROGCTRL(prgfunc, poprnd) \
	bfin_gen_progctrl (prgfunc, poprnd)

#define PUSHPOPMULTIPLE(dr, pr, d, p, w) \
	bfin_gen_pushpopmultiple (dr, pr, d, p, w)

#define PUSHPOPREG(reg, w) \
	bfin_gen_pushpopreg (reg, w)

#define CALLA(addr, s)  \
	bfin_gen_calla (addr, s)

#define LINKAGE(r, framesize) \
	bfin_gen_linkage (r, framesize)

#define COMPI2OPD(dst, src, op)  \
	bfin_gen_compi2opd (dst, src, op)

#define COMPI2OPP(dst, src, op)  \
	bfin_gen_compi2opp (dst, src, op)

#define DAGMODIK(i, op)  \
	bfin_gen_dagmodik (i, op)

#define DAGMODIM(i, m, op, br)  \
	bfin_gen_dagmodim (i, m, op, br)

#define COMP3OP(dst, src0, src1, opc)   \
	bfin_gen_comp3op (src0, src1, dst, opc)

#define PTR2OP(dst, src, opc)   \
	bfin_gen_ptr2op (dst, src, opc)

#define CCFLAG(x, y, opc, i, g)  \
	bfin_gen_ccflag (x, y, opc, i, g)

#define CCMV(src, dst, t) \
	bfin_gen_ccmv (src, dst, t)

#define CACTRL(reg, a, op) \
	bfin_gen_cactrl (reg, a, op)

#define LOOPSETUP(soffset, c, rop, eoffset, reg) \
	bfin_gen_loopsetup (soffset, c, rop, eoffset, reg)

#define HL2(r1, r0)  (IS_H (r1) << 1 | IS_H (r0))
#define IS_RANGE(bits, expr, sign, mul)    \
	value_match(expr, bits, sign, mul, 1)
#define IS_URANGE(bits, expr, sign, mul)    \
	value_match(expr, bits, sign, mul, 0)
#define IS_CONST(expr) (expr->type == Expr_Node_Constant)
#define IS_RELOC(expr) (expr->type != Expr_Node_Constant)
#define IS_IMM(expr, bits)  value_match (expr, bits, 0, 1, 1)
#define IS_UIMM(expr, bits)  value_match (expr, bits, 0, 1, 0)

#define IS_PCREL4(expr) \
	(value_match (expr, 4, 0, 2, 0))

#define IS_LPPCREL10(expr) \
	(value_match (expr, 10, 0, 2, 0))

#define IS_PCREL10(expr) \
	(value_match (expr, 10, 0, 2, 1))

#define IS_PCREL12(expr) \
	(value_match (expr, 12, 0, 2, 1))

#define IS_PCREL24(expr) \
	(value_match (expr, 24, 0, 2, 1))


static int value_match (Expr_Node *expr, int sz, int sign, int mul, int issigned);

extern FILE *errorf;
extern INSTR_T insn;

static Expr_Node *binary (Expr_Op_Type, Expr_Node *, Expr_Node *);
static Expr_Node *unary  (Expr_Op_Type, Expr_Node *);

static void notethat (char *format, ...);

char *current_inputline;
extern char *yytext;
int yyerror (char *msg);

void error (char *format, ...)
{
    va_list ap;
    static char buffer[2000];
    
    va_start (ap, format);
    vsprintf (buffer, format, ap);
    va_end (ap);

    as_bad ("%s", buffer);
}

int
yyerror (char *msg)
{
  if (msg[0] == '\0')
    error ("%s", msg);

  else if (yytext[0] != ';')
    error ("%s. Input text was %s.", msg, yytext);
  else
    error ("%s.", msg);

  return -1;
}

static int
in_range_p (Expr_Node *expr, int from, int to, unsigned int mask)
{
  int val = EXPR_VALUE (expr);
  if (expr->type != Expr_Node_Constant)
    return 0;
  if (val < from || val > to)
    return 0;
  return (val & mask) == 0;
}

extern int yylex (void);

#define imm3(x) EXPR_VALUE (x)
#define imm4(x) EXPR_VALUE (x)
#define uimm4(x) EXPR_VALUE (x)
#define imm5(x) EXPR_VALUE (x)
#define uimm5(x) EXPR_VALUE (x)
#define imm6(x) EXPR_VALUE (x)
#define imm7(x) EXPR_VALUE (x)
#define imm16(x) EXPR_VALUE (x)
#define uimm16s4(x) ((EXPR_VALUE (x)) >> 2)
#define uimm16(x) EXPR_VALUE (x)

/* Return true if a value is inside a range.  */
#define IN_RANGE(x, low, high) \
  (((EXPR_VALUE(x)) >= (low)) && (EXPR_VALUE(x)) <= ((high)))

/* Auxiliary functions.  */

static int
valid_dreg_pair (Register *reg1, Expr_Node *reg2)
{
  if (!IS_DREG (*reg1))
    {
      yyerror ("Dregs expected");
      return 0;
    }

  if (reg1->regno != 1 && reg1->regno != 3)
    {
      yyerror ("Bad register pair");
      return 0;
    }

  if (imm7 (reg2) != reg1->regno - 1)
    {
      yyerror ("Bad register pair");
      return 0;
    }

  reg1->regno--;
  return 1;
}

static int
check_multiply_halfregs (Macfunc *aa, Macfunc *ab)
{
  if ((!REG_EQUAL (aa->s0, ab->s0) && !REG_EQUAL (aa->s0, ab->s1))
      || (!REG_EQUAL (aa->s1, ab->s1) && !REG_EQUAL (aa->s1, ab->s0)))
    return yyerror ("Source multiplication register mismatch");

  return 0;
}


/* Check mac option.  */

static int
check_macfunc_option (Macfunc *a, Opt_mode *opt)
{
  /* Default option is always valid.  */
  if (opt->mod == 0)
    return 0;

  if ((a->w == 1 && a->P == 1
       && opt->mod != M_FU && opt->mod != M_IS && opt->mod != M_IU
       && opt->mod != M_S2RND && opt->mod != M_ISS2)
      || (a->w == 1 && a->P == 0
	  && opt->mod != M_FU && opt->mod != M_IS && opt->mod != M_IU
	  && opt->mod != M_T && opt->mod != M_TFU && opt->mod != M_S2RND
	  && opt->mod != M_ISS2 && opt->mod != M_IH)
      || (a->w == 0 && a->P == 0
	  && opt->mod != M_FU && opt->mod != M_IS && opt->mod != M_W32))
    return -1;

  return 0;
}

/* Check (vector) mac funcs and ops.  */

static int
check_macfuncs (Macfunc *aa, Opt_mode *opa,
		Macfunc *ab, Opt_mode *opb)
{
  /* Variables for swapping.  */
  Macfunc mtmp;
  Opt_mode otmp;

  /* The option mode should be put at the end of the second instruction
     of the vector except M, which should follow MAC1 instruction.  */
  if (opa->mod != 0)
    return yyerror ("Bad opt mode");

  /* If a0macfunc comes before a1macfunc, swap them.  */
	
  if (aa->n == 0)
    {
      /*  (M) is not allowed here.  */
      if (opa->MM != 0)
	return yyerror ("(M) not allowed with A0MAC");
      if (ab->n != 1)
	return yyerror ("Vector AxMACs can't be same");

      mtmp = *aa; *aa = *ab; *ab = mtmp;
      otmp = *opa; *opa = *opb; *opb = otmp;
    }
  else
    {
      if (opb->MM != 0)
	return yyerror ("(M) not allowed with A0MAC");
      if (ab->n != 0)
	return yyerror ("Vector AxMACs can't be same");
    }

  /*  If both ops are one of 0, 1, or 2, we have multiply_halfregs in both
  assignment_or_macfuncs.  */
  if ((aa->op == 0 || aa->op == 1 || aa->op == 2)
      && (ab->op == 0 || ab->op == 1 || ab->op == 2))
    {
      if (check_multiply_halfregs (aa, ab) < 0)
	return -1;
    }
  else
    {
      /*  Only one of the assign_macfuncs has a half reg multiply
      Evil trick: Just 'OR' their source register codes:
      We can do that, because we know they were initialized to 0
      in the rules that don't use multiply_halfregs.  */
      aa->s0.regno |= (ab->s0.regno & CODE_MASK);
      aa->s1.regno |= (ab->s1.regno & CODE_MASK);
    }

  if (aa->w == ab->w  && aa->P != ab->P)
    {
      return yyerror ("macfuncs must differ");
      if (aa->w && (aa->dst.regno - ab->dst.regno != 1))
	return yyerror ("Destination Dregs must differ by one");
    }

  /* Make sure mod flags get ORed, too.  */
  opb->mod |= opa->mod;

  /* Check option.  */
  if (check_macfunc_option (aa, opb) < 0
      && check_macfunc_option (ab, opb) < 0)
    return yyerror ("bad option");

  /* Make sure first macfunc has got both P flags ORed.  */
  aa->P |= ab->P;

  return 0;	
}


static int
is_group1 (INSTR_T x)
{
  /* Group1 is dpsLDST, LDSTpmod, LDST, LDSTiiFP, LDSTii.  */
  if ((x->value & 0xc000) == 0x8000 || (x->value == 0x0000))
    return 1;

  return 0;
}

static int
is_group2 (INSTR_T x)
{
  if ((((x->value & 0xfc00) == 0x9c00)  /* dspLDST.  */
       && !((x->value & 0xfde0) == 0x9c60)  /* dagMODim.  */
       && !((x->value & 0xfde0) == 0x9ce0)  /* dagMODim with bit rev.  */
       && !((x->value & 0xfde0) == 0x9d60)) /* pick dagMODik.  */
      || (x->value == 0x0000))
    return 1;
  return 0;
}

static INSTR_T
gen_multi_instr_1 (INSTR_T dsp32, INSTR_T dsp16_grp1, INSTR_T dsp16_grp2)
{
  int mask1 = dsp32 ? insn_regmask (dsp32->value, dsp32->next->value) : 0;
  int mask2 = dsp16_grp1 ? insn_regmask (dsp16_grp1->value, 0) : 0;
  int mask3 = dsp16_grp2 ? insn_regmask (dsp16_grp2->value, 0) : 0;

  if ((mask1 & mask2) || (mask1 & mask3) || (mask2 & mask3))
    yyerror ("resource conflict in multi-issue instruction");

  /* Anomaly 05000074 */
  if (ENABLE_AC_05000074
      && dsp32 != NULL && dsp16_grp1 != NULL
      && (dsp32->value & 0xf780) == 0xc680
      && ((dsp16_grp1->value & 0xfe40) == 0x9240
	  || (dsp16_grp1->value & 0xfe08) == 0xba08
	  || (dsp16_grp1->value & 0xfc00) == 0xbc00))
    yyerror ("anomaly 05000074 - Multi-Issue Instruction with \
dsp32shiftimm in slot1 and P-reg Store in slot2 Not Supported");

  return bfin_gen_multi_instr (dsp32, dsp16_grp1, dsp16_grp2);
}



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 407 "bfin-parse.y"
{
  INSTR_T instr;
  Expr_Node *expr;
  SYMBOL_T symbol;
  long value;
  Register reg;
  Macfunc macfunc;
  struct { int r0; int s0; int x0; int aop; } modcodes;
  struct { int r0; } r0;
  Opt_mode mod;
}
/* Line 193 of yacc.c.  */
#line 842 "bfin-parse.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 855 "bfin-parse.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  150
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1284

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  175
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  350
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1026

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   429

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     6,     9,    16,    21,    23,    25,
      28,    34,    36,    43,    50,    54,    58,    76,    94,   106,
     118,   130,   143,   156,   169,   175,   179,   183,   187,   196,
     210,   223,   237,   251,   265,   274,   292,   299,   309,   313,
     320,   324,   330,   337,   346,   355,   358,   361,   366,   370,
     373,   378,   382,   389,   394,   402,   410,   414,   418,   425,
     429,   434,   438,   442,   446,   458,   470,   480,   486,   492,
     502,   508,   514,   521,   528,   534,   540,   546,   553,   560,
     566,   568,   572,   576,   580,   584,   589,   594,   604,   614,
     620,   628,   633,   640,   647,   655,   665,   674,   683,   695,
     705,   710,   716,   723,   731,   738,   743,   750,   756,   763,
     770,   775,   784,   795,   806,   819,   825,   832,   838,   845,
     850,   855,   860,   868,   878,   888,   898,   905,   912,   919,
     928,   937,   944,   950,   956,   965,   970,   978,   980,   982,
     984,   986,   988,   990,   992,   994,   996,   998,  1001,  1004,
    1009,  1014,  1021,  1028,  1031,  1034,  1039,  1042,  1045,  1048,
    1051,  1054,  1057,  1064,  1071,  1077,  1082,  1086,  1090,  1094,
    1098,  1102,  1106,  1111,  1114,  1119,  1122,  1127,  1130,  1135,
    1138,  1146,  1155,  1164,  1172,  1180,  1188,  1198,  1206,  1215,
    1225,  1234,  1241,  1249,  1258,  1268,  1277,  1285,  1293,  1300,
    1312,  1320,  1332,  1340,  1344,  1347,  1349,  1357,  1367,  1379,
    1383,  1389,  1397,  1400,  1403,  1405,  1408,  1411,  1416,  1418,
    1420,  1427,  1434,  1441,  1443,  1445,  1446,  1452,  1458,  1462,
    1466,  1470,  1474,  1475,  1477,  1479,  1481,  1483,  1485,  1486,
    1490,  1491,  1495,  1499,  1500,  1504,  1508,  1514,  1520,  1521,
    1525,  1529,  1530,  1534,  1538,  1539,  1543,  1547,  1551,  1557,
    1563,  1564,  1568,  1569,  1573,  1575,  1577,  1579,  1581,  1582,
    1586,  1590,  1594,  1600,  1606,  1608,  1610,  1612,  1613,  1617,
    1618,  1622,  1627,  1632,  1634,  1636,  1638,  1640,  1642,  1644,
    1646,  1648,  1652,  1656,  1660,  1664,  1670,  1676,  1682,  1688,
    1692,  1696,  1702,  1708,  1709,  1711,  1713,  1716,  1719,  1722,
    1726,  1728,  1734,  1740,  1744,  1747,  1750,  1753,  1757,  1759,
    1761,  1763,  1765,  1769,  1773,  1777,  1781,  1783,  1785,  1787,
    1789,  1793,  1795,  1797,  1801,  1803,  1805,  1809,  1812,  1815,
    1817,  1821,  1825,  1829,  1833,  1837,  1841,  1845,  1849,  1853,
    1857
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     176,     0,    -1,    -1,   177,    -1,   178,   161,    -1,   178,
      78,   178,    78,   178,   161,    -1,   178,    78,   178,   161,
      -1,     1,    -1,   167,    -1,   209,   180,    -1,   209,   180,
     158,   209,   180,    -1,    56,    -1,    26,    98,   163,   208,
     179,   162,    -1,    36,    98,   163,   208,   179,   162,    -1,
      33,    98,    36,    -1,    35,    98,    36,    -1,   163,    26,
     158,    26,   162,    98,     3,   163,    26,   160,   220,   158,
      26,   160,   220,   162,   193,    -1,   163,    26,   158,    26,
     162,    98,     4,   163,    26,   160,   220,   158,    26,   160,
     220,   162,   193,    -1,   163,    26,   158,    26,   162,    98,
       9,    26,   160,   220,   193,    -1,   163,    26,   158,    26,
     162,    98,    20,    26,   163,   192,   162,    -1,    26,    98,
      34,    71,    35,   158,    26,    98,    32,    71,    33,    -1,
      26,    98,   179,    71,   179,   158,    26,    98,   179,    70,
     179,   185,    -1,    26,    98,    26,   202,    26,   158,    26,
      98,    26,   202,    26,   185,    -1,    26,    98,    26,   201,
      26,   158,    26,    98,    26,   201,    26,   186,    -1,    26,
      98,    77,    26,   190,    -1,   206,    77,   179,    -1,    32,
      98,    36,    -1,    34,    98,    36,    -1,    26,    98,   195,
     163,    26,   158,    26,   162,    -1,    26,    98,     5,   163,
      26,   160,   220,   158,    26,   160,   220,   162,   194,    -1,
      26,    98,     5,   163,    26,   160,   220,   158,    26,   160,
     220,   162,    -1,    26,    98,     6,   163,    26,   160,   220,
     158,    26,   160,   220,   162,   203,    -1,    26,    98,     7,
     163,    26,   160,   220,   158,    26,   160,   220,   162,   203,
      -1,    26,    98,     8,   163,    26,   160,   220,   158,    26,
     160,   220,   162,   204,    -1,    26,    98,    10,   163,    26,
     158,    26,   162,    -1,    36,    98,    36,    98,    22,   163,
      36,   162,    72,    36,    71,    22,   163,    36,   162,    72,
      36,    -1,    26,    98,    26,   202,    26,   185,    -1,    26,
      98,   200,   163,    26,   158,    26,   162,   190,    -1,   206,
      70,   179,    -1,    36,    98,    36,   202,    36,   185,    -1,
     206,   206,   220,    -1,   206,   179,   163,   126,   162,    -1,
      36,    98,    26,   163,   138,   162,    -1,    36,    98,    26,
     202,    26,   163,   141,   162,    -1,    36,    98,    26,   202,
      26,   163,   142,   162,    -1,   206,   179,    -1,   206,    26,
      -1,    26,    98,    36,   187,    -1,    36,    98,   220,    -1,
     206,   220,    -1,    26,    98,   220,   188,    -1,    36,    98,
      26,    -1,    26,    98,    26,   201,    26,   184,    -1,    26,
      98,    29,   187,    -1,   206,    77,   179,   158,   206,    77,
     179,    -1,   206,    70,   179,   158,   206,    70,   179,    -1,
     207,   179,   196,    -1,    26,   103,   220,    -1,    26,   104,
      26,   163,   132,   162,    -1,    26,   103,    26,    -1,   179,
     104,   179,   196,    -1,    26,   104,    26,    -1,    26,   104,
     220,    -1,    26,    99,    26,    -1,    12,   163,    26,   160,
     220,   158,    26,   160,   220,   162,   193,    -1,   206,   179,
     163,   126,   162,   158,   206,   179,   163,   126,   162,    -1,
      26,    98,   163,    26,    71,    26,   162,    91,   220,    -1,
      26,    98,    26,    66,    26,    -1,    26,    98,    26,    68,
      26,    -1,    26,    98,    26,    71,   163,    26,    91,   220,
     162,    -1,    28,    98,   179,   107,   179,    -1,    28,    98,
     179,   112,   179,    -1,    28,    98,    26,   112,    26,   197,
      -1,    28,    98,    26,   112,   220,   197,    -1,    28,    98,
      26,   107,    26,    -1,    28,    98,    26,   107,   220,    -1,
      28,    98,   179,   106,   179,    -1,    28,    98,    26,   106,
      26,   197,    -1,    28,    98,    26,   106,   220,   197,    -1,
      26,    98,    26,    65,    26,    -1,   213,    -1,    26,    98,
      26,    -1,    28,    98,    26,    -1,    26,    98,    28,    -1,
      28,   105,    28,    -1,    36,    98,   211,   180,    -1,    26,
      98,   211,   180,    -1,    36,    98,   211,   180,   158,    36,
      98,   211,   180,    -1,    26,    98,   211,   180,   158,    26,
      98,   211,   180,    -1,   206,    87,   179,   159,    36,    -1,
      36,    98,    87,    36,   159,    36,   191,    -1,   206,   179,
      91,   220,    -1,    26,    98,    26,    91,   220,   189,    -1,
      36,    98,    36,    91,   220,   191,    -1,    26,    98,    87,
      26,   159,    36,   189,    -1,    36,    98,    19,   163,    26,
     158,    36,   162,   190,    -1,    36,    98,    19,   163,    36,
     158,    36,   162,    -1,    26,    98,    18,   163,    26,   158,
      26,   162,    -1,    26,    98,    18,   163,    26,   158,    26,
     162,   163,   133,   162,    -1,    26,    98,    17,   163,    26,
     158,    36,   162,   187,    -1,   206,   179,    93,   220,    -1,
     206,    86,   179,   159,    36,    -1,    36,    98,    86,    36,
     159,    36,    -1,    26,    98,    86,    26,   159,    36,   190,
      -1,    26,    98,    85,    26,   159,    36,    -1,   206,   179,
      92,   220,    -1,    26,    98,    26,    92,   220,   190,    -1,
      36,    98,    36,    92,   220,    -1,    36,    98,    36,    93,
     220,   191,    -1,    26,    98,    26,    93,   220,   189,    -1,
      36,    98,    21,    26,    -1,    26,    98,    11,   163,    36,
     158,    36,   162,    -1,    36,    98,    28,    98,    88,   163,
     179,   158,    26,   162,    -1,    36,    98,    28,    98,    69,
     163,   179,   158,    26,   162,    -1,    36,    98,    28,    98,
      69,   163,   179,   158,   179,   158,    28,   162,    -1,   206,
      90,   179,   159,    36,    -1,    26,    98,    90,    26,   159,
      36,    -1,   206,    90,   179,   159,   220,    -1,    26,    98,
      90,    26,   159,   220,    -1,    36,    98,    23,   179,    -1,
      36,    98,    23,    26,    -1,    36,    98,    23,    36,    -1,
      36,    98,    16,   163,    26,   162,   181,    -1,    26,    98,
      16,   163,    26,   158,    26,   162,   181,    -1,   150,   163,
      26,   158,    26,   158,   179,   162,   181,    -1,   206,    88,
     163,   179,   158,   179,   158,    28,   162,    -1,   147,   163,
      26,   158,   220,   162,    -1,   148,   163,    26,   158,   220,
     162,    -1,   146,   163,    26,   158,   220,   162,    -1,    28,
     105,   149,   163,    26,   158,   220,   162,    -1,    28,    98,
     149,   163,    26,   158,   220,   162,    -1,   157,    64,    28,
      26,    98,    26,    -1,   157,    28,    26,    98,    26,    -1,
     157,    64,    28,    57,   220,    -1,   157,    64,    28,    57,
     220,   163,   131,   162,    -1,   157,    28,    57,   220,    -1,
     157,    28,    57,   220,   163,   131,   162,    -1,    37,    -1,
      39,    -1,    38,    -1,    40,    -1,    41,    -1,    42,    -1,
      44,    -1,    47,    -1,    48,    -1,    49,    -1,    46,    26,
      -1,    45,    26,    -1,    57,   163,    26,   162,    -1,    60,
     163,    26,   162,    -1,    60,   163,    27,    71,    26,   162,
      -1,    57,   163,    27,    71,    26,   162,    -1,    50,   220,
      -1,    51,   220,    -1,   120,   163,    26,   162,    -1,    57,
     220,    -1,    58,   220,    -1,    59,   220,    -1,    59,   218,
      -1,    60,   220,    -1,    60,   218,    -1,    97,   163,    26,
     158,    26,   162,    -1,    96,   163,    26,   158,    26,   162,
      -1,    26,    98,    70,    26,   189,    -1,    26,    98,    63,
      26,    -1,    26,    95,    26,    -1,    26,    95,   220,    -1,
      26,    89,    26,    -1,    26,    94,    26,    -1,    26,    94,
     220,    -1,    26,    89,   220,    -1,   114,   164,    26,   165,
      -1,   114,   199,    -1,   113,   164,    26,   165,    -1,   113,
     199,    -1,   115,   164,    26,   165,    -1,   115,   199,    -1,
     116,   164,    26,   165,    -1,   116,   199,    -1,   123,   164,
      26,   205,   165,    98,    26,    -1,   123,   164,    26,   202,
     220,   165,    98,    26,    -1,   124,   164,    26,   202,   220,
     165,    98,    26,    -1,   124,   164,    26,   205,   165,    98,
      26,    -1,   124,   164,    26,   205,   165,    98,    36,    -1,
     164,    26,   202,   220,   165,    98,    26,    -1,    26,    98,
     124,   164,    26,   202,   220,   165,   187,    -1,    36,    98,
     124,   164,    26,   205,   165,    -1,    26,    98,   124,   164,
      26,   205,   165,   187,    -1,    26,    98,   124,   164,    26,
      84,    26,   165,   187,    -1,    36,    98,   124,   164,    26,
      84,    26,   165,    -1,   164,    26,   205,   165,    98,    26,
      -1,   164,    26,    84,    26,   165,    98,    26,    -1,   124,
     164,    26,    84,    26,   165,    98,    36,    -1,    26,    98,
     123,   164,    26,   202,   220,   165,   187,    -1,    26,    98,
     123,   164,    26,   205,   165,   187,    -1,    26,    98,   164,
      26,    84,    26,   165,    -1,    26,    98,   164,    26,   202,
     217,   165,    -1,    26,    98,   164,    26,   205,   165,    -1,
     198,    98,   163,    26,   160,   220,   158,    26,   160,   220,
     162,    -1,   198,    98,   163,    26,   160,   220,   162,    -1,
     163,    26,   160,   220,   158,    26,   160,   220,   162,    98,
     199,    -1,   163,    26,   160,   220,   162,    98,   199,    -1,
     198,    98,    26,    -1,    24,   220,    -1,    25,    -1,    52,
     163,   220,   158,   220,   162,    26,    -1,    52,   163,   220,
     158,   220,   162,    26,    98,    26,    -1,    52,   163,   220,
     158,   220,   162,    26,    98,    26,    92,   220,    -1,    53,
     220,    26,    -1,    53,   220,    26,    98,    26,    -1,    53,
     220,    26,    98,    26,    92,   220,    -1,    54,   220,    -1,
      55,   220,    -1,   154,    -1,   154,   179,    -1,   154,    26,
      -1,   156,   163,    26,   162,    -1,   153,    -1,    43,    -1,
     155,   163,    36,   158,   220,   162,    -1,   152,   163,    26,
     158,   220,   162,    -1,   151,   163,    26,   158,   220,   162,
      -1,    30,    -1,    31,    -1,    -1,   163,   135,   158,   136,
     162,    -1,   163,   136,   158,   135,   162,    -1,   163,   136,
     162,    -1,   163,   135,   162,    -1,   163,   121,   162,    -1,
     163,   122,   162,    -1,    -1,   126,    -1,   127,    -1,   128,
      -1,   121,    -1,   122,    -1,    -1,   163,   182,   162,    -1,
      -1,   163,   125,   162,    -1,   163,   126,   162,    -1,    -1,
     163,   183,   162,    -1,   163,   182,   162,    -1,   163,   183,
     158,   182,   162,    -1,   163,   182,   158,   183,   162,    -1,
      -1,   163,   134,   162,    -1,   163,   133,   162,    -1,    -1,
     163,   133,   162,    -1,   163,   134,   162,    -1,    -1,   163,
     125,   162,    -1,   163,   126,   162,    -1,   163,   143,   162,
      -1,   163,   143,   158,   126,   162,    -1,   163,   126,   158,
     143,   162,    -1,    -1,   163,   143,   162,    -1,    -1,   163,
     126,   162,    -1,   108,    -1,   111,    -1,   110,    -1,   109,
      -1,    -1,   163,   137,   162,    -1,   163,   137,   162,    -1,
     163,   136,   162,    -1,   163,   136,   158,   137,   162,    -1,
     163,   137,   158,   136,   162,    -1,    13,    -1,    14,    -1,
      15,    -1,    -1,   163,   136,   162,    -1,    -1,   163,   136,
     162,    -1,   164,    83,    26,   165,    -1,   164,    26,    84,
     165,    -1,    75,    -1,    76,    -1,    79,    -1,    80,    -1,
      81,    -1,    82,    -1,    71,    -1,    70,    -1,   163,   140,
     162,    -1,   163,   129,   162,    -1,   163,   139,   162,    -1,
     163,   130,   162,    -1,   163,   140,   158,   137,   162,    -1,
     163,   129,   158,   137,   162,    -1,   163,   139,   158,   137,
     162,    -1,   163,   130,   158,   137,   162,    -1,   163,   144,
     162,    -1,   163,   145,   162,    -1,   163,   144,   158,   137,
     162,    -1,   163,   145,   158,   137,   162,    -1,    -1,    84,
      -1,    83,    -1,   179,    98,    -1,   179,   103,    -1,   179,
     104,    -1,    26,    98,   179,    -1,   210,    -1,    26,    98,
     163,   210,   162,    -1,    36,    98,   163,   210,   162,    -1,
      36,    98,   179,    -1,   206,   211,    -1,   208,   211,    -1,
     207,   211,    -1,    36,    72,    36,    -1,    98,    -1,   100,
      -1,   102,    -1,   101,    -1,    28,   212,   166,    -1,    28,
     212,   143,    -1,   166,   212,    28,    -1,   143,   212,    28,
      -1,   168,    -1,   170,    -1,   171,    -1,   172,    -1,   214,
     173,   215,    -1,   216,    -1,   220,    -1,   214,   173,   174,
      -1,   169,    -1,   214,    -1,   163,   221,   162,    -1,    63,
     221,    -1,    70,   221,    -1,   221,    -1,   221,    72,   221,
      -1,   221,    73,   221,    -1,   221,    67,   221,    -1,   221,
      71,   221,    -1,   221,    70,   221,    -1,   221,    91,   221,
      -1,   221,    92,   221,    -1,   221,    65,   221,    -1,   221,
      68,   221,    -1,   221,    66,   221,    -1,   219,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   608,   608,   609,   621,   623,   656,   683,   694,   698,
     736,   756,   761,   771,   781,   786,   791,   807,   823,   835,
     845,   858,   877,   895,   918,   940,   945,   955,   966,   977,
     991,  1006,  1022,  1038,  1054,  1065,  1079,  1105,  1123,  1128,
    1134,  1146,  1157,  1168,  1179,  1190,  1201,  1212,  1238,  1252,
    1262,  1307,  1326,  1337,  1348,  1359,  1370,  1381,  1397,  1414,
    1430,  1441,  1452,  1485,  1496,  1509,  1520,  1559,  1569,  1579,
    1599,  1609,  1619,  1630,  1644,  1655,  1668,  1678,  1690,  1705,
    1716,  1722,  1742,  1753,  1764,  1772,  1798,  1828,  1857,  1888,
    1902,  1913,  1927,  1961,  1979,  2004,  2016,  2034,  2045,  2056,
    2067,  2080,  2091,  2102,  2113,  2124,  2135,  2168,  2178,  2191,
    2211,  2222,  2233,  2246,  2259,  2270,  2281,  2292,  2303,  2313,
    2324,  2335,  2347,  2358,  2369,  2380,  2393,  2405,  2417,  2428,
    2439,  2450,  2462,  2474,  2485,  2496,  2507,  2517,  2523,  2529,
    2535,  2541,  2547,  2553,  2559,  2565,  2571,  2577,  2588,  2599,
    2610,  2621,  2632,  2643,  2654,  2660,  2671,  2682,  2693,  2704,
    2715,  2725,  2738,  2746,  2754,  2778,  2789,  2800,  2811,  2822,
    2833,  2845,  2858,  2867,  2878,  2889,  2901,  2912,  2923,  2934,
    2948,  2960,  2986,  3016,  3027,  3052,  3089,  3117,  3142,  3153,
    3164,  3175,  3201,  3220,  3234,  3258,  3270,  3289,  3335,  3372,
    3388,  3407,  3421,  3440,  3456,  3464,  3473,  3484,  3496,  3510,
    3518,  3528,  3540,  3550,  3561,  3566,  3571,  3577,  3585,  3591,
    3597,  3603,  3609,  3622,  3626,  3636,  3640,  3645,  3650,  3655,
    3662,  3666,  3673,  3677,  3682,  3687,  3695,  3699,  3706,  3710,
    3718,  3723,  3729,  3738,  3743,  3749,  3755,  3761,  3770,  3773,
    3777,  3784,  3787,  3791,  3798,  3803,  3809,  3815,  3821,  3826,
    3834,  3837,  3844,  3847,  3854,  3858,  3862,  3866,  3873,  3876,
    3883,  3888,  3895,  3902,  3914,  3918,  3922,  3929,  3932,  3942,
    3945,  3954,  3960,  3969,  3973,  3980,  3984,  3988,  3992,  3999,
    4003,  4010,  4018,  4026,  4034,  4042,  4049,  4056,  4064,  4074,
    4079,  4084,  4089,  4097,  4100,  4104,  4113,  4120,  4127,  4134,
    4149,  4155,  4168,  4181,  4199,  4206,  4213,  4223,  4236,  4240,
    4244,  4248,  4255,  4261,  4267,  4273,  4283,  4292,  4294,  4296,
    4300,  4308,  4312,  4319,  4325,  4331,  4335,  4339,  4343,  4349,
    4355,  4359,  4363,  4367,  4371,  4375,  4379,  4383,  4387,  4391,
    4395
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "BYTEOP16P", "BYTEOP16M", "BYTEOP1P",
  "BYTEOP2P", "BYTEOP2M", "BYTEOP3P", "BYTEUNPACK", "BYTEPACK", "PACK",
  "SAA", "ALIGN8", "ALIGN16", "ALIGN24", "VIT_MAX", "EXTRACT", "DEPOSIT",
  "EXPADJ", "SEARCH", "ONES", "SIGN", "SIGNBITS", "LINK", "UNLINK", "REG",
  "PC", "CCREG", "BYTE_DREG", "REG_A_DOUBLE_ZERO", "REG_A_DOUBLE_ONE",
  "A_ZERO_DOT_L", "A_ZERO_DOT_H", "A_ONE_DOT_L", "A_ONE_DOT_H", "HALF_REG",
  "NOP", "RTI", "RTS", "RTX", "RTN", "RTE", "HLT", "IDLE", "STI", "CLI",
  "CSYNC", "SSYNC", "EMUEXCPT", "RAISE", "EXCPT", "LSETUP", "LOOP",
  "LOOP_BEGIN", "LOOP_END", "DISALGNEXCPT", "JUMP", "JUMP_DOT_S",
  "JUMP_DOT_L", "CALL", "ABORT", "NOT", "TILDA", "BANG", "AMPERSAND",
  "BAR", "PERCENT", "CARET", "BXOR", "MINUS", "PLUS", "STAR", "SLASH",
  "NEG", "MIN", "MAX", "ABS", "DOUBLE_BAR", "_PLUS_BAR_PLUS",
  "_PLUS_BAR_MINUS", "_MINUS_BAR_PLUS", "_MINUS_BAR_MINUS", "_MINUS_MINUS",
  "_PLUS_PLUS", "SHIFT", "LSHIFT", "ASHIFT", "BXORSHIFT",
  "_GREATER_GREATER_GREATER_THAN_ASSIGN", "ROT", "LESS_LESS",
  "GREATER_GREATER", "_GREATER_GREATER_GREATER", "_LESS_LESS_ASSIGN",
  "_GREATER_GREATER_ASSIGN", "DIVS", "DIVQ", "ASSIGN", "_STAR_ASSIGN",
  "_BAR_ASSIGN", "_CARET_ASSIGN", "_AMPERSAND_ASSIGN", "_MINUS_ASSIGN",
  "_PLUS_ASSIGN", "_ASSIGN_BANG", "_LESS_THAN_ASSIGN", "_ASSIGN_ASSIGN",
  "GE", "LT", "LE", "GT", "LESS_THAN", "FLUSHINV", "FLUSH", "IFLUSH",
  "PREFETCH", "PRNT", "OUTC", "WHATREG", "TESTSET", "ASL", "ASR", "B", "W",
  "NS", "S", "CO", "SCO", "TH", "TL", "BP", "BREV", "X", "Z", "M", "MMOD",
  "R", "RND", "RNDL", "RNDH", "RND12", "RND20", "V", "LO", "HI", "BITTGL",
  "BITCLR", "BITSET", "BITTST", "BITMUX", "DBGAL", "DBGAH", "DBGHALT",
  "DBG", "DBGA", "DBGCMPLX", "IF", "COMMA", "BY", "COLON", "SEMICOLON",
  "RPAREN", "LPAREN", "LBRACK", "RBRACK", "STATUS_REG", "MNOP", "SYMBOL",
  "NUMBER", "GOT", "GOT17M4", "FUNCDESC_GOT17M4", "AT", "PLTPC", "$accept",
  "statement", "asm", "asm_1", "REG_A", "opt_mode", "asr_asl", "sco",
  "asr_asl_0", "amod0", "amod1", "amod2", "xpmod", "xpmod1", "vsmod",
  "vmod", "smod", "searchmod", "aligndir", "byteop_mod", "c_align",
  "w32_or_nothing", "iu_or_nothing", "reg_with_predec", "reg_with_postinc",
  "min_max", "op_bar_op", "plus_minus", "rnd_op", "b3_op", "post_op",
  "a_assign", "a_minusassign", "a_plusassign", "assign_macfunc",
  "a_macfunc", "multiply_halfregs", "cc_op", "ccstat", "symbol",
  "any_gotrel", "got", "got_or_expr", "pltpc", "eterm", "expr", "expr_1", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   175,   176,   176,   177,   177,   177,   177,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   179,   179,   180,   180,   180,   180,   180,
     181,   181,   182,   182,   182,   182,   183,   183,   184,   184,
     185,   185,   185,   186,   186,   186,   186,   186,   187,   187,
     187,   188,   188,   188,   189,   189,   189,   189,   189,   189,
     190,   190,   191,   191,   192,   192,   192,   192,   193,   193,
     194,   194,   194,   194,   195,   195,   195,   196,   196,   197,
     197,   198,   199,   200,   200,   201,   201,   201,   201,   202,
     202,   203,   203,   203,   203,   203,   203,   203,   203,   204,
     204,   204,   204,   205,   205,   205,   206,   207,   208,   209,
     209,   209,   209,   209,   210,   210,   210,   211,   212,   212,
     212,   212,   213,   213,   213,   213,   214,   215,   215,   215,
     216,   217,   217,   218,   219,   219,   219,   219,   219,   220,
     221,   221,   221,   221,   221,   221,   221,   221,   221,   221,
     221
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     1,     2,     6,     4,     1,     1,     2,
       5,     1,     6,     6,     3,     3,    17,    17,    11,    11,
      11,    12,    12,    12,     5,     3,     3,     3,     8,    13,
      12,    13,    13,    13,     8,    17,     6,     9,     3,     6,
       3,     5,     6,     8,     8,     2,     2,     4,     3,     2,
       4,     3,     6,     4,     7,     7,     3,     3,     6,     3,
       4,     3,     3,     3,    11,    11,     9,     5,     5,     9,
       5,     5,     6,     6,     5,     5,     5,     6,     6,     5,
       1,     3,     3,     3,     3,     4,     4,     9,     9,     5,
       7,     4,     6,     6,     7,     9,     8,     8,    11,     9,
       4,     5,     6,     7,     6,     4,     6,     5,     6,     6,
       4,     8,    10,    10,    12,     5,     6,     5,     6,     4,
       4,     4,     7,     9,     9,     9,     6,     6,     6,     8,
       8,     6,     5,     5,     8,     4,     7,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     4,
       4,     6,     6,     2,     2,     4,     2,     2,     2,     2,
       2,     2,     6,     6,     5,     4,     3,     3,     3,     3,
       3,     3,     4,     2,     4,     2,     4,     2,     4,     2,
       7,     8,     8,     7,     7,     7,     9,     7,     8,     9,
       8,     6,     7,     8,     9,     8,     7,     7,     6,    11,
       7,    11,     7,     3,     2,     1,     7,     9,    11,     3,
       5,     7,     2,     2,     1,     2,     2,     4,     1,     1,
       6,     6,     6,     1,     1,     0,     5,     5,     3,     3,
       3,     3,     0,     1,     1,     1,     1,     1,     0,     3,
       0,     3,     3,     0,     3,     3,     5,     5,     0,     3,
       3,     0,     3,     3,     0,     3,     3,     3,     5,     5,
       0,     3,     0,     3,     1,     1,     1,     1,     0,     3,
       3,     3,     5,     5,     1,     1,     1,     0,     3,     0,
       3,     4,     4,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     3,     3,     5,     5,     5,     5,     3,
       3,     5,     5,     0,     1,     1,     2,     2,     2,     3,
       1,     5,     5,     3,     2,     2,     2,     3,     1,     1,
       1,     1,     3,     3,     3,     3,     1,     1,     1,     1,
       3,     1,     1,     3,     1,     1,     3,     2,     2,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     7,     0,     0,   205,     0,     0,   223,   224,     0,
       0,     0,     0,     0,   137,   139,   138,   140,   141,   142,
     219,   143,     0,     0,   144,   145,   146,     0,     0,     0,
       0,     0,     0,    11,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   218,   214,     0,     0,     0,     0,
       0,     0,     8,     0,     3,     0,     0,     0,     0,     0,
       0,   225,   310,    80,     0,     0,     0,     0,   326,   334,
     335,   350,   204,   339,     0,     0,     0,     0,     0,     0,
       0,   318,   319,   321,   320,     0,     0,     0,     0,     0,
       0,     0,   148,   147,   153,   154,     0,     0,   212,   213,
       0,   156,   157,   335,   159,   158,     0,   161,   160,     0,
       0,     0,   175,     0,   173,     0,   177,     0,   179,     0,
       0,     0,   318,     0,     0,     0,     0,     0,     0,     0,
     216,   215,     0,     0,     0,     0,     0,   303,     0,     0,
       1,     0,     4,   306,   307,   308,     0,    46,     0,     0,
       0,     0,     0,     0,     0,    45,     0,   314,    49,   277,
     316,   315,     0,     9,     0,   337,   338,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   168,   171,
     169,   170,   166,   167,     0,     0,     0,     0,     0,     0,
     274,   275,   276,     0,     0,     0,    81,    83,   248,     0,
     248,     0,     0,   283,   284,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   309,     0,     0,   225,   251,    63,
      59,    57,    61,    62,    82,     0,     0,    84,     0,   323,
     322,    26,    14,    27,    15,     0,     0,     0,     0,    51,
       0,     0,     0,     0,     0,     0,   313,   225,    48,     0,
     209,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   303,   303,   325,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   290,
     289,   305,   304,     0,     0,     0,   324,     0,   277,   203,
       0,     0,    38,    25,     0,     0,     0,     0,     0,     0,
       0,     0,    40,     0,    56,     0,     0,     0,     0,   336,
     347,   349,   342,   348,   344,   343,   340,   341,   345,   346,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   289,   285,   286,   287,   288,     0,     0,     0,
       0,     0,     0,    53,     0,    47,   165,   254,   260,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   303,     0,     0,     0,    86,     0,    50,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   110,
     120,   121,   119,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    85,     0,     0,   149,
       0,   333,   150,     0,     0,     0,     0,   174,   172,   176,
     178,   155,   304,     0,     0,   304,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   217,     0,   135,     0,     0,
       0,     0,     0,     0,     0,   281,     0,     6,    60,     0,
     317,     0,     0,     0,     0,     0,     0,    91,   105,   100,
       0,     0,     0,   229,     0,   228,     0,     0,   225,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    79,
      67,    68,     0,   254,   260,   254,   238,   240,     0,     0,
       0,     0,   164,     0,    24,     0,     0,     0,     0,   303,
     303,     0,   308,     0,   311,   304,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   279,   279,    74,    75,   279,
     279,     0,    76,    70,    71,     0,     0,     0,     0,     0,
       0,     0,     0,   262,   107,   262,     0,   240,     0,     0,
     303,     0,   312,     0,     0,   210,     0,     0,     0,     0,
     282,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   132,     0,     0,   133,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   101,    89,
       0,   115,   117,    41,   278,     0,     0,     0,     0,    10,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    92,   106,   109,     0,   232,    52,     0,     0,    36,
     250,   249,     0,     0,     0,     0,     0,   104,   260,   254,
     116,   118,     0,     0,   304,     0,     0,     0,    12,     0,
     335,   331,     0,   332,   198,     0,     0,     0,     0,   252,
     253,    58,     0,    77,    78,    72,    73,     0,     0,     0,
       0,     0,    42,     0,     0,     0,     0,    93,   108,     0,
      39,   102,   262,   304,     0,    13,     0,     0,     0,   152,
     151,   163,   162,     0,     0,     0,     0,     0,   128,   126,
     127,     0,   222,   221,   220,     0,   131,     0,     0,     0,
       0,     0,     0,   191,     5,     0,     0,     0,     0,     0,
     226,   227,     0,   309,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   233,   234,   235,
       0,     0,     0,     0,     0,   255,     0,   256,     0,   257,
     261,   103,    94,     0,   248,     0,     0,   248,     0,   196,
       0,   197,     0,     0,     0,     0,     0,     0,     0,     0,
     122,     0,     0,     0,     0,     0,     0,     0,     0,    90,
       0,   187,     0,   206,   211,     0,   180,     0,     0,   183,
     184,     0,   136,     0,     0,     0,     0,     0,     0,     0,
     202,   192,   185,     0,   200,    55,    54,     0,     0,     0,
       0,     0,     0,     0,    34,   111,     0,   248,    97,     0,
       0,   239,     0,   241,   242,     0,     0,     0,   248,   195,
     248,   248,   188,     0,   327,   328,   329,   330,     0,    28,
     260,   225,   280,   130,   129,     0,     0,   260,    96,    43,
      44,     0,     0,   263,     0,   190,   225,     0,   181,   193,
     182,     0,   134,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   123,    99,     0,
      69,     0,     0,     0,   259,   258,   194,   189,   186,    66,
       0,    37,    88,   230,   231,    95,     0,     0,     0,     0,
      87,   207,   124,     0,     0,     0,     0,     0,     0,   125,
       0,   268,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   113,     0,   112,     0,     0,     0,     0,   268,   264,
     267,   266,   265,     0,     0,     0,     0,     0,    64,     0,
       0,     0,     0,    98,   243,   240,    20,   240,     0,     0,
     208,     0,     0,    18,    19,   201,   199,    65,     0,    30,
       0,     0,     0,   232,    23,    22,    21,   114,     0,     0,
       0,   269,     0,    29,     0,    31,    32,     0,    33,   236,
     237,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   245,   232,   244,     0,     0,
       0,     0,   271,     0,   270,     0,   292,     0,   294,     0,
     293,     0,   291,     0,   299,     0,   300,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     247,   246,     0,   268,   268,   272,   273,   296,   298,   297,
     295,   301,   302,    35,    16,    17
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    63,    64,    65,   366,   173,   750,   720,   962,   606,
     609,   944,   353,   377,   492,   494,   657,   913,   918,   953,
     225,   314,   643,    67,   122,   226,   350,   293,   955,   958,
     294,   367,   368,    70,    71,    72,   171,    96,    73,    80,
     817,   631,   632,   114,    81,    82,    83
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -875
static const yytype_int16 yypact[] =
{
     862,  -875,   -87,   -20,  -875,   493,   421,  -875,  -875,    -8,
      25,    44,    56,    93,  -875,  -875,  -875,  -875,  -875,  -875,
    -875,  -875,   213,   241,  -875,  -875,  -875,   -20,   -20,    67,
     -20,   -20,   -20,  -875,   205,   -20,   -20,   263,   134,   147,
     154,   161,   163,   179,   209,   220,   233,   459,   245,   251,
     253,   259,   286,   306,  -875,   316,   336,   345,    28,   492,
      22,   459,  -875,   511,  -875,   -11,   208,   443,     1,   356,
     522,   400,  -875,  -875,   542,   -20,   -20,   -20,  -875,  -875,
    -875,  -875,  -875,   605,   126,   168,   171,   499,   554,   192,
     214,   105,  -875,  -875,  -875,    10,   -60,   547,   557,   576,
     581,    88,  -875,  -875,  -875,  -875,   -20,   602,  -875,  -875,
      59,  -875,  -875,   471,  -875,  -875,   130,  -875,  -875,   619,
     635,   638,  -875,   639,  -875,   640,  -875,   643,  -875,   648,
     653,   656,  -875,   655,   658,   659,   661,   667,   672,   673,
    -875,  -875,   664,   676,    27,   681,   118,   189,   684,   683,
    -875,  1008,  -875,  -875,  -875,   149,     8,  -875,   641,    -2,
     149,   149,   149,   549,   149,   123,   -20,  -875,  -875,   551,
    -875,  -875,   117,   560,   564,  -875,  -875,   559,   -20,   -20,
     -20,   -20,   -20,   -20,   -20,   -20,   -20,   -20,  -875,  -875,
    -875,  -875,  -875,  -875,   556,   563,   565,   566,   567,   568,
    -875,  -875,  -875,   569,   570,   571,   624,  -875,   572,   649,
     -33,   222,   275,  -875,  -875,   701,   710,   711,   712,   713,
     577,   578,   102,   714,   674,   580,   583,   400,   584,  -875,
    -875,  -875,   585,  -875,   330,   586,   376,  -875,   587,  -875,
    -875,  -875,  -875,  -875,  -875,   589,   590,   718,   409,   -16,
     657,   237,   720,   721,   594,    -2,  -875,   400,  -875,   596,
     662,   597,   690,   591,   601,   693,   608,   609,   -40,   -19,
      36,    54,   606,   232,   295,  -875,   611,   612,   613,   614,
     615,   616,   617,   618,   678,   -20,    46,   751,   -20,  -875,
    -875,  -875,   752,   -20,   620,   622,  -875,    -1,   551,  -875,
     753,   745,   625,   626,   623,   629,   149,   630,   -20,   -20,
     -20,   665,  -875,   654,  -875,   -50,    55,   454,   -20,  -875,
     153,   481,  -875,   403,   352,   352,  -875,  -875,   430,   430,
     766,   767,   768,   769,   770,   761,   772,   773,   774,   775,
     776,   777,   642,  -875,  -875,  -875,  -875,   -20,   -20,   -20,
     778,   780,   225,  -875,   781,  -875,  -875,   644,   645,   650,
     651,   652,   660,   786,   787,   744,   436,   522,   522,   356,
     663,   350,   149,   791,   792,   666,   325,  -875,   688,   278,
     293,   318,   795,   149,   149,   149,   796,   797,   137,  -875,
    -875,  -875,  -875,   689,   800,    57,   -20,   -20,   -20,   806,
     793,   671,   675,   805,   356,   670,   677,   -20,   807,  -875,
     810,  -875,  -875,   811,   812,   813,   680,  -875,  -875,  -875,
    -875,  -875,  -875,   -20,   682,   814,   -20,   685,   -20,   -20,
     -20,   815,   -20,   -20,   -20,  -875,   816,   686,   748,   -20,
     691,   138,   687,   694,   750,  -875,  1008,  -875,  -875,   695,
    -875,   149,   149,   818,   820,   702,    74,  -875,  -875,  -875,
     707,   708,   715,  -875,   729,  -875,   779,   783,   400,   717,
     716,   722,   723,   725,   731,   733,   765,   771,   782,  -875,
    -875,  -875,   817,   644,   645,   644,   204,   297,   709,   762,
     784,   162,  -875,   730,  -875,   836,   889,   891,   387,   232,
     381,   902,  -875,   785,  -875,   904,   -20,   789,   788,   790,
     798,   905,   799,   801,   802,   794,   794,  -875,  -875,   794,
     794,   804,  -875,  -875,  -875,   808,   803,   809,   821,   819,
     824,   825,   826,   827,  -875,   827,   828,   829,   896,   897,
     292,   822,  -875,   898,   831,   843,   832,   833,   834,   835,
    -875,   837,   838,   839,   841,   840,   845,   849,   859,   842,
     860,   861,   865,  -875,   852,   911,   867,   846,   913,   847,
     851,   853,   915,   863,   -20,   857,   873,   883,  -875,  -875,
     149,  -875,  -875,   877,  -875,   869,   875,    15,    21,  -875,
     924,   -20,   -20,   -20,   -20,   942,   933,   944,   935,   946,
     882,  -875,  -875,  -875,   948,   223,  -875,   954,   341,  -875,
    -875,  -875,   972,   907,   242,   362,   908,  -875,   645,   644,
    -875,  -875,   -20,   906,   973,   -20,   909,   910,  -875,   912,
     830,  -875,   914,  -875,  -875,   975,  1047,  1049,   978,  -875,
    -875,  -875,   945,  -875,  -875,  -875,  -875,   -20,   -20,   917,
    1042,  1046,  -875,   402,   149,   149,   957,  -875,  -875,  1048,
    -875,  -875,   827,  1059,   921,  -875,   989,  1062,   -20,  -875,
    -875,  -875,  -875,   991,  1064,   993,   994,   156,  -875,  -875,
    -875,   149,  -875,  -875,  -875,   931,  -875,   963,   260,   936,
     934,  1069,  1071,  -875,  -875,   419,   149,   149,   941,   149,
    -875,  -875,   149,  -875,   149,   940,   943,   949,   950,   951,
     952,   953,   955,   956,   958,   -20,  1004,  -875,  -875,  -875,
     964,  1005,   965,   967,  1012,  -875,   968,  -875,   980,  -875,
    -875,  -875,  -875,   947,   572,   960,   969,   572,  1022,  -875,
     321,  -875,  1018,   971,   974,   522,   976,   977,   979,   457,
    -875,   981,   982,   983,   984,   961,   990,   985,   987,  -875,
     970,  -875,   522,  1032,  -875,  1111,  -875,  1104,  1116,  -875,
    -875,   988,  -875,   995,  1003,  1006,  1126,  1127,   -20,  1141,
    -875,  -875,  -875,  1142,  -875,  -875,  -875,  1145,   149,   -20,
    1144,  1150,  1151,  1152,  -875,  -875,   917,   572,  1016,  1019,
    1154,  -875,  1156,  -875,  -875,  1153,  1021,  1024,   572,  -875,
     572,   572,  -875,   -20,  -875,  -875,  -875,  -875,   149,  -875,
     645,   400,  -875,  -875,  -875,  1025,  1026,   645,  -875,  -875,
    -875,   363,  1158,  -875,  1117,  -875,   400,  1164,  -875,  -875,
    -875,   917,  -875,  1165,  1166,  1033,  1031,  1034,  1113,  1035,
    1036,  1037,  1039,  1043,  1044,  1045,  1050,  -875,  -875,  1066,
    -875,   573,   500,  1131,  -875,  -875,  -875,  -875,  -875,  -875,
    1136,  -875,  -875,  -875,  -875,  -875,  1051,  1053,  1052,  1171,
    -875,  1120,  -875,  1055,  1056,   -20,   548,  1110,   -20,  -875,
    1083,  1054,   -20,   -20,   -20,   -20,  1057,  1192,  1194,  1188,
     149,  -875,  1195,  -875,  1155,   -20,   -20,   -20,  1054,  -875,
    -875,  -875,  -875,  1060,   934,  1063,  1065,  1087,  -875,  1067,
    1068,  1070,  1072,  -875,  1073,   829,  -875,   829,  1075,  1206,
    -875,  1077,  1080,  -875,  -875,  -875,  -875,  -875,  1078,  1076,
    1079,  1079,  1081,   410,  -875,  -875,  -875,  -875,  1082,  1205,
    1207,  -875,   465,  -875,   288,  -875,  -875,   504,  -875,  -875,
    -875,   432,   441,  1210,  1088,  1089,   446,   449,   475,   476,
     477,   478,   484,   485,   488,  -875,   223,  -875,  1085,   -20,
     -20,  1106,  -875,  1105,  -875,  1114,  -875,  1115,  -875,  1118,
    -875,  1119,  -875,  1121,  -875,  1122,  -875,  1091,  1092,  1178,
    1095,  1098,  1099,  1100,  1101,  1102,  1103,  1107,  1108,  1109,
    -875,  -875,  1230,  1054,  1054,  -875,  -875,  -875,  -875,  -875,
    -875,  -875,  -875,  -875,  -875,  -875
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -875,  -875,  -875,  -129,    26,  -221,  -700,  -874,   294,  -875,
    -512,  -875,  -192,  -875,  -443,  -463,  -500,  -875,  -815,  -875,
    -875,   986,  -287,  -875,   -30,  -875,   406,  -176,   331,  -875,
    -250,     2,    17,  -140,   959,  -206,   -54,    19,  -875,   -17,
    -875,  -875,  -875,  1236,  -875,   -27,    24
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -3
static const yytype_int16 yytable[] =
{
     104,   105,    68,   107,   108,   109,   375,   111,   112,   115,
     118,   124,   126,   128,   167,   170,   370,    69,   355,   113,
     113,   602,   297,   424,   427,   660,    66,   157,     7,     8,
     351,     7,     8,   227,   299,   658,   406,   158,   237,   301,
     601,   168,   603,    75,   416,     7,     8,   257,   147,   405,
      76,     7,     8,   284,   289,   290,   144,   189,   191,   193,
     228,    75,   231,   233,    75,   416,   133,   151,    76,   961,
     166,   159,   438,   394,   258,   400,    74,   446,   160,   259,
     149,   141,   369,   239,   285,   261,   262,   161,   162,   163,
      97,   164,   145,   933,   165,   169,   857,   423,   426,   175,
     176,   177,   998,   439,   245,   148,   240,   246,   462,   247,
     581,   248,   463,   224,   249,   404,   250,   236,     7,     8,
     416,   507,    75,    98,   251,   417,   531,   256,   365,    76,
     352,   234,     7,     8,   177,     7,     8,    75,   416,   312,
     177,   882,    99,    77,    76,   532,   418,   393,    78,    79,
     152,    75,   188,    68,   100,   731,   264,   265,    76,   238,
     447,    77,   759,   527,    77,    75,    78,    79,    69,    78,
      79,   300,    76,   528,   252,   253,   732,    66,   702,     7,
       8,   298,   769,   176,   704,   302,   303,   304,   305,    75,
     307,   101,   770,    75,   190,   506,    76,   192,  1024,  1025,
      76,   419,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   254,   464,   308,   309,   310,   465,   230,   420,
     180,   153,    77,   182,   183,   184,   185,    78,    79,   644,
     106,    75,   645,   646,    75,   175,   176,    77,    76,   102,
     232,    76,    78,    79,   186,   187,   177,   589,   356,   623,
     626,   255,   315,   316,   235,    75,    78,    79,   437,   289,
     290,   441,    76,   774,   775,    77,   443,   103,    75,   776,
      78,    79,   291,   292,   392,    76,   287,    75,   288,   177,
     777,   457,   458,   459,    76,    75,   311,   613,   614,    77,
     664,   469,    76,    77,    78,    79,   568,   119,    78,    79,
     569,   357,   289,   290,   515,   615,   153,   289,   290,   301,
     120,   154,   155,   167,   170,   291,   422,   573,   121,   517,
     483,   484,   485,   622,   625,   123,    75,   125,   396,   397,
     398,    77,   455,    76,    77,   399,    78,    79,    75,    78,
      79,    75,   140,   127,   519,    76,     7,     8,    76,   717,
     718,   719,   516,   518,   520,    77,    75,   871,   488,   489,
      78,    79,   604,    76,   875,   289,   290,   605,   110,   533,
     534,   535,   129,    78,    79,   291,   663,    77,   291,   425,
     544,    75,    78,    79,   130,    77,     7,     8,    76,   876,
      78,    79,   158,     7,     8,   503,   551,   131,   508,   554,
     726,   556,   557,   558,   727,   560,   561,   562,   134,   522,
     523,   524,   566,   945,   135,   946,   136,   968,   969,   180,
     289,   290,   137,   620,   184,   185,   116,   970,   971,   582,
     541,    78,    79,   291,   505,   390,   379,   380,    77,     7,
       8,    77,   381,    78,    79,   391,    78,    79,    68,   138,
      75,   289,   290,   576,   577,   607,    77,    76,   512,   513,
     608,    78,    79,    69,   291,   624,   722,   723,   178,   139,
     180,   621,    66,   182,   183,   184,   185,   575,   575,   633,
     466,    77,   383,   384,     7,     8,    78,    79,   385,   630,
     467,   814,   815,   816,   186,   187,   370,   180,   405,   142,
     182,   183,   184,   185,   194,   195,   196,   197,   143,   198,
     199,   150,   200,   201,   202,   203,   204,   205,   146,    91,
     728,    92,    93,    94,   729,   206,    95,   207,   208,     7,
       8,   959,   960,   209,   153,   210,   717,   718,   719,   154,
     502,   156,   809,   753,   754,   812,   178,   695,   180,   181,
      77,   182,   183,   184,   185,    78,    79,   132,   158,    92,
      93,    94,   211,   172,   706,   707,   708,   709,   174,   212,
     289,   290,   186,   187,   213,   214,   215,   783,   825,   826,
     229,   784,    84,   241,   216,   217,   218,    85,    86,   219,
     974,    87,    88,   242,   975,   733,    89,    90,   736,   976,
     872,   966,   967,   977,   981,   858,   698,   983,   982,   959,
     960,   984,   243,   703,   256,   880,   866,   244,   867,   868,
     747,   748,   220,   221,   178,   179,   180,   181,   260,   182,
     183,   184,   185,   985,   987,   989,   991,   986,   988,   990,
     992,   764,   993,   995,   263,   266,   994,   996,   972,   973,
     186,   187,   343,   344,   345,   346,   909,   910,   911,   912,
     780,   267,   222,   223,   268,   269,   270,    78,    79,   271,
     178,   179,   180,   181,   272,   182,   183,   184,   185,   273,
     755,   756,   274,   275,   276,   277,   898,   278,   799,   339,
     340,   821,   341,   279,   289,   342,   186,   187,   280,   281,
     282,   788,   283,   343,   344,   345,   346,   771,   836,   286,
     295,   296,   306,   301,   313,   347,   348,   349,   317,   330,
     354,   319,   785,   786,   318,   575,   331,   358,   332,   333,
     334,   335,   336,   337,   338,   352,   359,   360,   361,   362,
     371,   363,   364,   373,   389,   372,   374,   376,   378,   382,
     386,   847,   387,   388,   407,   395,   401,   402,   403,   409,
     408,   410,   852,   412,   413,   411,   414,   415,   421,   428,
     429,   430,   431,   432,   433,   434,   436,   440,   442,   449,
     435,   450,   453,   451,   452,   444,   869,   445,   454,   456,
     461,   460,   470,   471,   472,   473,   474,   475,   476,   477,
     478,   479,   480,   481,   486,   482,   487,   491,   493,   495,
     496,   497,   499,   500,   851,   501,   490,   509,   510,   498,
     514,   521,   525,   526,   511,   504,   530,   529,   536,   537,
     538,   540,   542,   545,   539,   543,   546,   547,   548,   549,
     553,   559,   563,   600,   870,   550,   565,   552,   572,   564,
     555,   585,   570,   567,   578,   574,   579,   877,   908,   571,
     580,   915,    -2,     1,   586,   919,   920,   921,   922,   583,
     584,   610,   617,   616,     2,   590,   591,   587,   930,   931,
     932,   588,   592,   593,   935,   594,     3,     4,     5,   595,
       6,   596,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,   597,   611,   618,   927,   619,   627,   598,
     629,   638,   661,   662,   666,   668,   674,   686,   677,   689,
     599,   693,   612,   696,   688,   690,   635,   628,   636,   691,
     705,   692,  1000,  1001,   634,   153,   637,   642,    38,    39,
     697,   639,   647,   640,   641,   649,   648,   650,   710,   711,
     712,   713,   714,   715,   716,    40,    41,    42,    43,   651,
     721,   652,    44,   685,   665,    45,    46,   653,   654,   655,
     656,   659,   608,   667,   669,   670,   671,   672,   724,   735,
     681,   742,   673,   740,   675,    47,   676,   678,    48,    49,
      50,   679,    51,    52,    53,    54,    55,    56,    57,    58,
       2,   680,   682,   683,   694,    59,    60,   684,    61,    62,
     687,   700,     3,     4,     5,   699,     6,   701,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,   725,
     730,   734,   738,   743,   737,   744,   745,   739,   751,   741,
     749,   746,   752,   757,   758,   760,   761,   762,   763,   765,
     766,   767,   768,   772,   773,   781,   778,   782,   779,   787,
     789,   790,   800,   802,    38,    39,   807,   791,   792,   793,
     805,   806,   808,   813,   794,   795,   818,   796,   797,   831,
     798,    40,    41,    42,    43,   810,   801,   803,    44,   804,
     837,    45,    46,   819,   811,   835,   820,   838,   822,   823,
     839,   824,   840,   827,   828,   829,   830,   833,   832,   834,
     841,    47,   845,   846,    48,    49,    50,   842,    51,    52,
      53,    54,    55,    56,    57,    58,   843,   848,   849,   844,
     853,    59,    60,   850,    61,    62,   854,   855,   856,   859,
     861,   860,   862,   864,   878,   863,   865,   873,   874,   879,
     881,   883,   884,   885,   886,   888,   887,   416,   889,   896,
     890,   891,   899,   892,   893,   894,   900,   904,   914,   916,
     895,   902,   905,   901,   903,   906,   907,   917,   924,   923,
     925,   926,   934,   928,   938,   936,   929,   937,   948,   939,
     940,   964,   941,   965,   942,   949,   943,   947,   950,   952,
     951,  1003,   954,  1002,   957,   963,   978,   999,   979,   980,
    1012,  1004,  1005,  1010,  1011,  1006,  1007,  1013,  1008,  1009,
    1014,  1015,  1016,  1017,  1018,  1019,  1023,   897,   997,  1020,
    1021,  1022,   956,   117,     0,     0,   468,     0,     0,     0,
       0,     0,     0,     0,   448
};

static const yytype_int16 yycheck[] =
{
      27,    28,     0,    30,    31,    32,   227,    34,    35,    36,
      37,    41,    42,    43,    68,    69,   222,     0,   210,    36,
      37,   484,   151,   273,   274,   537,     0,    26,    30,    31,
     206,    30,    31,    87,    26,   535,   257,    36,    28,    72,
     483,    68,   485,    63,    84,    30,    31,   101,    26,   255,
      70,    30,    31,    26,    70,    71,    28,    84,    85,    86,
      87,    63,    89,    90,    63,    84,    47,    78,    70,   943,
      68,    70,    26,   249,   101,   251,   163,    78,    77,   106,
      61,    55,   222,   143,    57,    26,    27,    86,    87,    88,
      98,    90,    64,   908,    68,    69,   796,   273,   274,    75,
      76,    77,   976,    57,    16,    83,   166,    19,   158,    21,
      36,    23,   162,    87,    26,   255,    28,    91,    30,    31,
      84,   371,    63,    98,    36,   165,    69,   101,    26,    70,
     163,    26,    30,    31,   110,    30,    31,    63,    84,   166,
     116,   841,    98,   163,    70,    88,   165,   163,   168,   169,
     161,    63,    26,   151,    98,   618,    26,    27,    70,   149,
     161,   163,   662,    26,   163,    63,   168,   169,   151,   168,
     169,   163,    70,    36,    86,    87,   619,   151,   163,    30,
      31,   155,    26,   159,   163,   159,   160,   161,   162,    63,
     164,    98,    36,    63,    26,   371,    70,    26,  1013,  1014,
      70,   165,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   124,   158,    91,    92,    93,   162,    26,   165,
      67,    98,   163,    70,    71,    72,    73,   168,   169,   516,
     163,    63,   519,   520,    63,   211,   212,   163,    70,    26,
      26,    70,   168,   169,    91,    92,   222,   468,    26,   499,
     500,   163,   135,   136,   149,    63,   168,   169,   285,    70,
      71,   288,    70,     3,     4,   163,   293,    26,    63,     9,
     168,   169,    83,    84,   248,    70,   158,    63,   160,   255,
      20,   308,   309,   310,    70,    63,   163,   125,   126,   163,
     540,   318,    70,   163,   168,   169,   158,   163,   168,   169,
     162,    26,    70,    71,    26,   143,    98,    70,    71,    72,
     163,   103,   104,   367,   368,    83,    84,   446,   164,    26,
     347,   348,   349,   499,   500,   164,    63,   164,    91,    92,
      93,   163,   306,    70,   163,    98,   168,   169,    63,   168,
     169,    63,    26,   164,    26,    70,    30,    31,    70,   126,
     127,   128,   379,   380,   381,   163,    63,   820,   133,   134,
     168,   169,   158,    70,   827,    70,    71,   163,   163,   396,
     397,   398,   163,   168,   169,    83,    84,   163,    83,    84,
     407,    63,   168,   169,   164,   163,    30,    31,    70,    26,
     168,   169,    36,    30,    31,   369,   423,   164,   372,   426,
     158,   428,   429,   430,   162,   432,   433,   434,   163,   383,
     384,   385,   439,   925,   163,   927,   163,   129,   130,    67,
      70,    71,   163,    36,    72,    73,   163,   139,   140,   456,
     404,   168,   169,    83,    84,    26,   106,   107,   163,    30,
      31,   163,   112,   168,   169,    36,   168,   169,   446,   163,
      63,    70,    71,   451,   452,   158,   163,    70,   133,   134,
     163,   168,   169,   446,    83,    84,   125,   126,    65,   163,
      67,   498,   446,    70,    71,    72,    73,   451,   452,   506,
      26,   163,   106,   107,    30,    31,   168,   169,   112,   506,
      36,   170,   171,   172,    91,    92,   702,    67,   704,   163,
      70,    71,    72,    73,     5,     6,     7,     8,   163,    10,
      11,     0,    13,    14,    15,    16,    17,    18,    26,    98,
     158,   100,   101,   102,   162,    26,   105,    28,    29,    30,
      31,   121,   122,    34,    98,    36,   126,   127,   128,   103,
     104,    98,   734,   141,   142,   737,    65,   574,    67,    68,
     163,    70,    71,    72,    73,   168,   169,    98,    36,   100,
     101,   102,    63,   163,   591,   592,   593,   594,    26,    70,
      70,    71,    91,    92,    75,    76,    77,   158,   121,   122,
      26,   162,    89,    36,    85,    86,    87,    94,    95,    90,
     158,    98,    99,    36,   162,   622,   103,   104,   625,   158,
     821,   136,   137,   162,   158,   797,   580,   158,   162,   121,
     122,   162,    36,   587,   588,   836,   808,    36,   810,   811,
     647,   648,   123,   124,    65,    66,    67,    68,    26,    70,
      71,    72,    73,   158,   158,   158,   158,   162,   162,   162,
     162,   668,   158,   158,   173,    26,   162,   162,   144,   145,
      91,    92,    79,    80,    81,    82,   108,   109,   110,   111,
     690,    26,   163,   164,    26,    26,    26,   168,   169,    26,
      65,    66,    67,    68,    26,    70,    71,    72,    73,    26,
     654,   655,    26,    28,    26,    26,   862,    26,   715,    65,
      66,   745,    68,    26,    70,    71,    91,    92,    26,    26,
      36,   699,    26,    79,    80,    81,    82,   681,   762,    28,
      26,    28,   163,    72,   163,    91,    92,    93,   158,   163,
      71,   162,   696,   697,   160,   699,   163,    26,   163,   163,
     163,   163,   163,   163,   163,   163,    26,    26,    26,    26,
      26,   164,   164,   163,    26,    71,   163,   163,   163,   163,
     163,   778,   163,   163,   158,    98,    36,    36,   164,   162,
      98,    71,   789,   162,    71,   174,   158,   158,   162,   158,
     158,   158,   158,   158,   158,   158,    98,    26,    26,    26,
     162,    36,   159,   158,   158,   165,   813,   165,   159,   159,
     136,   126,    26,    26,    26,    26,    26,    36,    26,    26,
      26,    26,    26,    26,    26,   163,    26,   163,   163,   159,
     159,   159,    26,    26,   788,    71,    35,    26,    26,   159,
     132,    26,    26,    26,   158,   162,    26,   138,    22,    36,
     159,    26,   162,    26,   159,   158,    26,    26,    26,    26,
      26,    26,    26,    26,   818,   165,    98,   165,    98,   163,
     165,   136,   165,   162,    36,   160,    36,   831,   885,   165,
     158,   888,     0,     1,   135,   892,   893,   894,   895,   162,
     162,   162,    36,   143,    12,   158,   160,    98,   905,   906,
     907,    98,   160,   160,   914,   160,    24,    25,    26,   158,
      28,   158,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,   158,   162,    36,   900,    36,    26,   158,
      26,    26,    36,    36,    36,    92,    98,    26,    98,    26,
     158,    26,   158,    70,    98,    98,   158,   162,   158,    98,
      26,    98,   979,   980,   165,    98,   158,   163,    96,    97,
      77,   162,   158,   162,   162,   162,   158,   158,    26,    36,
      26,    36,    26,    91,    26,   113,   114,   115,   116,   158,
      26,   162,   120,   131,   162,   123,   124,   163,   163,   163,
     163,   163,   163,   162,   162,   162,   162,   162,    26,    26,
     158,    26,   165,   173,   165,   143,   165,   162,   146,   147,
     148,   162,   150,   151,   152,   153,   154,   155,   156,   157,
      12,   162,   162,   162,   161,   163,   164,   162,   166,   167,
     163,   162,    24,    25,    26,   158,    28,   162,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,   162,
     162,   165,   162,    26,   165,    26,    98,   165,    36,   165,
     163,   136,    36,   126,    36,    26,   165,    98,    26,    98,
      26,    98,    98,   162,   131,    26,   160,    26,   164,   158,
     160,   158,    98,    98,    96,    97,   126,   158,   158,   158,
      98,   143,   165,    91,   162,   162,    98,   162,   162,   158,
     162,   113,   114,   115,   116,   165,   162,   162,   120,   162,
      98,   123,   124,   162,   165,   165,   162,    26,   162,   162,
      36,   162,    26,   162,   162,   162,   162,   162,   158,   162,
     162,   143,    26,    26,   146,   147,   148,   162,   150,   151,
     152,   153,   154,   155,   156,   157,   163,    26,    26,   163,
      26,   163,   164,    28,   166,   167,    26,    26,    26,   163,
      26,   162,    26,   162,    26,    32,   162,   162,   162,    72,
      26,    26,    26,   160,   163,   160,   162,    84,   162,   133,
     163,   162,    71,   160,   160,   160,    70,    36,    98,   126,
     160,   158,    92,   162,   162,   160,   160,   163,    26,   162,
      26,    33,   162,    28,   137,   162,    71,   162,    22,   162,
     162,    26,   162,    26,   162,   158,   163,   162,   158,   163,
     162,   136,   163,   137,   163,   163,    36,   162,   160,   160,
      72,   137,   137,   162,   162,   137,   137,   162,   137,   137,
     162,   162,   162,   162,   162,   162,    36,   861,   974,   162,
     162,   162,   941,    37,    -1,    -1,   317,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   298
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    12,    24,    25,    26,    28,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    96,    97,
     113,   114,   115,   116,   120,   123,   124,   143,   146,   147,
     148,   150,   151,   152,   153,   154,   155,   156,   157,   163,
     164,   166,   167,   176,   177,   178,   179,   198,   206,   207,
     208,   209,   210,   213,   163,    63,    70,   163,   168,   169,
     214,   219,   220,   221,    89,    94,    95,    98,    99,   103,
     104,    98,   100,   101,   102,   105,   212,    98,    98,    98,
      98,    98,    26,    26,   220,   220,   163,   220,   220,   220,
     163,   220,   220,   214,   218,   220,   163,   218,   220,   163,
     163,   164,   199,   164,   199,   164,   199,   164,   199,   163,
     164,   164,    98,   212,   163,   163,   163,   163,   163,   163,
      26,   179,   163,   163,    28,    64,    26,    26,    83,   212,
       0,    78,   161,    98,   103,   104,    98,    26,    36,    70,
      77,    86,    87,    88,    90,   179,   206,   211,   220,   179,
     211,   211,   163,   180,    26,   221,   221,   221,    65,    66,
      67,    68,    70,    71,    72,    73,    91,    92,    26,   220,
      26,   220,    26,   220,     5,     6,     7,     8,    10,    11,
      13,    14,    15,    16,    17,    18,    26,    28,    29,    34,
      36,    63,    70,    75,    76,    77,    85,    86,    87,    90,
     123,   124,   163,   164,   179,   195,   200,   211,   220,    26,
      26,   220,    26,   220,    26,   149,   179,    28,   149,   143,
     166,    36,    36,    36,    36,    16,    19,    21,    23,    26,
      28,    36,    86,    87,   124,   163,   179,   211,   220,   220,
      26,    26,    27,   173,    26,    27,    26,    26,    26,    26,
      26,    26,    26,    26,    26,    28,    26,    26,    26,    26,
      26,    26,    36,    26,    26,    57,    28,   158,   160,    70,
      71,    83,    84,   202,   205,    26,    28,   178,   179,    26,
     163,    72,   179,   179,   179,   179,   163,   179,    91,    92,
      93,   163,   220,   163,   196,   135,   136,   158,   160,   162,
     221,   221,   221,   221,   221,   221,   221,   221,   221,   221,
     163,   163,   163,   163,   163,   163,   163,   163,   163,    65,
      66,    68,    71,    79,    80,    81,    82,    91,    92,    93,
     201,   202,   163,   187,    71,   187,    26,    26,    26,    26,
      26,    26,    26,   164,   164,    26,   179,   206,   207,   208,
     210,    26,    71,   163,   163,   180,   163,   188,   163,   106,
     107,   112,   163,   106,   107,   112,   163,   163,   163,    26,
      26,    36,   179,   163,   202,    98,    91,    92,    93,    98,
     202,    36,    36,   164,   208,   210,   180,   158,    98,   162,
      71,   174,   162,    71,   158,   158,    84,   165,   165,   165,
     165,   162,    84,   202,   205,    84,   202,   205,   158,   158,
     158,   158,   158,   158,   158,   162,    98,   220,    26,    57,
      26,   220,    26,   220,   165,   165,    78,   161,   196,    26,
      36,   158,   158,   159,   159,   179,   159,   220,   220,   220,
     126,   136,   158,   162,   158,   162,    26,    36,   209,   220,
      26,    26,    26,    26,    26,    36,    26,    26,    26,    26,
      26,    26,   163,   220,   220,   220,    26,    26,   133,   134,
      35,   163,   189,   163,   190,   159,   159,   159,   159,    26,
      26,    71,   104,   179,   162,    84,   202,   205,   179,    26,
      26,   158,   133,   134,   132,    26,   220,    26,   220,    26,
     220,    26,   179,   179,   179,    26,    26,    26,    36,   138,
      26,    69,    88,   220,   220,   220,    22,    36,   159,   159,
      26,   179,   162,   158,   220,    26,    26,    26,    26,    26,
     165,   220,   165,    26,   220,   165,   220,   220,   220,    26,
     220,   220,   220,    26,   163,    98,   220,   162,   158,   162,
     165,   165,    98,   178,   160,   179,   206,   206,    36,    36,
     158,    36,   220,   162,   162,   136,   135,    98,    98,   180,
     158,   160,   160,   160,   160,   158,   158,   158,   158,   158,
      26,   189,   190,   189,   158,   163,   184,   158,   163,   185,
     162,   162,   158,   125,   126,   143,   143,    36,    36,    36,
      36,   220,   202,   205,    84,   202,   205,    26,   162,    26,
     214,   216,   217,   220,   165,   158,   158,   158,    26,   162,
     162,   162,   163,   197,   197,   197,   197,   158,   158,   162,
     158,   158,   162,   163,   163,   163,   163,   191,   191,   163,
     185,    36,    36,    84,   205,   162,    36,   162,    92,   162,
     162,   162,   162,   165,    98,   165,   165,    98,   162,   162,
     162,   158,   162,   162,   162,   131,    26,   163,    98,    26,
      98,    98,    98,    26,   161,   220,    70,    77,   179,   158,
     162,   162,   163,   179,   163,    26,   220,   220,   220,   220,
      26,    36,    26,    36,    26,    91,    26,   126,   127,   128,
     182,    26,   125,   126,    26,   162,   158,   162,   158,   162,
     162,   190,   189,   220,   165,    26,   220,   165,   162,   165,
     173,   165,    26,    26,    26,    98,   136,   220,   220,   163,
     181,    36,    36,   141,   142,   179,   179,   126,    36,   191,
      26,   165,    98,    26,   220,    98,    26,    98,    98,    26,
      36,   179,   162,   131,     3,     4,     9,    20,   160,   164,
     199,    26,    26,   158,   162,   179,   179,   158,   206,   160,
     158,   158,   158,   158,   162,   162,   162,   162,   162,   220,
      98,   162,    98,   162,   162,    98,   143,   126,   165,   187,
     165,   165,   187,    91,   170,   171,   172,   215,    98,   162,
     162,   211,   162,   162,   162,   121,   122,   162,   162,   162,
     162,   158,   158,   162,   162,   165,   211,    98,    26,    36,
      26,   162,   162,   163,   163,    26,    26,   220,    26,    26,
      28,   179,   220,    26,    26,    26,    26,   181,   187,   163,
     162,    26,    26,    32,   162,   162,   187,   187,   187,   220,
     179,   190,   180,   162,   162,   190,    26,   179,    26,    72,
     180,    26,   181,    26,    26,   160,   163,   162,   160,   162,
     163,   162,   160,   160,   160,   160,   133,   201,   202,    71,
      70,   162,   158,   162,    36,    92,   160,   160,   220,   108,
     109,   110,   111,   192,    98,   220,   126,   163,   193,   220,
     220,   220,   220,   162,    26,    26,    33,   179,    28,    71,
     220,   220,   220,   193,   162,   199,   162,   162,   137,   162,
     162,   162,   162,   163,   186,   185,   185,   162,    22,   158,
     158,   162,   163,   194,   163,   203,   203,   163,   204,   121,
     122,   182,   183,   163,    26,    26,   136,   137,   129,   130,
     139,   140,   144,   145,   158,   162,   158,   162,    36,   160,
     160,   158,   162,   158,   162,   158,   162,   158,   162,   158,
     162,   158,   162,   158,   162,   158,   162,   183,   182,   162,
     220,   220,   137,   136,   137,   137,   137,   137,   137,   137,
     162,   162,    72,   162,   162,   162,   162,   162,   162,   162,
     162,   162,   162,    36,   193,   193
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 3:
#line 610 "bfin-parse.y"
    {
	  insn = (yyvsp[(1) - (1)].instr);
	  if (insn == (INSTR_T) 0)
	    return NO_INSN_GENERATED;
	  else if (insn == (INSTR_T) - 1)
	    return SEMANTIC_ERROR;
	  else
	    return INSN_GENERATED;
	}
    break;

  case 5:
#line 624 "bfin-parse.y"
    {
	  if (((yyvsp[(1) - (6)].instr)->value & 0xf800) == 0xc000)
	    {
	      if (is_group1 ((yyvsp[(3) - (6)].instr)) && is_group2 ((yyvsp[(5) - (6)].instr)))
		(yyval.instr) = gen_multi_instr_1 ((yyvsp[(1) - (6)].instr), (yyvsp[(3) - (6)].instr), (yyvsp[(5) - (6)].instr));
	      else if (is_group2 ((yyvsp[(3) - (6)].instr)) && is_group1 ((yyvsp[(5) - (6)].instr)))
		(yyval.instr) = gen_multi_instr_1 ((yyvsp[(1) - (6)].instr), (yyvsp[(5) - (6)].instr), (yyvsp[(3) - (6)].instr));
	      else
		return yyerror ("Wrong 16 bit instructions groups, slot 2 and slot 3 must be 16-bit instrution group");
	    }
	  else if (((yyvsp[(3) - (6)].instr)->value & 0xf800) == 0xc000)
	    {
	      if (is_group1 ((yyvsp[(1) - (6)].instr)) && is_group2 ((yyvsp[(5) - (6)].instr)))
		(yyval.instr) = gen_multi_instr_1 ((yyvsp[(3) - (6)].instr), (yyvsp[(1) - (6)].instr), (yyvsp[(5) - (6)].instr));
	      else if (is_group2 ((yyvsp[(1) - (6)].instr)) && is_group1 ((yyvsp[(5) - (6)].instr)))
		(yyval.instr) = gen_multi_instr_1 ((yyvsp[(3) - (6)].instr), (yyvsp[(5) - (6)].instr), (yyvsp[(1) - (6)].instr));
	      else
		return yyerror ("Wrong 16 bit instructions groups, slot 1 and slot 3 must be 16-bit instrution group");
	    }
	  else if (((yyvsp[(5) - (6)].instr)->value & 0xf800) == 0xc000)
	    {
	      if (is_group1 ((yyvsp[(1) - (6)].instr)) && is_group2 ((yyvsp[(3) - (6)].instr)))
		(yyval.instr) = gen_multi_instr_1 ((yyvsp[(5) - (6)].instr), (yyvsp[(1) - (6)].instr), (yyvsp[(3) - (6)].instr));
	      else if (is_group2 ((yyvsp[(1) - (6)].instr)) && is_group1 ((yyvsp[(3) - (6)].instr)))
		(yyval.instr) = gen_multi_instr_1 ((yyvsp[(5) - (6)].instr), (yyvsp[(3) - (6)].instr), (yyvsp[(1) - (6)].instr));
	      else
		return yyerror ("Wrong 16 bit instructions groups, slot 1 and slot 2 must be 16-bit instrution group");
	    }
	  else
	    error ("\nIllegal Multi Issue Construct, at least any one of the slot must be DSP32 instruction group\n");
	}
    break;

  case 6:
#line 657 "bfin-parse.y"
    {
	  if (((yyvsp[(1) - (4)].instr)->value & 0xf800) == 0xc000)
	    {
	      if (is_group1 ((yyvsp[(3) - (4)].instr)))
		(yyval.instr) = gen_multi_instr_1 ((yyvsp[(1) - (4)].instr), (yyvsp[(3) - (4)].instr), 0);
	      else if (is_group2 ((yyvsp[(3) - (4)].instr)))
		(yyval.instr) = gen_multi_instr_1 ((yyvsp[(1) - (4)].instr), 0, (yyvsp[(3) - (4)].instr));
	      else
		return yyerror ("Wrong 16 bit instructions groups, slot 2 must be the 16-bit instruction group");
	    }
	  else if (((yyvsp[(3) - (4)].instr)->value & 0xf800) == 0xc000)
	    {
	      if (is_group1 ((yyvsp[(1) - (4)].instr)))
		(yyval.instr) = gen_multi_instr_1 ((yyvsp[(3) - (4)].instr), (yyvsp[(1) - (4)].instr), 0);
	      else if (is_group2 ((yyvsp[(1) - (4)].instr)))
		(yyval.instr) = gen_multi_instr_1 ((yyvsp[(3) - (4)].instr), 0, (yyvsp[(1) - (4)].instr));
	      else
		return yyerror ("Wrong 16 bit instructions groups, slot 1 must be the 16-bit instruction group");
	    }
	  else if (is_group1 ((yyvsp[(1) - (4)].instr)) && is_group2 ((yyvsp[(3) - (4)].instr)))
	      (yyval.instr) = gen_multi_instr_1 (0, (yyvsp[(1) - (4)].instr), (yyvsp[(3) - (4)].instr));
	  else if (is_group2 ((yyvsp[(1) - (4)].instr)) && is_group1 ((yyvsp[(3) - (4)].instr)))
	    (yyval.instr) = gen_multi_instr_1 (0, (yyvsp[(3) - (4)].instr), (yyvsp[(1) - (4)].instr));
	  else
	    return yyerror ("Wrong 16 bit instructions groups, slot 1 and slot 2 must be the 16-bit instruction group");
	}
    break;

  case 7:
#line 684 "bfin-parse.y"
    {
	(yyval.instr) = 0;
	yyerror ("");
	yyerrok;
	}
    break;

  case 8:
#line 695 "bfin-parse.y"
    {
	  (yyval.instr) = DSP32MAC (3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0);
	}
    break;

  case 9:
#line 699 "bfin-parse.y"
    {
	  int op0, op1;
	  int w0 = 0, w1 = 0;
	  int h00, h10, h01, h11;

	  if (check_macfunc_option (&(yyvsp[(1) - (2)].macfunc), &(yyvsp[(2) - (2)].mod)) < 0)
	    return yyerror ("bad option");

	  if ((yyvsp[(1) - (2)].macfunc).n == 0)
	    {
	      if ((yyvsp[(2) - (2)].mod).MM) 
		return yyerror ("(m) not allowed with a0 unit");
	      op1 = 3;
	      op0 = (yyvsp[(1) - (2)].macfunc).op;
	      w1 = 0;
              w0 = (yyvsp[(1) - (2)].macfunc).w;
	      h00 = IS_H ((yyvsp[(1) - (2)].macfunc).s0);
              h10 = IS_H ((yyvsp[(1) - (2)].macfunc).s1);
	      h01 = h11 = 0;
	    }
	  else
	    {
	      op1 = (yyvsp[(1) - (2)].macfunc).op;
	      op0 = 3;
	      w1 = (yyvsp[(1) - (2)].macfunc).w;
              w0 = 0;
	      h00 = h10 = 0;
	      h01 = IS_H ((yyvsp[(1) - (2)].macfunc).s0);
              h11 = IS_H ((yyvsp[(1) - (2)].macfunc).s1);
	    }
	  (yyval.instr) = DSP32MAC (op1, (yyvsp[(2) - (2)].mod).MM, (yyvsp[(2) - (2)].mod).mod, w1, (yyvsp[(1) - (2)].macfunc).P, h01, h11, h00, h10,
			 &(yyvsp[(1) - (2)].macfunc).dst, op0, &(yyvsp[(1) - (2)].macfunc).s0, &(yyvsp[(1) - (2)].macfunc).s1, w0);
	}
    break;

  case 10:
#line 737 "bfin-parse.y"
    {
	  Register *dst;

	  if (check_macfuncs (&(yyvsp[(1) - (5)].macfunc), &(yyvsp[(2) - (5)].mod), &(yyvsp[(4) - (5)].macfunc), &(yyvsp[(5) - (5)].mod)) < 0) 
	    return -1;
	  notethat ("assign_macfunc (.), assign_macfunc (.)\n");

	  if ((yyvsp[(1) - (5)].macfunc).w)
	    dst = &(yyvsp[(1) - (5)].macfunc).dst;
	  else
	    dst = &(yyvsp[(4) - (5)].macfunc).dst;

	  (yyval.instr) = DSP32MAC ((yyvsp[(1) - (5)].macfunc).op, (yyvsp[(2) - (5)].mod).MM, (yyvsp[(5) - (5)].mod).mod, (yyvsp[(1) - (5)].macfunc).w, (yyvsp[(1) - (5)].macfunc).P,
			 IS_H ((yyvsp[(1) - (5)].macfunc).s0),  IS_H ((yyvsp[(1) - (5)].macfunc).s1), IS_H ((yyvsp[(4) - (5)].macfunc).s0), IS_H ((yyvsp[(4) - (5)].macfunc).s1),
			 dst, (yyvsp[(4) - (5)].macfunc).op, &(yyvsp[(1) - (5)].macfunc).s0, &(yyvsp[(1) - (5)].macfunc).s1, (yyvsp[(4) - (5)].macfunc).w);
	}
    break;

  case 11:
#line 757 "bfin-parse.y"
    {
	  notethat ("dsp32alu: DISALGNEXCPT\n");
	  (yyval.instr) = DSP32ALU (18, 0, 0, 0, 0, 0, 0, 0, 3);
	}
    break;

  case 12:
#line 762 "bfin-parse.y"
    {
	  if (IS_DREG ((yyvsp[(1) - (6)].reg)) && !IS_A1 ((yyvsp[(4) - (6)].reg)) && IS_A1 ((yyvsp[(5) - (6)].reg)))
	    {
	      notethat ("dsp32alu: dregs = ( A0 += A1 )\n");
	      (yyval.instr) = DSP32ALU (11, 0, 0, &(yyvsp[(1) - (6)].reg), 0, 0, 0, 0, 0);
	    }
	  else 
	    return yyerror ("Register mismatch");
	}
    break;

  case 13:
#line 772 "bfin-parse.y"
    {
	  if (!IS_A1 ((yyvsp[(4) - (6)].reg)) && IS_A1 ((yyvsp[(5) - (6)].reg)))
	    {
	      notethat ("dsp32alu: dregs_half = ( A0 += A1 )\n");
	      (yyval.instr) = DSP32ALU (11, IS_H ((yyvsp[(1) - (6)].reg)), 0, &(yyvsp[(1) - (6)].reg), 0, 0, 0, 0, 1);
	    }
	  else
	    return yyerror ("Register mismatch");
	}
    break;

  case 14:
#line 782 "bfin-parse.y"
    {
	  notethat ("dsp32alu: A_ZERO_DOT_H = dregs_hi\n");
	  (yyval.instr) = DSP32ALU (9, IS_H ((yyvsp[(3) - (3)].reg)), 0, 0, &(yyvsp[(3) - (3)].reg), 0, 0, 0, 0);
	}
    break;

  case 15:
#line 787 "bfin-parse.y"
    {
	  notethat ("dsp32alu: A_ZERO_DOT_H = dregs_hi\n");
	  (yyval.instr) = DSP32ALU (9, IS_H ((yyvsp[(3) - (3)].reg)), 0, 0, &(yyvsp[(3) - (3)].reg), 0, 0, 0, 2);
	}
    break;

  case 16:
#line 793 "bfin-parse.y"
    {
	  if (!IS_DREG ((yyvsp[(2) - (17)].reg)) || !IS_DREG ((yyvsp[(4) - (17)].reg)))
	    return yyerror ("Dregs expected");
	  else if (!valid_dreg_pair (&(yyvsp[(9) - (17)].reg), (yyvsp[(11) - (17)].expr)))
	    return yyerror ("Bad dreg pair");
	  else if (!valid_dreg_pair (&(yyvsp[(13) - (17)].reg), (yyvsp[(15) - (17)].expr)))
	    return yyerror ("Bad dreg pair");
	  else
	    {
	      notethat ("dsp32alu: (dregs , dregs ) = BYTEOP16P (dregs_pair , dregs_pair ) (half)\n");
	      (yyval.instr) = DSP32ALU (21, 0, &(yyvsp[(2) - (17)].reg), &(yyvsp[(4) - (17)].reg), &(yyvsp[(9) - (17)].reg), &(yyvsp[(13) - (17)].reg), (yyvsp[(17) - (17)].r0).r0, 0, 0);
	    }
	}
    break;

  case 17:
#line 809 "bfin-parse.y"
    {
	  if (!IS_DREG ((yyvsp[(2) - (17)].reg)) || !IS_DREG ((yyvsp[(4) - (17)].reg)))
	    return yyerror ("Dregs expected");
	  else if (!valid_dreg_pair (&(yyvsp[(9) - (17)].reg), (yyvsp[(11) - (17)].expr)))
	    return yyerror ("Bad dreg pair");
	  else if (!valid_dreg_pair (&(yyvsp[(13) - (17)].reg), (yyvsp[(15) - (17)].expr)))
	    return yyerror ("Bad dreg pair");
	  else
	    {
	      notethat ("dsp32alu: (dregs , dregs ) = BYTEOP16M (dregs_pair , dregs_pair ) (aligndir)\n");
	      (yyval.instr) = DSP32ALU (21, 0, &(yyvsp[(2) - (17)].reg), &(yyvsp[(4) - (17)].reg), &(yyvsp[(9) - (17)].reg), &(yyvsp[(13) - (17)].reg), (yyvsp[(17) - (17)].r0).r0, 0, 1);
	    }
	}
    break;

  case 18:
#line 824 "bfin-parse.y"
    {
	  if (!IS_DREG ((yyvsp[(2) - (11)].reg)) || !IS_DREG ((yyvsp[(4) - (11)].reg)))
	    return yyerror ("Dregs expected");
	  else if (!valid_dreg_pair (&(yyvsp[(8) - (11)].reg), (yyvsp[(10) - (11)].expr)))
	    return yyerror ("Bad dreg pair");
	  else
	    {
	      notethat ("dsp32alu: (dregs , dregs ) = BYTEUNPACK dregs_pair (aligndir)\n");
	      (yyval.instr) = DSP32ALU (24, 0, &(yyvsp[(2) - (11)].reg), &(yyvsp[(4) - (11)].reg), &(yyvsp[(8) - (11)].reg), 0, (yyvsp[(11) - (11)].r0).r0, 0, 1);
	    }
	}
    break;

  case 19:
#line 836 "bfin-parse.y"
    {
	  if (IS_DREG ((yyvsp[(2) - (11)].reg)) && IS_DREG ((yyvsp[(4) - (11)].reg)) && IS_DREG ((yyvsp[(8) - (11)].reg)))
	    {
	      notethat ("dsp32alu: (dregs , dregs ) = SEARCH dregs (searchmod)\n");
	      (yyval.instr) = DSP32ALU (13, 0, &(yyvsp[(2) - (11)].reg), &(yyvsp[(4) - (11)].reg), &(yyvsp[(8) - (11)].reg), 0, 0, 0, (yyvsp[(10) - (11)].r0).r0);
	    }
	  else
	    return yyerror ("Register mismatch");
	}
    break;

  case 20:
#line 847 "bfin-parse.y"
    {
	  if (IS_DREG ((yyvsp[(1) - (11)].reg)) && IS_DREG ((yyvsp[(7) - (11)].reg)))
	    {
	      notethat ("dsp32alu: dregs = A1.l + A1.h, dregs = A0.l + A0.h  \n");
	      (yyval.instr) = DSP32ALU (12, 0, &(yyvsp[(1) - (11)].reg), &(yyvsp[(7) - (11)].reg), 0, 0, 0, 0, 1);
	    }
	  else
	    return yyerror ("Register mismatch");
	}
    break;

  case 21:
#line 859 "bfin-parse.y"
    {
	  if (IS_DREG ((yyvsp[(1) - (12)].reg)) && IS_DREG ((yyvsp[(7) - (12)].reg)) && !REG_SAME ((yyvsp[(3) - (12)].reg), (yyvsp[(5) - (12)].reg))
	      && IS_A1 ((yyvsp[(9) - (12)].reg)) && !IS_A1 ((yyvsp[(11) - (12)].reg)))
	    {
	      notethat ("dsp32alu: dregs = A1 + A0 , dregs = A1 - A0 (amod1)\n");
	      (yyval.instr) = DSP32ALU (17, 0, &(yyvsp[(1) - (12)].reg), &(yyvsp[(7) - (12)].reg), 0, 0, (yyvsp[(12) - (12)].modcodes).s0, (yyvsp[(12) - (12)].modcodes).x0, 0);
	      
	    }
	  else if (IS_DREG ((yyvsp[(1) - (12)].reg)) && IS_DREG ((yyvsp[(7) - (12)].reg)) && !REG_SAME ((yyvsp[(3) - (12)].reg), (yyvsp[(5) - (12)].reg))
		   && !IS_A1 ((yyvsp[(9) - (12)].reg)) && IS_A1 ((yyvsp[(11) - (12)].reg)))
	    {
	      notethat ("dsp32alu: dregs = A0 + A1 , dregs = A0 - A1 (amod1)\n");
	      (yyval.instr) = DSP32ALU (17, 0, &(yyvsp[(1) - (12)].reg), &(yyvsp[(7) - (12)].reg), 0, 0, (yyvsp[(12) - (12)].modcodes).s0, (yyvsp[(12) - (12)].modcodes).x0, 1);
	    }
	  else
	    return yyerror ("Register mismatch");
	}
    break;

  case 22:
#line 878 "bfin-parse.y"
    {
	  if ((yyvsp[(4) - (12)].r0).r0 == (yyvsp[(10) - (12)].r0).r0) 
	    return yyerror ("Operators must differ");

	  if (IS_DREG ((yyvsp[(1) - (12)].reg)) && IS_DREG ((yyvsp[(3) - (12)].reg)) && IS_DREG ((yyvsp[(5) - (12)].reg))
	      && REG_SAME ((yyvsp[(3) - (12)].reg), (yyvsp[(9) - (12)].reg)) && REG_SAME ((yyvsp[(5) - (12)].reg), (yyvsp[(11) - (12)].reg)))
	    {
	      notethat ("dsp32alu: dregs = dregs + dregs,"
		       "dregs = dregs - dregs (amod1)\n");
	      (yyval.instr) = DSP32ALU (4, 0, &(yyvsp[(1) - (12)].reg), &(yyvsp[(7) - (12)].reg), &(yyvsp[(3) - (12)].reg), &(yyvsp[(5) - (12)].reg), (yyvsp[(12) - (12)].modcodes).s0, (yyvsp[(12) - (12)].modcodes).x0, 2);
	    }
	  else
	    return yyerror ("Register mismatch");
	}
    break;

  case 23:
#line 896 "bfin-parse.y"
    {
	  if (!REG_SAME ((yyvsp[(3) - (12)].reg), (yyvsp[(9) - (12)].reg)) || !REG_SAME ((yyvsp[(5) - (12)].reg), (yyvsp[(11) - (12)].reg)))
	    return yyerror ("Differing source registers");

	  if (!IS_DREG ((yyvsp[(1) - (12)].reg)) || !IS_DREG ((yyvsp[(3) - (12)].reg)) || !IS_DREG ((yyvsp[(5) - (12)].reg)) || !IS_DREG ((yyvsp[(7) - (12)].reg))) 
	    return yyerror ("Dregs expected");

	
	  if ((yyvsp[(4) - (12)].r0).r0 == 1 && (yyvsp[(10) - (12)].r0).r0 == 2)
	    {
	      notethat ("dsp32alu:  dregs = dregs .|. dregs , dregs = dregs .|. dregs (amod2)\n");
	      (yyval.instr) = DSP32ALU (1, 1, &(yyvsp[(1) - (12)].reg), &(yyvsp[(7) - (12)].reg), &(yyvsp[(3) - (12)].reg), &(yyvsp[(5) - (12)].reg), (yyvsp[(12) - (12)].modcodes).s0, (yyvsp[(12) - (12)].modcodes).x0, (yyvsp[(12) - (12)].modcodes).r0);
	    }
	  else if ((yyvsp[(4) - (12)].r0).r0 == 0 && (yyvsp[(10) - (12)].r0).r0 == 3)
	    {
	      notethat ("dsp32alu:  dregs = dregs .|. dregs , dregs = dregs .|. dregs (amod2)\n");
	      (yyval.instr) = DSP32ALU (1, 0, &(yyvsp[(1) - (12)].reg), &(yyvsp[(7) - (12)].reg), &(yyvsp[(3) - (12)].reg), &(yyvsp[(5) - (12)].reg), (yyvsp[(12) - (12)].modcodes).s0, (yyvsp[(12) - (12)].modcodes).x0, (yyvsp[(12) - (12)].modcodes).r0);
	    }
	  else
	    return yyerror ("Bar operand mismatch");
	}
    break;

  case 24:
#line 919 "bfin-parse.y"
    {
	  int op;

	  if (IS_DREG ((yyvsp[(1) - (5)].reg)) && IS_DREG ((yyvsp[(4) - (5)].reg)))
	    {
	      if ((yyvsp[(5) - (5)].r0).r0)
		{
		  notethat ("dsp32alu: dregs = ABS dregs (v)\n");
		  op = 6;
		}
	      else
		{
		  /* Vector version of ABS.  */
		  notethat ("dsp32alu: dregs = ABS dregs\n");
		  op = 7;
		}
	      (yyval.instr) = DSP32ALU (op, 0, 0, &(yyvsp[(1) - (5)].reg), &(yyvsp[(4) - (5)].reg), 0, 0, 0, 2);
	    }
	  else
	    return yyerror ("Dregs expected");
	}
    break;

  case 25:
#line 941 "bfin-parse.y"
    {
	  notethat ("dsp32alu: Ax = ABS Ax\n");
	  (yyval.instr) = DSP32ALU (16, IS_A1 ((yyvsp[(1) - (3)].reg)), 0, 0, 0, 0, 0, 0, IS_A1 ((yyvsp[(3) - (3)].reg)));
	}
    break;

  case 26:
#line 946 "bfin-parse.y"
    {
	  if (IS_DREG_L ((yyvsp[(3) - (3)].reg)))
	    {
	      notethat ("dsp32alu: A0.l = reg_half\n");
	      (yyval.instr) = DSP32ALU (9, IS_H ((yyvsp[(3) - (3)].reg)), 0, 0, &(yyvsp[(3) - (3)].reg), 0, 0, 0, 0);
	    }
	  else
	    return yyerror ("A0.l = Rx.l expected");
	}
    break;

  case 27:
#line 956 "bfin-parse.y"
    {
	  if (IS_DREG_L ((yyvsp[(3) - (3)].reg)))
	    {
	      notethat ("dsp32alu: A1.l = reg_half\n");
	      (yyval.instr) = DSP32ALU (9, IS_H ((yyvsp[(3) - (3)].reg)), 0, 0, &(yyvsp[(3) - (3)].reg), 0, 0, 0, 2);
	    }
	  else
	    return yyerror ("A1.l = Rx.l expected");
	}
    break;

  case 28:
#line 967 "bfin-parse.y"
    {
	  if (IS_DREG ((yyvsp[(1) - (8)].reg)) && IS_DREG ((yyvsp[(5) - (8)].reg)) && IS_DREG ((yyvsp[(7) - (8)].reg)))
	    {
	      notethat ("dsp32shift: dregs = ALIGN8 (dregs , dregs )\n");
	      (yyval.instr) = DSP32SHIFT (13, &(yyvsp[(1) - (8)].reg), &(yyvsp[(7) - (8)].reg), &(yyvsp[(5) - (8)].reg), (yyvsp[(3) - (8)].r0).r0, 0);
	    }
	  else
	    return yyerror ("Dregs expected");
	}
    break;

  case 29:
#line 978 "bfin-parse.y"
    {
	  if (!IS_DREG ((yyvsp[(1) - (13)].reg)))
	    return yyerror ("Dregs expected");
	  else if (!valid_dreg_pair (&(yyvsp[(5) - (13)].reg), (yyvsp[(7) - (13)].expr)))
	    return yyerror ("Bad dreg pair");
	  else if (!valid_dreg_pair (&(yyvsp[(9) - (13)].reg), (yyvsp[(11) - (13)].expr)))
	    return yyerror ("Bad dreg pair");
	  else
	    {
	      notethat ("dsp32alu: dregs = BYTEOP1P (dregs_pair , dregs_pair ) (T)\n");
	      (yyval.instr) = DSP32ALU (20, 0, 0, &(yyvsp[(1) - (13)].reg), &(yyvsp[(5) - (13)].reg), &(yyvsp[(9) - (13)].reg), (yyvsp[(13) - (13)].modcodes).s0, 0, (yyvsp[(13) - (13)].modcodes).r0);
	    }
	}
    break;

  case 30:
#line 992 "bfin-parse.y"
    {
	  if (!IS_DREG ((yyvsp[(1) - (12)].reg)))
	    return yyerror ("Dregs expected");
	  else if (!valid_dreg_pair (&(yyvsp[(5) - (12)].reg), (yyvsp[(7) - (12)].expr)))
	    return yyerror ("Bad dreg pair");
	  else if (!valid_dreg_pair (&(yyvsp[(9) - (12)].reg), (yyvsp[(11) - (12)].expr)))
	    return yyerror ("Bad dreg pair");
	  else
	    {
	      notethat ("dsp32alu: dregs = BYTEOP1P (dregs_pair , dregs_pair ) (T)\n");
	      (yyval.instr) = DSP32ALU (20, 0, 0, &(yyvsp[(1) - (12)].reg), &(yyvsp[(5) - (12)].reg), &(yyvsp[(9) - (12)].reg), 0, 0, 0);
	    }
	}
    break;

  case 31:
#line 1008 "bfin-parse.y"
    {
	  if (!IS_DREG ((yyvsp[(1) - (13)].reg)))
	    return yyerror ("Dregs expected");
	  else if (!valid_dreg_pair (&(yyvsp[(5) - (13)].reg), (yyvsp[(7) - (13)].expr)))
	    return yyerror ("Bad dreg pair");
	  else if (!valid_dreg_pair (&(yyvsp[(9) - (13)].reg), (yyvsp[(11) - (13)].expr)))
	    return yyerror ("Bad dreg pair");
	  else
	    {
	      notethat ("dsp32alu: dregs = BYTEOP2P (dregs_pair , dregs_pair ) (rnd_op)\n");
	      (yyval.instr) = DSP32ALU (22, (yyvsp[(13) - (13)].modcodes).r0, 0, &(yyvsp[(1) - (13)].reg), &(yyvsp[(5) - (13)].reg), &(yyvsp[(9) - (13)].reg), (yyvsp[(13) - (13)].modcodes).s0, (yyvsp[(13) - (13)].modcodes).x0, (yyvsp[(13) - (13)].modcodes).aop);
	    }
	}
    break;

  case 32:
#line 1024 "bfin-parse.y"
    {
	  if (!IS_DREG ((yyvsp[(1) - (13)].reg)))
	    return yyerror ("Dregs expected");
	  else if (!valid_dreg_pair (&(yyvsp[(5) - (13)].reg), (yyvsp[(7) - (13)].expr)))
	    return yyerror ("Bad dreg pair");
	  else if (!valid_dreg_pair (&(yyvsp[(9) - (13)].reg), (yyvsp[(11) - (13)].expr)))
	    return yyerror ("Bad dreg pair");
	  else
	    {
	      notethat ("dsp32alu: dregs = BYTEOP2P (dregs_pair , dregs_pair ) (rnd_op)\n");
	      (yyval.instr) = DSP32ALU (22, (yyvsp[(13) - (13)].modcodes).r0, 0, &(yyvsp[(1) - (13)].reg), &(yyvsp[(5) - (13)].reg), &(yyvsp[(9) - (13)].reg), (yyvsp[(13) - (13)].modcodes).s0, 0, (yyvsp[(13) - (13)].modcodes).x0);
	    }
	}
    break;

  case 33:
#line 1040 "bfin-parse.y"
    {
	  if (!IS_DREG ((yyvsp[(1) - (13)].reg)))
	    return yyerror ("Dregs expected");
	  else if (!valid_dreg_pair (&(yyvsp[(5) - (13)].reg), (yyvsp[(7) - (13)].expr)))
	    return yyerror ("Bad dreg pair");
	  else if (!valid_dreg_pair (&(yyvsp[(9) - (13)].reg), (yyvsp[(11) - (13)].expr)))
	    return yyerror ("Bad dreg pair");
	  else
	    {
	      notethat ("dsp32alu: dregs = BYTEOP3P (dregs_pair , dregs_pair ) (b3_op)\n");
	      (yyval.instr) = DSP32ALU (23, (yyvsp[(13) - (13)].modcodes).x0, 0, &(yyvsp[(1) - (13)].reg), &(yyvsp[(5) - (13)].reg), &(yyvsp[(9) - (13)].reg), (yyvsp[(13) - (13)].modcodes).s0, 0, 0);
	    }
	}
    break;

  case 34:
#line 1055 "bfin-parse.y"
    {
	  if (IS_DREG ((yyvsp[(1) - (8)].reg)) && IS_DREG ((yyvsp[(5) - (8)].reg)) && IS_DREG ((yyvsp[(7) - (8)].reg)))
	    {
	      notethat ("dsp32alu: dregs = BYTEPACK (dregs , dregs )\n");
	      (yyval.instr) = DSP32ALU (24, 0, 0, &(yyvsp[(1) - (8)].reg), &(yyvsp[(5) - (8)].reg), &(yyvsp[(7) - (8)].reg), 0, 0, 0);
	    }
	  else
	    return yyerror ("Dregs expected");
	}
    break;

  case 35:
#line 1067 "bfin-parse.y"
    {
	  if (IS_HCOMPL ((yyvsp[(1) - (17)].reg), (yyvsp[(3) - (17)].reg)) && IS_HCOMPL ((yyvsp[(7) - (17)].reg), (yyvsp[(14) - (17)].reg)) && IS_HCOMPL ((yyvsp[(10) - (17)].reg), (yyvsp[(17) - (17)].reg)))
	    {
	      notethat ("dsp32alu:	dregs_hi = dregs_lo ="
		       "SIGN (dregs_hi) * dregs_hi + "
		       "SIGN (dregs_lo) * dregs_lo \n");

		(yyval.instr) = DSP32ALU (12, 0, 0, &(yyvsp[(1) - (17)].reg), &(yyvsp[(7) - (17)].reg), &(yyvsp[(10) - (17)].reg), 0, 0, 0);
	    }
	  else
	    return yyerror ("Dregs expected");
	}
    break;

  case 36:
#line 1080 "bfin-parse.y"
    {
	  if (IS_DREG ((yyvsp[(1) - (6)].reg)) && IS_DREG ((yyvsp[(3) - (6)].reg)) && IS_DREG ((yyvsp[(5) - (6)].reg)))
	    {
	      if ((yyvsp[(6) - (6)].modcodes).aop == 0)
		{
	          /* No saturation flag specified, generate the 16 bit variant.  */
		  notethat ("COMP3op: dregs = dregs +- dregs\n");
		  (yyval.instr) = COMP3OP (&(yyvsp[(1) - (6)].reg), &(yyvsp[(3) - (6)].reg), &(yyvsp[(5) - (6)].reg), (yyvsp[(4) - (6)].r0).r0);
		}
	      else
		{
		 /* Saturation flag specified, generate the 32 bit variant.  */
                 notethat ("dsp32alu: dregs = dregs +- dregs (amod1)\n");
                 (yyval.instr) = DSP32ALU (4, 0, 0, &(yyvsp[(1) - (6)].reg), &(yyvsp[(3) - (6)].reg), &(yyvsp[(5) - (6)].reg), (yyvsp[(6) - (6)].modcodes).s0, (yyvsp[(6) - (6)].modcodes).x0, (yyvsp[(4) - (6)].r0).r0);
		}
	    }
	  else
	    if (IS_PREG ((yyvsp[(1) - (6)].reg)) && IS_PREG ((yyvsp[(3) - (6)].reg)) && IS_PREG ((yyvsp[(5) - (6)].reg)) && (yyvsp[(4) - (6)].r0).r0 == 0)
	      {
		notethat ("COMP3op: pregs = pregs + pregs\n");
		(yyval.instr) = COMP3OP (&(yyvsp[(1) - (6)].reg), &(yyvsp[(3) - (6)].reg), &(yyvsp[(5) - (6)].reg), 5);
	      }
	    else
	      return yyerror ("Dregs expected");
	}
    break;

  case 37:
#line 1106 "bfin-parse.y"
    {
	  int op;

	  if (IS_DREG ((yyvsp[(1) - (9)].reg)) && IS_DREG ((yyvsp[(5) - (9)].reg)) && IS_DREG ((yyvsp[(7) - (9)].reg)))
	    {
	      if ((yyvsp[(9) - (9)].r0).r0)
		op = 6;
	      else
		op = 7;

	      notethat ("dsp32alu: dregs = {MIN|MAX} (dregs, dregs)\n");
	      (yyval.instr) = DSP32ALU (op, 0, 0, &(yyvsp[(1) - (9)].reg), &(yyvsp[(5) - (9)].reg), &(yyvsp[(7) - (9)].reg), 0, 0, (yyvsp[(3) - (9)].r0).r0);
	    }
	  else
	    return yyerror ("Dregs expected");
	}
    break;

  case 38:
#line 1124 "bfin-parse.y"
    {
	  notethat ("dsp32alu: Ax = - Ax\n");
	  (yyval.instr) = DSP32ALU (14, IS_A1 ((yyvsp[(1) - (3)].reg)), 0, 0, 0, 0, 0, 0, IS_A1 ((yyvsp[(3) - (3)].reg)));
	}
    break;

  case 39:
#line 1129 "bfin-parse.y"
    {
	  notethat ("dsp32alu: dregs_lo = dregs_lo +- dregs_lo (amod1)\n");
	  (yyval.instr) = DSP32ALU (2 | (yyvsp[(4) - (6)].r0).r0, IS_H ((yyvsp[(1) - (6)].reg)), 0, &(yyvsp[(1) - (6)].reg), &(yyvsp[(3) - (6)].reg), &(yyvsp[(5) - (6)].reg),
			 (yyvsp[(6) - (6)].modcodes).s0, (yyvsp[(6) - (6)].modcodes).x0, HL2 ((yyvsp[(3) - (6)].reg), (yyvsp[(5) - (6)].reg)));
	}
    break;

  case 40:
#line 1135 "bfin-parse.y"
    {
	  if (EXPR_VALUE ((yyvsp[(3) - (3)].expr)) == 0 && !REG_SAME ((yyvsp[(1) - (3)].reg), (yyvsp[(2) - (3)].reg)))
	    {
	      notethat ("dsp32alu: A1 = A0 = 0\n");
	      (yyval.instr) = DSP32ALU (8, 0, 0, 0, 0, 0, 0, 0, 2);
	    }
	  else
	    return yyerror ("Bad value, 0 expected");
	}
    break;

  case 41:
#line 1147 "bfin-parse.y"
    {
	  if (REG_SAME ((yyvsp[(1) - (5)].reg), (yyvsp[(2) - (5)].reg)))
	    {
	      notethat ("dsp32alu: Ax = Ax (S)\n");
	      (yyval.instr) = DSP32ALU (8, 0, 0, 0, 0, 0, 1, 0, IS_A1 ((yyvsp[(1) - (5)].reg)));
	    }
	  else
	    return yyerror ("Registers must be equal");
	}
    break;

  case 42:
#line 1158 "bfin-parse.y"
    {
	  if (IS_DREG ((yyvsp[(3) - (6)].reg)))
	    {
	      notethat ("dsp32alu: dregs_half = dregs (RND)\n");
	      (yyval.instr) = DSP32ALU (12, IS_H ((yyvsp[(1) - (6)].reg)), 0, &(yyvsp[(1) - (6)].reg), &(yyvsp[(3) - (6)].reg), 0, 0, 0, 3);
	    }
	  else
	    return yyerror ("Dregs expected");
	}
    break;

  case 43:
#line 1169 "bfin-parse.y"
    {
	  if (IS_DREG ((yyvsp[(3) - (8)].reg)) && IS_DREG ((yyvsp[(5) - (8)].reg)))
	    {
	      notethat ("dsp32alu: dregs_half = dregs (+-) dregs (RND12)\n");
	      (yyval.instr) = DSP32ALU (5, IS_H ((yyvsp[(1) - (8)].reg)), 0, &(yyvsp[(1) - (8)].reg), &(yyvsp[(3) - (8)].reg), &(yyvsp[(5) - (8)].reg), 0, 0, (yyvsp[(4) - (8)].r0).r0);
	    }
	  else
	    return yyerror ("Dregs expected");
	}
    break;

  case 44:
#line 1180 "bfin-parse.y"
    {
	  if (IS_DREG ((yyvsp[(3) - (8)].reg)) && IS_DREG ((yyvsp[(5) - (8)].reg)))
	    {
	      notethat ("dsp32alu: dregs_half = dregs -+ dregs (RND20)\n");
	      (yyval.instr) = DSP32ALU (5, IS_H ((yyvsp[(1) - (8)].reg)), 0, &(yyvsp[(1) - (8)].reg), &(yyvsp[(3) - (8)].reg), &(yyvsp[(5) - (8)].reg), 0, 1, (yyvsp[(4) - (8)].r0).r0 | 2);
	    }
	  else
	    return yyerror ("Dregs expected");
	}
    break;

  case 45:
#line 1191 "bfin-parse.y"
    {
	  if (!REG_SAME ((yyvsp[(1) - (2)].reg), (yyvsp[(2) - (2)].reg)))
	    {
	      notethat ("dsp32alu: An = Am\n");
	      (yyval.instr) = DSP32ALU (8, 0, 0, 0, 0, 0, IS_A1 ((yyvsp[(1) - (2)].reg)), 0, 3);
	    }
	  else
	    return yyerror ("Accu reg arguments must differ");
	}
    break;

  case 46:
#line 1202 "bfin-parse.y"
    {
	  if (IS_DREG ((yyvsp[(2) - (2)].reg)))
	    {
	      notethat ("dsp32alu: An = dregs\n");
	      (yyval.instr) = DSP32ALU (9, 0, 0, 0, &(yyvsp[(2) - (2)].reg), 0, 1, 0, IS_A1 ((yyvsp[(1) - (2)].reg)) << 1);
	    }
	  else
	    return yyerror ("Dregs expected");
	}
    break;

  case 47:
#line 1213 "bfin-parse.y"
    {
	  if (!IS_H ((yyvsp[(3) - (4)].reg)))
	    {
	      if ((yyvsp[(1) - (4)].reg).regno == REG_A0x && IS_DREG ((yyvsp[(3) - (4)].reg)))
		{
		  notethat ("dsp32alu: A0.x = dregs_lo\n");
		  (yyval.instr) = DSP32ALU (9, 0, 0, 0, &(yyvsp[(3) - (4)].reg), 0, 0, 0, 1);
		}
	      else if ((yyvsp[(1) - (4)].reg).regno == REG_A1x && IS_DREG ((yyvsp[(3) - (4)].reg)))
		{
		  notethat ("dsp32alu: A1.x = dregs_lo\n");
		  (yyval.instr) = DSP32ALU (9, 0, 0, 0, &(yyvsp[(3) - (4)].reg), 0, 0, 0, 3);
		}
	      else if (IS_DREG ((yyvsp[(1) - (4)].reg)) && IS_DREG ((yyvsp[(3) - (4)].reg)))
		{
		  notethat ("ALU2op: dregs = dregs_lo\n");
		  (yyval.instr) = ALU2OP (&(yyvsp[(1) - (4)].reg), &(yyvsp[(3) - (4)].reg), 10 | ((yyvsp[(4) - (4)].r0).r0 ? 0: 1));
		}
	      else
	        return yyerror ("Register mismatch");
	    }
	  else
	    return yyerror ("Low reg expected");
	}
    break;

  case 48:
#line 1239 "bfin-parse.y"
    {
	  notethat ("LDIMMhalf: pregs_half = imm16\n");

	  if (!IS_DREG ((yyvsp[(1) - (3)].reg)) && !IS_PREG ((yyvsp[(1) - (3)].reg)) && !IS_IREG ((yyvsp[(1) - (3)].reg))
	      && !IS_MREG ((yyvsp[(1) - (3)].reg)) && !IS_BREG ((yyvsp[(1) - (3)].reg)) && !IS_LREG ((yyvsp[(1) - (3)].reg)))
	    return yyerror ("Wrong register for load immediate");

	  if (!IS_IMM ((yyvsp[(3) - (3)].expr), 16) && !IS_UIMM ((yyvsp[(3) - (3)].expr), 16))
	    return yyerror ("Constant out of range");

	  (yyval.instr) = LDIMMHALF_R (&(yyvsp[(1) - (3)].reg), IS_H ((yyvsp[(1) - (3)].reg)), 0, 0, (yyvsp[(3) - (3)].expr));
	}
    break;

  case 49:
#line 1253 "bfin-parse.y"
    {
	  notethat ("dsp32alu: An = 0\n");

	  if (imm7 ((yyvsp[(2) - (2)].expr)) != 0)
	    return yyerror ("0 expected");

	  (yyval.instr) = DSP32ALU (8, 0, 0, 0, 0, 0, 0, 0, IS_A1 ((yyvsp[(1) - (2)].reg)));
	}
    break;

  case 50:
#line 1263 "bfin-parse.y"
    {
	  if (!IS_DREG ((yyvsp[(1) - (4)].reg)) && !IS_PREG ((yyvsp[(1) - (4)].reg)) && !IS_IREG ((yyvsp[(1) - (4)].reg))
	      && !IS_MREG ((yyvsp[(1) - (4)].reg)) && !IS_BREG ((yyvsp[(1) - (4)].reg)) && !IS_LREG ((yyvsp[(1) - (4)].reg)))
	    return yyerror ("Wrong register for load immediate");

	  if ((yyvsp[(4) - (4)].r0).r0 == 0)
	    {
	      /* 7 bit immediate value if possible.
		 We will check for that constant value for efficiency
		 If it goes to reloc, it will be 16 bit.  */
	      if (IS_CONST ((yyvsp[(3) - (4)].expr)) && IS_IMM ((yyvsp[(3) - (4)].expr), 7) && IS_DREG ((yyvsp[(1) - (4)].reg)))
		{
		  notethat ("COMPI2opD: dregs = imm7 (x) \n");
		  (yyval.instr) = COMPI2OPD (&(yyvsp[(1) - (4)].reg), imm7 ((yyvsp[(3) - (4)].expr)), 0);
		}
	      else if (IS_CONST ((yyvsp[(3) - (4)].expr)) && IS_IMM ((yyvsp[(3) - (4)].expr), 7) && IS_PREG ((yyvsp[(1) - (4)].reg)))
		{
		  notethat ("COMPI2opP: pregs = imm7 (x)\n");
		  (yyval.instr) = COMPI2OPP (&(yyvsp[(1) - (4)].reg), imm7 ((yyvsp[(3) - (4)].expr)), 0);
		}
	      else
		{
		  if (IS_CONST ((yyvsp[(3) - (4)].expr)) && !IS_IMM ((yyvsp[(3) - (4)].expr), 16))
		    return yyerror ("Immediate value out of range");

		  notethat ("LDIMMhalf: regs = luimm16 (x)\n");
		  /* reg, H, S, Z.   */
		  (yyval.instr) = LDIMMHALF_R5 (&(yyvsp[(1) - (4)].reg), 0, 1, 0, (yyvsp[(3) - (4)].expr));
		} 
	    }
	  else
	    {
	      /* (z) There is no 7 bit zero extended instruction.
	      If the expr is a relocation, generate it.   */

	      if (IS_CONST ((yyvsp[(3) - (4)].expr)) && !IS_UIMM ((yyvsp[(3) - (4)].expr), 16))
		return yyerror ("Immediate value out of range");

	      notethat ("LDIMMhalf: regs = luimm16 (x)\n");
	      /* reg, H, S, Z.  */
	      (yyval.instr) = LDIMMHALF_R5 (&(yyvsp[(1) - (4)].reg), 0, 0, 1, (yyvsp[(3) - (4)].expr));
	    }
	}
    break;

  case 51:
#line 1308 "bfin-parse.y"
    {
	  if (IS_H ((yyvsp[(1) - (3)].reg)))
	    return yyerror ("Low reg expected");

	  if (IS_DREG ((yyvsp[(1) - (3)].reg)) && (yyvsp[(3) - (3)].reg).regno == REG_A0x)
	    {
	      notethat ("dsp32alu: dregs_lo = A0.x\n");
	      (yyval.instr) = DSP32ALU (10, 0, 0, &(yyvsp[(1) - (3)].reg), 0, 0, 0, 0, 0);
	    }
	  else if (IS_DREG ((yyvsp[(1) - (3)].reg)) && (yyvsp[(3) - (3)].reg).regno == REG_A1x)
	    {
	      notethat ("dsp32alu: dregs_lo = A1.x\n");
	      (yyval.instr) = DSP32ALU (10, 0, 0, &(yyvsp[(1) - (3)].reg), 0, 0, 0, 0, 1);
	    }
	  else
	    return yyerror ("Register mismatch");
	}
    break;

  case 52:
#line 1327 "bfin-parse.y"
    {
	  if (IS_DREG ((yyvsp[(1) - (6)].reg)) && IS_DREG ((yyvsp[(3) - (6)].reg)) && IS_DREG ((yyvsp[(5) - (6)].reg)))
	    {
	      notethat ("dsp32alu: dregs = dregs .|. dregs (amod0)\n");
	      (yyval.instr) = DSP32ALU (0, 0, 0, &(yyvsp[(1) - (6)].reg), &(yyvsp[(3) - (6)].reg), &(yyvsp[(5) - (6)].reg), (yyvsp[(6) - (6)].modcodes).s0, (yyvsp[(6) - (6)].modcodes).x0, (yyvsp[(4) - (6)].r0).r0);
	    }
	  else
	    return yyerror ("Register mismatch");
	}
    break;

  case 53:
#line 1338 "bfin-parse.y"
    {
	  if (IS_DREG ((yyvsp[(1) - (4)].reg)) && IS_DREG ((yyvsp[(3) - (4)].reg)))
	    {
	      notethat ("ALU2op: dregs = dregs_byte\n");
	      (yyval.instr) = ALU2OP (&(yyvsp[(1) - (4)].reg), &(yyvsp[(3) - (4)].reg), 12 | ((yyvsp[(4) - (4)].r0).r0 ? 0: 1));
	    }
	  else
	    return yyerror ("Register mismatch");
	}
    break;

  case 54:
#line 1349 "bfin-parse.y"
    {
	  if (REG_SAME ((yyvsp[(1) - (7)].reg), (yyvsp[(3) - (7)].reg)) && REG_SAME ((yyvsp[(5) - (7)].reg), (yyvsp[(7) - (7)].reg)) && !REG_SAME ((yyvsp[(1) - (7)].reg), (yyvsp[(5) - (7)].reg)))
	    {
	      notethat ("dsp32alu: A1 = ABS A1 , A0 = ABS A0\n");
	      (yyval.instr) = DSP32ALU (16, 0, 0, 0, 0, 0, 0, 0, 3);
	    }
	  else
	    return yyerror ("Register mismatch");
	}
    break;

  case 55:
#line 1360 "bfin-parse.y"
    {
	  if (REG_SAME ((yyvsp[(1) - (7)].reg), (yyvsp[(3) - (7)].reg)) && REG_SAME ((yyvsp[(5) - (7)].reg), (yyvsp[(7) - (7)].reg)) && !REG_SAME ((yyvsp[(1) - (7)].reg), (yyvsp[(5) - (7)].reg)))
	    {
	      notethat ("dsp32alu: A1 = - A1 , A0 = - A0\n");
	      (yyval.instr) = DSP32ALU (14, 0, 0, 0, 0, 0, 0, 0, 3);
	    }
	  else
	    return yyerror ("Register mismatch");
	}
    break;

  case 56:
#line 1371 "bfin-parse.y"
    {
	  if (!IS_A1 ((yyvsp[(1) - (3)].reg)) && IS_A1 ((yyvsp[(2) - (3)].reg)))
	    {
	      notethat ("dsp32alu: A0 -= A1\n");
	      (yyval.instr) = DSP32ALU (11, 0, 0, 0, 0, 0, (yyvsp[(3) - (3)].r0).r0, 0, 3);
	    }
	  else
	    return yyerror ("Register mismatch");
	}
    break;

  case 57:
#line 1382 "bfin-parse.y"
    {
	  if (IS_IREG ((yyvsp[(1) - (3)].reg)) && EXPR_VALUE ((yyvsp[(3) - (3)].expr)) == 4)
	    {
	      notethat ("dagMODik: iregs -= 4\n");
	      (yyval.instr) = DAGMODIK (&(yyvsp[(1) - (3)].reg), 3);
	    }
	  else if (IS_IREG ((yyvsp[(1) - (3)].reg)) && EXPR_VALUE ((yyvsp[(3) - (3)].expr)) == 2)
	    {
	      notethat ("dagMODik: iregs -= 2\n");
	      (yyval.instr) = DAGMODIK (&(yyvsp[(1) - (3)].reg), 1);
	    }
	  else
	    return yyerror ("Register or value mismatch");
	}
    break;

  case 58:
#line 1398 "bfin-parse.y"
    {
	  if (IS_IREG ((yyvsp[(1) - (6)].reg)) && IS_MREG ((yyvsp[(3) - (6)].reg)))
	    {
	      notethat ("dagMODim: iregs += mregs (opt_brev)\n");
	      /* i, m, op, br.  */
	      (yyval.instr) = DAGMODIM (&(yyvsp[(1) - (6)].reg), &(yyvsp[(3) - (6)].reg), 0, 1);
	    }
	  else if (IS_PREG ((yyvsp[(1) - (6)].reg)) && IS_PREG ((yyvsp[(3) - (6)].reg)))
	    {
	      notethat ("PTR2op: pregs += pregs (BREV )\n");
	      (yyval.instr) = PTR2OP (&(yyvsp[(1) - (6)].reg), &(yyvsp[(3) - (6)].reg), 5);
	    }
	  else
	    return yyerror ("Register mismatch");
	}
    break;

  case 59:
#line 1415 "bfin-parse.y"
    {
	  if (IS_IREG ((yyvsp[(1) - (3)].reg)) && IS_MREG ((yyvsp[(3) - (3)].reg)))
	    {
	      notethat ("dagMODim: iregs -= mregs\n");
	      (yyval.instr) = DAGMODIM (&(yyvsp[(1) - (3)].reg), &(yyvsp[(3) - (3)].reg), 1, 0);
	    }
	  else if (IS_PREG ((yyvsp[(1) - (3)].reg)) && IS_PREG ((yyvsp[(3) - (3)].reg)))
	    {
	      notethat ("PTR2op: pregs -= pregs\n");
	      (yyval.instr) = PTR2OP (&(yyvsp[(1) - (3)].reg), &(yyvsp[(3) - (3)].reg), 0);
	    }
	  else
	    return yyerror ("Register mismatch");
	}
    break;

  case 60:
#line 1431 "bfin-parse.y"
    {
	  if (!IS_A1 ((yyvsp[(1) - (4)].reg)) && IS_A1 ((yyvsp[(3) - (4)].reg)))
	    {
	      notethat ("dsp32alu: A0 += A1 (W32)\n");
	      (yyval.instr) = DSP32ALU (11, 0, 0, 0, 0, 0, (yyvsp[(4) - (4)].r0).r0, 0, 2);
	    }
	  else
	    return yyerror ("Register mismatch");
	}
    break;

  case 61:
#line 1442 "bfin-parse.y"
    {
	  if (IS_IREG ((yyvsp[(1) - (3)].reg)) && IS_MREG ((yyvsp[(3) - (3)].reg)))
	    {
	      notethat ("dagMODim: iregs += mregs\n");
	      (yyval.instr) = DAGMODIM (&(yyvsp[(1) - (3)].reg), &(yyvsp[(3) - (3)].reg), 0, 0);
	    }
	  else
	    return yyerror ("iregs += mregs expected");
	}
    break;

  case 62:
#line 1453 "bfin-parse.y"
    {
	  if (IS_IREG ((yyvsp[(1) - (3)].reg)))
	    {
	      if (EXPR_VALUE ((yyvsp[(3) - (3)].expr)) == 4)
		{
		  notethat ("dagMODik: iregs += 4\n");
		  (yyval.instr) = DAGMODIK (&(yyvsp[(1) - (3)].reg), 2);
		}
	      else if (EXPR_VALUE ((yyvsp[(3) - (3)].expr)) == 2)
		{
		  notethat ("dagMODik: iregs += 2\n");
		  (yyval.instr) = DAGMODIK (&(yyvsp[(1) - (3)].reg), 0);
		}
	      else
		return yyerror ("iregs += [ 2 | 4 ");
	    }
	  else if (IS_PREG ((yyvsp[(1) - (3)].reg)) && IS_IMM ((yyvsp[(3) - (3)].expr), 7))
	    {
	      notethat ("COMPI2opP: pregs += imm7\n");
	      (yyval.instr) = COMPI2OPP (&(yyvsp[(1) - (3)].reg), imm7 ((yyvsp[(3) - (3)].expr)), 1);
	    }
	  else if (IS_DREG ((yyvsp[(1) - (3)].reg)) && IS_IMM ((yyvsp[(3) - (3)].expr), 7))
	    {
	      notethat ("COMPI2opD: dregs += imm7\n");
	      (yyval.instr) = COMPI2OPD (&(yyvsp[(1) - (3)].reg), imm7 ((yyvsp[(3) - (3)].expr)), 1);
	    }
	  else if ((IS_DREG ((yyvsp[(1) - (3)].reg)) || IS_PREG ((yyvsp[(1) - (3)].reg))) && IS_CONST ((yyvsp[(3) - (3)].expr)))
	    return yyerror ("Immediate value out of range");
	  else
	    return yyerror ("Register mismatch");
	}
    break;

  case 63:
#line 1486 "bfin-parse.y"
    {
	  if (IS_DREG ((yyvsp[(1) - (3)].reg)) && IS_DREG ((yyvsp[(3) - (3)].reg)))
	    {
	      notethat ("ALU2op: dregs *= dregs\n");
	      (yyval.instr) = ALU2OP (&(yyvsp[(1) - (3)].reg), &(yyvsp[(3) - (3)].reg), 3);
	    }
	  else
	    return yyerror ("Register mismatch");
	}
    break;

  case 64:
#line 1497 "bfin-parse.y"
    {
	  if (!valid_dreg_pair (&(yyvsp[(3) - (11)].reg), (yyvsp[(5) - (11)].expr)))
	    return yyerror ("Bad dreg pair");
	  else if (!valid_dreg_pair (&(yyvsp[(7) - (11)].reg), (yyvsp[(9) - (11)].expr)))
	    return yyerror ("Bad dreg pair");
	  else
	    {
	      notethat ("dsp32alu: SAA (dregs_pair , dregs_pair ) (aligndir)\n");
	      (yyval.instr) = DSP32ALU (18, 0, 0, 0, &(yyvsp[(3) - (11)].reg), &(yyvsp[(7) - (11)].reg), (yyvsp[(11) - (11)].r0).r0, 0, 0);
	    }
	}
    break;

  case 65:
#line 1510 "bfin-parse.y"
    {
	  if (REG_SAME ((yyvsp[(1) - (11)].reg), (yyvsp[(2) - (11)].reg)) && REG_SAME ((yyvsp[(7) - (11)].reg), (yyvsp[(8) - (11)].reg)) && !REG_SAME ((yyvsp[(1) - (11)].reg), (yyvsp[(7) - (11)].reg)))
	    {
	      notethat ("dsp32alu: A1 = A1 (S) , A0 = A0 (S)\n");
	      (yyval.instr) = DSP32ALU (8, 0, 0, 0, 0, 0, 1, 0, 2);
	    }
	  else
	    return yyerror ("Register mismatch");
	}
    break;

  case 66:
#line 1521 "bfin-parse.y"
    {
	  if (IS_DREG ((yyvsp[(1) - (9)].reg)) && IS_DREG ((yyvsp[(4) - (9)].reg)) && IS_DREG ((yyvsp[(6) - (9)].reg))
	      && REG_SAME ((yyvsp[(1) - (9)].reg), (yyvsp[(4) - (9)].reg)))
	    {
	      if (EXPR_VALUE ((yyvsp[(9) - (9)].expr)) == 1)
		{
		  notethat ("ALU2op: dregs = (dregs + dregs) << 1\n");
		  (yyval.instr) = ALU2OP (&(yyvsp[(1) - (9)].reg), &(yyvsp[(6) - (9)].reg), 4);
		}
	      else if (EXPR_VALUE ((yyvsp[(9) - (9)].expr)) == 2)
		{
		  notethat ("ALU2op: dregs = (dregs + dregs) << 2\n");
		  (yyval.instr) = ALU2OP (&(yyvsp[(1) - (9)].reg), &(yyvsp[(6) - (9)].reg), 5);
		}
	      else
		return yyerror ("Bad shift value");
	    }
	  else if (IS_PREG ((yyvsp[(1) - (9)].reg)) && IS_PREG ((yyvsp[(4) - (9)].reg)) && IS_PREG ((yyvsp[(6) - (9)].reg))
		   && REG_SAME ((yyvsp[(1) - (9)].reg), (yyvsp[(4) - (9)].reg)))
	    {
	      if (EXPR_VALUE ((yyvsp[(9) - (9)].expr)) == 1)
		{
		  notethat ("PTR2op: pregs = (pregs + pregs) << 1\n");
		  (yyval.instr) = PTR2OP (&(yyvsp[(1) - (9)].reg), &(yyvsp[(6) - (9)].reg), 6);
		}
	      else if (EXPR_VALUE ((yyvsp[(9) - (9)].expr)) == 2)
		{
		  notethat ("PTR2op: pregs = (pregs + pregs) << 2\n");
		  (yyval.instr) = PTR2OP (&(yyvsp[(1) - (9)].reg), &(yyvsp[(6) - (9)].reg), 7);
		}
	      else
		return yyerror ("Bad shift value");
	    }
	  else
	    return yyerror ("Register mismatch");
	}
    break;

  case 67:
#line 1560 "bfin-parse.y"
    {
	  if (IS_DREG ((yyvsp[(1) - (5)].reg)) && IS_DREG ((yyvsp[(3) - (5)].reg)) && IS_DREG ((yyvsp[(5) - (5)].reg)))
	    {
	      notethat ("COMP3op: dregs = dregs | dregs\n");
	      (yyval.instr) = COMP3OP (&(yyvsp[(1) - (5)].reg), &(yyvsp[(3) - (5)].reg), &(yyvsp[(5) - (5)].reg), 3);
	    }
	  else
	    return yyerror ("Dregs expected");
	}
    break;

  case 68:
#line 1570 "bfin-parse.y"
    {
	  if (IS_DREG ((yyvsp[(1) - (5)].reg)) && IS_DREG ((yyvsp[(3) - (5)].reg)) && IS_DREG ((yyvsp[(5) - (5)].reg)))
	    {
	      notethat ("COMP3op: dregs = dregs ^ dregs\n");
	      (yyval.instr) = COMP3OP (&(yyvsp[(1) - (5)].reg), &(yyvsp[(3) - (5)].reg), &(yyvsp[(5) - (5)].reg), 4);
	    }
	  else
	    return yyerror ("Dregs expected");
	}
    break;

  case 69:
#line 1580 "bfin-parse.y"
    {
	  if (IS_PREG ((yyvsp[(1) - (9)].reg)) && IS_PREG ((yyvsp[(3) - (9)].reg)) && IS_PREG ((yyvsp[(6) - (9)].reg)))
	    {
	      if (EXPR_VALUE ((yyvsp[(8) - (9)].expr)) == 1)
		{
		  notethat ("COMP3op: pregs = pregs + (pregs << 1)\n");
		  (yyval.instr) = COMP3OP (&(yyvsp[(1) - (9)].reg), &(yyvsp[(3) - (9)].reg), &(yyvsp[(6) - (9)].reg), 6);
		}
	      else if (EXPR_VALUE ((yyvsp[(8) - (9)].expr)) == 2)
		{
		  notethat ("COMP3op: pregs = pregs + (pregs << 2)\n");
		  (yyval.instr) = COMP3OP (&(yyvsp[(1) - (9)].reg), &(yyvsp[(3) - (9)].reg), &(yyvsp[(6) - (9)].reg), 7);
		}
	      else
		  return yyerror ("Bad shift value");
	    }
	  else
	    return yyerror ("Dregs expected");
	}
    break;

  case 70:
#line 1600 "bfin-parse.y"
    {
	  if ((yyvsp[(3) - (5)].reg).regno == REG_A0 && (yyvsp[(5) - (5)].reg).regno == REG_A1)
	    {
	      notethat ("CCflag: CC = A0 == A1\n");
	      (yyval.instr) = CCFLAG (0, 0, 5, 0, 0);
	    }
	  else
	    return yyerror ("AREGs are in bad order or same");
	}
    break;

  case 71:
#line 1610 "bfin-parse.y"
    {
	  if ((yyvsp[(3) - (5)].reg).regno == REG_A0 && (yyvsp[(5) - (5)].reg).regno == REG_A1)
	    {
	      notethat ("CCflag: CC = A0 < A1\n");
	      (yyval.instr) = CCFLAG (0, 0, 6, 0, 0);
	    }
	  else
	    return yyerror ("AREGs are in bad order or same");
	}
    break;

  case 72:
#line 1620 "bfin-parse.y"
    {
	  if ((IS_DREG ((yyvsp[(3) - (6)].reg)) && IS_DREG ((yyvsp[(5) - (6)].reg)))
	      || (IS_PREG ((yyvsp[(3) - (6)].reg)) && IS_PREG ((yyvsp[(5) - (6)].reg))))
	    {
	      notethat ("CCflag: CC = dpregs < dpregs\n");
	      (yyval.instr) = CCFLAG (&(yyvsp[(3) - (6)].reg), (yyvsp[(5) - (6)].reg).regno & CODE_MASK, (yyvsp[(6) - (6)].r0).r0, 0, IS_PREG ((yyvsp[(3) - (6)].reg)) ? 1 : 0);
	    }
	  else
	    return yyerror ("Bad register in comparison");
	}
    break;

  case 73:
#line 1631 "bfin-parse.y"
    {
	  if (!IS_DREG ((yyvsp[(3) - (6)].reg)) && !IS_PREG ((yyvsp[(3) - (6)].reg)))
	    return yyerror ("Bad register in comparison");

	  if (((yyvsp[(6) - (6)].r0).r0 == 1 && IS_IMM ((yyvsp[(5) - (6)].expr), 3))
	      || ((yyvsp[(6) - (6)].r0).r0 == 3 && IS_UIMM ((yyvsp[(5) - (6)].expr), 3)))
	    {
	      notethat ("CCflag: CC = dpregs < (u)imm3\n");
	      (yyval.instr) = CCFLAG (&(yyvsp[(3) - (6)].reg), imm3 ((yyvsp[(5) - (6)].expr)), (yyvsp[(6) - (6)].r0).r0, 1, IS_PREG ((yyvsp[(3) - (6)].reg)) ? 1 : 0);
	    }
	  else
	    return yyerror ("Bad constant value");
	}
    break;

  case 74:
#line 1645 "bfin-parse.y"
    {
	  if ((IS_DREG ((yyvsp[(3) - (5)].reg)) && IS_DREG ((yyvsp[(5) - (5)].reg)))
	      || (IS_PREG ((yyvsp[(3) - (5)].reg)) && IS_PREG ((yyvsp[(5) - (5)].reg))))
	    {
	      notethat ("CCflag: CC = dpregs == dpregs\n");
	      (yyval.instr) = CCFLAG (&(yyvsp[(3) - (5)].reg), (yyvsp[(5) - (5)].reg).regno & CODE_MASK, 0, 0, IS_PREG ((yyvsp[(3) - (5)].reg)) ? 1 : 0);
	    }
	  else
	    return yyerror ("Bad register in comparison");
	}
    break;

  case 75:
#line 1656 "bfin-parse.y"
    {
	  if (!IS_DREG ((yyvsp[(3) - (5)].reg)) && !IS_PREG ((yyvsp[(3) - (5)].reg)))
	    return yyerror ("Bad register in comparison");

	  if (IS_IMM ((yyvsp[(5) - (5)].expr), 3))
	    {
	      notethat ("CCflag: CC = dpregs == imm3\n");
	      (yyval.instr) = CCFLAG (&(yyvsp[(3) - (5)].reg), imm3 ((yyvsp[(5) - (5)].expr)), 0, 1, IS_PREG ((yyvsp[(3) - (5)].reg)) ? 1 : 0);
	    }
	  else
	    return yyerror ("Bad constant range");
	}
    break;

  case 76:
#line 1669 "bfin-parse.y"
    {
	  if ((yyvsp[(3) - (5)].reg).regno == REG_A0 && (yyvsp[(5) - (5)].reg).regno == REG_A1)
	    {
	      notethat ("CCflag: CC = A0 <= A1\n");
	      (yyval.instr) = CCFLAG (0, 0, 7, 0, 0);
	    }
	  else
	    return yyerror ("AREGs are in bad order or same");
	}
    break;

  case 77:
#line 1679 "bfin-parse.y"
    {
	  if ((IS_DREG ((yyvsp[(3) - (6)].reg)) && IS_DREG ((yyvsp[(5) - (6)].reg)))
	      || (IS_PREG ((yyvsp[(3) - (6)].reg)) && IS_PREG ((yyvsp[(5) - (6)].reg))))
	    {
	      notethat ("CCflag: CC = dpregs <= dpregs (..)\n");
	      (yyval.instr) = CCFLAG (&(yyvsp[(3) - (6)].reg), (yyvsp[(5) - (6)].reg).regno & CODE_MASK,
			   1 + (yyvsp[(6) - (6)].r0).r0, 0, IS_PREG ((yyvsp[(3) - (6)].reg)) ? 1 : 0);
	    }
	  else
	    return yyerror ("Bad register in comparison");
	}
    break;

  case 78:
#line 1691 "bfin-parse.y"
    {
	  if (!IS_DREG ((yyvsp[(3) - (6)].reg)) && !IS_PREG ((yyvsp[(3) - (6)].reg)))
	    return yyerror ("Bad register in comparison");

	  if (((yyvsp[(6) - (6)].r0).r0 == 1 && IS_IMM ((yyvsp[(5) - (6)].expr), 3))
	      || ((yyvsp[(6) - (6)].r0).r0 == 3 && IS_UIMM ((yyvsp[(5) - (6)].expr), 3)))
	    {
	      notethat ("CCflag: CC = dpregs <= (u)imm3\n");
	      (yyval.instr) = CCFLAG (&(yyvsp[(3) - (6)].reg), imm3 ((yyvsp[(5) - (6)].expr)), 1 + (yyvsp[(6) - (6)].r0).r0, 1, IS_PREG ((yyvsp[(3) - (6)].reg)) ? 1 : 0);
	    }
	  else
	    return yyerror ("Bad constant value");
	}
    break;

  case 79:
#line 1706 "bfin-parse.y"
    {
	  if (IS_DREG ((yyvsp[(1) - (5)].reg)) && IS_DREG ((yyvsp[(3) - (5)].reg)) && IS_DREG ((yyvsp[(5) - (5)].reg)))
	    {
	      notethat ("COMP3op: dregs = dregs & dregs\n");
	      (yyval.instr) = COMP3OP (&(yyvsp[(1) - (5)].reg), &(yyvsp[(3) - (5)].reg), &(yyvsp[(5) - (5)].reg), 2);
	    }
	  else
	    return yyerror ("Dregs expected");
	}
    break;

  case 80:
#line 1717 "bfin-parse.y"
    {
	  notethat ("CC2stat operation\n");
	  (yyval.instr) = bfin_gen_cc2stat ((yyvsp[(1) - (1)].modcodes).r0, (yyvsp[(1) - (1)].modcodes).x0, (yyvsp[(1) - (1)].modcodes).s0);
	}
    break;

  case 81:
#line 1723 "bfin-parse.y"
    {
	  if ((IS_GENREG ((yyvsp[(1) - (3)].reg)) && IS_GENREG ((yyvsp[(3) - (3)].reg)))
	      || (IS_GENREG ((yyvsp[(1) - (3)].reg)) && IS_DAGREG ((yyvsp[(3) - (3)].reg)))
	      || (IS_DAGREG ((yyvsp[(1) - (3)].reg)) && IS_GENREG ((yyvsp[(3) - (3)].reg)))
	      || (IS_DAGREG ((yyvsp[(1) - (3)].reg)) && IS_DAGREG ((yyvsp[(3) - (3)].reg)))
	      || (IS_GENREG ((yyvsp[(1) - (3)].reg)) && (yyvsp[(3) - (3)].reg).regno == REG_USP)
	      || ((yyvsp[(1) - (3)].reg).regno == REG_USP && IS_GENREG ((yyvsp[(3) - (3)].reg)))
	      || (IS_DREG ((yyvsp[(1) - (3)].reg)) && IS_SYSREG ((yyvsp[(3) - (3)].reg)))
	      || (IS_PREG ((yyvsp[(1) - (3)].reg)) && IS_SYSREG ((yyvsp[(3) - (3)].reg)))
	      || (IS_SYSREG ((yyvsp[(1) - (3)].reg)) && IS_DREG ((yyvsp[(3) - (3)].reg)))
	      || (IS_SYSREG ((yyvsp[(1) - (3)].reg)) && IS_PREG ((yyvsp[(3) - (3)].reg)))
	      || (IS_SYSREG ((yyvsp[(1) - (3)].reg)) && (yyvsp[(3) - (3)].reg).regno == REG_USP))
	    {
	      (yyval.instr) = bfin_gen_regmv (&(yyvsp[(3) - (3)].reg), &(yyvsp[(1) - (3)].reg));
	    }
	  else
	    return yyerror ("Register mismatch");
	}
    break;

  case 82:
#line 1743 "bfin-parse.y"
    {
	  if (IS_DREG ((yyvsp[(3) - (3)].reg)))
	    {
	      notethat ("CC2dreg: CC = dregs\n");
	      (yyval.instr) = bfin_gen_cc2dreg (1, &(yyvsp[(3) - (3)].reg));
	    }
	  else
	    return yyerror ("Register mismatch");
	}
    break;

  case 83:
#line 1754 "bfin-parse.y"
    {
	  if (IS_DREG ((yyvsp[(1) - (3)].reg)))
	    {
	      notethat ("CC2dreg: dregs = CC\n");
	      (yyval.instr) = bfin_gen_cc2dreg (0, &(yyvsp[(1) - (3)].reg));
	    }
	  else
	    return yyerror ("Register mismatch");
	}
    break;

  case 84:
#line 1765 "bfin-parse.y"
    {
	  notethat ("CC2dreg: CC =! CC\n");
	  (yyval.instr) = bfin_gen_cc2dreg (3, 0);
	}
    break;

  case 85:
#line 1773 "bfin-parse.y"
    {
	  notethat ("dsp32mult: dregs_half = multiply_halfregs (opt_mode)\n");

	  if (!IS_H ((yyvsp[(1) - (4)].reg)) && (yyvsp[(4) - (4)].mod).MM)
	    return yyerror ("(M) not allowed with MAC0");

	  if ((yyvsp[(4) - (4)].mod).mod != 0 && (yyvsp[(4) - (4)].mod).mod != M_FU && (yyvsp[(4) - (4)].mod).mod != M_IS
	      && (yyvsp[(4) - (4)].mod).mod != M_IU && (yyvsp[(4) - (4)].mod).mod != M_T && (yyvsp[(4) - (4)].mod).mod != M_TFU
	      && (yyvsp[(4) - (4)].mod).mod != M_S2RND && (yyvsp[(4) - (4)].mod).mod != M_ISS2 && (yyvsp[(4) - (4)].mod).mod != M_IH)
	    return yyerror ("bad option.");

	  if (IS_H ((yyvsp[(1) - (4)].reg)))
	    {
	      (yyval.instr) = DSP32MULT (0, (yyvsp[(4) - (4)].mod).MM, (yyvsp[(4) - (4)].mod).mod, 1, 0,
			      IS_H ((yyvsp[(3) - (4)].macfunc).s0), IS_H ((yyvsp[(3) - (4)].macfunc).s1), 0, 0,
			      &(yyvsp[(1) - (4)].reg), 0, &(yyvsp[(3) - (4)].macfunc).s0, &(yyvsp[(3) - (4)].macfunc).s1, 0);
	    }
	  else
	    {
	      (yyval.instr) = DSP32MULT (0, 0, (yyvsp[(4) - (4)].mod).mod, 0, 0,
			      0, 0, IS_H ((yyvsp[(3) - (4)].macfunc).s0), IS_H ((yyvsp[(3) - (4)].macfunc).s1), 
			      &(yyvsp[(1) - (4)].reg), 0, &(yyvsp[(3) - (4)].macfunc).s0, &(yyvsp[(3) - (4)].macfunc).s1, 1);
	    }
	}
    break;

  case 86:
#line 1799 "bfin-parse.y"
    {
	  /* Odd registers can use (M).  */
	  if (!IS_DREG ((yyvsp[(1) - (4)].reg)))
	    return yyerror ("Dreg expected");

	  if (IS_EVEN ((yyvsp[(1) - (4)].reg)) && (yyvsp[(4) - (4)].mod).MM)
	    return yyerror ("(M) not allowed with MAC0");

	  if ((yyvsp[(4) - (4)].mod).mod != 0 && (yyvsp[(4) - (4)].mod).mod != M_FU && (yyvsp[(4) - (4)].mod).mod != M_IS
	      && (yyvsp[(4) - (4)].mod).mod != M_S2RND && (yyvsp[(4) - (4)].mod).mod != M_ISS2)
	    return yyerror ("bad option");

	  if (!IS_EVEN ((yyvsp[(1) - (4)].reg)))
	    {
	      notethat ("dsp32mult: dregs = multiply_halfregs (opt_mode)\n");

	      (yyval.instr) = DSP32MULT (0, (yyvsp[(4) - (4)].mod).MM, (yyvsp[(4) - (4)].mod).mod, 1, 1,
			      IS_H ((yyvsp[(3) - (4)].macfunc).s0), IS_H ((yyvsp[(3) - (4)].macfunc).s1), 0, 0,
			      &(yyvsp[(1) - (4)].reg), 0, &(yyvsp[(3) - (4)].macfunc).s0, &(yyvsp[(3) - (4)].macfunc).s1, 0);
	    }
	  else
	    {
	      notethat ("dsp32mult: dregs = multiply_halfregs opt_mode\n");
	      (yyval.instr) = DSP32MULT (0, 0, (yyvsp[(4) - (4)].mod).mod, 0, 1,
			      0, 0, IS_H ((yyvsp[(3) - (4)].macfunc).s0), IS_H ((yyvsp[(3) - (4)].macfunc).s1), 
			      &(yyvsp[(1) - (4)].reg),  0, &(yyvsp[(3) - (4)].macfunc).s0, &(yyvsp[(3) - (4)].macfunc).s1, 1);
	    }
	}
    break;

  case 87:
#line 1830 "bfin-parse.y"
    {
	  if (!IS_DREG ((yyvsp[(1) - (9)].reg)) || !IS_DREG ((yyvsp[(6) - (9)].reg))) 
	    return yyerror ("Dregs expected");

	  if (!IS_HCOMPL((yyvsp[(1) - (9)].reg), (yyvsp[(6) - (9)].reg)))
	    return yyerror ("Dest registers mismatch");

	  if (check_multiply_halfregs (&(yyvsp[(3) - (9)].macfunc), &(yyvsp[(8) - (9)].macfunc)) < 0)
	    return -1;

	  if ((!IS_H ((yyvsp[(1) - (9)].reg)) && (yyvsp[(4) - (9)].mod).MM)
	      || (!IS_H ((yyvsp[(6) - (9)].reg)) && (yyvsp[(9) - (9)].mod).MM))
	    return yyerror ("(M) not allowed with MAC0");

	  notethat ("dsp32mult: dregs_hi = multiply_halfregs mxd_mod, "
		    "dregs_lo = multiply_halfregs opt_mode\n");

	  if (IS_H ((yyvsp[(1) - (9)].reg)))
	    (yyval.instr) = DSP32MULT (0, (yyvsp[(4) - (9)].mod).MM, (yyvsp[(9) - (9)].mod).mod, 1, 0,
			    IS_H ((yyvsp[(3) - (9)].macfunc).s0), IS_H ((yyvsp[(3) - (9)].macfunc).s1), IS_H ((yyvsp[(8) - (9)].macfunc).s0), IS_H ((yyvsp[(8) - (9)].macfunc).s1),
			    &(yyvsp[(1) - (9)].reg), 0, &(yyvsp[(3) - (9)].macfunc).s0, &(yyvsp[(3) - (9)].macfunc).s1, 1);
	  else
	    (yyval.instr) = DSP32MULT (0, (yyvsp[(9) - (9)].mod).MM, (yyvsp[(9) - (9)].mod).mod, 1, 0,
			    IS_H ((yyvsp[(8) - (9)].macfunc).s0), IS_H ((yyvsp[(8) - (9)].macfunc).s1), IS_H ((yyvsp[(3) - (9)].macfunc).s0), IS_H ((yyvsp[(3) - (9)].macfunc).s1),
			    &(yyvsp[(1) - (9)].reg), 0, &(yyvsp[(3) - (9)].macfunc).s0, &(yyvsp[(3) - (9)].macfunc).s1, 1);
	}
    break;

  case 88:
#line 1858 "bfin-parse.y"
    {
	  if (!IS_DREG ((yyvsp[(1) - (9)].reg)) || !IS_DREG ((yyvsp[(6) - (9)].reg))) 
	    return yyerror ("Dregs expected");

	  if ((IS_EVEN ((yyvsp[(1) - (9)].reg)) && (yyvsp[(6) - (9)].reg).regno - (yyvsp[(1) - (9)].reg).regno != 1)
	      || (IS_EVEN ((yyvsp[(6) - (9)].reg)) && (yyvsp[(1) - (9)].reg).regno - (yyvsp[(6) - (9)].reg).regno != 1))
	    return yyerror ("Dest registers mismatch");

	  if (check_multiply_halfregs (&(yyvsp[(3) - (9)].macfunc), &(yyvsp[(8) - (9)].macfunc)) < 0)
	    return -1;

	  if ((IS_EVEN ((yyvsp[(1) - (9)].reg)) && (yyvsp[(4) - (9)].mod).MM)
	      || (IS_EVEN ((yyvsp[(6) - (9)].reg)) && (yyvsp[(9) - (9)].mod).MM))
	    return yyerror ("(M) not allowed with MAC0");

	  notethat ("dsp32mult: dregs = multiply_halfregs mxd_mod, "
		   "dregs = multiply_halfregs opt_mode\n");

	  if (IS_EVEN ((yyvsp[(1) - (9)].reg)))
	    (yyval.instr) = DSP32MULT (0, (yyvsp[(9) - (9)].mod).MM, (yyvsp[(9) - (9)].mod).mod, 1, 1,
			    IS_H ((yyvsp[(8) - (9)].macfunc).s0), IS_H ((yyvsp[(8) - (9)].macfunc).s1), IS_H ((yyvsp[(3) - (9)].macfunc).s0), IS_H ((yyvsp[(3) - (9)].macfunc).s1),
			    &(yyvsp[(1) - (9)].reg), 0, &(yyvsp[(3) - (9)].macfunc).s0, &(yyvsp[(3) - (9)].macfunc).s1, 1);
	  else
	    (yyval.instr) = DSP32MULT (0, (yyvsp[(4) - (9)].mod).MM, (yyvsp[(9) - (9)].mod).mod, 1, 1,
			    IS_H ((yyvsp[(3) - (9)].macfunc).s0), IS_H ((yyvsp[(3) - (9)].macfunc).s1), IS_H ((yyvsp[(8) - (9)].macfunc).s0), IS_H ((yyvsp[(8) - (9)].macfunc).s1),
			    &(yyvsp[(1) - (9)].reg), 0, &(yyvsp[(3) - (9)].macfunc).s0, &(yyvsp[(3) - (9)].macfunc).s1, 1);
	}
    break;

  case 89:
#line 1889 "bfin-parse.y"
    {
	  if (!REG_SAME ((yyvsp[(1) - (5)].reg), (yyvsp[(3) - (5)].reg)))
	    return yyerror ("Aregs must be same");

	  if (IS_DREG ((yyvsp[(5) - (5)].reg)) && !IS_H ((yyvsp[(5) - (5)].reg)))
	    {
	      notethat ("dsp32shift: A0 = ASHIFT A0 BY dregs_lo\n");
	      (yyval.instr) = DSP32SHIFT (3, 0, &(yyvsp[(5) - (5)].reg), 0, 0, IS_A1 ((yyvsp[(1) - (5)].reg)));
	    }
	  else
	    return yyerror ("Dregs expected");
	}
    break;

  case 90:
#line 1903 "bfin-parse.y"
    {
	  if (IS_DREG ((yyvsp[(6) - (7)].reg)) && !IS_H ((yyvsp[(6) - (7)].reg)))
	    {
	      notethat ("dsp32shift: dregs_half = ASHIFT dregs_half BY dregs_lo\n");
	      (yyval.instr) = DSP32SHIFT (0, &(yyvsp[(1) - (7)].reg), &(yyvsp[(6) - (7)].reg), &(yyvsp[(4) - (7)].reg), (yyvsp[(7) - (7)].modcodes).s0, HL2 ((yyvsp[(1) - (7)].reg), (yyvsp[(4) - (7)].reg)));
	    }
	  else
	    return yyerror ("Dregs expected");
	}
    break;

  case 91:
#line 1914 "bfin-parse.y"
    {
	  if (!REG_SAME ((yyvsp[(1) - (4)].reg), (yyvsp[(2) - (4)].reg)))
	    return yyerror ("Aregs must be same");

	  if (IS_UIMM ((yyvsp[(4) - (4)].expr), 5))
	    {
	      notethat ("dsp32shiftimm: A0 = A0 << uimm5\n");
	      (yyval.instr) = DSP32SHIFTIMM (3, 0, imm5 ((yyvsp[(4) - (4)].expr)), 0, 0, IS_A1 ((yyvsp[(1) - (4)].reg)));
	    }
	  else
	    return yyerror ("Bad shift value");
	}
    break;

  case 92:
#line 1928 "bfin-parse.y"
    {
	  if (IS_DREG ((yyvsp[(1) - (6)].reg)) && IS_DREG ((yyvsp[(3) - (6)].reg)) && IS_UIMM ((yyvsp[(5) - (6)].expr), 5))
	    {
	      if ((yyvsp[(6) - (6)].modcodes).r0)
		{
		  /*  Vector?  */
		  notethat ("dsp32shiftimm: dregs = dregs << expr (V, .)\n");
		  (yyval.instr) = DSP32SHIFTIMM (1, &(yyvsp[(1) - (6)].reg), imm4 ((yyvsp[(5) - (6)].expr)), &(yyvsp[(3) - (6)].reg), (yyvsp[(6) - (6)].modcodes).s0 ? 1 : 2, 0);
		}
	      else
		{
		  notethat ("dsp32shiftimm: dregs =  dregs << uimm5 (.)\n");
		  (yyval.instr) = DSP32SHIFTIMM (2, &(yyvsp[(1) - (6)].reg), imm6 ((yyvsp[(5) - (6)].expr)), &(yyvsp[(3) - (6)].reg), (yyvsp[(6) - (6)].modcodes).s0 ? 1 : 2, 0);
		}
	    }
	  else if ((yyvsp[(6) - (6)].modcodes).s0 == 0 && IS_PREG ((yyvsp[(1) - (6)].reg)) && IS_PREG ((yyvsp[(3) - (6)].reg)))
	    {
	      if (EXPR_VALUE ((yyvsp[(5) - (6)].expr)) == 2)
		{
		  notethat ("PTR2op: pregs = pregs << 2\n");
		  (yyval.instr) = PTR2OP (&(yyvsp[(1) - (6)].reg), &(yyvsp[(3) - (6)].reg), 1);
		}
	      else if (EXPR_VALUE ((yyvsp[(5) - (6)].expr)) == 1)
		{
		  notethat ("COMP3op: pregs = pregs << 1\n");
		  (yyval.instr) = COMP3OP (&(yyvsp[(1) - (6)].reg), &(yyvsp[(3) - (6)].reg), &(yyvsp[(3) - (6)].reg), 5);
		}
	      else
		return yyerror ("Bad shift value");
	    }
	  else
	    return yyerror ("Bad shift value or register");
	}
    break;

  case 93:
#line 1962 "bfin-parse.y"
    {
	  if (IS_UIMM ((yyvsp[(5) - (6)].expr), 4))
	    {
	      if ((yyvsp[(6) - (6)].modcodes).s0)
		{
		  notethat ("dsp32shiftimm: dregs_half = dregs_half << uimm4 (S)\n");
		  (yyval.instr) = DSP32SHIFTIMM (0x0, &(yyvsp[(1) - (6)].reg), imm5 ((yyvsp[(5) - (6)].expr)), &(yyvsp[(3) - (6)].reg), (yyvsp[(6) - (6)].modcodes).s0, HL2 ((yyvsp[(1) - (6)].reg), (yyvsp[(3) - (6)].reg)));
		}
	      else
		{
		  notethat ("dsp32shiftimm: dregs_half = dregs_half << uimm4\n");
		  (yyval.instr) = DSP32SHIFTIMM (0x0, &(yyvsp[(1) - (6)].reg), imm5 ((yyvsp[(5) - (6)].expr)), &(yyvsp[(3) - (6)].reg), 2, HL2 ((yyvsp[(1) - (6)].reg), (yyvsp[(3) - (6)].reg)));
		}
	    }
	  else
	    return yyerror ("Bad shift value");
	}
    break;

  case 94:
#line 1980 "bfin-parse.y"
    {
	  int op;

	  if (IS_DREG ((yyvsp[(1) - (7)].reg)) && IS_DREG ((yyvsp[(4) - (7)].reg)) && IS_DREG ((yyvsp[(6) - (7)].reg)) && !IS_H ((yyvsp[(6) - (7)].reg)))
	    {
	      if ((yyvsp[(7) - (7)].modcodes).r0)
		{
		  op = 1;
		  notethat ("dsp32shift: dregs = ASHIFT dregs BY "
			   "dregs_lo (V, .)\n");
		}
	      else
		{
		  
		  op = 2;
		  notethat ("dsp32shift: dregs = ASHIFT dregs BY dregs_lo (.)\n");
		}
	      (yyval.instr) = DSP32SHIFT (op, &(yyvsp[(1) - (7)].reg), &(yyvsp[(6) - (7)].reg), &(yyvsp[(4) - (7)].reg), (yyvsp[(7) - (7)].modcodes).s0, 0);
	    }
	  else
	    return yyerror ("Dregs expected");
	}
    break;

  case 95:
#line 2005 "bfin-parse.y"
    {
	  if (IS_DREG_L ((yyvsp[(1) - (9)].reg)) && IS_DREG_L ((yyvsp[(5) - (9)].reg)) && IS_DREG_L ((yyvsp[(7) - (9)].reg)))
	    {
	      notethat ("dsp32shift: dregs_lo = EXPADJ (dregs , dregs_lo )\n");
	      (yyval.instr) = DSP32SHIFT (7, &(yyvsp[(1) - (9)].reg), &(yyvsp[(7) - (9)].reg), &(yyvsp[(5) - (9)].reg), (yyvsp[(9) - (9)].r0).r0, 0);
	    }
	  else
	    return yyerror ("Bad shift value or register");
	}
    break;

  case 96:
#line 2017 "bfin-parse.y"
    {
	  if (IS_DREG_L ((yyvsp[(1) - (8)].reg)) && IS_DREG_L ((yyvsp[(5) - (8)].reg)) && IS_DREG_L ((yyvsp[(7) - (8)].reg)))
	    {
	      notethat ("dsp32shift: dregs_lo = EXPADJ (dregs_lo, dregs_lo)\n");
	      (yyval.instr) = DSP32SHIFT (7, &(yyvsp[(1) - (8)].reg), &(yyvsp[(7) - (8)].reg), &(yyvsp[(5) - (8)].reg), 2, 0);
	    }
	  else if (IS_DREG_L ((yyvsp[(1) - (8)].reg)) && IS_DREG_H ((yyvsp[(5) - (8)].reg)) && IS_DREG_L ((yyvsp[(7) - (8)].reg)))
	    {
	      notethat ("dsp32shift: dregs_lo = EXPADJ (dregs_hi, dregs_lo)\n");
	      (yyval.instr) = DSP32SHIFT (7, &(yyvsp[(1) - (8)].reg), &(yyvsp[(7) - (8)].reg), &(yyvsp[(5) - (8)].reg), 3, 0);
	    }
	  else
	    return yyerror ("Bad shift value or register");
	}
    break;

  case 97:
#line 2035 "bfin-parse.y"
    {
	  if (IS_DREG ((yyvsp[(1) - (8)].reg)) && IS_DREG ((yyvsp[(5) - (8)].reg)) && IS_DREG ((yyvsp[(7) - (8)].reg)))
	    {
	      notethat ("dsp32shift: dregs = DEPOSIT (dregs , dregs )\n");
	      (yyval.instr) = DSP32SHIFT (10, &(yyvsp[(1) - (8)].reg), &(yyvsp[(7) - (8)].reg), &(yyvsp[(5) - (8)].reg), 2, 0);
	    }
	  else
	    return yyerror ("Register mismatch");
	}
    break;

  case 98:
#line 2046 "bfin-parse.y"
    {
	  if (IS_DREG ((yyvsp[(1) - (11)].reg)) && IS_DREG ((yyvsp[(5) - (11)].reg)) && IS_DREG ((yyvsp[(7) - (11)].reg)))
	    {
	      notethat ("dsp32shift: dregs = DEPOSIT (dregs , dregs ) (X)\n");
	      (yyval.instr) = DSP32SHIFT (10, &(yyvsp[(1) - (11)].reg), &(yyvsp[(7) - (11)].reg), &(yyvsp[(5) - (11)].reg), 3, 0);
	    }
	  else
	    return yyerror ("Register mismatch");
	}
    break;

  case 99:
#line 2057 "bfin-parse.y"
    {
	  if (IS_DREG ((yyvsp[(1) - (9)].reg)) && IS_DREG ((yyvsp[(5) - (9)].reg)) && IS_DREG_L ((yyvsp[(7) - (9)].reg)))
	    {
	      notethat ("dsp32shift: dregs = EXTRACT (dregs, dregs_lo ) (.)\n");
	      (yyval.instr) = DSP32SHIFT (10, &(yyvsp[(1) - (9)].reg), &(yyvsp[(7) - (9)].reg), &(yyvsp[(5) - (9)].reg), (yyvsp[(9) - (9)].r0).r0, 0);
	    }
	  else
	    return yyerror ("Register mismatch");
	}
    break;

  case 100:
#line 2068 "bfin-parse.y"
    {
	  if (!REG_SAME ((yyvsp[(1) - (4)].reg), (yyvsp[(2) - (4)].reg)))
	    return yyerror ("Aregs must be same");

	  if (IS_UIMM ((yyvsp[(4) - (4)].expr), 5))
	    {
	      notethat ("dsp32shiftimm: Ax = Ax >>> uimm5\n");
	      (yyval.instr) = DSP32SHIFTIMM (3, 0, -imm6 ((yyvsp[(4) - (4)].expr)), 0, 0, IS_A1 ((yyvsp[(1) - (4)].reg)));
	    }
	  else
	    return yyerror ("Shift value range error");
	}
    break;

  case 101:
#line 2081 "bfin-parse.y"
    {
	  if (REG_SAME ((yyvsp[(1) - (5)].reg), (yyvsp[(3) - (5)].reg)) && IS_DREG_L ((yyvsp[(5) - (5)].reg)))
	    {
	      notethat ("dsp32shift: Ax = LSHIFT Ax BY dregs_lo\n");
	      (yyval.instr) = DSP32SHIFT (3, 0, &(yyvsp[(5) - (5)].reg), 0, 1, IS_A1 ((yyvsp[(1) - (5)].reg)));
	    }
	  else
	    return yyerror ("Register mismatch");
	}
    break;

  case 102:
#line 2092 "bfin-parse.y"
    {
	  if (IS_DREG ((yyvsp[(1) - (6)].reg)) && IS_DREG ((yyvsp[(4) - (6)].reg)) && IS_DREG_L ((yyvsp[(6) - (6)].reg)))
	    {
	      notethat ("dsp32shift: dregs_lo = LSHIFT dregs_hi BY dregs_lo\n");
	      (yyval.instr) = DSP32SHIFT (0, &(yyvsp[(1) - (6)].reg), &(yyvsp[(6) - (6)].reg), &(yyvsp[(4) - (6)].reg), 2, HL2 ((yyvsp[(1) - (6)].reg), (yyvsp[(4) - (6)].reg)));
	    }
	  else
	    return yyerror ("Register mismatch");
	}
    break;

  case 103:
#line 2103 "bfin-parse.y"
    {
	  if (IS_DREG ((yyvsp[(1) - (7)].reg)) && IS_DREG ((yyvsp[(4) - (7)].reg)) && IS_DREG_L ((yyvsp[(6) - (7)].reg)))
	    {
	      notethat ("dsp32shift: dregs = LSHIFT dregs BY dregs_lo (V )\n");
	      (yyval.instr) = DSP32SHIFT ((yyvsp[(7) - (7)].r0).r0 ? 1: 2, &(yyvsp[(1) - (7)].reg), &(yyvsp[(6) - (7)].reg), &(yyvsp[(4) - (7)].reg), 2, 0);
	    }
	  else
	    return yyerror ("Register mismatch");
	}
    break;

  case 104:
#line 2114 "bfin-parse.y"
    {
	  if (IS_DREG ((yyvsp[(1) - (6)].reg)) && IS_DREG ((yyvsp[(4) - (6)].reg)) && IS_DREG_L ((yyvsp[(6) - (6)].reg)))
	    {
	      notethat ("dsp32shift: dregs = SHIFT dregs BY dregs_lo\n");
	      (yyval.instr) = DSP32SHIFT (2, &(yyvsp[(1) - (6)].reg), &(yyvsp[(6) - (6)].reg), &(yyvsp[(4) - (6)].reg), 2, 0);
	    }
	  else
	    return yyerror ("Register mismatch");
	}
    break;

  case 105:
#line 2125 "bfin-parse.y"
    {
	  if (REG_SAME ((yyvsp[(1) - (4)].reg), (yyvsp[(2) - (4)].reg)) && IS_IMM ((yyvsp[(4) - (4)].expr), 6) >= 0)
	    {
	      notethat ("dsp32shiftimm: Ax = Ax >> imm6\n");
	      (yyval.instr) = DSP32SHIFTIMM (3, 0, -imm6 ((yyvsp[(4) - (4)].expr)), 0, 1, IS_A1 ((yyvsp[(1) - (4)].reg)));
	    }
	  else
	    return yyerror ("Accu register expected");
	}
    break;

  case 106:
#line 2136 "bfin-parse.y"
    {
	  if ((yyvsp[(6) - (6)].r0).r0 == 1)
	    {
	      if (IS_DREG ((yyvsp[(1) - (6)].reg)) && IS_DREG ((yyvsp[(3) - (6)].reg)) && IS_UIMM ((yyvsp[(5) - (6)].expr), 5))
		{
		  notethat ("dsp32shiftimm: dregs = dregs >> uimm5 (V)\n");
		  (yyval.instr) = DSP32SHIFTIMM (1, &(yyvsp[(1) - (6)].reg), -uimm5 ((yyvsp[(5) - (6)].expr)), &(yyvsp[(3) - (6)].reg), 2, 0);
		}
	      else
	        return yyerror ("Register mismatch");
	    }
	  else
	    {
	      if (IS_DREG ((yyvsp[(1) - (6)].reg)) && IS_DREG ((yyvsp[(3) - (6)].reg)) && IS_UIMM ((yyvsp[(5) - (6)].expr), 5))
		{
		  notethat ("dsp32shiftimm: dregs = dregs >> uimm5\n");
		  (yyval.instr) = DSP32SHIFTIMM (2, &(yyvsp[(1) - (6)].reg), -imm6 ((yyvsp[(5) - (6)].expr)), &(yyvsp[(3) - (6)].reg), 2, 0);
		}
	      else if (IS_PREG ((yyvsp[(1) - (6)].reg)) && IS_PREG ((yyvsp[(3) - (6)].reg)) && EXPR_VALUE ((yyvsp[(5) - (6)].expr)) == 2)
		{
		  notethat ("PTR2op: pregs = pregs >> 2\n");
		  (yyval.instr) = PTR2OP (&(yyvsp[(1) - (6)].reg), &(yyvsp[(3) - (6)].reg), 3);
		}
	      else if (IS_PREG ((yyvsp[(1) - (6)].reg)) && IS_PREG ((yyvsp[(3) - (6)].reg)) && EXPR_VALUE ((yyvsp[(5) - (6)].expr)) == 1)
		{
		  notethat ("PTR2op: pregs = pregs >> 1\n");
		  (yyval.instr) = PTR2OP (&(yyvsp[(1) - (6)].reg), &(yyvsp[(3) - (6)].reg), 4);
		}
	      else
	        return yyerror ("Register mismatch");
	    }
	}
    break;

  case 107:
#line 2169 "bfin-parse.y"
    {
	  if (IS_UIMM ((yyvsp[(5) - (5)].expr), 5))
	    {
	      notethat ("dsp32shiftimm:  dregs_half =  dregs_half >> uimm5\n");
	      (yyval.instr) = DSP32SHIFTIMM (0, &(yyvsp[(1) - (5)].reg), -uimm5 ((yyvsp[(5) - (5)].expr)), &(yyvsp[(3) - (5)].reg), 2, HL2 ((yyvsp[(1) - (5)].reg), (yyvsp[(3) - (5)].reg)));
	    }
	  else
	    return yyerror ("Register mismatch");
	}
    break;

  case 108:
#line 2179 "bfin-parse.y"
    {
	  if (IS_UIMM ((yyvsp[(5) - (6)].expr), 5))
	    {
	      notethat ("dsp32shiftimm: dregs_half = dregs_half >>> uimm5\n");
	      (yyval.instr) = DSP32SHIFTIMM (0, &(yyvsp[(1) - (6)].reg), -uimm5 ((yyvsp[(5) - (6)].expr)), &(yyvsp[(3) - (6)].reg),
				  (yyvsp[(6) - (6)].modcodes).s0, HL2 ((yyvsp[(1) - (6)].reg), (yyvsp[(3) - (6)].reg)));
	    }
	  else
	    return yyerror ("Register or modifier mismatch");
	}
    break;

  case 109:
#line 2192 "bfin-parse.y"
    {
	  if (IS_DREG ((yyvsp[(1) - (6)].reg)) && IS_DREG ((yyvsp[(3) - (6)].reg)) && IS_UIMM ((yyvsp[(5) - (6)].expr), 5))
	    {
	      if ((yyvsp[(6) - (6)].modcodes).r0)
		{
		  /* Vector?  */
		  notethat ("dsp32shiftimm: dregs  =  dregs >>> uimm5 (V, .)\n");
		  (yyval.instr) = DSP32SHIFTIMM (1, &(yyvsp[(1) - (6)].reg), -uimm5 ((yyvsp[(5) - (6)].expr)), &(yyvsp[(3) - (6)].reg), (yyvsp[(6) - (6)].modcodes).s0, 0);
		}
	      else
		{
		  notethat ("dsp32shiftimm: dregs  =  dregs >>> uimm5 (.)\n");
		  (yyval.instr) = DSP32SHIFTIMM (2, &(yyvsp[(1) - (6)].reg), -uimm5 ((yyvsp[(5) - (6)].expr)), &(yyvsp[(3) - (6)].reg), (yyvsp[(6) - (6)].modcodes).s0, 0);
		}
	    }
	  else
	    return yyerror ("Register mismatch");
	}
    break;

  case 110:
#line 2212 "bfin-parse.y"
    {
	  if (IS_DREG_L ((yyvsp[(1) - (4)].reg)) && IS_DREG ((yyvsp[(4) - (4)].reg)))
	    {
	      notethat ("dsp32shift: dregs_lo = ONES dregs\n");
	      (yyval.instr) = DSP32SHIFT (6, &(yyvsp[(1) - (4)].reg), 0, &(yyvsp[(4) - (4)].reg), 3, 0);
	    }
	  else
	    return yyerror ("Register mismatch");
	}
    break;

  case 111:
#line 2223 "bfin-parse.y"
    {
	  if (IS_DREG ((yyvsp[(1) - (8)].reg)) && IS_DREG ((yyvsp[(5) - (8)].reg)) && IS_DREG ((yyvsp[(7) - (8)].reg)))
	    {
	      notethat ("dsp32shift: dregs = PACK (dregs_hi , dregs_hi )\n");
	      (yyval.instr) = DSP32SHIFT (4, &(yyvsp[(1) - (8)].reg), &(yyvsp[(7) - (8)].reg), &(yyvsp[(5) - (8)].reg), HL2 ((yyvsp[(5) - (8)].reg), (yyvsp[(7) - (8)].reg)), 0);
	    }
	  else
	    return yyerror ("Register mismatch");
	}
    break;

  case 112:
#line 2234 "bfin-parse.y"
    {
	  if (IS_DREG ((yyvsp[(1) - (10)].reg))
	      && (yyvsp[(7) - (10)].reg).regno == REG_A0
	      && IS_DREG ((yyvsp[(9) - (10)].reg)) && !IS_H ((yyvsp[(1) - (10)].reg)) && !IS_A1 ((yyvsp[(7) - (10)].reg)))
	    {
	      notethat ("dsp32shift: dregs_lo = CC = BXORSHIFT (A0 , dregs )\n");
	      (yyval.instr) = DSP32SHIFT (11, &(yyvsp[(1) - (10)].reg), &(yyvsp[(9) - (10)].reg), 0, 0, 0);
	    }
	  else
	    return yyerror ("Register mismatch");
	}
    break;

  case 113:
#line 2247 "bfin-parse.y"
    {
	  if (IS_DREG ((yyvsp[(1) - (10)].reg))
	      && (yyvsp[(7) - (10)].reg).regno == REG_A0
	      && IS_DREG ((yyvsp[(9) - (10)].reg)) && !IS_H ((yyvsp[(1) - (10)].reg)) && !IS_A1 ((yyvsp[(7) - (10)].reg)))
	    {
	      notethat ("dsp32shift: dregs_lo = CC = BXOR (A0 , dregs)\n");
	      (yyval.instr) = DSP32SHIFT (11, &(yyvsp[(1) - (10)].reg), &(yyvsp[(9) - (10)].reg), 0, 1, 0);
	    }
	  else
	    return yyerror ("Register mismatch");
	}
    break;

  case 114:
#line 2260 "bfin-parse.y"
    {
	  if (IS_DREG ((yyvsp[(1) - (12)].reg)) && !IS_H ((yyvsp[(1) - (12)].reg)) && !REG_SAME ((yyvsp[(7) - (12)].reg), (yyvsp[(9) - (12)].reg)))
	    {
	      notethat ("dsp32shift: dregs_lo = CC = BXOR (A0 , A1 , CC)\n");
	      (yyval.instr) = DSP32SHIFT (12, &(yyvsp[(1) - (12)].reg), 0, 0, 1, 0);
	    }
	  else
	    return yyerror ("Register mismatch");
	}
    break;

  case 115:
#line 2271 "bfin-parse.y"
    {
	  if (REG_SAME ((yyvsp[(1) - (5)].reg), (yyvsp[(3) - (5)].reg)) && IS_DREG_L ((yyvsp[(5) - (5)].reg)))
	    {
	      notethat ("dsp32shift: Ax = ROT Ax BY dregs_lo\n");
	      (yyval.instr) = DSP32SHIFT (3, 0, &(yyvsp[(5) - (5)].reg), 0, 2, IS_A1 ((yyvsp[(1) - (5)].reg)));
	    }
	  else
	    return yyerror ("Register mismatch");
	}
    break;

  case 116:
#line 2282 "bfin-parse.y"
    {
	  if (IS_DREG ((yyvsp[(1) - (6)].reg)) && IS_DREG ((yyvsp[(4) - (6)].reg)) && IS_DREG_L ((yyvsp[(6) - (6)].reg)))
	    {
	      notethat ("dsp32shift: dregs = ROT dregs BY dregs_lo\n");
	      (yyval.instr) = DSP32SHIFT (2, &(yyvsp[(1) - (6)].reg), &(yyvsp[(6) - (6)].reg), &(yyvsp[(4) - (6)].reg), 3, 0);
	    }
	  else
	    return yyerror ("Register mismatch");
	}
    break;

  case 117:
#line 2293 "bfin-parse.y"
    {
	  if (IS_IMM ((yyvsp[(5) - (5)].expr), 6))
	    {
	      notethat ("dsp32shiftimm: An = ROT An BY imm6\n");
	      (yyval.instr) = DSP32SHIFTIMM (3, 0, imm6 ((yyvsp[(5) - (5)].expr)), 0, 2, IS_A1 ((yyvsp[(1) - (5)].reg)));
	    }
	  else
	    return yyerror ("Register mismatch");
	}
    break;

  case 118:
#line 2304 "bfin-parse.y"
    {
	  if (IS_DREG ((yyvsp[(1) - (6)].reg)) && IS_DREG ((yyvsp[(4) - (6)].reg)) && IS_IMM ((yyvsp[(6) - (6)].expr), 6))
	    {
	      (yyval.instr) = DSP32SHIFTIMM (2, &(yyvsp[(1) - (6)].reg), imm6 ((yyvsp[(6) - (6)].expr)), &(yyvsp[(4) - (6)].reg), 3, IS_A1 ((yyvsp[(1) - (6)].reg)));
	    }
	  else
	    return yyerror ("Register mismatch");
	}
    break;

  case 119:
#line 2314 "bfin-parse.y"
    {
	  if (IS_DREG_L ((yyvsp[(1) - (4)].reg)))
	    {
	      notethat ("dsp32shift: dregs_lo = SIGNBITS An\n");
	      (yyval.instr) = DSP32SHIFT (6, &(yyvsp[(1) - (4)].reg), 0, 0, IS_A1 ((yyvsp[(4) - (4)].reg)), 0);
	    }
	  else
	    return yyerror ("Register mismatch");
	}
    break;

  case 120:
#line 2325 "bfin-parse.y"
    {
	  if (IS_DREG_L ((yyvsp[(1) - (4)].reg)) && IS_DREG ((yyvsp[(4) - (4)].reg)))
	    {
	      notethat ("dsp32shift: dregs_lo = SIGNBITS dregs\n");
	      (yyval.instr) = DSP32SHIFT (5, &(yyvsp[(1) - (4)].reg), 0, &(yyvsp[(4) - (4)].reg), 0, 0);
	    }
	  else
	    return yyerror ("Register mismatch");
	}
    break;

  case 121:
#line 2336 "bfin-parse.y"
    {
	  if (IS_DREG_L ((yyvsp[(1) - (4)].reg)))
	    {
	      notethat ("dsp32shift: dregs_lo = SIGNBITS dregs_lo\n");
	      (yyval.instr) = DSP32SHIFT (5, &(yyvsp[(1) - (4)].reg), 0, &(yyvsp[(4) - (4)].reg), 1 + IS_H ((yyvsp[(4) - (4)].reg)), 0);
	    }
	  else
	    return yyerror ("Register mismatch");
	}
    break;

  case 122:
#line 2348 "bfin-parse.y"
    {
	  if (IS_DREG_L ((yyvsp[(1) - (7)].reg)) && IS_DREG ((yyvsp[(5) - (7)].reg)))
	    {
	      notethat ("dsp32shift: dregs_lo = VIT_MAX (dregs) (..)\n");
	      (yyval.instr) = DSP32SHIFT (9, &(yyvsp[(1) - (7)].reg), 0, &(yyvsp[(5) - (7)].reg), ((yyvsp[(7) - (7)].r0).r0 ? 0 : 1), 0);
	    }
	  else
	    return yyerror ("Register mismatch");
	}
    break;

  case 123:
#line 2359 "bfin-parse.y"
    {
	  if (IS_DREG ((yyvsp[(1) - (9)].reg)) && IS_DREG ((yyvsp[(5) - (9)].reg)) && IS_DREG ((yyvsp[(7) - (9)].reg)))
	    {
	      notethat ("dsp32shift: dregs = VIT_MAX (dregs, dregs) (ASR)\n");
	      (yyval.instr) = DSP32SHIFT (9, &(yyvsp[(1) - (9)].reg), &(yyvsp[(7) - (9)].reg), &(yyvsp[(5) - (9)].reg), 2 | ((yyvsp[(9) - (9)].r0).r0 ? 0 : 1), 0);
	    }
	  else
	    return yyerror ("Register mismatch");
	}
    break;

  case 124:
#line 2370 "bfin-parse.y"
    {
	  if (IS_DREG ((yyvsp[(3) - (9)].reg)) && IS_DREG ((yyvsp[(5) - (9)].reg)) && !IS_A1 ((yyvsp[(7) - (9)].reg)))
	    {
	      notethat ("dsp32shift: BITMUX (dregs , dregs , A0) (ASR)\n");
	      (yyval.instr) = DSP32SHIFT (8, 0, &(yyvsp[(3) - (9)].reg), &(yyvsp[(5) - (9)].reg), (yyvsp[(9) - (9)].r0).r0, 0);
	    }
	  else
	    return yyerror ("Register mismatch");
	}
    break;

  case 125:
#line 2381 "bfin-parse.y"
    {
	  if (!IS_A1 ((yyvsp[(1) - (9)].reg)) && !IS_A1 ((yyvsp[(4) - (9)].reg)) && IS_A1 ((yyvsp[(6) - (9)].reg)))
	    {
	      notethat ("dsp32shift: A0 = BXORSHIFT (A0 , A1 , CC )\n");
	      (yyval.instr) = DSP32SHIFT (12, 0, 0, 0, 0, 0);
	    }
	  else
	    return yyerror ("Dregs expected");
	}
    break;

  case 126:
#line 2394 "bfin-parse.y"
    {
	  if (IS_DREG ((yyvsp[(3) - (6)].reg)) && IS_UIMM ((yyvsp[(5) - (6)].expr), 5))
	    {
	      notethat ("LOGI2op: BITCLR (dregs , uimm5 )\n");
	      (yyval.instr) = LOGI2OP ((yyvsp[(3) - (6)].reg), uimm5 ((yyvsp[(5) - (6)].expr)), 4);
	    }
	  else
	    return yyerror ("Register mismatch");
	}
    break;

  case 127:
#line 2406 "bfin-parse.y"
    {
	  if (IS_DREG ((yyvsp[(3) - (6)].reg)) && IS_UIMM ((yyvsp[(5) - (6)].expr), 5))
	    {
	      notethat ("LOGI2op: BITCLR (dregs , uimm5 )\n");
	      (yyval.instr) = LOGI2OP ((yyvsp[(3) - (6)].reg), uimm5 ((yyvsp[(5) - (6)].expr)), 2);
	    }
	  else
	    return yyerror ("Register mismatch");
	}
    break;

  case 128:
#line 2418 "bfin-parse.y"
    {
	  if (IS_DREG ((yyvsp[(3) - (6)].reg)) && IS_UIMM ((yyvsp[(5) - (6)].expr), 5))
	    {
	      notethat ("LOGI2op: BITCLR (dregs , uimm5 )\n");
	      (yyval.instr) = LOGI2OP ((yyvsp[(3) - (6)].reg), uimm5 ((yyvsp[(5) - (6)].expr)), 3);
	    }
	  else
	    return yyerror ("Register mismatch");
	}
    break;

  case 129:
#line 2429 "bfin-parse.y"
    {
	  if (IS_DREG ((yyvsp[(5) - (8)].reg)) && IS_UIMM ((yyvsp[(7) - (8)].expr), 5))
	    {
	      notethat ("LOGI2op: CC =! BITTST (dregs , uimm5 )\n");
	      (yyval.instr) = LOGI2OP ((yyvsp[(5) - (8)].reg), uimm5 ((yyvsp[(7) - (8)].expr)), 0);
	    }
	  else
	    return yyerror ("Register mismatch or value error");
	}
    break;

  case 130:
#line 2440 "bfin-parse.y"
    {
	  if (IS_DREG ((yyvsp[(5) - (8)].reg)) && IS_UIMM ((yyvsp[(7) - (8)].expr), 5))
	    {
	      notethat ("LOGI2op: CC = BITTST (dregs , uimm5 )\n");
	      (yyval.instr) = LOGI2OP ((yyvsp[(5) - (8)].reg), uimm5 ((yyvsp[(7) - (8)].expr)), 1);
	    }
	  else
	    return yyerror ("Register mismatch or value error");
	}
    break;

  case 131:
#line 2451 "bfin-parse.y"
    {
	  if ((IS_DREG ((yyvsp[(4) - (6)].reg)) || IS_PREG ((yyvsp[(4) - (6)].reg)))
	      && (IS_DREG ((yyvsp[(6) - (6)].reg)) || IS_PREG ((yyvsp[(6) - (6)].reg))))
	    {
	      notethat ("ccMV: IF ! CC gregs = gregs\n");
	      (yyval.instr) = CCMV (&(yyvsp[(6) - (6)].reg), &(yyvsp[(4) - (6)].reg), 0);
	    }
	  else
	    return yyerror ("Register mismatch");
	}
    break;

  case 132:
#line 2463 "bfin-parse.y"
    {
	  if ((IS_DREG ((yyvsp[(5) - (5)].reg)) || IS_PREG ((yyvsp[(5) - (5)].reg)))
	      && (IS_DREG ((yyvsp[(3) - (5)].reg)) || IS_PREG ((yyvsp[(3) - (5)].reg))))
	    {
	      notethat ("ccMV: IF CC gregs = gregs\n");
	      (yyval.instr) = CCMV (&(yyvsp[(5) - (5)].reg), &(yyvsp[(3) - (5)].reg), 1);
	    }
	  else
	    return yyerror ("Register mismatch");
	}
    break;

  case 133:
#line 2475 "bfin-parse.y"
    {
	  if (IS_PCREL10 ((yyvsp[(5) - (5)].expr)))
	    {
	      notethat ("BRCC: IF !CC JUMP  pcrel11m2\n");
	      (yyval.instr) = BRCC (0, 0, (yyvsp[(5) - (5)].expr));
	    }
	  else
	    return yyerror ("Bad jump offset");
	}
    break;

  case 134:
#line 2486 "bfin-parse.y"
    {
	  if (IS_PCREL10 ((yyvsp[(5) - (8)].expr)))
	    {
	      notethat ("BRCC: IF !CC JUMP  pcrel11m2\n");
	      (yyval.instr) = BRCC (0, 1, (yyvsp[(5) - (8)].expr));
	    }
	  else
	    return yyerror ("Bad jump offset");
	}
    break;

  case 135:
#line 2497 "bfin-parse.y"
    {
	  if (IS_PCREL10 ((yyvsp[(4) - (4)].expr)))
	    {
	      notethat ("BRCC: IF CC JUMP  pcrel11m2\n");
	      (yyval.instr) = BRCC (1, 0, (yyvsp[(4) - (4)].expr));
	    }
	  else
	    return yyerror ("Bad jump offset");
	}
    break;

  case 136:
#line 2508 "bfin-parse.y"
    {
	  if (IS_PCREL10 ((yyvsp[(4) - (7)].expr)))
	    {
	      notethat ("BRCC: IF !CC JUMP  pcrel11m2\n");
	      (yyval.instr) = BRCC (1, 1, (yyvsp[(4) - (7)].expr));
	    }
	  else
	    return yyerror ("Bad jump offset");
	}
    break;

  case 137:
#line 2518 "bfin-parse.y"
    {
	  notethat ("ProgCtrl: NOP\n");
	  (yyval.instr) = PROGCTRL (0, 0);
	}
    break;

  case 138:
#line 2524 "bfin-parse.y"
    {
	  notethat ("ProgCtrl: RTS\n");
	  (yyval.instr) = PROGCTRL (1, 0);
	}
    break;

  case 139:
#line 2530 "bfin-parse.y"
    {
	  notethat ("ProgCtrl: RTI\n");
	  (yyval.instr) = PROGCTRL (1, 1);
	}
    break;

  case 140:
#line 2536 "bfin-parse.y"
    {
	  notethat ("ProgCtrl: RTX\n");
	  (yyval.instr) = PROGCTRL (1, 2);
	}
    break;

  case 141:
#line 2542 "bfin-parse.y"
    {
	  notethat ("ProgCtrl: RTN\n");
	  (yyval.instr) = PROGCTRL (1, 3);
	}
    break;

  case 142:
#line 2548 "bfin-parse.y"
    {
	  notethat ("ProgCtrl: RTE\n");
	  (yyval.instr) = PROGCTRL (1, 4);
	}
    break;

  case 143:
#line 2554 "bfin-parse.y"
    {
	  notethat ("ProgCtrl: IDLE\n");
	  (yyval.instr) = PROGCTRL (2, 0);
	}
    break;

  case 144:
#line 2560 "bfin-parse.y"
    {
	  notethat ("ProgCtrl: CSYNC\n");
	  (yyval.instr) = PROGCTRL (2, 3);
	}
    break;

  case 145:
#line 2566 "bfin-parse.y"
    {
	  notethat ("ProgCtrl: SSYNC\n");
	  (yyval.instr) = PROGCTRL (2, 4);
	}
    break;

  case 146:
#line 2572 "bfin-parse.y"
    {
	  notethat ("ProgCtrl: EMUEXCPT\n");
	  (yyval.instr) = PROGCTRL (2, 5);
	}
    break;

  case 147:
#line 2578 "bfin-parse.y"
    {
	  if (IS_DREG ((yyvsp[(2) - (2)].reg)))
	    {
	      notethat ("ProgCtrl: CLI dregs\n");
	      (yyval.instr) = PROGCTRL (3, (yyvsp[(2) - (2)].reg).regno & CODE_MASK);
	    }
	  else
	    return yyerror ("Dreg expected for CLI");
	}
    break;

  case 148:
#line 2589 "bfin-parse.y"
    {
	  if (IS_DREG ((yyvsp[(2) - (2)].reg)))
	    {
	      notethat ("ProgCtrl: STI dregs\n");
	      (yyval.instr) = PROGCTRL (4, (yyvsp[(2) - (2)].reg).regno & CODE_MASK);
	    }
	  else
	    return yyerror ("Dreg expected for STI");
	}
    break;

  case 149:
#line 2600 "bfin-parse.y"
    {
	  if (IS_PREG ((yyvsp[(3) - (4)].reg)))
	    {
	      notethat ("ProgCtrl: JUMP (pregs )\n");
	      (yyval.instr) = PROGCTRL (5, (yyvsp[(3) - (4)].reg).regno & CODE_MASK);
	    }
	  else
	    return yyerror ("Bad register for indirect jump");
	}
    break;

  case 150:
#line 2611 "bfin-parse.y"
    {
	  if (IS_PREG ((yyvsp[(3) - (4)].reg)))
	    {
	      notethat ("ProgCtrl: CALL (pregs )\n");
	      (yyval.instr) = PROGCTRL (6, (yyvsp[(3) - (4)].reg).regno & CODE_MASK);
	    }
	  else
	    return yyerror ("Bad register for indirect call");
	}
    break;

  case 151:
#line 2622 "bfin-parse.y"
    {
	  if (IS_PREG ((yyvsp[(5) - (6)].reg)))
	    {
	      notethat ("ProgCtrl: CALL (PC + pregs )\n");
	      (yyval.instr) = PROGCTRL (7, (yyvsp[(5) - (6)].reg).regno & CODE_MASK);
	    }
	  else
	    return yyerror ("Bad register for indirect call");
	}
    break;

  case 152:
#line 2633 "bfin-parse.y"
    {
	  if (IS_PREG ((yyvsp[(5) - (6)].reg)))
	    {
	      notethat ("ProgCtrl: JUMP (PC + pregs )\n");
	      (yyval.instr) = PROGCTRL (8, (yyvsp[(5) - (6)].reg).regno & CODE_MASK);
	    }
	  else
	    return yyerror ("Bad register for indirect jump");
	}
    break;

  case 153:
#line 2644 "bfin-parse.y"
    {
	  if (IS_UIMM ((yyvsp[(2) - (2)].expr), 4))
	    {
	      notethat ("ProgCtrl: RAISE uimm4\n");
	      (yyval.instr) = PROGCTRL (9, uimm4 ((yyvsp[(2) - (2)].expr)));
	    }
	  else
	    return yyerror ("Bad value for RAISE");
	}
    break;

  case 154:
#line 2655 "bfin-parse.y"
    {
		notethat ("ProgCtrl: EMUEXCPT\n");
		(yyval.instr) = PROGCTRL (10, uimm4 ((yyvsp[(2) - (2)].expr)));
	}
    break;

  case 155:
#line 2661 "bfin-parse.y"
    {
	  if (IS_PREG ((yyvsp[(3) - (4)].reg)))
	    {
	      notethat ("ProgCtrl: TESTSET (pregs )\n");
	      (yyval.instr) = PROGCTRL (11, (yyvsp[(3) - (4)].reg).regno & CODE_MASK);
	    }
	  else
	    return yyerror ("Preg expected");
	}
    break;

  case 156:
#line 2672 "bfin-parse.y"
    {
	  if (IS_PCREL12 ((yyvsp[(2) - (2)].expr)))
	    {
	      notethat ("UJUMP: JUMP pcrel12\n");
	      (yyval.instr) = UJUMP ((yyvsp[(2) - (2)].expr));
	    }
	  else
	    return yyerror ("Bad value for relative jump");
	}
    break;

  case 157:
#line 2683 "bfin-parse.y"
    {
	  if (IS_PCREL12 ((yyvsp[(2) - (2)].expr)))
	    {
	      notethat ("UJUMP: JUMP_DOT_S pcrel12\n");
	      (yyval.instr) = UJUMP((yyvsp[(2) - (2)].expr));
	    }
	  else
	    return yyerror ("Bad value for relative jump");
	}
    break;

  case 158:
#line 2694 "bfin-parse.y"
    {
	  if (IS_PCREL24 ((yyvsp[(2) - (2)].expr)))
	    {
	      notethat ("CALLa: jump.l pcrel24\n");
	      (yyval.instr) = CALLA ((yyvsp[(2) - (2)].expr), 0);
	    }
	  else
	    return yyerror ("Bad value for long jump");
	}
    break;

  case 159:
#line 2705 "bfin-parse.y"
    {
	  if (IS_PCREL24 ((yyvsp[(2) - (2)].expr)))
	    {
	      notethat ("CALLa: jump.l pcrel24\n");
	      (yyval.instr) = CALLA ((yyvsp[(2) - (2)].expr), 2);
	    }
	  else
	    return yyerror ("Bad value for long jump");
	}
    break;

  case 160:
#line 2716 "bfin-parse.y"
    {
	  if (IS_PCREL24 ((yyvsp[(2) - (2)].expr)))
	    {
	      notethat ("CALLa: CALL pcrel25m2\n");
	      (yyval.instr) = CALLA ((yyvsp[(2) - (2)].expr), 1);
	    }
	  else
	    return yyerror ("Bad call address");
	}
    break;

  case 161:
#line 2726 "bfin-parse.y"
    {
	  if (IS_PCREL24 ((yyvsp[(2) - (2)].expr)))
	    {
	      notethat ("CALLa: CALL pcrel25m2\n");
	      (yyval.instr) = CALLA ((yyvsp[(2) - (2)].expr), 2);
	    }
	  else
	    return yyerror ("Bad call address");
	}
    break;

  case 162:
#line 2739 "bfin-parse.y"
    {
	  if (IS_DREG ((yyvsp[(3) - (6)].reg)) && IS_DREG ((yyvsp[(5) - (6)].reg)))
	    (yyval.instr) = ALU2OP (&(yyvsp[(3) - (6)].reg), &(yyvsp[(5) - (6)].reg), 8);
	  else
	    return yyerror ("Bad registers for DIVQ");
	}
    break;

  case 163:
#line 2747 "bfin-parse.y"
    {
	  if (IS_DREG ((yyvsp[(3) - (6)].reg)) && IS_DREG ((yyvsp[(5) - (6)].reg)))
	    (yyval.instr) = ALU2OP (&(yyvsp[(3) - (6)].reg), &(yyvsp[(5) - (6)].reg), 9);
	  else
	    return yyerror ("Bad registers for DIVS");
	}
    break;

  case 164:
#line 2755 "bfin-parse.y"
    {
	  if (IS_DREG ((yyvsp[(1) - (5)].reg)) && IS_DREG ((yyvsp[(4) - (5)].reg)))
	    {
	      if ((yyvsp[(5) - (5)].modcodes).r0 == 0 && (yyvsp[(5) - (5)].modcodes).s0 == 0 && (yyvsp[(5) - (5)].modcodes).aop == 0)
		{
		  notethat ("ALU2op: dregs = - dregs\n");
		  (yyval.instr) = ALU2OP (&(yyvsp[(1) - (5)].reg), &(yyvsp[(4) - (5)].reg), 14);
		}
	      else if ((yyvsp[(5) - (5)].modcodes).r0 == 1 && (yyvsp[(5) - (5)].modcodes).s0 == 0 && (yyvsp[(5) - (5)].modcodes).aop == 3)
		{
		  notethat ("dsp32alu: dregs = - dregs (.)\n");
		  (yyval.instr) = DSP32ALU (15, 0, 0, &(yyvsp[(1) - (5)].reg), &(yyvsp[(4) - (5)].reg), 0, (yyvsp[(5) - (5)].modcodes).s0, 0, 3);
		}
	      else
		{
		  notethat ("dsp32alu: dregs = - dregs (.)\n");
		  (yyval.instr) = DSP32ALU (7, 0, 0, &(yyvsp[(1) - (5)].reg), &(yyvsp[(4) - (5)].reg), 0, (yyvsp[(5) - (5)].modcodes).s0, 0, 3);
		}
	    }
	  else
	    return yyerror ("Dregs expected");
	}
    break;

  case 165:
#line 2779 "bfin-parse.y"
    {
	  if (IS_DREG ((yyvsp[(1) - (4)].reg)) && IS_DREG ((yyvsp[(4) - (4)].reg)))
	    {
	      notethat ("ALU2op: dregs = ~dregs\n");
	      (yyval.instr) = ALU2OP (&(yyvsp[(1) - (4)].reg), &(yyvsp[(4) - (4)].reg), 15);
	    }
	  else
	    return yyerror ("Dregs expected");
	}
    break;

  case 166:
#line 2790 "bfin-parse.y"
    {
	  if (IS_DREG ((yyvsp[(1) - (3)].reg)) && IS_DREG ((yyvsp[(3) - (3)].reg)))
	    {
	      notethat ("ALU2op: dregs >>= dregs\n");
	      (yyval.instr) = ALU2OP (&(yyvsp[(1) - (3)].reg), &(yyvsp[(3) - (3)].reg), 1);
	    }
	  else
	    return yyerror ("Dregs expected");
	}
    break;

  case 167:
#line 2801 "bfin-parse.y"
    {
	  if (IS_DREG ((yyvsp[(1) - (3)].reg)) && IS_UIMM ((yyvsp[(3) - (3)].expr), 5))
	    {
	      notethat ("LOGI2op: dregs >>= uimm5\n");
	      (yyval.instr) = LOGI2OP ((yyvsp[(1) - (3)].reg), uimm5 ((yyvsp[(3) - (3)].expr)), 6);
	    }
	  else
	    return yyerror ("Dregs expected or value error");
	}
    break;

  case 168:
#line 2812 "bfin-parse.y"
    {
	  if (IS_DREG ((yyvsp[(1) - (3)].reg)) && IS_DREG ((yyvsp[(3) - (3)].reg)))
	    {
	      notethat ("ALU2op: dregs >>>= dregs\n");
	      (yyval.instr) = ALU2OP (&(yyvsp[(1) - (3)].reg), &(yyvsp[(3) - (3)].reg), 0);
	    }
	  else
	    return yyerror ("Dregs expected");
	}
    break;

  case 169:
#line 2823 "bfin-parse.y"
    {
	  if (IS_DREG ((yyvsp[(1) - (3)].reg)) && IS_DREG ((yyvsp[(3) - (3)].reg)))
	    {
	      notethat ("ALU2op: dregs <<= dregs\n");
	      (yyval.instr) = ALU2OP (&(yyvsp[(1) - (3)].reg), &(yyvsp[(3) - (3)].reg), 2);
	    }
	  else
	    return yyerror ("Dregs expected");
	}
    break;

  case 170:
#line 2834 "bfin-parse.y"
    {
	  if (IS_DREG ((yyvsp[(1) - (3)].reg)) && IS_UIMM ((yyvsp[(3) - (3)].expr), 5))
	    {
	      notethat ("LOGI2op: dregs <<= uimm5\n");
	      (yyval.instr) = LOGI2OP ((yyvsp[(1) - (3)].reg), uimm5 ((yyvsp[(3) - (3)].expr)), 7);
	    }
	  else
	    return yyerror ("Dregs expected or const value error");
	}
    break;

  case 171:
#line 2846 "bfin-parse.y"
    {
	  if (IS_DREG ((yyvsp[(1) - (3)].reg)) && IS_UIMM ((yyvsp[(3) - (3)].expr), 5))
	    {
	      notethat ("LOGI2op: dregs >>>= uimm5\n");
	      (yyval.instr) = LOGI2OP ((yyvsp[(1) - (3)].reg), uimm5 ((yyvsp[(3) - (3)].expr)), 5);
	    }
	  else
	    return yyerror ("Dregs expected");
	}
    break;

  case 172:
#line 2859 "bfin-parse.y"
    {
	  notethat ("CaCTRL: FLUSH [ pregs ]\n");
	  if (IS_PREG ((yyvsp[(3) - (4)].reg)))
	    (yyval.instr) = CACTRL (&(yyvsp[(3) - (4)].reg), 0, 2);
	  else
	    return yyerror ("Bad register(s) for FLUSH");
	}
    break;

  case 173:
#line 2868 "bfin-parse.y"
    {
	  if (IS_PREG ((yyvsp[(2) - (2)].reg)))
	    {
	      notethat ("CaCTRL: FLUSH [ pregs ++ ]\n");
	      (yyval.instr) = CACTRL (&(yyvsp[(2) - (2)].reg), 1, 2);
	    }
	  else
	    return yyerror ("Bad register(s) for FLUSH");
	}
    break;

  case 174:
#line 2879 "bfin-parse.y"
    {
	  if (IS_PREG ((yyvsp[(3) - (4)].reg)))
	    {
	      notethat ("CaCTRL: FLUSHINV [ pregs ]\n");
	      (yyval.instr) = CACTRL (&(yyvsp[(3) - (4)].reg), 0, 1);
	    }
	  else
	    return yyerror ("Bad register(s) for FLUSH");
	}
    break;

  case 175:
#line 2890 "bfin-parse.y"
    {
	  if (IS_PREG ((yyvsp[(2) - (2)].reg)))
	    {
	      notethat ("CaCTRL: FLUSHINV [ pregs ++ ]\n");
	      (yyval.instr) = CACTRL (&(yyvsp[(2) - (2)].reg), 1, 1);
	    }
	  else
	    return yyerror ("Bad register(s) for FLUSH");
	}
    break;

  case 176:
#line 2902 "bfin-parse.y"
    {
	  if (IS_PREG ((yyvsp[(3) - (4)].reg)))
	    {
	      notethat ("CaCTRL: IFLUSH [ pregs ]\n");
	      (yyval.instr) = CACTRL (&(yyvsp[(3) - (4)].reg), 0, 3);
	    }
	  else
	    return yyerror ("Bad register(s) for FLUSH");
	}
    break;

  case 177:
#line 2913 "bfin-parse.y"
    {
	  if (IS_PREG ((yyvsp[(2) - (2)].reg)))
	    {
	      notethat ("CaCTRL: IFLUSH [ pregs ++ ]\n");
	      (yyval.instr) = CACTRL (&(yyvsp[(2) - (2)].reg), 1, 3);
	    }
	  else
	    return yyerror ("Bad register(s) for FLUSH");
	}
    break;

  case 178:
#line 2924 "bfin-parse.y"
    {
	  if (IS_PREG ((yyvsp[(3) - (4)].reg)))
	    {
	      notethat ("CaCTRL: PREFETCH [ pregs ]\n");
	      (yyval.instr) = CACTRL (&(yyvsp[(3) - (4)].reg), 0, 0);
	    }
	  else
	    return yyerror ("Bad register(s) for PREFETCH");
	}
    break;

  case 179:
#line 2935 "bfin-parse.y"
    {
	  if (IS_PREG ((yyvsp[(2) - (2)].reg)))
	    {
	      notethat ("CaCTRL: PREFETCH [ pregs ++ ]\n");
	      (yyval.instr) = CACTRL (&(yyvsp[(2) - (2)].reg), 1, 0);
	    }
	  else
	    return yyerror ("Bad register(s) for PREFETCH");
	}
    break;

  case 180:
#line 2949 "bfin-parse.y"
    {
	  if (!IS_DREG ((yyvsp[(7) - (7)].reg)))
	    return yyerror ("Dreg expected for source operand");
	  if (!IS_PREG ((yyvsp[(3) - (7)].reg)))
	    return yyerror ("Preg expected in address");

	  notethat ("LDST: B [ pregs <post_op> ] = dregs\n");
	  (yyval.instr) = LDST (&(yyvsp[(3) - (7)].reg), &(yyvsp[(7) - (7)].reg), (yyvsp[(4) - (7)].modcodes).x0, 2, 0, 1);
	}
    break;

  case 181:
#line 2961 "bfin-parse.y"
    {
	  Expr_Node *tmp = (yyvsp[(5) - (8)].expr);

	  if (!IS_DREG ((yyvsp[(8) - (8)].reg)))
	    return yyerror ("Dreg expected for source operand");
	  if (!IS_PREG ((yyvsp[(3) - (8)].reg)))
	    return yyerror ("Preg expected in address");

	  if (IS_RELOC ((yyvsp[(5) - (8)].expr)))
	    return yyerror ("Plain symbol used as offset");

	  if ((yyvsp[(4) - (8)].r0).r0)
	    tmp = unary (Expr_Op_Type_NEG, tmp);
	    
	  if (in_range_p (tmp, -32768, 32767, 0))
	    {
	      notethat ("LDST: B [ pregs + imm16 ] = dregs\n");
	      (yyval.instr) = LDSTIDXI (&(yyvsp[(3) - (8)].reg), &(yyvsp[(8) - (8)].reg), 1, 2, 0, (yyvsp[(5) - (8)].expr));
	    }
	  else
	    return yyerror ("Displacement out of range");
	}
    break;

  case 182:
#line 2987 "bfin-parse.y"
    {
	  Expr_Node *tmp = (yyvsp[(5) - (8)].expr);

	  if (!IS_DREG ((yyvsp[(8) - (8)].reg)))
	    return yyerror ("Dreg expected for source operand");
	  if (!IS_PREG ((yyvsp[(3) - (8)].reg)))
	    return yyerror ("Preg expected in address");
	  
	  if ((yyvsp[(4) - (8)].r0).r0)
	    tmp = unary (Expr_Op_Type_NEG, tmp);

	  if (IS_RELOC ((yyvsp[(5) - (8)].expr)))
	    return yyerror ("Plain symbol used as offset");

	  if (in_range_p (tmp, 0, 30, 1))
	    {
	      notethat ("LDSTii: W [ pregs +- uimm5m2 ] = dregs\n");
	      (yyval.instr) = LDSTII (&(yyvsp[(3) - (8)].reg), &(yyvsp[(8) - (8)].reg), tmp, 1, 1);
	    }
	  else if (in_range_p (tmp, -65536, 65535, 1))
	    {
	      notethat ("LDSTidxI: W [ pregs + imm17m2 ] = dregs\n");
	      (yyval.instr) = LDSTIDXI (&(yyvsp[(3) - (8)].reg), &(yyvsp[(8) - (8)].reg), 1, 1, 0, tmp);
	    }
	  else
	    return yyerror ("Displacement out of range");
	}
    break;

  case 183:
#line 3017 "bfin-parse.y"
    {
	  if (!IS_DREG ((yyvsp[(7) - (7)].reg)))
	    return yyerror ("Dreg expected for source operand");
	  if (!IS_PREG ((yyvsp[(3) - (7)].reg)))
	    return yyerror ("Preg expected in address");

	  notethat ("LDST: W [ pregs <post_op> ] = dregs\n");
	  (yyval.instr) = LDST (&(yyvsp[(3) - (7)].reg), &(yyvsp[(7) - (7)].reg), (yyvsp[(4) - (7)].modcodes).x0, 1, 0, 1);
	}
    break;

  case 184:
#line 3028 "bfin-parse.y"
    {
	  if (!IS_DREG ((yyvsp[(7) - (7)].reg)))
	    return yyerror ("Dreg expected for source operand");
	  if ((yyvsp[(4) - (7)].modcodes).x0 == 2)
	    {
	      if (!IS_IREG ((yyvsp[(3) - (7)].reg)) && !IS_PREG ((yyvsp[(3) - (7)].reg)))
		return yyerror ("Ireg or Preg expected in address");
	    }
	  else if (!IS_IREG ((yyvsp[(3) - (7)].reg)))
	    return yyerror ("Ireg expected in address");

	  if (IS_IREG ((yyvsp[(3) - (7)].reg)))
	    {
	      notethat ("dspLDST: W [ iregs <post_op> ] = dregs_half\n");
	      (yyval.instr) = DSPLDST (&(yyvsp[(3) - (7)].reg), 1 + IS_H ((yyvsp[(7) - (7)].reg)), &(yyvsp[(7) - (7)].reg), (yyvsp[(4) - (7)].modcodes).x0, 1);
	    }
	  else
	    {
	      notethat ("LDSTpmod: W [ pregs ] = dregs_half\n");
	      (yyval.instr) = LDSTPMOD (&(yyvsp[(3) - (7)].reg), &(yyvsp[(7) - (7)].reg), &(yyvsp[(3) - (7)].reg), 1 + IS_H ((yyvsp[(7) - (7)].reg)), 1);
	    }
	}
    break;

  case 185:
#line 3053 "bfin-parse.y"
    {
	  Expr_Node *tmp = (yyvsp[(4) - (7)].expr);
	  int ispreg = IS_PREG ((yyvsp[(7) - (7)].reg));

	  if (!IS_PREG ((yyvsp[(2) - (7)].reg)))
	    return yyerror ("Preg expected in address");

	  if (!IS_DREG ((yyvsp[(7) - (7)].reg)) && !ispreg)
	    return yyerror ("Preg expected for source operand");

	  if ((yyvsp[(3) - (7)].r0).r0)
	    tmp = unary (Expr_Op_Type_NEG, tmp);

	  if (IS_RELOC ((yyvsp[(4) - (7)].expr)))
	    return yyerror ("Plain symbol used as offset");

	  if (in_range_p (tmp, 0, 63, 3))
	    {
	      notethat ("LDSTii: dpregs = [ pregs + uimm6m4 ]\n");
	      (yyval.instr) = LDSTII (&(yyvsp[(2) - (7)].reg), &(yyvsp[(7) - (7)].reg), tmp, 1, ispreg ? 3 : 0);
	    }
	  else if ((yyvsp[(2) - (7)].reg).regno == REG_FP && in_range_p (tmp, -128, 0, 3))
	    {
	      notethat ("LDSTiiFP: dpregs = [ FP - uimm7m4 ]\n");
	      tmp = unary (Expr_Op_Type_NEG, tmp);
	      (yyval.instr) = LDSTIIFP (tmp, &(yyvsp[(7) - (7)].reg), 1);
	    }
	  else if (in_range_p (tmp, -131072, 131071, 3))
	    {
	      notethat ("LDSTidxI: [ pregs + imm18m4 ] = dpregs\n");
	      (yyval.instr) = LDSTIDXI (&(yyvsp[(2) - (7)].reg), &(yyvsp[(7) - (7)].reg), 1, 0, ispreg ? 1 : 0, tmp);
	    }
	  else
	    return yyerror ("Displacement out of range");
	}
    break;

  case 186:
#line 3090 "bfin-parse.y"
    {
	  Expr_Node *tmp = (yyvsp[(7) - (9)].expr);
	  if (!IS_DREG ((yyvsp[(1) - (9)].reg)))
	    return yyerror ("Dreg expected for destination operand");
	  if (!IS_PREG ((yyvsp[(5) - (9)].reg)))
	    return yyerror ("Preg expected in address");

	  if ((yyvsp[(6) - (9)].r0).r0)
	    tmp = unary (Expr_Op_Type_NEG, tmp);

	  if (IS_RELOC ((yyvsp[(7) - (9)].expr)))
	    return yyerror ("Plain symbol used as offset");

	  if (in_range_p (tmp, 0, 30, 1))
	    {
	      notethat ("LDSTii: dregs = W [ pregs + uimm5m2 ] (.)\n");
	      (yyval.instr) = LDSTII (&(yyvsp[(5) - (9)].reg), &(yyvsp[(1) - (9)].reg), tmp, 0, 1 << (yyvsp[(9) - (9)].r0).r0);
	    }
	  else if (in_range_p (tmp, -65536, 65535, 1))
	    {
	      notethat ("LDSTidxI: dregs = W [ pregs + imm17m2 ] (.)\n");
	      (yyval.instr) = LDSTIDXI (&(yyvsp[(5) - (9)].reg), &(yyvsp[(1) - (9)].reg), 0, 1, (yyvsp[(9) - (9)].r0).r0, tmp);
	    }
	  else
	    return yyerror ("Displacement out of range");
	}
    break;

  case 187:
#line 3118 "bfin-parse.y"
    {
	  if (!IS_DREG ((yyvsp[(1) - (7)].reg)))
	    return yyerror ("Dreg expected for source operand");
	  if ((yyvsp[(6) - (7)].modcodes).x0 == 2)
	    {
	      if (!IS_IREG ((yyvsp[(5) - (7)].reg)) && !IS_PREG ((yyvsp[(5) - (7)].reg)))
		return yyerror ("Ireg or Preg expected in address");
	    }
	  else if (!IS_IREG ((yyvsp[(5) - (7)].reg)))
	    return yyerror ("Ireg expected in address");

	  if (IS_IREG ((yyvsp[(5) - (7)].reg)))
	    {
	      notethat ("dspLDST: dregs_half = W [ iregs <post_op> ]\n");
	      (yyval.instr) = DSPLDST(&(yyvsp[(5) - (7)].reg), 1 + IS_H ((yyvsp[(1) - (7)].reg)), &(yyvsp[(1) - (7)].reg), (yyvsp[(6) - (7)].modcodes).x0, 0);
	    }
	  else
	    {
	      notethat ("LDSTpmod: dregs_half = W [ pregs <post_op> ]\n");
	      (yyval.instr) = LDSTPMOD (&(yyvsp[(5) - (7)].reg), &(yyvsp[(1) - (7)].reg), &(yyvsp[(5) - (7)].reg), 1 + IS_H ((yyvsp[(1) - (7)].reg)), 0);
	    }
	}
    break;

  case 188:
#line 3143 "bfin-parse.y"
    {
	  if (!IS_DREG ((yyvsp[(1) - (8)].reg)))
	    return yyerror ("Dreg expected for destination operand");
	  if (!IS_PREG ((yyvsp[(5) - (8)].reg)))
	    return yyerror ("Preg expected in address");

	  notethat ("LDST: dregs = W [ pregs <post_op> ] (.)\n");
	  (yyval.instr) = LDST (&(yyvsp[(5) - (8)].reg), &(yyvsp[(1) - (8)].reg), (yyvsp[(6) - (8)].modcodes).x0, 1, (yyvsp[(8) - (8)].r0).r0, 0);
	}
    break;

  case 189:
#line 3154 "bfin-parse.y"
    {
	  if (!IS_DREG ((yyvsp[(1) - (9)].reg)))
	    return yyerror ("Dreg expected for destination operand");
	  if (!IS_PREG ((yyvsp[(5) - (9)].reg)) || !IS_PREG ((yyvsp[(7) - (9)].reg)))
	    return yyerror ("Preg expected in address");

	  notethat ("LDSTpmod: dregs = W [ pregs ++ pregs ] (.)\n");
	  (yyval.instr) = LDSTPMOD (&(yyvsp[(5) - (9)].reg), &(yyvsp[(1) - (9)].reg), &(yyvsp[(7) - (9)].reg), 3, (yyvsp[(9) - (9)].r0).r0);
	}
    break;

  case 190:
#line 3165 "bfin-parse.y"
    {
	  if (!IS_DREG ((yyvsp[(1) - (8)].reg)))
	    return yyerror ("Dreg expected for destination operand");
	  if (!IS_PREG ((yyvsp[(5) - (8)].reg)) || !IS_PREG ((yyvsp[(7) - (8)].reg)))
	    return yyerror ("Preg expected in address");

	  notethat ("LDSTpmod: dregs_half = W [ pregs ++ pregs ]\n");
	  (yyval.instr) = LDSTPMOD (&(yyvsp[(5) - (8)].reg), &(yyvsp[(1) - (8)].reg), &(yyvsp[(7) - (8)].reg), 1 + IS_H ((yyvsp[(1) - (8)].reg)), 0);
	}
    break;

  case 191:
#line 3176 "bfin-parse.y"
    {
	  if (!IS_IREG ((yyvsp[(2) - (6)].reg)) && !IS_PREG ((yyvsp[(2) - (6)].reg)))
	    return yyerror ("Ireg or Preg expected in address");
	  else if (IS_IREG ((yyvsp[(2) - (6)].reg)) && !IS_DREG ((yyvsp[(6) - (6)].reg)))
	    return yyerror ("Dreg expected for source operand");
	  else if (IS_PREG ((yyvsp[(2) - (6)].reg)) && !IS_DREG ((yyvsp[(6) - (6)].reg)) && !IS_PREG ((yyvsp[(6) - (6)].reg)))
	    return yyerror ("Dreg or Preg expected for source operand");

	  if (IS_IREG ((yyvsp[(2) - (6)].reg)))
	    {
	      notethat ("dspLDST: [ iregs <post_op> ] = dregs\n");
	      (yyval.instr) = DSPLDST(&(yyvsp[(2) - (6)].reg), 0, &(yyvsp[(6) - (6)].reg), (yyvsp[(3) - (6)].modcodes).x0, 1);
	    }
	  else if (IS_DREG ((yyvsp[(6) - (6)].reg)))
	    {
	      notethat ("LDST: [ pregs <post_op> ] = dregs\n");
	      (yyval.instr) = LDST (&(yyvsp[(2) - (6)].reg), &(yyvsp[(6) - (6)].reg), (yyvsp[(3) - (6)].modcodes).x0, 0, 0, 1);
	    }
	  else
	    {
	      notethat ("LDST: [ pregs <post_op> ] = pregs\n");
	      (yyval.instr) = LDST (&(yyvsp[(2) - (6)].reg), &(yyvsp[(6) - (6)].reg), (yyvsp[(3) - (6)].modcodes).x0, 0, 1, 1);
	    }
	}
    break;

  case 192:
#line 3202 "bfin-parse.y"
    {
	  if (!IS_DREG ((yyvsp[(7) - (7)].reg)))
	    return yyerror ("Dreg expected for source operand");

	  if (IS_IREG ((yyvsp[(2) - (7)].reg)) && IS_MREG ((yyvsp[(4) - (7)].reg)))
	    {
	      notethat ("dspLDST: [ iregs ++ mregs ] = dregs\n");
	      (yyval.instr) = DSPLDST(&(yyvsp[(2) - (7)].reg), (yyvsp[(4) - (7)].reg).regno & CODE_MASK, &(yyvsp[(7) - (7)].reg), 3, 1);
	    }
	  else if (IS_PREG ((yyvsp[(2) - (7)].reg)) && IS_PREG ((yyvsp[(4) - (7)].reg)))
	    {
	      notethat ("LDSTpmod: [ pregs ++ pregs ] = dregs\n");
	      (yyval.instr) = LDSTPMOD (&(yyvsp[(2) - (7)].reg), &(yyvsp[(7) - (7)].reg), &(yyvsp[(4) - (7)].reg), 0, 1);
	    }
	  else
	    return yyerror ("Preg ++ Preg or Ireg ++ Mreg expected in address");
	}
    break;

  case 193:
#line 3221 "bfin-parse.y"
    {
	  if (!IS_DREG ((yyvsp[(8) - (8)].reg)))
	    return yyerror ("Dreg expected for source operand");

	  if (IS_PREG ((yyvsp[(3) - (8)].reg)) && IS_PREG ((yyvsp[(5) - (8)].reg)))
	    {
	      notethat ("LDSTpmod: W [ pregs ++ pregs ] = dregs_half\n");
	      (yyval.instr) = LDSTPMOD (&(yyvsp[(3) - (8)].reg), &(yyvsp[(8) - (8)].reg), &(yyvsp[(5) - (8)].reg), 1 + IS_H ((yyvsp[(8) - (8)].reg)), 1);
	    }
	  else
	    return yyerror ("Preg ++ Preg expected in address");
	}
    break;

  case 194:
#line 3235 "bfin-parse.y"
    {
	  Expr_Node *tmp = (yyvsp[(7) - (9)].expr);
	  if (!IS_DREG ((yyvsp[(1) - (9)].reg)))
	    return yyerror ("Dreg expected for destination operand");
	  if (!IS_PREG ((yyvsp[(5) - (9)].reg)))
	    return yyerror ("Preg expected in address");

	  if ((yyvsp[(6) - (9)].r0).r0)
	    tmp = unary (Expr_Op_Type_NEG, tmp);

	  if (IS_RELOC ((yyvsp[(7) - (9)].expr)))
	    return yyerror ("Plain symbol used as offset");

	  if (in_range_p (tmp, -32768, 32767, 0))
	    {
	      notethat ("LDSTidxI: dregs = B [ pregs + imm16 ] (%c)\n",
		       (yyvsp[(9) - (9)].r0).r0 ? 'X' : 'Z');
	      (yyval.instr) = LDSTIDXI (&(yyvsp[(5) - (9)].reg), &(yyvsp[(1) - (9)].reg), 0, 2, (yyvsp[(9) - (9)].r0).r0, tmp);
	    }
	  else
	    return yyerror ("Displacement out of range");
	}
    break;

  case 195:
#line 3259 "bfin-parse.y"
    {
	  if (!IS_DREG ((yyvsp[(1) - (8)].reg)))
	    return yyerror ("Dreg expected for destination operand");
	  if (!IS_PREG ((yyvsp[(5) - (8)].reg)))
	    return yyerror ("Preg expected in address");

	  notethat ("LDST: dregs = B [ pregs <post_op> ] (%c)\n",
		    (yyvsp[(8) - (8)].r0).r0 ? 'X' : 'Z');
	  (yyval.instr) = LDST (&(yyvsp[(5) - (8)].reg), &(yyvsp[(1) - (8)].reg), (yyvsp[(6) - (8)].modcodes).x0, 2, (yyvsp[(8) - (8)].r0).r0, 0);
	}
    break;

  case 196:
#line 3271 "bfin-parse.y"
    {
	  if (!IS_DREG ((yyvsp[(1) - (7)].reg)))
	    return yyerror ("Dreg expected for destination operand");

	  if (IS_IREG ((yyvsp[(4) - (7)].reg)) && IS_MREG ((yyvsp[(6) - (7)].reg)))
	    {
	      notethat ("dspLDST: dregs = [ iregs ++ mregs ]\n");
	      (yyval.instr) = DSPLDST(&(yyvsp[(4) - (7)].reg), (yyvsp[(6) - (7)].reg).regno & CODE_MASK, &(yyvsp[(1) - (7)].reg), 3, 0);
	    }
	  else if (IS_PREG ((yyvsp[(4) - (7)].reg)) && IS_PREG ((yyvsp[(6) - (7)].reg)))
	    {
	      notethat ("LDSTpmod: dregs = [ pregs ++ pregs ]\n");
	      (yyval.instr) = LDSTPMOD (&(yyvsp[(4) - (7)].reg), &(yyvsp[(1) - (7)].reg), &(yyvsp[(6) - (7)].reg), 0, 0);
	    }
	  else
	    return yyerror ("Preg ++ Preg or Ireg ++ Mreg expected in address");
	}
    break;

  case 197:
#line 3290 "bfin-parse.y"
    {
	  Expr_Node *tmp = (yyvsp[(6) - (7)].expr);
	  int ispreg = IS_PREG ((yyvsp[(1) - (7)].reg));
	  int isgot = IS_RELOC((yyvsp[(6) - (7)].expr));

	  if (!IS_PREG ((yyvsp[(4) - (7)].reg)))
	    return yyerror ("Preg expected in address");

	  if (!IS_DREG ((yyvsp[(1) - (7)].reg)) && !ispreg)
	    return yyerror ("Dreg or Preg expected for destination operand");

	  if (tmp->type == Expr_Node_Reloc
	      && strcmp (tmp->value.s_value,
			 "_current_shared_library_p5_offset_") != 0)
	    return yyerror ("Plain symbol used as offset");

	  if ((yyvsp[(5) - (7)].r0).r0)
	    tmp = unary (Expr_Op_Type_NEG, tmp);

	  if (isgot)
	    {
	      notethat ("LDSTidxI: dpregs = [ pregs + sym@got ]\n");
	      (yyval.instr) = LDSTIDXI (&(yyvsp[(4) - (7)].reg), &(yyvsp[(1) - (7)].reg), 0, 0, ispreg ? 1 : 0, tmp);
	    }
	  else if (in_range_p (tmp, 0, 63, 3))
	    {
	      notethat ("LDSTii: dpregs = [ pregs + uimm7m4 ]\n");
	      (yyval.instr) = LDSTII (&(yyvsp[(4) - (7)].reg), &(yyvsp[(1) - (7)].reg), tmp, 0, ispreg ? 3 : 0);
	    }
	  else if ((yyvsp[(4) - (7)].reg).regno == REG_FP && in_range_p (tmp, -128, 0, 3))
	    {
	      notethat ("LDSTiiFP: dpregs = [ FP - uimm7m4 ]\n");
	      tmp = unary (Expr_Op_Type_NEG, tmp);
	      (yyval.instr) = LDSTIIFP (tmp, &(yyvsp[(1) - (7)].reg), 0);
	    }
	  else if (in_range_p (tmp, -131072, 131071, 3))
	    {
	      notethat ("LDSTidxI: dpregs = [ pregs + imm18m4 ]\n");
	      (yyval.instr) = LDSTIDXI (&(yyvsp[(4) - (7)].reg), &(yyvsp[(1) - (7)].reg), 0, 0, ispreg ? 1 : 0, tmp);
	      
	    }
	  else
	    return yyerror ("Displacement out of range");
	}
    break;

  case 198:
#line 3336 "bfin-parse.y"
    {
	  if (!IS_IREG ((yyvsp[(4) - (6)].reg)) && !IS_PREG ((yyvsp[(4) - (6)].reg)))
	    return yyerror ("Ireg or Preg expected in address");
	  else if (IS_IREG ((yyvsp[(4) - (6)].reg)) && !IS_DREG ((yyvsp[(1) - (6)].reg)))
	    return yyerror ("Dreg expected in destination operand");
	  else if (IS_PREG ((yyvsp[(4) - (6)].reg)) && !IS_DREG ((yyvsp[(1) - (6)].reg)) && !IS_PREG ((yyvsp[(1) - (6)].reg))
		   && ((yyvsp[(4) - (6)].reg).regno != REG_SP || !IS_ALLREG ((yyvsp[(1) - (6)].reg)) || (yyvsp[(5) - (6)].modcodes).x0 != 0))
	    return yyerror ("Dreg or Preg expected in destination operand");

	  if (IS_IREG ((yyvsp[(4) - (6)].reg)))
	    {
	      notethat ("dspLDST: dregs = [ iregs <post_op> ]\n");
	      (yyval.instr) = DSPLDST (&(yyvsp[(4) - (6)].reg), 0, &(yyvsp[(1) - (6)].reg), (yyvsp[(5) - (6)].modcodes).x0, 0);
	    }
	  else if (IS_DREG ((yyvsp[(1) - (6)].reg)))
	    {
	      notethat ("LDST: dregs = [ pregs <post_op> ]\n");
	      (yyval.instr) = LDST (&(yyvsp[(4) - (6)].reg), &(yyvsp[(1) - (6)].reg), (yyvsp[(5) - (6)].modcodes).x0, 0, 0, 0);
	    }
	  else if (IS_PREG ((yyvsp[(1) - (6)].reg)))
	    {
	      if (REG_SAME ((yyvsp[(1) - (6)].reg), (yyvsp[(4) - (6)].reg)) && (yyvsp[(5) - (6)].modcodes).x0 != 2)
		return yyerror ("Pregs can't be same");

	      notethat ("LDST: pregs = [ pregs <post_op> ]\n");
	      (yyval.instr) = LDST (&(yyvsp[(4) - (6)].reg), &(yyvsp[(1) - (6)].reg), (yyvsp[(5) - (6)].modcodes).x0, 0, 1, 0);
	    }
	  else
	    {
	      notethat ("PushPopReg: allregs = [ SP ++ ]\n");
	      (yyval.instr) = PUSHPOPREG (&(yyvsp[(1) - (6)].reg), 0);
	    }
	}
    break;

  case 199:
#line 3373 "bfin-parse.y"
    {
	  if ((yyvsp[(1) - (11)].reg).regno != REG_SP)
	    yyerror ("Stack Pointer expected");
	  if ((yyvsp[(4) - (11)].reg).regno == REG_R7
	      && IN_RANGE ((yyvsp[(6) - (11)].expr), 0, 7)
	      && (yyvsp[(8) - (11)].reg).regno == REG_P5
	      && IN_RANGE ((yyvsp[(10) - (11)].expr), 0, 5))
	    {
	      notethat ("PushPopMultiple: [ -- SP ] = (R7 : reglim , P5 : reglim )\n");
	      (yyval.instr) = PUSHPOPMULTIPLE (imm5 ((yyvsp[(6) - (11)].expr)), imm5 ((yyvsp[(10) - (11)].expr)), 1, 1, 1);
	    }
	  else
	    return yyerror ("Bad register for PushPopMultiple");
	}
    break;

  case 200:
#line 3389 "bfin-parse.y"
    {
	  if ((yyvsp[(1) - (7)].reg).regno != REG_SP)
	    yyerror ("Stack Pointer expected");

	  if ((yyvsp[(4) - (7)].reg).regno == REG_R7 && IN_RANGE ((yyvsp[(6) - (7)].expr), 0, 7))
	    {
	      notethat ("PushPopMultiple: [ -- SP ] = (R7 : reglim )\n");
	      (yyval.instr) = PUSHPOPMULTIPLE (imm5 ((yyvsp[(6) - (7)].expr)), 0, 1, 0, 1);
	    }
	  else if ((yyvsp[(4) - (7)].reg).regno == REG_P5 && IN_RANGE ((yyvsp[(6) - (7)].expr), 0, 6))
	    {
	      notethat ("PushPopMultiple: [ -- SP ] = (P5 : reglim )\n");
	      (yyval.instr) = PUSHPOPMULTIPLE (0, imm5 ((yyvsp[(6) - (7)].expr)), 0, 1, 1);
	    }
	  else
	    return yyerror ("Bad register for PushPopMultiple");
	}
    break;

  case 201:
#line 3408 "bfin-parse.y"
    {
	  if ((yyvsp[(11) - (11)].reg).regno != REG_SP)
	    yyerror ("Stack Pointer expected");
	  if ((yyvsp[(2) - (11)].reg).regno == REG_R7 && (IN_RANGE ((yyvsp[(4) - (11)].expr), 0, 7))
	      && (yyvsp[(6) - (11)].reg).regno == REG_P5 && (IN_RANGE ((yyvsp[(8) - (11)].expr), 0, 6)))
	    {
	      notethat ("PushPopMultiple: (R7 : reglim , P5 : reglim ) = [ SP ++ ]\n");
	      (yyval.instr) = PUSHPOPMULTIPLE (imm5 ((yyvsp[(4) - (11)].expr)), imm5 ((yyvsp[(8) - (11)].expr)), 1, 1, 0);
	    }
	  else
	    return yyerror ("Bad register range for PushPopMultiple");
	}
    break;

  case 202:
#line 3422 "bfin-parse.y"
    {
	  if ((yyvsp[(7) - (7)].reg).regno != REG_SP)
	    yyerror ("Stack Pointer expected");

	  if ((yyvsp[(2) - (7)].reg).regno == REG_R7 && IN_RANGE ((yyvsp[(4) - (7)].expr), 0, 7))
	    {
	      notethat ("PushPopMultiple: (R7 : reglim ) = [ SP ++ ]\n");
	      (yyval.instr) = PUSHPOPMULTIPLE (imm5 ((yyvsp[(4) - (7)].expr)), 0, 1, 0, 0);
	    }
	  else if ((yyvsp[(2) - (7)].reg).regno == REG_P5 && IN_RANGE ((yyvsp[(4) - (7)].expr), 0, 6))
	    {
	      notethat ("PushPopMultiple: (P5 : reglim ) = [ SP ++ ]\n");
	      (yyval.instr) = PUSHPOPMULTIPLE (0, imm5 ((yyvsp[(4) - (7)].expr)), 0, 1, 0);
	    }
	  else
	    return yyerror ("Bad register range for PushPopMultiple");
	}
    break;

  case 203:
#line 3441 "bfin-parse.y"
    {
	  if ((yyvsp[(1) - (3)].reg).regno != REG_SP)
	    yyerror ("Stack Pointer expected");

	  if (IS_ALLREG ((yyvsp[(3) - (3)].reg)))
	    {
	      notethat ("PushPopReg: [ -- SP ] = allregs\n");
	      (yyval.instr) = PUSHPOPREG (&(yyvsp[(3) - (3)].reg), 1);
	    }
	  else
	    return yyerror ("Bad register for PushPopReg");
	}
    break;

  case 204:
#line 3457 "bfin-parse.y"
    {
	  if (IS_URANGE (16, (yyvsp[(2) - (2)].expr), 0, 4))
	    (yyval.instr) = LINKAGE (0, uimm16s4 ((yyvsp[(2) - (2)].expr)));
	  else
	    return yyerror ("Bad constant for LINK");
	}
    break;

  case 205:
#line 3465 "bfin-parse.y"
    {
		notethat ("linkage: UNLINK\n");
		(yyval.instr) = LINKAGE (1, 0);
	}
    break;

  case 206:
#line 3474 "bfin-parse.y"
    {
	  if (IS_PCREL4 ((yyvsp[(3) - (7)].expr)) && IS_LPPCREL10 ((yyvsp[(5) - (7)].expr)) && IS_CREG ((yyvsp[(7) - (7)].reg)))
	    {
	      notethat ("LoopSetup: LSETUP (pcrel4 , lppcrel10 ) counters\n");
	      (yyval.instr) = LOOPSETUP ((yyvsp[(3) - (7)].expr), &(yyvsp[(7) - (7)].reg), 0, (yyvsp[(5) - (7)].expr), 0);
	    }
	  else
	    return yyerror ("Bad register or values for LSETUP");
	  
	}
    break;

  case 207:
#line 3485 "bfin-parse.y"
    {
	  if (IS_PCREL4 ((yyvsp[(3) - (9)].expr)) && IS_LPPCREL10 ((yyvsp[(5) - (9)].expr))
	      && IS_PREG ((yyvsp[(9) - (9)].reg)) && IS_CREG ((yyvsp[(7) - (9)].reg)))
	    {
	      notethat ("LoopSetup: LSETUP (pcrel4 , lppcrel10 ) counters = pregs\n");
	      (yyval.instr) = LOOPSETUP ((yyvsp[(3) - (9)].expr), &(yyvsp[(7) - (9)].reg), 1, (yyvsp[(5) - (9)].expr), &(yyvsp[(9) - (9)].reg));
	    }
	  else
	    return yyerror ("Bad register or values for LSETUP");
	}
    break;

  case 208:
#line 3497 "bfin-parse.y"
    {
	  if (IS_PCREL4 ((yyvsp[(3) - (11)].expr)) && IS_LPPCREL10 ((yyvsp[(5) - (11)].expr))
	      && IS_PREG ((yyvsp[(9) - (11)].reg)) && IS_CREG ((yyvsp[(7) - (11)].reg)) 
	      && EXPR_VALUE ((yyvsp[(11) - (11)].expr)) == 1)
	    {
	      notethat ("LoopSetup: LSETUP (pcrel4 , lppcrel10 ) counters = pregs >> 1\n");
	      (yyval.instr) = LOOPSETUP ((yyvsp[(3) - (11)].expr), &(yyvsp[(7) - (11)].reg), 3, (yyvsp[(5) - (11)].expr), &(yyvsp[(9) - (11)].reg));
	    }
	  else
	    return yyerror ("Bad register or values for LSETUP");
	}
    break;

  case 209:
#line 3511 "bfin-parse.y"
    {
	  if (!IS_RELOC ((yyvsp[(2) - (3)].expr)))
	    return yyerror ("Invalid expression in loop statement");
	  if (!IS_CREG ((yyvsp[(3) - (3)].reg)))
            return yyerror ("Invalid loop counter register");
	(yyval.instr) = bfin_gen_loop ((yyvsp[(2) - (3)].expr), &(yyvsp[(3) - (3)].reg), 0, 0);
	}
    break;

  case 210:
#line 3519 "bfin-parse.y"
    {
	  if (IS_RELOC ((yyvsp[(2) - (5)].expr)) && IS_PREG ((yyvsp[(5) - (5)].reg)) && IS_CREG ((yyvsp[(3) - (5)].reg)))
	    {
	      notethat ("Loop: LOOP expr counters = pregs\n");
	      (yyval.instr) = bfin_gen_loop ((yyvsp[(2) - (5)].expr), &(yyvsp[(3) - (5)].reg), 1, &(yyvsp[(5) - (5)].reg));
	    }
	  else
	    return yyerror ("Bad register or values for LOOP");
	}
    break;

  case 211:
#line 3529 "bfin-parse.y"
    {
	  if (IS_RELOC ((yyvsp[(2) - (7)].expr)) && IS_PREG ((yyvsp[(5) - (7)].reg)) && IS_CREG ((yyvsp[(3) - (7)].reg)) && EXPR_VALUE ((yyvsp[(7) - (7)].expr)) == 1)
	    {
	      notethat ("Loop: LOOP expr counters = pregs >> 1\n");
	      (yyval.instr) = bfin_gen_loop ((yyvsp[(2) - (7)].expr), &(yyvsp[(3) - (7)].reg), 3, &(yyvsp[(5) - (7)].reg));
	    }
	  else
	    return yyerror ("Bad register or values for LOOP");
	}
    break;

  case 212:
#line 3541 "bfin-parse.y"
    {
	  if (!IS_RELOC ((yyvsp[(2) - (2)].expr)))
	    return yyerror ("Invalid expression in LOOP_BEGIN statement");

	  bfin_loop_beginend ((yyvsp[(2) - (2)].expr), 1);
	  (yyval.instr) = 0;
	}
    break;

  case 213:
#line 3551 "bfin-parse.y"
    {
	  if (!IS_RELOC ((yyvsp[(2) - (2)].expr)))
	    return yyerror ("Invalid expression in LOOP_END statement");

	  bfin_loop_beginend ((yyvsp[(2) - (2)].expr), 0);
	  (yyval.instr) = 0;
	}
    break;

  case 214:
#line 3562 "bfin-parse.y"
    {
	  notethat ("pseudoDEBUG: DBG\n");
	  (yyval.instr) = bfin_gen_pseudodbg (3, 7, 0);
	}
    break;

  case 215:
#line 3567 "bfin-parse.y"
    {
	  notethat ("pseudoDEBUG: DBG REG_A\n");
	  (yyval.instr) = bfin_gen_pseudodbg (3, IS_A1 ((yyvsp[(2) - (2)].reg)), 0);
	}
    break;

  case 216:
#line 3572 "bfin-parse.y"
    {
	  notethat ("pseudoDEBUG: DBG allregs\n");
	  (yyval.instr) = bfin_gen_pseudodbg (0, (yyvsp[(2) - (2)].reg).regno & CODE_MASK, (yyvsp[(2) - (2)].reg).regno & CLASS_MASK);
	}
    break;

  case 217:
#line 3578 "bfin-parse.y"
    {
	  if (!IS_DREG ((yyvsp[(3) - (4)].reg)))
	    return yyerror ("Dregs expected");
	  notethat ("pseudoDEBUG: DBGCMPLX (dregs )\n");
	  (yyval.instr) = bfin_gen_pseudodbg (3, 6, (yyvsp[(3) - (4)].reg).regno & CODE_MASK);
	}
    break;

  case 218:
#line 3586 "bfin-parse.y"
    {
	  notethat ("psedoDEBUG: DBGHALT\n");
	  (yyval.instr) = bfin_gen_pseudodbg (3, 5, 0);
	}
    break;

  case 219:
#line 3592 "bfin-parse.y"
    {
	  notethat ("psedoDEBUG: HLT\n");
	  (yyval.instr) = bfin_gen_pseudodbg (3, 4, 0);
	}
    break;

  case 220:
#line 3598 "bfin-parse.y"
    {
	  notethat ("pseudodbg_assert: DBGA (regs_lo/hi , uimm16 )\n");
	  (yyval.instr) = bfin_gen_pseudodbg_assert (IS_H ((yyvsp[(3) - (6)].reg)), &(yyvsp[(3) - (6)].reg), uimm16 ((yyvsp[(5) - (6)].expr)));
	}
    break;

  case 221:
#line 3604 "bfin-parse.y"
    {
	  notethat ("pseudodbg_assert: DBGAH (regs , uimm16 )\n");
	  (yyval.instr) = bfin_gen_pseudodbg_assert (3, &(yyvsp[(3) - (6)].reg), uimm16 ((yyvsp[(5) - (6)].expr)));
	}
    break;

  case 222:
#line 3610 "bfin-parse.y"
    {
	  notethat ("psedodbg_assert: DBGAL (regs , uimm16 )\n");
	  (yyval.instr) = bfin_gen_pseudodbg_assert (2, &(yyvsp[(3) - (6)].reg), uimm16 ((yyvsp[(5) - (6)].expr)));
	}
    break;

  case 223:
#line 3623 "bfin-parse.y"
    {
	(yyval.reg) = (yyvsp[(1) - (1)].reg);
	}
    break;

  case 224:
#line 3627 "bfin-parse.y"
    {
	(yyval.reg) = (yyvsp[(1) - (1)].reg);
	}
    break;

  case 225:
#line 3636 "bfin-parse.y"
    {
	(yyval.mod).MM = 0;
	(yyval.mod).mod = 0;
	}
    break;

  case 226:
#line 3641 "bfin-parse.y"
    {
	(yyval.mod).MM = 1;
	(yyval.mod).mod = (yyvsp[(4) - (5)].value);
	}
    break;

  case 227:
#line 3646 "bfin-parse.y"
    {
	(yyval.mod).MM = 1;
	(yyval.mod).mod = (yyvsp[(2) - (5)].value);
	}
    break;

  case 228:
#line 3651 "bfin-parse.y"
    {
	(yyval.mod).MM = 0;
	(yyval.mod).mod = (yyvsp[(2) - (3)].value);
	}
    break;

  case 229:
#line 3656 "bfin-parse.y"
    {
	(yyval.mod).MM = 1;
	(yyval.mod).mod = 0;
	}
    break;

  case 230:
#line 3663 "bfin-parse.y"
    {
	(yyval.r0).r0 = 1;
	}
    break;

  case 231:
#line 3667 "bfin-parse.y"
    {
	(yyval.r0).r0 = 0;
	}
    break;

  case 232:
#line 3673 "bfin-parse.y"
    {
	(yyval.modcodes).s0 = 0;
	(yyval.modcodes).x0 = 0;
	}
    break;

  case 233:
#line 3678 "bfin-parse.y"
    {
	(yyval.modcodes).s0 = 1;
	(yyval.modcodes).x0 = 0;
	}
    break;

  case 234:
#line 3683 "bfin-parse.y"
    {
	(yyval.modcodes).s0 = 0;
	(yyval.modcodes).x0 = 1;
	}
    break;

  case 235:
#line 3688 "bfin-parse.y"
    {	
	(yyval.modcodes).s0 = 1;
	(yyval.modcodes).x0 = 1;
	}
    break;

  case 236:
#line 3696 "bfin-parse.y"
    {
	(yyval.r0).r0 = 1;
	}
    break;

  case 237:
#line 3700 "bfin-parse.y"
    {
	(yyval.r0).r0 = 0;
	}
    break;

  case 238:
#line 3706 "bfin-parse.y"
    {
	(yyval.modcodes).s0 = 0;
	(yyval.modcodes).x0 = 0;
	}
    break;

  case 239:
#line 3711 "bfin-parse.y"
    {
	(yyval.modcodes).s0 = (yyvsp[(2) - (3)].modcodes).s0;
	(yyval.modcodes).x0 = (yyvsp[(2) - (3)].modcodes).x0;
	}
    break;

  case 240:
#line 3718 "bfin-parse.y"
    {
	(yyval.modcodes).s0 = 0;
	(yyval.modcodes).x0 = 0;
	(yyval.modcodes).aop = 0;
	}
    break;

  case 241:
#line 3724 "bfin-parse.y"
    {
	(yyval.modcodes).s0 = 0;
	(yyval.modcodes).x0 = 0;
	(yyval.modcodes).aop = 1;
	}
    break;

  case 242:
#line 3730 "bfin-parse.y"
    {
	(yyval.modcodes).s0 = 1;
	(yyval.modcodes).x0 = 0;
	(yyval.modcodes).aop = 1;
	}
    break;

  case 243:
#line 3738 "bfin-parse.y"
    {
	(yyval.modcodes).r0 = 0;
	(yyval.modcodes).s0 = 0;
	(yyval.modcodes).x0 = 0;
	}
    break;

  case 244:
#line 3744 "bfin-parse.y"
    {
	(yyval.modcodes).r0 = 2 + (yyvsp[(2) - (3)].r0).r0;
	(yyval.modcodes).s0 = 0;
	(yyval.modcodes).x0 = 0;
	}
    break;

  case 245:
#line 3750 "bfin-parse.y"
    {
	(yyval.modcodes).r0 = 0;
	(yyval.modcodes).s0 = (yyvsp[(2) - (3)].modcodes).s0;
	(yyval.modcodes).x0 = (yyvsp[(2) - (3)].modcodes).x0;
	}
    break;

  case 246:
#line 3756 "bfin-parse.y"
    {
	(yyval.modcodes).r0 = 2 + (yyvsp[(2) - (5)].r0).r0;
	(yyval.modcodes).s0 = (yyvsp[(4) - (5)].modcodes).s0;
	(yyval.modcodes).x0 = (yyvsp[(4) - (5)].modcodes).x0;
	}
    break;

  case 247:
#line 3762 "bfin-parse.y"
    {
	(yyval.modcodes).r0 = 2 + (yyvsp[(4) - (5)].r0).r0;
	(yyval.modcodes).s0 = (yyvsp[(2) - (5)].modcodes).s0;
	(yyval.modcodes).x0 = (yyvsp[(2) - (5)].modcodes).x0;
	}
    break;

  case 248:
#line 3770 "bfin-parse.y"
    {
	(yyval.r0).r0 = 0;
	}
    break;

  case 249:
#line 3774 "bfin-parse.y"
    {
	(yyval.r0).r0 = 0;
	}
    break;

  case 250:
#line 3778 "bfin-parse.y"
    {
	(yyval.r0).r0 = 1;
	}
    break;

  case 251:
#line 3784 "bfin-parse.y"
    {
	(yyval.r0).r0 = 0;
	}
    break;

  case 252:
#line 3788 "bfin-parse.y"
    {
	(yyval.r0).r0 = 0;
	}
    break;

  case 253:
#line 3792 "bfin-parse.y"
    {
	(yyval.r0).r0 = 1;
	}
    break;

  case 254:
#line 3798 "bfin-parse.y"
    {
	(yyval.modcodes).r0 = 0;
	(yyval.modcodes).s0 = 0;
	(yyval.modcodes).aop = 0;
	}
    break;

  case 255:
#line 3804 "bfin-parse.y"
    {
	(yyval.modcodes).r0 = 0;
	(yyval.modcodes).s0 = 0;
	(yyval.modcodes).aop = 3;
	}
    break;

  case 256:
#line 3810 "bfin-parse.y"
    {
	(yyval.modcodes).r0 = 0;
	(yyval.modcodes).s0 = 1;
	(yyval.modcodes).aop = 3;
	}
    break;

  case 257:
#line 3816 "bfin-parse.y"
    {
	(yyval.modcodes).r0 = 1;
	(yyval.modcodes).s0 = 0;
	(yyval.modcodes).aop = 3;
	}
    break;

  case 258:
#line 3822 "bfin-parse.y"
    {
	(yyval.modcodes).r0 = 1;
	(yyval.modcodes).s0 = 1;
	}
    break;

  case 259:
#line 3827 "bfin-parse.y"
    {
	(yyval.modcodes).r0 = 1;
	(yyval.modcodes).s0 = 1;
	}
    break;

  case 260:
#line 3834 "bfin-parse.y"
    {
	(yyval.r0).r0 = 0;
	}
    break;

  case 261:
#line 3838 "bfin-parse.y"
    {
	(yyval.r0).r0 = 1;
	}
    break;

  case 262:
#line 3844 "bfin-parse.y"
    {
	(yyval.modcodes).s0 = 0;
	}
    break;

  case 263:
#line 3848 "bfin-parse.y"
    {
	(yyval.modcodes).s0 = 1;
	}
    break;

  case 264:
#line 3855 "bfin-parse.y"
    {
	(yyval.r0).r0 = 1;
	}
    break;

  case 265:
#line 3859 "bfin-parse.y"
    {
	(yyval.r0).r0 = 0;
	}
    break;

  case 266:
#line 3863 "bfin-parse.y"
    {
	(yyval.r0).r0 = 3;
	}
    break;

  case 267:
#line 3867 "bfin-parse.y"
    {
	(yyval.r0).r0 = 2;
	}
    break;

  case 268:
#line 3873 "bfin-parse.y"
    {
	(yyval.r0).r0 = 0;
	}
    break;

  case 269:
#line 3877 "bfin-parse.y"
    {
	(yyval.r0).r0 = 1;
	}
    break;

  case 270:
#line 3884 "bfin-parse.y"
    {
	(yyval.modcodes).r0 = 0;
	(yyval.modcodes).s0 = 1;
	}
    break;

  case 271:
#line 3889 "bfin-parse.y"
    {
	if ((yyvsp[(2) - (3)].value) != M_T)
	  return yyerror ("Bad modifier");
	(yyval.modcodes).r0 = 1;
	(yyval.modcodes).s0 = 0;
	}
    break;

  case 272:
#line 3896 "bfin-parse.y"
    {
	if ((yyvsp[(2) - (5)].value) != M_T)
	  return yyerror ("Bad modifier");
	(yyval.modcodes).r0 = 1;
	(yyval.modcodes).s0 = 1;
	}
    break;

  case 273:
#line 3903 "bfin-parse.y"
    {
	if ((yyvsp[(4) - (5)].value) != M_T)
	  return yyerror ("Bad modifier");
	(yyval.modcodes).r0 = 1;
	(yyval.modcodes).s0 = 1;
	}
    break;

  case 274:
#line 3915 "bfin-parse.y"
    {
	(yyval.r0).r0 = 0;
	}
    break;

  case 275:
#line 3919 "bfin-parse.y"
    {
	(yyval.r0).r0 = 1;
	}
    break;

  case 276:
#line 3923 "bfin-parse.y"
    {
	(yyval.r0).r0 = 2;
	}
    break;

  case 277:
#line 3929 "bfin-parse.y"
    {
	(yyval.r0).r0 = 0;
	}
    break;

  case 278:
#line 3933 "bfin-parse.y"
    {
	  if ((yyvsp[(2) - (3)].value) == M_W32)
	    (yyval.r0).r0 = 1;
	  else
	    return yyerror ("Only (W32) allowed");
	}
    break;

  case 279:
#line 3942 "bfin-parse.y"
    {
	(yyval.r0).r0 = 1;
	}
    break;

  case 280:
#line 3946 "bfin-parse.y"
    {
	  if ((yyvsp[(2) - (3)].value) == M_IU)
	    (yyval.r0).r0 = 3;
	  else
	    return yyerror ("(IU) expected");
	}
    break;

  case 281:
#line 3955 "bfin-parse.y"
    {
	(yyval.reg) = (yyvsp[(3) - (4)].reg);
	}
    break;

  case 282:
#line 3961 "bfin-parse.y"
    {
	(yyval.reg) = (yyvsp[(2) - (4)].reg);
	}
    break;

  case 283:
#line 3970 "bfin-parse.y"
    {
	(yyval.r0).r0 = 1;
	}
    break;

  case 284:
#line 3974 "bfin-parse.y"
    {
	(yyval.r0).r0 = 0;
	}
    break;

  case 285:
#line 3981 "bfin-parse.y"
    {
	(yyval.r0).r0 = 0;
	}
    break;

  case 286:
#line 3985 "bfin-parse.y"
    {
	(yyval.r0).r0 = 1;
	}
    break;

  case 287:
#line 3989 "bfin-parse.y"
    {
	(yyval.r0).r0 = 2;
	}
    break;

  case 288:
#line 3993 "bfin-parse.y"
    {
	(yyval.r0).r0 = 3;
	}
    break;

  case 289:
#line 4000 "bfin-parse.y"
    {
	(yyval.r0).r0 = 0;
	}
    break;

  case 290:
#line 4004 "bfin-parse.y"
    {
	(yyval.r0).r0 = 1;
	}
    break;

  case 291:
#line 4011 "bfin-parse.y"
    {
	  (yyval.modcodes).r0 = 1;	/* HL.  */
	  (yyval.modcodes).s0 = 0;	/* s.  */
	  (yyval.modcodes).x0 = 0;	/* x.  */
	  (yyval.modcodes).aop = 0;	/* aop.  */
	}
    break;

  case 292:
#line 4019 "bfin-parse.y"
    {
	  (yyval.modcodes).r0 = 1;	/* HL.  */
	  (yyval.modcodes).s0 = 0;	/* s.  */
	  (yyval.modcodes).x0 = 0;	/* x.  */
	  (yyval.modcodes).aop = 1;	/* aop.  */
	}
    break;

  case 293:
#line 4027 "bfin-parse.y"
    {
	  (yyval.modcodes).r0 = 0;	/* HL.  */
	  (yyval.modcodes).s0 = 0;	/* s.  */
	  (yyval.modcodes).x0 = 0;	/* x.  */
	  (yyval.modcodes).aop = 0;	/* aop.  */
	}
    break;

  case 294:
#line 4035 "bfin-parse.y"
    {
	  (yyval.modcodes).r0 = 0;	/* HL.  */
	  (yyval.modcodes).s0 = 0;	/* s.  */
	  (yyval.modcodes).x0 = 0;	/* x.  */
	  (yyval.modcodes).aop = 1;
	}
    break;

  case 295:
#line 4043 "bfin-parse.y"
    {
	  (yyval.modcodes).r0 = 1;	/* HL.  */
	  (yyval.modcodes).s0 = 1;	/* s.  */
	  (yyval.modcodes).x0 = 0;	/* x.  */
	  (yyval.modcodes).aop = 0;	/* aop.  */
	}
    break;

  case 296:
#line 4050 "bfin-parse.y"
    {
	  (yyval.modcodes).r0 = 1;	/* HL.  */
	  (yyval.modcodes).s0 = 1;	/* s.  */
	  (yyval.modcodes).x0 = 0;	/* x.  */
	  (yyval.modcodes).aop = 1;	/* aop.  */
	}
    break;

  case 297:
#line 4057 "bfin-parse.y"
    {
	  (yyval.modcodes).r0 = 0;	/* HL.  */
	  (yyval.modcodes).s0 = 1;	/* s.  */
	  (yyval.modcodes).x0 = 0;	/* x.  */
	  (yyval.modcodes).aop = 0;	/* aop.  */
	}
    break;

  case 298:
#line 4065 "bfin-parse.y"
    {
	  (yyval.modcodes).r0 = 0;	/* HL.  */
	  (yyval.modcodes).s0 = 1;	/* s.  */
	  (yyval.modcodes).x0 = 0;	/* x.  */
	  (yyval.modcodes).aop = 1;	/* aop.  */
	}
    break;

  case 299:
#line 4075 "bfin-parse.y"
    {
	  (yyval.modcodes).s0 = 0;	/* s.  */
	  (yyval.modcodes).x0 = 0;	/* HL.  */
	}
    break;

  case 300:
#line 4080 "bfin-parse.y"
    {
	  (yyval.modcodes).s0 = 0;	/* s.  */
	  (yyval.modcodes).x0 = 1;	/* HL.  */
	}
    break;

  case 301:
#line 4085 "bfin-parse.y"
    {
	  (yyval.modcodes).s0 = 1;	/* s.  */
	  (yyval.modcodes).x0 = 0;	/* HL.  */
	}
    break;

  case 302:
#line 4090 "bfin-parse.y"
    {
	  (yyval.modcodes).s0 = 1;	/* s.  */
	  (yyval.modcodes).x0 = 1;	/* HL.  */
	}
    break;

  case 303:
#line 4097 "bfin-parse.y"
    {
	(yyval.modcodes).x0 = 2;
	}
    break;

  case 304:
#line 4101 "bfin-parse.y"
    {
	(yyval.modcodes).x0 = 0;
	}
    break;

  case 305:
#line 4105 "bfin-parse.y"
    {
	(yyval.modcodes).x0 = 1;
	}
    break;

  case 306:
#line 4114 "bfin-parse.y"
    {
	(yyval.reg) = (yyvsp[(1) - (2)].reg);
	}
    break;

  case 307:
#line 4121 "bfin-parse.y"
    {
	(yyval.reg) = (yyvsp[(1) - (2)].reg);
	}
    break;

  case 308:
#line 4128 "bfin-parse.y"
    {
	(yyval.reg) = (yyvsp[(1) - (2)].reg);
	}
    break;

  case 309:
#line 4135 "bfin-parse.y"
    {
	  if (IS_A1 ((yyvsp[(3) - (3)].reg)) && IS_EVEN ((yyvsp[(1) - (3)].reg)))
	    return yyerror ("Cannot move A1 to even register");
	  else if (!IS_A1 ((yyvsp[(3) - (3)].reg)) && !IS_EVEN ((yyvsp[(1) - (3)].reg)))
	    return yyerror ("Cannot move A0 to odd register");

	  (yyval.macfunc).w = 1;
          (yyval.macfunc).P = 1;
          (yyval.macfunc).n = IS_A1 ((yyvsp[(3) - (3)].reg));
	  (yyval.macfunc).op = 3;
          (yyval.macfunc).dst = (yyvsp[(1) - (3)].reg);
	  (yyval.macfunc).s0.regno = 0;
          (yyval.macfunc).s1.regno = 0;
	}
    break;

  case 310:
#line 4150 "bfin-parse.y"
    {
	  (yyval.macfunc) = (yyvsp[(1) - (1)].macfunc);
	  (yyval.macfunc).w = 0; (yyval.macfunc).P = 0;
	  (yyval.macfunc).dst.regno = 0;
	}
    break;

  case 311:
#line 4156 "bfin-parse.y"
    {
	  if ((yyvsp[(4) - (5)].macfunc).n && IS_EVEN ((yyvsp[(1) - (5)].reg)))
	    return yyerror ("Cannot move A1 to even register");
	  else if (!(yyvsp[(4) - (5)].macfunc).n && !IS_EVEN ((yyvsp[(1) - (5)].reg)))
	    return yyerror ("Cannot move A0 to odd register");

	  (yyval.macfunc) = (yyvsp[(4) - (5)].macfunc);
	  (yyval.macfunc).w = 1;
          (yyval.macfunc).P = 1;
          (yyval.macfunc).dst = (yyvsp[(1) - (5)].reg);
	}
    break;

  case 312:
#line 4169 "bfin-parse.y"
    {
	  if ((yyvsp[(4) - (5)].macfunc).n && !IS_H ((yyvsp[(1) - (5)].reg)))
	    return yyerror ("Cannot move A1 to low half of register");
	  else if (!(yyvsp[(4) - (5)].macfunc).n && IS_H ((yyvsp[(1) - (5)].reg)))
	    return yyerror ("Cannot move A0 to high half of register");

	  (yyval.macfunc) = (yyvsp[(4) - (5)].macfunc);
	  (yyval.macfunc).w = 1;
	  (yyval.macfunc).P = 0;
          (yyval.macfunc).dst = (yyvsp[(1) - (5)].reg);
	}
    break;

  case 313:
#line 4182 "bfin-parse.y"
    {
	  if (IS_A1 ((yyvsp[(3) - (3)].reg)) && !IS_H ((yyvsp[(1) - (3)].reg)))
	    return yyerror ("Cannot move A1 to low half of register");
	  else if (!IS_A1 ((yyvsp[(3) - (3)].reg)) && IS_H ((yyvsp[(1) - (3)].reg)))
	    return yyerror ("Cannot move A0 to high half of register");

	  (yyval.macfunc).w = 1;
	  (yyval.macfunc).P = 0;
	  (yyval.macfunc).n = IS_A1 ((yyvsp[(3) - (3)].reg));
	  (yyval.macfunc).op = 3;
          (yyval.macfunc).dst = (yyvsp[(1) - (3)].reg);
	  (yyval.macfunc).s0.regno = 0;
          (yyval.macfunc).s1.regno = 0;
	}
    break;

  case 314:
#line 4200 "bfin-parse.y"
    {
	  (yyval.macfunc).n = IS_A1 ((yyvsp[(1) - (2)].reg));
	  (yyval.macfunc).op = 0;
	  (yyval.macfunc).s0 = (yyvsp[(2) - (2)].macfunc).s0;
	  (yyval.macfunc).s1 = (yyvsp[(2) - (2)].macfunc).s1;
	}
    break;

  case 315:
#line 4207 "bfin-parse.y"
    {
	  (yyval.macfunc).n = IS_A1 ((yyvsp[(1) - (2)].reg));
	  (yyval.macfunc).op = 1;
	  (yyval.macfunc).s0 = (yyvsp[(2) - (2)].macfunc).s0;
	  (yyval.macfunc).s1 = (yyvsp[(2) - (2)].macfunc).s1;
	}
    break;

  case 316:
#line 4214 "bfin-parse.y"
    {
	  (yyval.macfunc).n = IS_A1 ((yyvsp[(1) - (2)].reg));
	  (yyval.macfunc).op = 2;
	  (yyval.macfunc).s0 = (yyvsp[(2) - (2)].macfunc).s0;
	  (yyval.macfunc).s1 = (yyvsp[(2) - (2)].macfunc).s1;
	}
    break;

  case 317:
#line 4224 "bfin-parse.y"
    {
	  if (IS_DREG ((yyvsp[(1) - (3)].reg)) && IS_DREG ((yyvsp[(3) - (3)].reg)))
	    {
	      (yyval.macfunc).s0 = (yyvsp[(1) - (3)].reg);
              (yyval.macfunc).s1 = (yyvsp[(3) - (3)].reg);
	    }
	  else
	    return yyerror ("Dregs expected");
	}
    break;

  case 318:
#line 4237 "bfin-parse.y"
    {
	(yyval.r0).r0 = 0;
	}
    break;

  case 319:
#line 4241 "bfin-parse.y"
    {
	(yyval.r0).r0 = 1;
	}
    break;

  case 320:
#line 4245 "bfin-parse.y"
    {
	(yyval.r0).r0 = 2;
	}
    break;

  case 321:
#line 4249 "bfin-parse.y"
    {
	(yyval.r0).r0 = 3;
	}
    break;

  case 322:
#line 4256 "bfin-parse.y"
    {
	  (yyval.modcodes).r0 = (yyvsp[(3) - (3)].reg).regno;
	  (yyval.modcodes).x0 = (yyvsp[(2) - (3)].r0).r0;
	  (yyval.modcodes).s0 = 0;
	}
    break;

  case 323:
#line 4262 "bfin-parse.y"
    {
	  (yyval.modcodes).r0 = 0x18;
	  (yyval.modcodes).x0 = (yyvsp[(2) - (3)].r0).r0;
	  (yyval.modcodes).s0 = 0;
	}
    break;

  case 324:
#line 4268 "bfin-parse.y"
    {
	  (yyval.modcodes).r0 = (yyvsp[(1) - (3)].reg).regno;
	  (yyval.modcodes).x0 = (yyvsp[(2) - (3)].r0).r0;
	  (yyval.modcodes).s0 = 1;
	}
    break;

  case 325:
#line 4274 "bfin-parse.y"
    {
	  (yyval.modcodes).r0 = 0x18;
	  (yyval.modcodes).x0 = (yyvsp[(2) - (3)].r0).r0;
	  (yyval.modcodes).s0 = 1;
	}
    break;

  case 326:
#line 4284 "bfin-parse.y"
    {
	Expr_Node_Value val;
	val.s_value = S_GET_NAME((yyvsp[(1) - (1)].symbol));
	(yyval.expr) = Expr_Node_Create (Expr_Node_Reloc, val, NULL, NULL);
	}
    break;

  case 327:
#line 4293 "bfin-parse.y"
    { (yyval.value) = BFD_RELOC_BFIN_GOT; }
    break;

  case 328:
#line 4295 "bfin-parse.y"
    { (yyval.value) = BFD_RELOC_BFIN_GOT17M4; }
    break;

  case 329:
#line 4297 "bfin-parse.y"
    { (yyval.value) = BFD_RELOC_BFIN_FUNCDESC_GOT17M4; }
    break;

  case 330:
#line 4301 "bfin-parse.y"
    {
	Expr_Node_Value val;
	val.i_value = (yyvsp[(3) - (3)].value);
	(yyval.expr) = Expr_Node_Create (Expr_Node_GOT_Reloc, val, (yyvsp[(1) - (3)].expr), NULL);
	}
    break;

  case 331:
#line 4309 "bfin-parse.y"
    {
	(yyval.expr) = (yyvsp[(1) - (1)].expr);
	}
    break;

  case 332:
#line 4313 "bfin-parse.y"
    {
	(yyval.expr) = (yyvsp[(1) - (1)].expr);
	}
    break;

  case 333:
#line 4320 "bfin-parse.y"
    {
	(yyval.expr) = (yyvsp[(1) - (3)].expr);
	}
    break;

  case 334:
#line 4326 "bfin-parse.y"
    {
	Expr_Node_Value val;
	val.i_value = (yyvsp[(1) - (1)].value);
	(yyval.expr) = Expr_Node_Create (Expr_Node_Constant, val, NULL, NULL);
	}
    break;

  case 335:
#line 4332 "bfin-parse.y"
    {
	(yyval.expr) = (yyvsp[(1) - (1)].expr);
	}
    break;

  case 336:
#line 4336 "bfin-parse.y"
    {
	(yyval.expr) = (yyvsp[(2) - (3)].expr);
	}
    break;

  case 337:
#line 4340 "bfin-parse.y"
    {
	(yyval.expr) = unary (Expr_Op_Type_COMP, (yyvsp[(2) - (2)].expr));
	}
    break;

  case 338:
#line 4344 "bfin-parse.y"
    {
	(yyval.expr) = unary (Expr_Op_Type_NEG, (yyvsp[(2) - (2)].expr));
	}
    break;

  case 339:
#line 4350 "bfin-parse.y"
    {
	(yyval.expr) = (yyvsp[(1) - (1)].expr);
	}
    break;

  case 340:
#line 4356 "bfin-parse.y"
    {
	(yyval.expr) = binary (Expr_Op_Type_Mult, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr));
	}
    break;

  case 341:
#line 4360 "bfin-parse.y"
    {
	(yyval.expr) = binary (Expr_Op_Type_Div, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr));
	}
    break;

  case 342:
#line 4364 "bfin-parse.y"
    {
	(yyval.expr) = binary (Expr_Op_Type_Mod, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr));
	}
    break;

  case 343:
#line 4368 "bfin-parse.y"
    {
	(yyval.expr) = binary (Expr_Op_Type_Add, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr));
	}
    break;

  case 344:
#line 4372 "bfin-parse.y"
    {
	(yyval.expr) = binary (Expr_Op_Type_Sub, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr));
	}
    break;

  case 345:
#line 4376 "bfin-parse.y"
    {
	(yyval.expr) = binary (Expr_Op_Type_Lshift, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr));	
	}
    break;

  case 346:
#line 4380 "bfin-parse.y"
    {
	(yyval.expr) = binary (Expr_Op_Type_Rshift, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr));
	}
    break;

  case 347:
#line 4384 "bfin-parse.y"
    {
	(yyval.expr) = binary (Expr_Op_Type_BAND, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr));
	}
    break;

  case 348:
#line 4388 "bfin-parse.y"
    {
	(yyval.expr) = binary (Expr_Op_Type_LOR, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr));
	}
    break;

  case 349:
#line 4392 "bfin-parse.y"
    {
	(yyval.expr) = binary (Expr_Op_Type_BOR, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr));
	}
    break;

  case 350:
#line 4396 "bfin-parse.y"
    {
	(yyval.expr) = (yyvsp[(1) - (1)].expr);
	}
    break;


/* Line 1267 of yacc.c.  */
#line 7454 "bfin-parse.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 4402 "bfin-parse.y"


EXPR_T
mkexpr (int x, SYMBOL_T s)
{
  EXPR_T e = (EXPR_T) ALLOCATE (sizeof (struct expression_cell));
  e->value = x;
  EXPR_SYMBOL(e) = s;
  return e;
}

static int
value_match (Expr_Node *expr, int sz, int sign, int mul, int issigned)
{
  int umax = (1 << sz) - 1;
  int min = -1 << (sz - 1);
  int max = (1 << (sz - 1)) - 1;
	
  int v = (EXPR_VALUE (expr)) & 0xffffffff;

  if ((v % mul) != 0)
    {
      error ("%s:%d: Value Error -- Must align to %d\n", __FILE__, __LINE__, mul); 
      return 0;
    }

  v /= mul;

  if (sign)
    v = -v;

  if (issigned)
    {
      if (v >= min && v <= max) return 1;

#ifdef DEBUG
      fprintf(stderr, "signed value %lx out of range\n", v * mul);
#endif
      return 0;
    }
  if (v <= umax && v >= 0) 
    return 1;
#ifdef DEBUG
  fprintf(stderr, "unsigned value %lx out of range\n", v * mul);
#endif
  return 0;
}

/* Return the expression structure that allows symbol operations.
   If the left and right children are constants, do the operation.  */
static Expr_Node *
binary (Expr_Op_Type op, Expr_Node *x, Expr_Node *y)
{
  Expr_Node_Value val;

  if (x->type == Expr_Node_Constant && y->type == Expr_Node_Constant)
    {
      switch (op)
	{
        case Expr_Op_Type_Add: 
	  x->value.i_value += y->value.i_value;
	  break;
        case Expr_Op_Type_Sub: 
	  x->value.i_value -= y->value.i_value;
	  break;
        case Expr_Op_Type_Mult: 
	  x->value.i_value *= y->value.i_value;
	  break;
        case Expr_Op_Type_Div: 
	  if (y->value.i_value == 0)
	    error ("Illegal Expression:  Division by zero.");
	  else
	    x->value.i_value /= y->value.i_value;
	  break;
        case Expr_Op_Type_Mod: 
	  x->value.i_value %= y->value.i_value;
	  break;
        case Expr_Op_Type_Lshift: 
	  x->value.i_value <<= y->value.i_value;
	  break;
        case Expr_Op_Type_Rshift: 
	  x->value.i_value >>= y->value.i_value;
	  break;
        case Expr_Op_Type_BAND: 
	  x->value.i_value &= y->value.i_value;
	  break;
        case Expr_Op_Type_BOR: 
	  x->value.i_value |= y->value.i_value;
	  break;
        case Expr_Op_Type_BXOR: 
	  x->value.i_value ^= y->value.i_value;
	  break;
        case Expr_Op_Type_LAND: 
	  x->value.i_value = x->value.i_value && y->value.i_value;
	  break;
        case Expr_Op_Type_LOR: 
	  x->value.i_value = x->value.i_value || y->value.i_value;
	  break;

	default:
	  error ("%s:%d: Internal assembler error\n", __FILE__, __LINE__);
	}
      return x;
    }
  /* Canonicalize order to EXPR OP CONSTANT.  */
  if (x->type == Expr_Node_Constant)
    {
      Expr_Node *t = x;
      x = y;
      y = t;
    }
  /* Canonicalize subtraction of const to addition of negated const.  */
  if (op == Expr_Op_Type_Sub && y->type == Expr_Node_Constant)
    {
      op = Expr_Op_Type_Add;
      y->value.i_value = -y->value.i_value;
    }
  if (y->type == Expr_Node_Constant && x->type == Expr_Node_Binop
      && x->Right_Child->type == Expr_Node_Constant)
    {
      if (op == x->value.op_value && x->value.op_value == Expr_Op_Type_Add)
	{
	  x->Right_Child->value.i_value += y->value.i_value;
	  return x;
	}
    }

  /* Create a new expression structure.  */
  val.op_value = op;
  return Expr_Node_Create (Expr_Node_Binop, val, x, y);
}

static Expr_Node *
unary (Expr_Op_Type op, Expr_Node *x) 
{
  if (x->type == Expr_Node_Constant)
    {
      switch (op)
	{
	case Expr_Op_Type_NEG: 
	  x->value.i_value = -x->value.i_value;
	  break;
	case Expr_Op_Type_COMP:
	  x->value.i_value = ~x->value.i_value;
	  break;
	default:
	  error ("%s:%d: Internal assembler error\n", __FILE__, __LINE__);
	}
      return x;
    }
  else
    {
      /* Create a new expression structure.  */
      Expr_Node_Value val;
      val.op_value = op;
      return Expr_Node_Create (Expr_Node_Unop, val, x, NULL);
    }
}

int debug_codeselection = 0;
static void
notethat (char *format, ...)
{
  va_list ap;
  va_start (ap, format);
  if (debug_codeselection)
    {
      vfprintf (errorf, format, ap);
    }
  va_end (ap);
}

#ifdef TEST
main (int argc, char **argv)
{
  yyparse();
}
#endif


