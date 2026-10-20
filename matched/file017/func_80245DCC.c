#include "context.h"

struct func_80245DCC_Struct { u8 pad[0x9C]; s16 unk9C; u8 pad2[2]; f32 unkA0; f32 unkA4; f32 unkA8; };
struct func_80245DCC_Struct3 { u8 pad[4]; f32 unk4; u8 pad2[4]; f32 unkC; };
struct func_80245DCC_Struct2 { u8 pad[0x2C]; struct func_80245DCC_Struct3 *unk2C; };
extern f32 func_8001EB64(s16);
extern f32 func_8001EAD0(s16);
extern s32 func_801C3D20(f32, f32, f32);
extern void func_801C3B2C(s32);
extern void func_801C3B10(s32);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_800208C4(s32);
extern void func_80020718(s32);
extern struct func_80245DCC_Struct2 *D_801BBCD0;
extern s32 D_802588F0;
extern u8 D_8025C890[];
extern u8 func_80245F8C[];

void func_80245DCC(struct func_80245DCC_Struct *arg0, s32 arg1)
{
  s32 i;
  s16 a;
  s32 t;
  f32 s;
  f32 c;
  struct func_80245DCC_Struct3 *p;
  for (i = -0x28; i != 0x2C; i += 4)
  {
    s = func_8001EB64(arg0->unk9C);
    {
      f32 f = (f32) i;
      if (func_801C3D20(arg0->unkA4 - (s * f), (func_8001EAD0(arg0->unk9C) * f) + arg0->unkA8, 3.0f) != 0)
      {
        func_801C3B2C(2);
        func_801C3B10(1);
        t = ((s16) (((u16) arg0->unk9C) - 0x2AA)) & 0x1FFF;
        a = t;
 s = func_8001EAD0(a); func_8011AAF4(D_8025C890, 0x227, arg0, 0, 1, 0.0f, (s * 30.0f) + D_801BBCD0->unk2C->unk4, 2.0f, (func_8001EB64(a) * 30.0f) + D_801BBCD0->unk2C->unkC, 0.0f, D_801BBCD0->unk2C->unk4, 15.0f, D_801BBCD0->unk2C->unkC, 0.0f, 35.0f, -1, -1);
        arg0->unkA0 = 0.0f;
        func_800208C4(0x44);
        func_80020718(0x12F);
        D_802588F0 = 0;
        func_800058DC(arg0, func_80245F8C);
        return;
      }
    }
  }

}
