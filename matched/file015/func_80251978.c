#include "common.h"
typedef struct func_8024E43C_StructV { s32 w[4]; } func_8024E43C_StructV;
extern func_8024E43C_StructV D_80164F40;
extern void func_800058DC(void *, void *);
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_8012C89C(void *, s32, s32, s32);
typedef struct func_80251B6C_Struct_Obj {
    u8 pad[0x12];
    s16 unk12;
    u8 pad2[0x4B - 0x14];
    u8 unk4B;
} func_80251B6C_Struct_Obj;
typedef struct func_80251B6C_Struct_Ref {
    u8 pad[0x30];
    func_80251B6C_Struct_Obj *unk30;
} func_80251B6C_Struct_Ref;
void func_80251B6C(s32 arg0, func_80251B6C_Struct_Ref **arg1);

extern void func_8012D814(void *, s32, s32, f32, s32);
extern f32 D_8025A238;
extern f64 D_8025A240;
extern f32 D_8025A248;
extern f32 D_8025A24C;
extern u8 D_80254C78[];

typedef struct func_80251978_StructP { u8 pad0[0x90]; f32 x90; f32 x94; f32 x98; } func_80251978_StructP;
typedef struct func_80251978_StructI {
    u8 pad0[4]; f32 x4; f32 x8; f32 xC; u8 pad10[8]; f32 x18; f32 x1C; f32 x20; u8 pad24b[4];
    u8 pad28[0x20];
    u8 b48; u8 b49; u8 b4A; u8 b4B; u8 b4C; u8 b4D; u8 b4E;
} func_80251978_StructI;
typedef struct func_80251978_StructJ { u8 pad0[0x24]; u32 flags24; u8 pad28[8]; u32 ptr30; } func_80251978_StructJ;
typedef struct func_80251978_StructO { u8 pad[0x30]; func_80251978_StructI *p; } func_80251978_StructO;

void func_80251978(func_80251978_StructP *arg0, func_80251978_StructO **arg1)
{
  func_8024E43C_StructV v;
  v = D_80164F40;
  v.w[1] = 0x80000600;
  func_80005E44(arg0, &v);
  func_80006214(arg0);
  arg0->x90 = 1.0f;
  arg0->x94 = D_8025A238;
  arg0->x98 = 1.0f;
  func_8012C89C(arg0, 0, 0x225, 1);
  func_8012D814(arg0, 0x225, 0, 1.0f, 1);
  ((func_80251978_StructJ *) (*arg1)->p)->flags24 |= 0x300;
  ((func_80251978_StructJ *) (*arg1)->p)->ptr30 = ((u32) D_80254C78) | 0x40000000;
  (*arg1)->p->x4 = -192.7f;
  (*arg1)->p->x8 = -128.0f;
  (*arg1)->p->xC = 450.4f;
  (*arg1)->p->x18 = arg0->x90 * 0.01;
  (*arg1)->p->x1C = arg0->x94 * 0.01;
  (*arg1)->p->x20 = arg0->x98 * 0.01;
  (*arg1)->p->b48 = 0x20;
  (*arg1)->p->b49 = 0xFF;
  (*arg1)->p->b4A = 0x80;
  (*arg1)->p->b4B = 0;
  if (!arg1)
  {
  }
  (*arg1)->p->b4C = 0x80;
  (*arg1)->p->b4D = 0xFF;
  (*arg1)->p->b4E = 0;
  func_800058DC(arg0, (void *) func_80251B6C);
}
