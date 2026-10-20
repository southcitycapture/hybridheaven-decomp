#include "context.h"

typedef struct func_801CA9DC_C {
    s16 unk0;
    u8 pad2[0xE];
    s16 unk10;
    s16 unk12;
    u8 pad14[0x10];
    s32 unk24;
    s32 unk28;
    s16 unk2C;
    u8 pad2E[2];
    s32 unk30;
    u8 pad34[0x14];
} func_801CA9DC_C;
typedef struct func_801CA9DC_B {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[8];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad24[0x24];
    u8 unk48, unk49, unk4A, unk4B, unk4C, unk4D, unk4E, unk4F;
} func_801CA9DC_B;
typedef struct func_801CA9DC_A {
    u8 pad[0x30];
    func_801CA9DC_B *unk30;
} func_801CA9DC_A;
typedef struct func_801CA9DC_Struct {
    func_801CA9DC_A *unk0;
} func_801CA9DC_Struct;
typedef struct func_801CA9DC_P {
    u8 pad[0x90];
    f32 unk90, unk94, unk98, unk9C, unkA0, unkA4, unkA8;
} func_801CA9DC_P;
typedef struct func_801CA9DC_V {
    u8 pad[0x30];
    f32 unk30, unk34, unk38, unk3C, unk40, unk44;
} func_801CA9DC_V;
typedef struct func_801CA9DC_G {
    u8 pad[0x2C];
    func_801CA9DC_V *unk2C;
} func_801CA9DC_G;

extern s32 func_8001EF38(f32, f32);
extern f32 func_8002FC20(f32);
extern func_801CA274_StructE *D_801BBCD8;
extern u8 D_801D9B60[];
extern u8 D_801DA9B0[];
extern void func_801CAC78();

void func_801CA9DC(func_801CA9DC_P *arg0, func_801CA9DC_Struct *arg1)
{
  u8 pad[4];
  f32 sp28;
  f32 sp24;
  func_80005E44((s32) arg0, D_801DA9B0);
  func_80006214((s32) arg0);
  *((s32 *) (((u8 *) arg1->unk0->unk30) + 0x30)) = 0;
  *((s32 *) (((u8 *) arg1->unk0->unk30) + 0x28)) = (s32) D_801D9B60;
  *((s16 *) arg1->unk0->unk30) = 0;
  *((s16 *) (((u8 *) arg1->unk0->unk30) + 0x2C)) = 0;
  func_8012CF8C(arg0, ((u8 *) arg1->unk0->unk30) + 0x40, 0x471, 0);
  arg1->unk0->unk30->unk4 = arg0->unk90;
  arg1->unk0->unk30->unk8 = arg0->unk94;
  arg1->unk0->unk30->unkC = arg0->unk98;
  arg1->unk0->unk30->unk18 = arg0->unk9C;
  arg1->unk0->unk30->unk1C = arg0->unkA0;
  arg1->unk0->unk30->unk20 = arg0->unkA4;
  sp28 = D_801BBCD8->unk2C->unk3C - D_801BBCD8->unk2C->unk30;
  sp24 = D_801BBCD8->unk2C->unk44 - D_801BBCD8->unk2C->unk38;
  *((s16 *) (((u8 *) arg1->unk0->unk30) + 0x12)) = (((short) func_8001EF38(sp28, sp24)) + 0x1000) & 0x1FFF;
  if (0)
  {
  }
  *((s16 *) (((u8 *) arg1->unk0->unk30) + 0x10)) = func_8001EF38(D_801BBCD8->unk2C->unk40 - D_801BBCD8->unk2C->unk34, func_8002FC20((sp28 * sp28) + (sp24 * sp24))) & 0x1FFF;
  *((s32 *) (((u8 *) arg1->unk0->unk30) + 0x24)) |= 0x300;
  arg1->unk0->unk30->unk48 = 0xFF;
  arg1->unk0->unk30->unk49 = 0xFF;
  arg1->unk0->unk30->unk4A = 0xFF;
  arg1->unk0->unk30->unk4B = (u32) (arg0->unkA8 * 255.0f);
  arg1->unk0->unk30->unk4C = 0xFF;
  arg1->unk0->unk30->unk4D = 0xFF;
  arg1->unk0->unk30->unk4E = 0xFF;
  arg1->unk0->unk30->unk4F = 0xFF;
  func_800058DC((s32) arg0, (void (*)(void)) func_801CAC78);
}
