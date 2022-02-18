/*
 * mktm_r.c
 * Original Author:	Adapted from tzcode maintained by Arthur David Olson.
 * Modifications:       Changed to mktm_r and added __tzcalc_limits - 04/10/02, Jeff Johnston
 *                      Fixed bug in mday computations - 08/12/04, Alex Mogilnikov <alx@intellectronika.ru>
 *                      Fixed bug in __tzcalc_limits - 08/12/04, Alex Mogilnikov <alx@intellectronika.ru>
 *
 * Converts the calendar time pointed to by tim_p into a broken-down time
 * expressed as local time. Returns a pointer to a structure containing the
 * broken-down time.
 */

#include <stdlib.h>
#include <time.h>
#include "local.h"

static _CONST int mon_lengths[2][MONSPERYEAR] = {
  {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
  {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
} ;

static _CONST int year_lengths[2] = {
  365,
  366
} ;

int
_DEFUN (__tzcalc_limits, (year),
	int year)
{
//  int days, year_days, years;
//  int i, j;
//  __tzinfo_type *tz = __gettzinfo ();
//  for (i = 0; i < 2; ++i)
//    {
//      if (tz->__tzrule[i].ch == 'J')
//	days = year_days + tz->__tzrule[i].d +
//		(isleap(year) && tz->__tzrule[i].d >= 60);
//
//      /* store the change-over time in GMT form by adding offset */
//      tz->__tzrule[i].change = days * SECSPERDAY +
//	      			tz->__tzrule[i].s + tz->__tzrule[i].offset;
//    }
//
//  tz->__tznorth = (tz->__tzrule[0].change < tz->__tzrule[1].change);

  return 0x18000;
}

