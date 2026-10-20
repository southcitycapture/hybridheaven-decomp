#include "context.h"

extern f64 func_80034C24();
extern s32 func_801C0DE4(s32 arg0, s32 arg1, f32 arg2);
extern void func_801C0EB0(s32 arg0, s32 arg1);
extern u64 func_801C0F18(s32 arg0, s32 arg1);
extern f64 D_8038DD00;

s32 func_8038C08C(f32 arg0, f32 arg1, f32 arg2, f32 arg3)
{
  f64 new_var;
  if (func_801C0DE4(0, 9000, arg1) != 0)
  {
    func_801C0EB0(0, 9000);
    return 1;
  }
  if (func_801C0DE4(0, 9000, arg0) != 0)
  {
    new_var = func_80034C24(func_801C0F18(0, 9000));
    D_801BBCD8->unk2C->unk1C = ((arg3 - arg2) * (((f32) ((new_var / D_8038DD00) - ((f64) arg0))) / (arg1 - arg0))) + arg2;
  }
  return 0;
}
