#include "common.h"

extern void func_800058DC(void *, void *);
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_8012C89C(void *, s32, s32, s32);
typedef struct func_801C46D0_Struct {
    u8 pad0[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    f32 unkA0;
    f32 unkA4;
} func_801C46D0_Struct;
typedef struct func_801C46D0_StructB {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    s16 unk14;
    u8 pad16[2];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
} func_801C46D0_StructB;
typedef struct func_801C46D0_StructA {
    u8 pad0[0x30];
    func_801C46D0_StructB *unk30;
} func_801C46D0_StructA;
typedef struct func_801C2A1C_Struct3 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad28[8];
    s32 unk30;
    u8 pad34[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
} func_801C2A1C_Struct3;
typedef struct func_801C2A1C_Struct2 {
    u8 pad0[0x30];
    func_801C2A1C_Struct3 *unk30;
} func_801C2A1C_Struct2;
typedef struct func_801C4644_Struct {
    u8 pad0[0x90];
    f32 f90;
    f32 f94;
    f32 f98;
    f32 f9C;
    f32 fA0;
    f32 fA4;
    u16 uA8;
    u16 uAA;
    u16 uAC;
} func_801C4644_Struct;
extern void func_801C480C(func_801C4644_Struct *arg0, func_801C2A1C_Struct2 **arg1);
extern u8 func_8038D830[];
void func_801C46D0(func_801C46D0_Struct *arg0, func_801C46D0_StructA **arg1)
{
  f32 k;
  func_80005E44(arg0, func_8038D830 + 0x5C);
  func_80006214(arg0);
  func_8012C89C(arg0, 0, 0x2D9, 8);
  k = 0.100000001f;
  (*arg1)->unk30->unk4 = arg0->unk90;
  (*arg1)->unk30->unk8 = arg0->unk94;
  (*arg1)->unk30->unkC = arg0->unk98;
  (*arg1)->unk30->unk10 = (s32) ((arg0->unk9C * 2048.0f) / 90.0f);
  (*arg1)->unk30->unk12 = (s32) ((arg0->unkA0 * 2048.0f) / 90.0f);
  (*arg1)->unk30->unk14 = (s32) ((arg0->unkA4 * 2048.0f) / 90.0f);
  (*arg1)->unk30->unk18 = k;

  (*arg1)->unk30->unk1C = k;
  (*arg1)->unk30->unk20 = k;
  func_800058DC(arg0, func_801C480C);
}
