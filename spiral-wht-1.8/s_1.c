/* This function has been automatically generated by whtgen. */

/*
  apply_small1( <wht>, <S>, <x> )
  ------------------------------
  computes
    WHT_(2^1) with stride <S>
  on the vector <x>
*/

#include "spiral_wht.h"

void apply_small1(Wht *W, long S, wht_value *x)
{
  wht_value t0;
  wht_value t1;




  t0 = x[0] + x[S];
  t1 = x[0] - x[S];
  x[0] = t0;
  x[S] = t1;
}
