#include "context.h"

typedef struct func_8035AFEC_Struct {
    u8 pad0[0x30];
    u8 unk30;
    u8 unk31;
    u8 pad1[0x40 - 0x32];
    u8 unk40;
    u8 pad2[0x44 - 0x41];
    s16 unk44;
    s16 unk46;
    u8 pad3[0x4C - 0x48];
    s16 unk4C;
    s16 unk4E;
    u8 pad4[0x7C - 0x50];
    u8 unk7C;
    u8 pad5[0x8C - 0x7D];
    s32 unk8C;
    s32 unk90;
} func_8035AFEC_Struct;

typedef struct func_8035AFEC_StructG {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0xEC - 0xE0];
    s32 unkEC;
} func_8035AFEC_StructG;

extern func_8035AFEC_StructG D_801BBBF0;
extern u8 D_8038557C[];

void *func_80005670(s32, void *, void *, void *);

void *func_8035AFEC(s32 arg0, u8 arg1)
{
  s32 sp24;
  void *var_a2;
  u8 sp1F;
  s32 unkDC;
  void *temp_v0;
  void *var_a0;
  unkDC = D_801BBBF0.unkDC;
  if (arg0 != unkDC)
  {
    sp24 = unkDC;
  }
  else
  {
 sp24 = D_801BBBF0.unkEC; } if (arg0 == unkDC) { var_a2 = D_801BC03C; } else { var_a2 = D_801BC3D8; } sp1F = ((u8 *) var_a2)[0x2D9]; temp_v0 = func_80005670(sp24, &D_8038557C, var_a2, (void *) arg0); D_8038CC14 = (s32) temp_v0; var_a0 = temp_v0; if (temp_v0 != 0) { ((func_8035AFEC_Struct *) temp_v0)->unk30 = sp1F; ((func_8035AFEC_Struct *) D_8038CC14)->unk40 = arg1; if (1) { }
    (*((func_8035AFEC_Struct *) D_8038CC14)).unk7C = ((u8 *) var_a2)[0x2DA];
    ((func_8035AFEC_Struct *) D_8038CC14)->unk8C = sp24;
    ((func_8035AFEC_Struct *) D_8038CC14)->unk90 = (s32) arg0;
    ((func_8035AFEC_Struct *) D_8038CC14)->unk46 = 0;
    ((func_8035AFEC_Struct *) arg0)->unk44 = 0;
    ((func_8035AFEC_Struct *) D_8038CC14)->unk4C = 0;
    ((func_8035AFEC_Struct *) D_8038CC14)->unk4E = 0;
    ((func_8035AFEC_Struct *) D_8038CC14)->unk31 = 0;
    var_a0 = (void *) D_8038CC14;
  }
  return var_a0;
}
