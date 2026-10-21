#include "context.h"

struct func_802073EC_Struct_I {
    u8 pad0[0x18];
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
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
};
struct func_802073EC_Struct_O {
    u8 pad0[0x30];
    struct func_802073EC_Struct_I *unk30;
};
struct func_802073EC_Struct_A {
    u8 pad0[0x3C];
    s16 unk3C;
    u8 pad3E[0x91 - 0x3E];
    u8 unk91;
    s16 unk92;
    u8 pad94[0xA6 - 0x94];
    s16 unkA6;
    u8 padA8[0xAC - 0xA8];
    u8 unkAC;
};
extern u8 D_80217B60[];
extern f32 D_8021A818;
extern f32 D_8021A81C;

void func_802073EC(struct func_802073EC_Struct_A *arg0, struct func_802073EC_Struct_O **arg1) {
    struct func_802070F4_Local sp28;
    f32 k;
    f32 f;

    f = 0.0f;
    sp28 = D_80164F40;
    sp28.unk4 = 0x80000900;
    func_80005E44(arg0, &sp28);
    sp28.unk4 = 0x80000600;
    func_80005E44(arg0, &sp28);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 0xD7, 0);
    k = D_8021A818;
    arg1[0]->unk30->unk24 |= 0x400;
    arg1[0]->unk30->unk30 = (s32)D_8017AF90 | 0x40000000;
    arg1[0]->unk30->unk20 = k;
    f = arg1[0]->unk30->unk20;
    arg1[0]->unk30->unk1C = f;
    arg1[0]->unk30->unk18 = f;
    arg1[0]->unk30->unk4C = D_801BBBF0[0xF32];
    arg1[0]->unk30->unk4D = D_801BBBF0[0xF33];
    arg1[0]->unk30->unk4E = D_801BBBF0[0xF34];
    arg1[0]->unk30->unk4F = D_801BBBF0[0xF35];
    func_8012C89C(arg0, 1, 0xD7, 1);
    k = D_8021A81C;
    arg1[1]->unk30->unk24 |= 0x100;
    arg1[1]->unk30->unk30 = (s32)D_80217B60 | 0x40000000;
    arg1[1]->unk30->unk18 = k;
    arg1[1]->unk30->unk1C = k;
    arg1[1]->unk30->unk20 = k;
    arg1[1]->unk30->unk4B = 0xFF;
    if (arg0->unk91 == 0x11) {
        if (!(arg0->unkAC & 1)) {
            arg1[1]->unk30->unk48 = 0;
            arg1[1]->unk30->unk49 = 0xFF;
            arg1[1]->unk30->unk4A = 0;
        } else {
            arg1[1]->unk30->unk48 = 0xFF;
            arg1[1]->unk30->unk49 = 0xFF;
            arg1[1]->unk30->unk4A = 0;
        }
    } else {
        arg1[1]->unk30->unk48 = 0x80;
        arg1[1]->unk30->unk49 = 0x80;
        arg1[1]->unk30->unk4A = 0xFF;
    }
    arg0->unk3C = 0;
    arg0->unk92 = 0;
    arg0->unkA6 = 0;
}
