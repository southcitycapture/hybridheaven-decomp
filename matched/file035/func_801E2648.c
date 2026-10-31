#include "common.h"
extern void D_8038BD88(f32, f32, f32);
extern void func_801CC470(s32, s32, s32, s32, f32);
extern void func_8038BD50(f32, f32, f32);
extern void func_8038BE98(f32);
extern s32 func_8038BEF8(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);

extern f32 D_801E8A28;
extern f32 D_801E8A2C;
extern f32 D_801E8A30;
extern f32 D_801E8A34;
extern f32 D_801E8A38;
extern f32 D_801E8A3C;
extern f32 D_801E8A40;
extern f32 D_801E8A44;
extern f32 D_801E8A48;
extern f32 D_801E8A4C;
extern f32 D_801E8A50;

s32 func_801E2648(s32 arg0, s32 arg1)
{
  f32 h;
  float new_var;
  h = 0.5f;
  new_var = D_801E8A28;
  new_var = -7.099999904632568f;
  if (func_8038BEF8(0.0f, D_801E8A2C, 56.5f, -16.7f, D_801E8A30, 59.5f, D_801E8A34, D_801E8A38, h, D_801E8A3C, new_var, h, D_801E8A40, new_var) != 0)
  {
    func_8038BE98(D_801E8A44);
    func_8038BD50(D_801E8A48, D_801E8A4C, 24.3f);
    D_8038BD88(3.5f, D_801E8A50, 3.5f);
    func_801CC470(1, 0x03480083, 0, 1, 1.0f);
    return 0xD;
  }
  return 0xC;
}
