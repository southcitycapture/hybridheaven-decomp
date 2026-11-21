#include "common.h"
typedef struct func_801CA274_StructD {
    u8 pad[0x30];
    f32 unk30, unk34, unk38, unk3C, unk40, unk44;
} func_801CA274_StructD;
typedef struct func_801CA274_StructE {
    u8 pad[0x2C];
    func_801CA274_StructD *unk2C;
} func_801CA274_StructE;
extern struct func_801CA274_StructE *D_801BBCD8;
extern void func_800058DC(s32 arg0, void (*arg1)(void));
extern s32 func_80005E44(s32, void *);
void func_80006214(s32 arg0);
extern s32 func_8001EF38(f32, f32);
extern f32 func_8002FC20(f32);
extern void func_8012C89C(void *, s32, s32, s32);
typedef struct func_801C7D0C_Struct {
    u8 pad[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    f32 unkA0;
    f32 unkA4;
    f32 unkA8;
    f32 unkAC;
    u16 unkB0;
    u16 unkB2;
} func_801C7D0C_Struct;
typedef struct func_801CA628_Inner {
    s16 unk0;
    u8 pad2[2];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    void *unk28;
    s16 unk2C;
    u8 pad2E[2];
    s32 unk30;
    u8 pad34[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_801CA628_Inner;
typedef struct func_801CA628_Outer {
    u8 pad[0x30];
    func_801CA628_Inner *unk30;
} func_801CA628_Outer;
void func_801CB048(func_801C7D0C_Struct *arg0, func_801CA628_Outer **arg1);


extern u8 D_801D9F00[];
extern u8 D_801DA9E0[];
extern f32 D_801DD2F8;

void func_801CAE5C(func_801C7D0C_Struct *arg0, func_801CA628_Outer **arg1)
{
  f32 k;
  f32 dx;
  f32 dz;
  func_80005E44((s32) arg0, D_801DA9E0);
  func_80006214((s32) arg0);
  func_8012C89C(arg0, 0, 0x373, 1);
  k = D_801DD2F8;
  (*arg1)->unk30->unk30 = ((s32) D_801D9F00) | 0x40000000;
  (*arg1)->unk30->unk4 = arg0->unk90;
  (*arg1)->unk30->unk8 = arg0->unkA0;
  (*arg1)->unk30->unkC = arg0->unk94;
  (*arg1)->unk30->unk18 = k;
  (*arg1)->unk30->unk1C = k;
  (*arg1)->unk30->unk20 = k;
  (*arg1)->unk30->unk24 |= 0x300;
  (*arg1)->unk30->unk48 = 0xFF;
  (*arg1)->unk30->unk49 = 0xFF;
  (*arg1)->unk30->unk4A = 0x64;
  (*arg1)->unk30->unk4B = 0x7F;
  (*arg1)->unk30->unk4C = 0xFF;
  (*arg1)->unk30->unk4D = 0x46;
  (*arg1)->unk30->unk4E = 0;
  (*arg1)->unk30->unk4F = 0xFF;
  dx = D_801BBCD8->unk2C->unk3C - D_801BBCD8->unk2C->unk30;
  dz = D_801BBCD8->unk2C->unk44 - D_801BBCD8->unk2C->unk38;
  (*arg1)->unk30->unk12 = (((((((((((((func_8001EF38(dx, dz) & 0xFFFFu) & 0xFFFFu) & 0xFFFFu) & 0xFFFFu) & 0xFFFFu) & 0xFFFFu) & 0xFFFFu) & 0xFFFFu) & 0xFFFFu) & 0xFFFFu) & 0xFFFFu) & 0xFFFFu) + 0x1000) & 0x1FFF;
  (*arg1)->unk30->unk10 = func_8001EF38(D_801BBCD8->unk2C->unk40 - D_801BBCD8->unk2C->unk34, func_8002FC20((dx * dx) + (dz * dz))) & 0x1FFF;
  func_800058DC((s32) arg0, (void (*)(void)) func_801CB048);
}
