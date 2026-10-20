#include "context.h"

typedef struct func_801C98B0_Inner {
    s16 unk0;
    u8 pad2[2];
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
    s32 unk24;
    s32 unk28;
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
} func_801C98B0_Inner;

typedef struct func_801C98B0_Outer {
    u8 pad[0x30];
    func_801C98B0_Inner *unk30;
} func_801C98B0_Outer;

typedef struct func_801C98B0_Arg {
    u8 pad[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    f32 unkA0;
    f32 unkA4;
    f32 unkA8;
    f32 unkAC;
} func_801C98B0_Arg;

extern void func_8012CF8C(void *, u8 *, s32, s32);
extern u8 D_801DA7B8[];
extern u8 D_801D9908[];
extern f32 D_801DD2DC;
extern void func_801C9ACC();

void func_801C98B0(func_801C98B0_Arg *arg0, func_801C98B0_Outer **arg1) {
    func_80005E44((s32)arg0, D_801DA7B8);
    func_80006214((s32)arg0);
    (*arg1)->unk30->unk30 = 0;
    (*arg1)->unk30->unk28 = (s32)D_801D9908;
    (*arg1)->unk30->unk0 = 0;
    (*arg1)->unk30->unk2C = 0;
    func_8012CF8C(arg0, (u8 *)(*arg1)->unk30 + 0x40, 0x2DD, 0);
    (*arg1)->unk30->unk4 = arg0->unk90;
    (*arg1)->unk30->unk8 = arg0->unk94;
    (*arg1)->unk30->unkC = arg0->unk98;
    (*arg1)->unk30->unk10 = (s32)((arg0->unk9C * 2048.0f) / 90.0f);
    (*arg1)->unk30->unk12 = (s32)((arg0->unkA0 * 2048.0f) / 90.0f);
    (*arg1)->unk30->unk14 = (s32)((arg0->unkA4 * 2048.0f) / 90.0f);
    (*arg1)->unk30->unk18 = arg0->unkA8;
    (*arg1)->unk30->unk1C = arg0->unkAC;
    (*arg1)->unk30->unk20 = 1.0f;
    (*arg1)->unk30->unk24 |= 0x300;
    (*arg1)->unk30->unk48 = 0xFF;
    (*arg1)->unk30->unk49 = 0xFF;
    (*arg1)->unk30->unk4A = 0x78;
    (*arg1)->unk30->unk4B = 0xFF;
    (*arg1)->unk30->unk4C = 0xF4;
    (*arg1)->unk30->unk4D = 0;
    (*arg1)->unk30->unk4E = 0;
    (*arg1)->unk30->unk4F = 0xFF;
    arg0->unk90 = D_801DD2DC;
    arg0->unk94 = -0.5f;
    func_800058DC((s32)arg0, func_801C9ACC);
}
