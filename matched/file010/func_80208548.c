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
extern u8 D_80217B60[];
extern void func_80005E44(void *, void *);
extern void func_8012C89C(void *, s32, s32, s32);
extern s32 func_8012C97C(s32, s32);


struct func_80208548_StructInner {
    u8 pad0[0x10];
    u16 unk10, unk12, unk14;
    u8 pad16[2];
    f32 unk18, unk1C, unk20;
    s32 unk24;
    u8 pad28[8];
    s32 unk30;
    u8 pad34[0x14];
    u8 unk48, unk49, unk4A, unk4B, unk4C, unk4D, unk4E, unk4F;
};
struct func_80208548_StructOuter {
    u8 pad0[0x30];
    struct func_80208548_StructInner *unk30;
};
struct func_80208548_StructArg {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0xC];
    s16 unk3C;
    u8 pad3E[0x36];
    s32 unk74;
    u8 pad78[0x1A];
    s16 unk92;
    u8 pad94[0xC];
    u16 unkA0, unkA2, unkA4;
    u8 padA6[6];
    u8 unkAC;
};
extern s32 D_80006214(void *);

void func_80208548(struct func_80208548_StructArg *arg0, struct func_80208548_StructOuter **arg1) {
    struct func_802070F4_Local sp20 = D_80164F40;

    sp20.unk4 = 0x80000900;
    func_80005E44(arg0, &sp20);
    if (!(arg0->unkAC & 0x10)) {
        sp20.unk4 = 0x80000600;
        func_80005E44(arg0, &sp20);
    }
    D_80006214(arg0);
    arg1[0]->unk30->unk24 |= 0x400;
    arg1[0]->unk30->unk30 = (s32) D_8017AF90 | 0x40000000;
    arg1[0]->unk30->unk10 = arg0->unkA0;
    arg1[0]->unk30->unk12 = arg0->unkA2;
    arg1[0]->unk30->unk14 = arg0->unkA4;
    arg1[0]->unk30->unk18 = 0.01f;
    arg1[0]->unk30->unk1C = 0.01f;
    arg1[0]->unk30->unk20 = 0.01f;
    arg1[0]->unk30->unk4C = D_801BBBF0[0xF32];
    arg1[0]->unk30->unk4D = D_801BBBF0[0xF33];
    arg1[0]->unk30->unk4E = D_801BBBF0[0xF34];
    arg1[0]->unk30->unk4F = D_801BBBF0[0xF35];
    if (!(arg0->unkAC & 0x10)) {
        func_8012C89C(arg0, 0, 0xE0, 0);
        func_8012C89C(arg0, 1, 0xE0, 1);
        arg1[1]->unk30->unk24 |= 0x100;
        arg1[1]->unk30->unk30 = (s32) D_80217B60 | 0x40000000;
        arg1[1]->unk30->unk10 = arg0->unkA0;
        arg1[1]->unk30->unk12 = arg0->unkA2;
        arg1[1]->unk30->unk14 = arg0->unkA4;
        arg1[1]->unk30->unk18 = 0.01f;
        arg1[1]->unk30->unk1C = 0.01f;
        arg1[1]->unk30->unk20 = 0.01f;
        arg1[1]->unk30->unk48 = 0xFF;
        arg1[1]->unk30->unk49 = 0;
        arg1[1]->unk30->unk4A = 0;
        arg1[1]->unk30->unk4B = 0xFF;
        arg0->unk74 = func_8012C97C(0xE0, 2);
    } else {
        func_8012C89C(arg0, 0, 0xDD, 0);
        arg0->unk74 = func_8012C97C(0xDD, 1);
    }
    arg0->unk3C = 0;
    arg0->unk92 = 0;
    arg0->unk2C |= 0x800;
}
