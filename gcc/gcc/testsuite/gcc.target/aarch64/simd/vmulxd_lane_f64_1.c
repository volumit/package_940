/* Test the vmulxd_lane_f64 AArch64 SIMD intrinsic.  */

/* { dg-do run } */
/* { dg-options "-save-temps -O3" } */

#include "arm_neon.h"

extern void abort (void);

float64_t __attribute__ ((noinline))
test_vmulxd_lane_f64_lane0 (float64_t vec1_1, float64x1_t vec1_2)
{
  return vmulxd_lane_f64 (vec1_1, vec1_2, 0);
}

#define PASS_ARRAY(...) {__VA_ARGS__}

#define SETUP_VEC(V1_D, V2_D, EXP1, I)					\
  void set_and_test_case##I ()						\
  {									\
    float64_t vec1 = V1_D;						\
    float64_t vec2_data[] =  V2_D;					\
    float64x1_t vec2 = vld1_f64 (vec2_data);				\
    float64_t expected_lane0 = EXP1;					\
    float64_t actual_lane0 = test_vmulxd_lane_f64_lane0 (vec1, vec2);	\
    if (actual_lane0 != expected_lane0)					\
      abort ();								\
  }									\

float64_t v1 = 3.14159265359;
float64_t v2 = 1.383894;

float64_t v4 = 0.0;
float64_t v5 = -0.0;
float64_t v6 = __builtin_huge_val ();
float64_t v7 = -__builtin_huge_val ();

SETUP_VEC (v1, PASS_ARRAY (v2), v1*v2, 1)
SETUP_VEC (v4, PASS_ARRAY (v6), 2.0, 2)
SETUP_VEC (v4, PASS_ARRAY (v7), -2.0, 3)
SETUP_VEC (v5, PASS_ARRAY (v6), -2.0, 4)
SETUP_VEC (v5, PASS_ARRAY (v7), 2.0, 5)

int
main (void)
{
  set_and_test_case1 ();
  set_and_test_case2 ();
  set_and_test_case3 ();
  set_and_test_case4 ();
  set_and_test_case5 ();
  return 0;
}
/* { dg-final { scan-assembler-times "fmulx\[ \t\]+\[dD\]\[0-9\]+, ?\[dD\]\[0-9\]+, ?(?:\[vV\]\[0-9\]+\.\[dD\]\\\[0\\\]|\[dD\]\[0-9\])\n" 1 } } */
