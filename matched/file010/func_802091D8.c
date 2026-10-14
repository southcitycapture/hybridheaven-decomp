#include "context.h"

struct func_802091D8_Local {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

struct func_802091D8_Inner {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u16 unk10;
    u16 unk12;
    u16 unk14;
    u8 pad16[0x18 - 0x16];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad28[8];
    s32 unk30;
    u8 pad34[0x18];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
};

struct func_802091D8_Outer {
    u8 pad0[0x30];
    struct func_802091D8_Inner *unk30;
};

struct func_802091D8_Arg0 {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x3C - 0x30];
    u16 unk3C;
    u8 pad3E[0x74 - 0x3E];
    s32 unk74;
    f32 unk78;
    f32 unk7C;
    f32 unk80;
    u16 unk84;
    u16 unk86;
    u16 unk88;
    u8 pad8A[0x94 - 0x8A];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    u8 padA0[2];
    u16 unkA2;
    u8 padA4[0xA8 - 0xA4];
    s32 unkA8;
    u8 padAC[0xB0 - 0xAC];
    u8 unkB0;
};

extern s32 func_8012C97C(s32, s32);
extern f32 D_8021A87C;

void func_802091D8(struct func_802091D8_Arg0 *arg0, struct func_802091D8_Outer **arg1) {
    struct func_802070F4_Local sp28;
    s32 temp_v1;
    f32 temp_f0;

    sp28 = D_80164F40;
    sp28.unk4 = 0x80000900;
    func_80005E44(arg0, &sp28);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 0xE6, 0);
    temp_f0 = D_8021A87C;
    (*arg1)->unk30->unk24 = (s32) ((*arg1)->unk30->unk24 | 0x400);
    (*arg1)->unk30->unk30 = (s32) ((s32) D_8017AF90 | 0x40000000);
    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk8 = arg0->unk98;
    (*arg1)->unk30->unkC = arg0->unk9C;
    (*arg1)->unk30->unk10 = 0;
    (*arg1)->unk30->unk12 = arg0->unkA2;
    (*arg1)->unk30->unk14 = 0;
    (*arg1)->unk30->unk18 = temp_f0;
    (*arg1)->unk30->unk1C = temp_f0;
    (*arg1)->unk30->unk20 = temp_f0;
    (*arg1)->unk30->unk4C = D_801BBBF0[0xF32];
    (*arg1)->unk30->unk4D = D_801BBBF0[0xF33];
    (*arg1)->unk30->unk4E = D_801BBBF0[0xF34];
    (*arg1)->unk30->unk4F = D_801BBBF0[0xF35];
    arg0->unk2C = (s32) (arg0->unk2C | 0x800);
    arg0->unk74 = func_8012C97C(0xE6, 1);
    temp_v1 = arg0->unkA8;
    arg0->unk84 = 0;
    arg0->unk88 = 0;
    arg0->unk78 = arg0->unk94;
    arg0->unk7C = arg0->unk98;
    arg0->unk80 = arg0->unk9C;
    arg0->unk86 = arg0->unkA2;
    if (temp_v1 != 0) {
        arg0->unkB0 = temp_v1;
    }
    arg0->unk3C = 0;
}
