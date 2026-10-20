#include "context.h"
extern s32 func_801C1088(s32 a0, s32 a1, s32 a2);
extern void func_801C10D8(s32 a0, s32 a1);
extern u32 func_801C1134(s32 a0, s32 a1);


s32 func_801E274C(s32 arg0, s32 arg1)
{
  s32 temp_a1;
  float new_var2;
  int new_var;
  if (func_801C1088(1, 0, 0x3C) != 0)
  {
    func_801C10D8(1, 0);
    return 7;
  }
  new_var = 0xFF;
  new_var2 = ((f32) func_801C1134(1, 0)) / 60.0f;
  temp_a1 = ((u32) ((50.0f * new_var2) + 150.0f)) & new_var;
  func_801CCE88(0, temp_a1, temp_a1 & 0xFF, temp_a1 & new_var);
  return 6;
}
