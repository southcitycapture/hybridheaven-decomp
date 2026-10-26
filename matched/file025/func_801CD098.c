#include "context.h"

extern f64 func_80034C24();
extern s32 func_801C0DE4(s32);
extern void func_801C0EB0();
extern u64 func_801C0F18();
extern f64 D_801DD3F0;

s32 func_801CD098(s32 arg0, s32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg9, f32 arg10, f32 arg11, f32 arg12, f32 arg13, f32 arg14)
{
  u8 pad[16];
  u8 sp27;
  u8 sp26;
  u8 sp25;
  s8 sp24;
  s8 sp23;
  s8 sp22;
  f32 temp_fs0;
  u64 temp_ret;
  if (1)
  {
    if (func_801C0DE4(1) != 0)
    {
      func_801C0EB0(1, arg1);
      return 1;
    }
    temp_ret = func_801C0F18(1, arg1);
    temp_fs0 = ((f32) (func_80034C24(temp_ret) / D_801DD3F0)) / arg2;
    sp27 = (u8) ((u32) func_801CDBD4(arg3, arg6, temp_fs0));
    sp26 = (u8) ((u32) func_801CDBD4(arg4, arg7, temp_fs0));
    sp25 = (u8) ((u32) func_801CDBD4(arg5, arg8, temp_fs0));
    sp24 = (s8) ((s32) func_801CDBD4(arg9, arg12, temp_fs0));
    sp23 = (s8) ((s32) func_801CDBD4(arg10, arg13, temp_fs0));
    sp22 = (s8) ((s32) func_801CDBD4(arg11, arg14, temp_fs0));
    func_801CCE88(arg0, sp27, sp26, sp25);
    func_801CCEC8(arg0, sp24, sp23, sp22);
    return 0;
  }
}
