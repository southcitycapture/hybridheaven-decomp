#include "common.h"
extern u8 D_80175C58[];
extern u8 D_801BBBF0[];
extern void func_80005700();
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s32 func_8012C6B4(s32);
extern s32 func_80133A24(s32);


struct func_803841EC_StructIn {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad1[0xC];
    u32 unk30;
    u8 pad2[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
};
struct func_803841EC_StructOut {
    u8 pad0[0x30];
    struct func_803841EC_StructIn *unk30;
};
struct func_803841EC_StructA {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad1[0x56];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    u8 pad2[0x6];
    u16 unkA6;
    u8 unkA8;
};
extern void D_80380F94(f32, f32, f32, f32, f32, f32, s32);
extern f32 D_80389BD0;
extern f64 D_80389BD8;
extern f64 D_80389BE0;

void func_803841EC(struct func_803841EC_StructA *arg0, struct func_803841EC_StructOut **arg1) {
    f32 sp3C;
    s32 pad[2];
    f32 sp30;

    (*arg1)->unk30->unk48 = D_801BBBF0[0x204];
    (*arg1)->unk30->unk49 = D_801BBBF0[0x205];
    (*arg1)->unk30->unk4A = D_801BBBF0[0x206];
    (*arg1)->unk30->unk4C = D_801BBBF0[0x208];
    (*arg1)->unk30->unk4D = D_801BBBF0[0x209];
    (*arg1)->unk30->unk4E = D_801BBBF0[0x20A];
    if (!(arg0->unkA6++ & 0xF)) {
        sp3C = func_8012C6B4(0x2000);
        sp30 = func_8001EAD0((s16)sp3C);
        D_80380F94((f32)(2.0 * sp30 + arg0->unk94), arg0->unk98,
                   (f32)(2.0 * func_8001EB64((s16)sp3C) + arg0->unk9C), 0.0f, 0.3f, 0.0f, 5);
    }
    if (func_80133A24(0x131) == 0) {
        (*arg1)->unk30->unk4B += 8;
        if ((*arg1)->unk30->unk4B >= 0xAD) {
            (*arg1)->unk30->unk4B = 0xB4;
        }
    }
    switch (arg0->unkA8) {
    case 0:
        (*arg1)->unk30->unk18 = (*arg1)->unk30->unk18 + 0.008;
        (*arg1)->unk30->unk1C = (*arg1)->unk30->unk1C + 0.008;
        (*arg1)->unk30->unk20 = (*arg1)->unk30->unk20 + 0.008;
        if (arg0->unk3C-- == 0) {
            arg0->unkA8 = 1;
        }
        break;
    case 1:
        (*arg1)->unk30->unk18 = (*arg1)->unk30->unk18 - 0.004;
        (*arg1)->unk30->unk1C = (*arg1)->unk30->unk1C - 0.004;
        (*arg1)->unk30->unk20 = (*arg1)->unk30->unk20 - 0.004;
        if (arg0->unk3C++ >= 4) {
            arg0->unkA8 = 2;
            (*arg1)->unk30->unk30 = (u32)D_80175C58 | 0x40000000;
        }
        break;
    case 2:
        if (func_80133A24(0x131) != 0) {
            (*arg1)->unk30->unk4B -= 2;
            if ((*arg1)->unk30->unk4B < 2) {
                func_80005700(arg0);
            }
        }
        break;
    }
}
