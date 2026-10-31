#include "common.h"
struct func_802070F4_Local {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};
extern struct func_802070F4_Local D_80164F40;
extern u8 D_8017AF90[];
extern u8 D_801BBBF0[];
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_8012C89C(void *, s32, s32, s32);
extern s32 func_8012C97C(s32, s32);


typedef struct func_80207B80_StructI {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u16 unk10;
    u16 unk12;
    u16 unk14;
    u8 pad16[2];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u32 unk24;
    u8 pad28[8];
    u32 unk30;
    u8 pad34[0x4C - 0x34];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_80207B80_StructI;
typedef struct {
    u8 pad0[0x30];
    func_80207B80_StructI *unk30;
} func_80207B80_StructM;
typedef struct {
    func_80207B80_StructM *unk0;
    func_80207B80_StructM *unk4;
} func_80207B80_StructO;
typedef struct {
    u8 pad0[0x2C];
    u32 unk2C;
    u8 pad30[0x3C - 0x30];
    u16 unk3C;
    u8 pad3E[0x74 - 0x3E];
    s32 unk74;
    u8 pad78[0x84 - 0x78];
    u16 unk84;
    u16 unk86;
    u16 unk88;
    u8 pad8A[0x92 - 0x8A];
    u16 unk92;
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    u8 padA0[2];
    u16 unkA2;
} func_80207B80_Struct;
extern f32 D_8021A834;
extern f32 D_8021A838;

void func_80207B80(func_80207B80_Struct *arg0, func_80207B80_StructO *arg1)
{
  struct func_802070F4_Local sp28;
  sp28 = D_80164F40;
  sp28.unk4 = 0x80000900;
  func_80005E44(arg0, &sp28);
  sp28.unk4 = 0x80000900;
  func_80005E44(arg0, &sp28);
  func_80006214(arg0);
  func_8012C89C(arg0, 0, 0xD8, 1);
 do { arg1->unk0->unk30->unk24 = (s32) arg1->unk0->unk30->unk24 | 0x400; arg1->unk0->unk30->unk30 = ((u32) D_8017AF90) | 0x40000000; arg1->unk0->unk30->unk4 = arg0->unk94; arg1->unk0->unk30->unk8 = arg0->unk98; arg1->unk0->unk30->unkC = arg0->unk9C; arg1->unk0->unk30->unk10 = 0; arg1->unk0->unk30->unk12 = arg0->unkA2; arg1->unk0->unk30->unk14 = 0; arg1->unk0->unk30->unk18 = 0.01f; arg1->unk0->unk30->unk1C = 0.01f; arg1->unk0->unk30->unk20 = 0.01f; arg1->unk0->unk30->unk4C = D_801BBBF0[0xF32]; arg1->unk0->unk30->unk4D = D_801BBBF0[0xF33]; arg1->unk0->unk30->unk4E = D_801BBBF0[0xF34]; arg1->unk0->unk30->unk4F = D_801BBBF0[0xF35]; func_8012C89C(arg0, 1, 0xD8, 0); arg1->unk4->unk30->unk24 |= 0x400; arg1->unk4->unk30->unk30 = ((u32) D_8017AF90) | 0x40000000; arg1->unk4->unk30->unk4 = arg0->unk94;
  arg1->unk4->unk30->unk8 = arg0->unk98 + 6.0f;
  arg1->unk4->unk30->unkC = arg0->unk9C;
  arg1->unk4->unk30->unk10 = 0;
  arg1->unk4->unk30->unk12 = arg0->unkA2;
  arg1->unk4->unk30->unk14 = 0;
  arg1->unk4->unk30->unk18 = 0.01f;
  do {} while (0);
  arg1->unk4->unk30->unk1C = 0.01f;
  arg1->unk4->unk30->unk20 = 0.01f;
  arg1->unk4->unk30->unk4C = D_801BBBF0[0xF32];
  arg1->unk4->unk30->unk4D = D_801BBBF0[0xF33];
  arg1->unk4->unk30->unk4E = D_801BBBF0[0xF34];
  arg1->unk4->unk30->unk4F = D_801BBBF0[0xF35];
 } while (0);
  arg0->unk2C |= 0x800;
  arg0->unk74 = func_8012C97C(0xD8, 2);
  arg0->unk84 = 0;
  arg0->unk88 = 0;
  arg0->unk3C = 0;
  arg0->unk92 = 0;
  arg0->unk86 = arg0->unkA2;
}
