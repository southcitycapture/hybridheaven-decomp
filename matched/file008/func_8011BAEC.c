#include "context.h"

typedef struct func_8011BAEC_StructC {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_8011BAEC_StructC;
typedef struct func_8011BAEC_StructB {
    u8 pad0[0x24];
    s32 unk24;
} func_8011BAEC_StructB;
typedef struct func_8011BAEC_StructD {
    u8 pad0[0x2C];
    func_8011BAEC_StructC *unk2C;
} func_8011BAEC_StructD;
typedef struct func_8011BAEC_Struct {
    u8 pad0[0x40];
    func_8011BAEC_StructB *unk40;
    u8 pad1[0xE0 - 0x44];
    func_8011BAEC_StructD *unkE0;
    u8 pad2[0xF5 - 0xE4];
    u8 unkF5;
} func_8011BAEC_Struct;

extern f32 func_8002FC20(f32);
extern s32 D_80164DE4;

s32 func_8011BAEC(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4)
{
  int new_var;
  f32 dx;
  f32 dz;
  f32 y;
  f32 d;
  new_var = 1;
  if (((func_8011BAEC_Struct *) (&D_801BBBF0))->unk40->unk24 == 0)
  {
    D_80164DE4 += new_var;
    return 0;
 do { } while (0);
  }
  if (((func_8011BAEC_Struct *) (&D_801BBBF0))->unkF5 == 0)
  {
    D_80164DE4 += new_var;
    return 0;
  }
  D_80164DE4 = 0;
  dx = ((func_8011BAEC_Struct *) (&D_801BBBF0))->unkE0->unk2C->unk4 - arg0;
  dz = ((func_8011BAEC_Struct *) (&D_801BBBF0))->unkE0->unk2C->unkC - arg2;
  if (func_8002FC20((dx * dx) + (dz * dz)) < arg3)
  {
    y = ((func_8011BAEC_Struct *) (&D_801BBBF0))->unkE0->unk2C->unk8;
    if (arg1 < y)
    {
      d = -(arg1 - y);
    }
    else
    {
      d = arg1 - y;
    }
    if (d < arg4)
    {
      return new_var;
    }
  }
  return 0;
}
