#include "context.h"
extern s8 D_8017DD92;

extern u8 D_8017DD7E[];
extern u8 D_8017DD84[];

s32 func_80152890(u8 arg0)
{
  s32 var_v1;
  s32 var_a0;
  s32 temp_a3;
  s32 var_a2;
  short new_var;
  u8 *var_v0;
  var_v1 = 0;
  if (!arg0)
  {
    var_v0 = D_8017DD7E;
  }
  else
  {
    var_v0 = D_8017DD84;
  }
  var_a0 = 0;
  new_var = var_v0[0];
  var_a2 = 0;
  do
  {
    temp_a3 = 1 << var_a2;
    if (new_var & temp_a3)
    {
      var_v1 = (var_v1 + 1) & 0xFF;
    }
    if (var_v0[1] & temp_a3)
    {
      var_v1 = (var_v1 + 1) & 0xFF;
    }
    if (var_v0[2] & temp_a3)
    {
      var_v1 = (var_v1 + 1) & 0xFF;
    }
    if (var_v0[3] & temp_a3)
    {
      var_v1 = (var_v1 + 1) & 0xFF;
    }
    if (var_v0[4] & temp_a3)
    {
      var_v1 = (var_v1 + 1) & 0xFF;
    }
    var_a0 = (var_a0 + 1) & 0xFF;
    var_a2 = var_a0;
  }
  while (var_a0 < 0x10);
  if (var_v0[5] & 1)
  {
    var_v1 = (var_v1 + 1) & 0xFF;
  }
  if ((var_v0[5] & 2) && ((*((u8 *) (&D_8017DD92))) == 0))
  {
    var_v1 = (var_v1 + 1) & 0xFF;
  }
  var_v1 = var_v1 + 2;
  return var_v1 & 0xFF;
}
