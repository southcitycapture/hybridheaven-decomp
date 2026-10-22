#include "context.h"

struct func_8024160C_StructC {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    u8 pad1[0x18 - 0x12];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u32 unk24;
    u8 pad2[0x30 - 0x28];
    u32 unk30;
    u8 pad3[0x48 - 0x34];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
};
struct func_8024160C_StructB {
    u8 pad0[0x24];
    u32 unk24;
    u8 pad1[0x30 - 0x28];
    struct func_8024160C_StructC *unk30;
};
struct func_8024160C_StructA {
    struct func_8024160C_StructB *unk0;
    struct func_8024160C_StructB *unk4;
    struct func_8024160C_StructB *unk8;
};
struct func_8024160C_Self {
    u8 pad[0x2C];
    s32 unk2C;
};
extern void func_801264D4(void *, s32, f32, f32, f32, s32);
extern u8 D_8017B7A0[], D_8017B850[], D_8017B8A0[];
extern f32 D_80249ABC, D_80249AC0, D_80249AC4, D_80249AC8, D_80249ACC, D_80249AD0;

void func_8024160C(struct func_8024160C_Self *arg0, struct func_8024160C_StructA *arg1)
{
  f32 fs0;
  f32 k;
  func_80005F6C(arg0, D_80164F40);
  func_80005F6C(arg0, D_80164F40);
  func_80005F6C(arg0, D_80164F40);
  func_80006214(arg0);
  fs0 = D_80249ABC;
  func_801264D4(arg0, 0, fs0, 15.0f, D_80249AC0, 0);
  func_801264D4(arg0, 1, fs0, 15.0f, D_80249AC4, 0);
  func_801264D4(arg0, 2, fs0, 15.0f, D_80249AC8, 0);
  k = D_80249ACC;
  arg0->unk2C |= 0x20;
  if (1)
  {
    arg1->unk0->unk24 = 0x80000600;
    arg1->unk0->unk30->unk24 |= 0x100;
    arg1->unk0->unk30->unk30 = ((u32) D_8017B7A0) | 0x40000000;
    arg1->unk0->unk30->unk48 = 0;
    arg1->unk0->unk30->unk49 = 0xFF;
    arg1->unk0->unk30->unk4A = 0;
    arg1->unk0->unk30->unk18 = k;
    arg1->unk0->unk30->unk1C = k;
    arg1->unk0->unk30->unk20 = k;
    arg1->unk0->unk30->unk4 = fs0;
    arg1->unk0->unk30->unk8 = 23.0f;
    arg1->unk0->unk30->unkC = 340.0f;
    arg1->unk0->unk30->unk10 = 0x1000;
    arg1->unk4->unk24 = 0x80000600;
    arg1->unk4->unk30->unk24 |= 0x4100;
    arg1->unk4->unk30->unk30 = ((u32) D_8017B8A0) | 0x40000000;
    arg1->unk4->unk30->unk4C = 2;
  }
  arg1->unk4->unk30->unk48 = 0;
  arg1->unk4->unk30->unk49 = 0xFF;
  arg1->unk4->unk30->unk4A = 0;
  arg1->unk4->unk30->unk18 = k;
  arg1->unk4->unk30->unk1C = k;
  arg1->unk4->unk30->unk20 = k;
  arg1->unk4->unk30->unk4 = fs0;
  arg1->unk4->unk30->unk8 = 23.0f;
  arg1->unk4->unk30->unkC = 340.0f;
  arg1->unk4->unk30->unk10 = 0x1000;
  arg1->unk8->unk24 = 0x80000600;
  arg1->unk8->unk30->unk24 |= 0x100;
  arg1->unk8->unk30->unk30 = ((u32) D_8017B850) | 0x40000000;
  arg1->unk8->unk30->unk48 = 0;
  arg1->unk8->unk30->unk49 = 0xFF;
  arg1->unk8->unk30->unk4A = 0;
  arg1->unk8->unk30->unk4B = 0x30;
  arg1->unk8->unk30->unk4 = fs0;
  arg1->unk8->unk30->unk8 = 25.0f;
  arg1->unk8->unk30->unkC = D_80249AD0;
  func_8012C89C(arg0, 2, 0x80, 5);
  func_800058DC(arg0, func_80241948);
}
