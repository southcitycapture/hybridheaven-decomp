#include "common.h"
extern void func_800058DC(s32 arg0, void (*arg1)(void));
extern s32 func_80005E44(s32, void *);
void func_80006214(s32 arg0);
extern void func_8012CF8C(void *, u8 *, s32, s32);
typedef struct func_801CA274_StructD {
    u8 pad[0x30];
    f32 unk30, unk34, unk38, unk3C, unk40, unk44;
} func_801CA274_StructD;
typedef struct func_801CA274_StructE {
    u8 pad[0x2C];
    func_801CA274_StructD *unk2C;
} func_801CA274_StructE;


typedef struct func_801CA9DC_StructB {
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
} func_801CA9DC_StructB;
typedef struct func_801CA9DC_StructA {
    u8 pad[0x30];
    func_801CA9DC_StructB *unk30;
} func_801CA9DC_StructA;
typedef struct func_801CA9DC_Struct {
    func_801CA9DC_StructA *unk0;
} func_801CA9DC_Struct;
typedef struct func_801CA9DC_StructP {
    u8 pad[0x90];
    f32 unk90, unk94, unk98, unk9C, unkA0, unkA4, unkA8;
} func_801CA9DC_StructP;
typedef struct func_801CA9DC_StructDisplacement {
    f32 y;
    f32 z;
    f32 x;
} func_801CA9DC_StructDisplacement;
extern s32 func_8001EF38(f32, f32);
extern f32 func_8002FC20(f32);
extern func_801CA274_StructE *D_801BBCD8;
extern u8 D_801D9B60[];
extern u8 D_801DA9B0[];
extern void func_801CAC78();

void func_801CA9DC(func_801CA9DC_StructP *arg0, func_801CA9DC_Struct *arg1)
{
  s16 yaw;
  func_801CA9DC_StructDisplacement displacement;
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
  displacement.x = D_801BBCD8->unk2C->unk3C - D_801BBCD8->unk2C->unk30;
  displacement.z = D_801BBCD8->unk2C->unk44 - D_801BBCD8->unk2C->unk38;
  yaw = func_8001EF38(displacement.x, displacement.z);
  *((s16 *) (((u8 *) arg1->unk0->unk30) + 0x12)) = (yaw + 0x1000) & 0x1FFF;
  *((s16 *) (((u8 *) arg1->unk0->unk30) + 0x10)) = func_8001EF38((displacement.y = D_801BBCD8->unk2C->unk40 - D_801BBCD8->unk2C->unk34), func_8002FC20((displacement.x * displacement.x) + (displacement.z * displacement.z))) & 0x1FFF;
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
