#include "context.h"
extern f32 D_80389DC0;
extern f32 D_80389DC4;
extern f32 D_80389DC8;
struct func_803877F0_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad1[0x54];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
};

void func_803877F0(struct func_803877F0_Struct *arg0, s32 arg1)
{
  u32 t;
  s32 y;
  s32 x;
  u32 i;
  f32 b;
  f32 a;
  t = arg0->unk3C;
  i = 0;
  arg0->unk3C = t + 1;
  if (t == 0)
  {
    if (D_80389DC0)
    {
    }
    b = D_80389DC4;
    a = D_80389DC0;
    do
    {
      x = func_8012C6B4(0xC8);
      y = func_8012C6B4(0xC8);
      func_80129FB8(arg0->unk94, arg0->unk98, arg0->unk9C, (f32) (((f64) (x - 0x64)) / 100.0), (f32) (((f64) (y - 0x32)) / 100.0), (f32) (-(((f64) (func_8012C6B4(0xC8) - 0x64)) / 100.0)), b, 0xFF, 0xFF, 0xFF, t = 0xFF, 0, 0, 0xDC, -0xE, a, 0x15, 0);
      i++;
    }
    while (i != 8);
    func_80129FB8(arg0->unk94, arg0->unk98, arg0->unk9C, 0.0f, 0.0f, 0.0f, 0.0f, 0xFF, 0xFF, 0xFF, 0xFF, 0, 0, 0x78, -4, D_80389DC8, 0, 0);
    func_80005700(arg0);
  }
}
