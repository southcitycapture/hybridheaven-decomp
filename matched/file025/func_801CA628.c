#include "context.h"

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
typedef struct func_801CA628_Cam {
    u8 pad[0x30];
    f32 unk30;
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
} func_801CA628_Cam;
typedef struct func_801CA628_Root {
    u8 pad[0x2C];
    func_801CA628_Cam *unk2C;
} func_801CA628_Root;
extern func_801CA274_StructE *D_801BBCD8;
extern u8 D_801D9908[];
extern u8 D_801DA950[];
extern u8 func_801CA8C4[];
extern s32 func_8001EF38(f32, f32);
extern f32 func_8002FC20(f32);

void func_801CA628(func_801C7D0C_Struct *arg0, func_801CA628_Outer **arg1) {
    func_801CA628_Cam *c;
    f32 sp28;
    f32 sp24;

    func_80005E44((s32)arg0, D_801DA950);
    func_80006214((s32)arg0);
    (*arg1)->unk30->unk30 = 0;
    (*arg1)->unk30->unk28 = D_801D9908;
    (*arg1)->unk30->unk0 = 0;
    (*arg1)->unk30->unk2C = 0;
    func_8012CF8C(arg0, (u8 *)(*arg1)->unk30 + 0x40, 0x2DD, 0);
    (*arg1)->unk30->unk4 = arg0->unk90;
    (*arg1)->unk30->unk8 = arg0->unk94;
    (*arg1)->unk30->unkC = arg0->unk98;
    (*arg1)->unk30->unk18 = arg0->unk9C;
    (*arg1)->unk30->unk1C = arg0->unkA0;
    (*arg1)->unk30->unk20 = arg0->unkA4;
    (*arg1)->unk30->unk24 |= 0x300;
    (*arg1)->unk30->unk48 = 0xFF;
    (*arg1)->unk30->unk49 = 0xFF;
    (*arg1)->unk30->unk4A = 0xFF;
    (*arg1)->unk30->unk4B = (u32)(arg0->unkA8 * 255.0f);
    (*arg1)->unk30->unk4C = 0xFF;
    (*arg1)->unk30->unk4D = 0xFF;
    (*arg1)->unk30->unk4E = 0xFF;
    (*arg1)->unk30->unk4F = 0xFF;
    c = D_801BBCD8->unk2C;
    sp28 = c->unk3C - c->unk30;
    sp24 = c->unk44 - c->unk38;
    (*arg1)->unk30->unk12 = (s16)(func_8001EF38(sp28, sp24) + 0x1000) & 0x1FFF;
    (*arg1)->unk30->unk10 = func_8001EF38(D_801BBCD8->unk2C->unk40 - D_801BBCD8->unk2C->unk34, func_8002FC20(sp28 * sp28 + sp24 * sp24)) & 0x1FFF;
    func_800058DC((s32)arg0, (void (*)(void))func_801CA8C4);
}
