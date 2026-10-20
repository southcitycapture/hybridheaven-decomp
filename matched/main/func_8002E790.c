#include "context.h"

f64 func_8002E790(f64 arg0, s32 *arg2)
{
  s32 *new_var;
  f64 var_fv0;
  f64 var_fv1;
  new_var = arg2;
  *new_var = 0;
  if (arg0 == 0.0)
  {
    return arg0;
  }
  if (arg0 > 0.0)
  {
    var_fv0 = arg0;
  }
  else
  {
    var_fv0 = -arg0;
  }
  while (var_fv0 >= 1.0)
  {
    if (((!new_var) && (!new_var)) && (!new_var))
    {
    }
    *new_var += 1;
    var_fv0 *= 0.5;
  }

  if (var_fv0 < 0.5)
  {
    do
    {
      var_fv0 *= 2.0;
      *new_var -= 1;
    }
    while (var_fv0 < 0.5);
  }
  if (arg0 > 0.0)
  {
    var_fv1 = var_fv0;
  }
  else
  {
    var_fv1 = -var_fv0;
  }
  return var_fv1;
}
