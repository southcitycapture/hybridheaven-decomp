#include "common.h"
extern void func_80005700();
extern void func_80129FB8(f32, f32, f32, f32, f32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32, s32);
extern s32 func_8012C6B4(s32);
s32 func_80380F94(f32 arg0, f32 arg1, s32 arg2, f32 arg3, f32 arg4, f32 arg5, s32 arg6);


extern f32 D_80389D30;
extern f64 D_80389D38;
extern f64 D_80389D40;

typedef struct func_80386968_Struct {
    u8 pad0[0x3C];
    u16 f3C;
    u8 pad3E[0x94 - 0x3E];
    f32 x;
    f32 y;
    f32 z;
} func_80386968_Struct;

void func_80386968(func_80386968_Struct *arg0, s32 arg1)
{
  s32 cnt[1];
  s32 t;
  s32 e;
  s32 d;
  s32 c;
  s32 b;
  s32 a;
  func_80386968_Struct *p;
  p = arg0;
  t = arg0->f3C;
  cnt[0] = t;
  arg0->f3C = t + 1;
  if (cnt[0] == 0)
  {
    func_80380F94(arg0->x, arg0->y, *((s32 *) (&arg0->z)), 0.0f, 0.0f, 0.0f, 0x1A);
    func_80380F94(p->x, p->y, *((s32 *) (&p->z)), 0.0f, 0.0f, 0.0f, 0x1B);
    func_80129FB8(p->x, p->y + 4.0f, p->z, 0.0f, 0.0f, 0.0f, 0.0f, 0xFF, 0xF3, 0x22, 0xFF, 0x66, 0, 0xF0, -4, D_80389D30, 6, 0);
  }
  if (!(cnt[0] % 2))
  {
    a = func_8012C6B4(0x640);
    b = func_8012C6B4(0x258);
    c = func_8012C6B4(0x640);
    d = func_8012C6B4(0x28);
    e = func_8012C6B4(0x28);
    func_80129FB8((f32) ((((f64) (a - 0x320)) / 100.0) + ((f64) p->x)), (f32) ((((f64) b) / 100.0) + ((f64) (p->y + 3.0f))), (f32) ((((f64) (c - 0x320)) / 100.0) + ((f64) p->z)), 0.0f, 0.0f, 0.0f, 0.0f, 0xFF, d + 0xC8, 0x1E, 0xFF, e + 0x3C, 0, 0x78, -4, (f32) ((((f64) func_8012C6B4(0x14)) / D_80389D38) + D_80389D40), 0xD, 0);
  }
  if (cnt[0] >= 8)
  {
    func_80005700(p);
  }
}
