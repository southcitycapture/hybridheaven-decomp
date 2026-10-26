#include "common.h"
typedef struct func_8024781C_Inner {
    u8 pad[0x40];
    f32 a;
    u8 pad2[0x4];
    f32 b;
} func_8024781C_Inner;
typedef struct func_8024781C_Struct {
    u8 pad[0xDC];
    func_8024781C_Inner *inner;
} func_8024781C_Struct;
extern func_8024781C_Struct D_801BBBF0;
int func_800058DC(s32, void *);
extern void func_8011AAF4(u8 *, s32, s32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
void func_801C2F0C(s32, s16 *);
s32 func_801C3044();
typedef struct func_80248190_StructB {
    u8 pad0[4];
    f32 f4, f8, fC;
    u8 pad10[2];
    s16 s12;
    u8 pad14[0x1C];
    f32 f30, f34, f38, f3C, f40, f44;
} func_80248190_StructB;
typedef struct func_80248190_StructA {
    u8 pad[0x2C];
    func_80248190_StructB *p;
} func_80248190_StructA;


typedef struct func_80247B60_StructState {
    u8 pad[0x3C];
    u16 state;
} func_80247B60_StructState;
typedef struct func_80247B60_StructGlobal {
    u8 pad[0xE0];
    func_80248190_StructA *p;
    u8 pad2[0x104];
    f32 x, y, z, a, b, c;
} func_80247B60_StructGlobal;
typedef struct func_80247B60_StructParams {
    s16 a;
    s32 b;
    f32 c;
    s16 d;
    u8 pad[12];
} func_80247B60_StructParams;
extern u8 D_80258C0C[];
extern void func_80247DA0();

void func_80247B60(func_80247B60_StructState *arg0, s32 arg1)
{
  func_80247B60_StructGlobal *g;
  func_80247B60_StructParams sp60;
  u32 state;
  if ((arg0->state != 0) && (arg0->state != 2))
  {
    goto skip;
  }
  ((func_80247B60_StructGlobal *) (&D_801BBBF0))->p->p->s12 += 22;
  skip:
  g = (func_80247B60_StructGlobal *) (&D_801BBBF0);

  func_8011AAF4(D_80258C0C, 0x106, (s32) arg0, 0, 2, 0.15f, g->x, g->y, g->z, 0.1f, g->a, g->b, g->c, 0.0f, 35.0f, -1, -1);
  if (func_801C3044() == 0)
  {
    switch (arg0->state)
    {
      case 0:
      {
        sp60.a = 0;
        sp60.b = 0x3480014;
        sp60.c = 1.0f;
        sp60.d = 20;
        func_801C2F0C(3, &sp60.a);
        goto done;
      }

      case 1:
      {
        sp60.a = 0;
        sp60.b = 0x3480014;
        sp60.c = 3.0f;
        func_801C2F0C(4, &sp60.a);
        goto done;
      }

      case 2:
      {
        sp60.a = 0;
        sp60.b = 0x3480015;
        sp60.c = 1.0f;
        sp60.d = 20;
        func_801C2F0C(3, &sp60.a);
        goto done;
      }

      case 3:
      {
        sp60.a = 0;
        sp60.b = 0x3480015;
        sp60.c = 3.0f;
        func_801C2F0C(4, &sp60.a);
        goto done;
      }

      case 4:
      {
        sp60.a = 0x1100;
        sp60.b = 0x348007A;
        sp60.c = 5.0f;
        sp60.d = 20;
        func_801C2F0C(5, &sp60.a);
        func_800058DC((s32) arg0, func_80247DA0);
      }

    }

    done:
    arg0->state++;

  }
}
