#include "context.h"

typedef struct func_801FF628_StructQ {
    u8 pad0[8];
    f32 unk8;
} func_801FF628_StructQ;

typedef struct func_801FF628_StructP {
    u8 pad0[0x2C];
    func_801FF628_StructQ *unk2C;
} func_801FF628_StructP;

typedef struct func_801FF628_StructA {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x44];
    s32 unk74;
    u8 pad78[0x18];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    s16 unk9C;
    u8 unk9E;
    u8 unk9F;
    u16 unkA0;
    u8 padA2[6];
    u16 unkA8;
} func_801FF628_StructA;

extern s32 func_801C3D20(f32, f32, s32);
extern func_801FF628_StructP *D_801BBCD0;
extern void *D_80217870[];
extern void *D_80217880[];

void func_801FF628(func_801FF628_StructA *arg0, s32 arg1)
{
  void *temp_v0;
  void *temp_v0_2;
  f32 temp_fv0;
  f32 temp_fv1;
  temp_v0 = D_80217870[arg0->unkA0];
  if (temp_v0 != 0)
  {
    ((void (*)(void)) temp_v0)();
  }
  if (!(arg0->unkA8 & 2))
  {
    temp_v0_2 = D_80217880[arg0->unk9F];
    if (temp_v0_2 != 0)
    {
      ((void (*)(func_801FF628_StructA *, s32)) temp_v0_2)(arg0, arg1);
    }
  }
  if (arg0->unk74 != 0)
  {
 do { if (func_801C3D20(arg0->unk90, arg0->unk98, 0x41A00000) != 0) { temp_fv1 = D_801BBCD0->unk2C->unk8; temp_fv0 = arg0->unk94; if (((temp_fv0 - 5.0f) <= temp_fv1) && (temp_fv1 < (temp_fv0 + 40.0f))) { arg0->unk2C = arg0->unk2C | 0x800; return; } } } while (0);
    arg0->unk2C = arg0->unk2C & (~0x800);
  }
}
