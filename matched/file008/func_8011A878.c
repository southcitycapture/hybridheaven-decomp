#include "context.h"

typedef struct func_8011A878_Inner {
    u8 pad0[0x4];
    f32 unk4;
    u8 pad1[0x4];
    f32 unkC;
    u8 pad2[0x30 - 0x10];
    f32 unk30;
    u8 pad3[0x4];
    f32 unk38;
    f32 unk3C;
    u8 pad4[0x4];
    f32 unk44;
} func_8011A878_Inner;
typedef struct func_8011A878_Obj {
    u8 pad0[0x2C];
    func_8011A878_Inner *unk2C;
} func_8011A878_Obj;
typedef struct func_8011A878_Struct {
    u8 pad0[0xA2];
    s16 unkA2;
    s16 unkA4;
    u8 pad1[0xE0 - 0xA6];
    func_8011A878_Obj *unkE0;
    u8 padE4[4];
    func_8011A878_Obj *unkE8;
    u8 pad2[0x232 - 0xEC];
    s16 unk232;
    u8 unk234;
} func_8011A878_Struct;

extern f32 func_8002FC20(f32);
extern f64 D_80189E90;
#define s ((func_8011A878_Struct *)&D_801BBBF0)

void func_8011A878(f32 arg0, f32 arg1)
{
  f32 sp24;
  func_8011A878_Inner *p;
  p = ((func_8011A878_Struct *) (&D_801BBBF0))->unkE8->unk2C;
  if (((f64) func_8002FC20(((p->unk30 - p->unk3C) * (p->unk30 - p->unk3C)) + ((p->unk38 - p->unk44) * (p->unk38 - p->unk44)))) < 10.0)
  {
    ((func_8011A878_Struct *) (&D_801BBBF0))->unk234 = 0x1E;
  }
  if (((func_8011A878_Struct *) (&D_801BBBF0))->unk234 != 0)
  {
    p = ((func_8011A878_Struct *) (&D_801BBBF0))->unkE0->unk2C;
    sp24 = func_8002FC20(((p->unk4 - arg0) * (p->unk4 - arg0)) + ((p->unkC - arg1) * (p->unkC - arg1)));
    if ((((f64) func_8002FC20((f32) ((((func_8011A878_Struct *) (&D_801BBBF0))->unkA2 * ((func_8011A878_Struct *) (&D_801BBBF0))->unkA2) + (((func_8011A878_Struct *) (&D_801BBBF0))->unkA4 * ((func_8011A878_Struct *) (&D_801BBBF0))->unkA4)))) < 40.0) || (((f64) sp24) < D_80189E90))
    {
      p = ((func_8011A878_Struct *) (&D_801BBBF0))->unkE8->unk2C;
      ((func_8011A878_Struct *) (&D_801BBBF0))->unk232 = func_8001EF38(p->unk44 - p->unk38, p->unk3C - p->unk30);
      ((func_8011A878_Struct *) (&D_801BBBF0))->unk234 = 0;
    }
  }
  else
  {
    p = ((func_8011A878_Struct *) (&D_801BBBF0))->unkE8->unk2C;
    ((func_8011A878_Struct *) (&D_801BBBF0))->unk232 = func_8001EF38(p->unk44 - p->unk38, p->unk3C - p->unk30);
  }
}
