#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/main/80029D30/func_80029D30.s")


void func_80029E30(void *arg0)
{
  f32 *var_v1;
  s32 var_v0;
  int new_var;
 var_v0 = 0; new_var = 2; var_v1 = arg0; loop: if (var_v0 == 0) { var_v1[0] = 1.0f;
  }
  else
  {
    var_v1[0] = 0.0f;
  }

  if (var_v0 == 1)
  {
    var_v1[1] = 1.0f;
  }
  else
  {
    var_v1[1] = 0.0f;
  }
  if (var_v0 == new_var)
  {
    var_v1[new_var] = 1.0f;
  }
  else
  {
    var_v1[2] = 0.0f;
  }
  if (var_v0 == 3)
  {
    var_v1[3] = 1.0f;
  }
  else
  {
    var_v1[3] = 0.0f;
  }
  var_v0 += 1;
  var_v1 += 4;
  if (var_v0 != 4)
  {
    goto loop;
  }
}


extern void func_80029D30(void *p, s32 arg1);

void func_80029EB8(s32 arg0) {
    s32 sp18[16];

    func_80029E30(sp18);
    func_80029D30(sp18, arg0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/80029D30/func_80029EE8.s")

