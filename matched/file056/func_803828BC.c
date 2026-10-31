#include "common.h"
extern u8 D_80164F40[];

struct func_803828BC_StructV { s32 a, b, c, d; };
struct func_803828BC_StructIn {
    u8 pad0[0x4]; f32 unk4; f32 unk8; f32 unkC; u8 pad1[0x2]; s16 unk12; s16 unk14;
    f32 scale[3]; s32 unk24; u8 pad2[0x8]; s32 unk30; u8 pad3[0x14];
    u8 unk48; u8 unk49; u8 unk4A; u8 unk4B; u8 unk4C; u8 unk4D; u8 unk4E;
};
struct func_803828BC_StructOut { u8 pad0[0x30]; struct func_803828BC_StructIn *unk30; };
struct func_803828BC_StructA { u8 pad0[0x94]; f32 unk94; f32 unk98; f32 unk9C; };
extern void func_80005E44();
extern void func_80006214();
extern void func_8012C89C();
extern void func_8012D918();
extern u8 D_80388E98[];
extern f32 D_80389B2C;
extern f32 D_80389B30;

void func_803828BC(struct func_803828BC_StructA *arg0, struct func_803828BC_StructOut **arg1)
{
  struct func_803828BC_StructV sp30;
  s32 slot[1];
  sp30 = *(struct func_803828BC_StructV *)D_80164F40;
  sp30.b = 0x80000300;
  func_80005E44(arg0, &sp30);
  func_80005E44(arg0, &sp30);
  func_80006214(arg0);
  func_8012C89C(arg0, 0, 3, 2);
  func_8012D918(arg0, 1, 0, 0, 0);
  arg1[0]->unk30->unk24 = 0x300;
  arg1[0]->unk30->unk30 = ((s32) D_80388E98) | 0x40000000;
  arg1[0]->unk30->unk4 = arg0->unk94;
  arg1[0]->unk30->unk8 = arg0->unk98;
  arg1[0]->unk30->unkC = arg0->unk9C;
  arg1[0]->unk30->unk12 = 0x800;
  arg1[0]->unk30->scale[0] = 0.15;
  arg1[0]->unk30->scale[1] = 0.15;
  arg1[0]->unk30->scale[2] = 0.15;
  ((struct func_803828BC_StructOut **)(void *)arg1)[0]->unk30->unk48 = 0xC8;
  ((struct func_803828BC_StructOut **)(void *)arg1)[0]->unk30->unk49 = 0xC8;
  ((struct func_803828BC_StructOut **)(void *)arg1)[0]->unk30->unk4A = 0xFF;
  ((struct func_803828BC_StructOut **)(void *)arg1)[0]->unk30->unk4B = 0xDC;
  arg1[0]->unk30->unk4C = 0;
  arg1[0]->unk30->unk4D = 0x64;
  ((struct func_803828BC_StructOut **)(void *)arg1)[0]->unk30->unk4E = 0xFF;
  slot[0] = ((s32) D_80388E98) | 0x40000000;
  func_8012C89C(arg0, 1, 0x4B5, 0);
  func_8012D918(arg0, 0x4B5, 1, 1, 0);
  arg1[1]->unk30->unk24 = 0x300;
  ((struct func_803828BC_StructOut **)(void *)arg1)[1]->unk30->unk30 = slot[0];
  arg1[1]->unk30->unk4 = arg0->unk94;
  arg1[1]->unk30->unk8 = arg0->unk98;
  arg1[1]->unk30->unkC = arg0->unk9C;
  arg1[1]->unk30->unk14 = 0x1800;
  ((struct func_803828BC_StructOut **)(void *)arg1)[1]->unk30->scale[0] = 0.005;
  arg1[1]->unk30->scale[1] = 0.005;
  arg1[1]->unk30->scale[2] = 0.005;
  arg1[1]->unk30->unk48 = 0xC8;
  arg1[1]->unk30->unk49 = 0xC8;
  ((struct func_803828BC_StructOut **)(void *)arg1)[1]->unk30->unk4A = 0xFF;
  arg1[1]->unk30->unk4B = 0xDC;
  ((struct func_803828BC_StructOut **)(void *)arg1)[1]->unk30->unk4C = 0;
  ((struct func_803828BC_StructOut **)(void *)arg1)[1]->unk30->unk4D = 0x64;
  ((struct func_803828BC_StructOut **)(void *)arg1)[1]->unk30->unk4E = 0xFF;
}
