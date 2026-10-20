#include "context.h"

extern f32 D_80389D68;
extern f32 D_80389D6C;
extern f64 D_80389D70;
extern f64 D_80389D78;

typedef struct func_80386FE0_Struct30 {
    u8 pad0[0x18];
    f32 f18;
    f32 f1C;
    f32 f20;
    u8 pad24[0x27];
    u8 b4B;
} func_80386FE0_Struct30;

typedef struct func_80386FE0_Struct0 {
    u8 pad0[0x30];
    func_80386FE0_Struct30 *p30;
} func_80386FE0_Struct0;

typedef struct func_80386FE0_Struct1 {
    func_80386FE0_Struct0 *a;
    func_80386FE0_Struct0 *b;
} func_80386FE0_Struct1;

typedef struct func_80386FE0_StructA {
    u8 pad0[0x3C];
    u16 u3C;
    u8 pad3E[0x56];
    f32 f94;
    f32 f98;
    f32 f9C;
} func_80386FE0_StructA;

void func_80386FE0(func_80386FE0_StructA *arg0, func_80386FE0_Struct1 *arg1)
{
  s32 t = arg0->u3C;
  s32 i;
  s32 x;
  s32 y;
  f32 v;
  f32 fs3;
  f32 fs2;
  arg0->u3C = t + 1;
  if (t == 0)
  {
    fs3 = 0.0f;
    fs3 = D_80389D68;
    if (((!arg1) && (!arg1)) && (!arg1))
    {
    }
    fs2 = D_80389D6C;
    for (i = 0; i != 0x10; i++)
    {
      x = func_8012C6B4(0xC8);
      y = func_8012C6B4(0x258);
      func_80129FB8(arg0->f94, arg0->f98, arg0->f9C, (-(((f64) x) / 100.0)) - 5.0, ((f64) (y - 0xFA)) / 100.0, ((f64) (func_8012C6B4(0x258) - 0x12C)) / 100.0, fs2, 0xFF, 0xFF, 0xFF, 0x64, 0, 0xFF, 0xF0, -0xC, fs3, 0x15, 0);
    }

  }
  arg1->a->p30->f18 = arg1->a->p30->f18 + D_80389D70;
  v = arg1->a->p30->f18;
  arg1->a->p30->f20 = v;
  arg1->a->p30->f1C = v;
  arg1->b->p30->f18 = arg1->b->p30->f18 + D_80389D78;
  v = arg1->b->p30->f18;
  arg1->b->p30->f20 = v;
  arg1->b->p30->f1C = v;
  arg1->a->p30->b4B = arg1->a->p30->b4B - 0x10;
  arg1->b->p30->b4B = arg1->a->p30->b4B;
  if (arg1->a->p30->b4B < 0x11)
  {
    func_80005700(arg0);
  }
}
