#include "common.h"
extern f64 func_80034C24();
extern s32 func_801C0DE4(s32, s32, f32);
extern void func_801C0EB0(s32, s32);
extern u64 func_801C0F18(s32, s32);
void func_801CCE88(s32 arg0, u8 arg1, u8 arg2, u8 arg3);
void func_801CCEC8(s32 arg0, s8 arg1, s8 arg2, s8 arg3);
f32 func_801CDBD4(f32 arg0, f32 arg1, f32 arg2);


extern f64 D_801DD3F0;

typedef struct func_801CD098_Struct {
  u8 unk0[2];
  s8 z;
  s8 y;
  s8 x;
  u8 b;
  u8 g;
  u8 r;
  u8 unk8[16];
} func_801CD098_Struct;

s32 func_801CD098(s32 arg0, s32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg9, f32 arg10, f32 arg11, f32 arg12, f32 arg13, f32 arg14)
{
  func_801CD098_Struct s;
  f32 temp_fs0;
  u64 temp_ret;
  if (func_801C0DE4(1, arg1, arg2) != 0)
  {
    func_801C0EB0(1, arg1);
    return 1;
  }
  temp_ret = func_801C0F18(1, arg1);
  temp_fs0 = ((f32) (func_80034C24(temp_ret) / D_801DD3F0)) / arg2;
  s.r = (u8) ((u32) func_801CDBD4(arg3, arg6, temp_fs0));
  s.g = (u8) ((u32) func_801CDBD4(arg4, arg7, temp_fs0));
  s.b = (u8) ((u32) func_801CDBD4(arg5, arg8, temp_fs0));
  s.x = (s8) ((s32) func_801CDBD4(arg9, arg12, temp_fs0));
  s.y = (s8) ((s32) func_801CDBD4(arg10, arg13, temp_fs0));
  s.z = (s8) ((s32) func_801CDBD4(arg11, arg14, temp_fs0));
  func_801CCE88(arg0, s.r, s.g, s.b);
  func_801CCEC8(arg0, s.x, s.y, s.z);
  return 0;
}
