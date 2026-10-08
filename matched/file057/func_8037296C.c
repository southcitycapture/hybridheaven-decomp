#include "common.h"

struct func_8037296C_Struct {
    u8 pad0[0xC];
    void *unkC;
    u8 pad10[0x4C - 0x10];
    u16 unk4C;
    u16 unk4E;
    u8 pad50[0x6C - 0x50];
    f32 unk6C;
    f32 unk70;
    f32 unk74;
};

struct func_8037296C_StructB {
    u8 pad0[0x30];
    s32 unk30;
};

struct func_8037296C_StructC {
    u8 pad0[0x8];
    f32 unk8[3];
};

extern void *func_800058DC(void *, void *);
extern void func_80006214(void *);
extern void func_80372654(f32 *, void *, void *);
extern u8 D_8008DA88[];
extern s32 D_801BBCCC;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern u8 func_803711C8[];

void func_8037296C(struct func_8037296C_Struct *arg0, s32 arg1)
{
  struct func_8037296C_StructB *sp3C;
  struct func_8037296C_StructC sp20;
  void *temp_a1;
  if (D_801BBCCC == ((s32) arg0->unkC))
  {
    sp3C = (struct func_8037296C_StructB *) D_801BC03C;
  }
  else
  {
    sp3C = (struct func_8037296C_StructB *) D_801BC3D8;
  }
  ;
  func_80006214(arg0->unkC);
  func_80372654(sp20.unk8, arg0->unkC, D_8008DA88);
  func_80006214(arg0);
  arg0->unk6C = sp20.unk8[0];
  arg0->unk70 = sp20.unk8[1];
  arg0->unk74 = sp20.unk8[2];
  if ((((u32) (sp3C->unk30 << 0x1B)) >> 0x1E) == 0)
  {
    arg0->unk4C = (u16) (arg0->unk4C | 0x8000);
  }
  if (((s32) arg0->unk4C) >= (arg0->unk4E | 0x8000))
  {
    func_800058DC(arg0, func_803711C8);
  }
}
