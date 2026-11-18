#include "common.h"
struct func_802070F4_Local {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};
extern struct func_802070F4_Local D_80164F40;
extern u8 D_8017AF90[];
extern u8 D_80217B60[];
extern void func_80005E44(void *, void *);
extern void func_8012C89C(void *, s32, s32, s32);
extern s32 func_8012C97C(s32, s32);


struct func_80207FF0_StructInner {
    u8 pad0[0x10];
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
    u8 pad34[0x48 - 0x34];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
};

struct func_80207FF0_StructOuter {
    u8 pad0[0x30];
    struct func_80207FF0_StructInner *unk30;
};

struct func_80207FF0_StructArg1 {
    struct func_80207FF0_StructOuter *o[4];
};

struct func_80207FF0_StructArg0 {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x3C - 0x30];
    s16 unk3C;
    u8 pad3E[0x74 - 0x3E];
    s32 unk74;
    u8 pad78[0x92 - 0x78];
    s16 unk92;
    u8 pad94[0xA0 - 0x94];
    u16 unkA0;
    u16 unkA2;
    u16 unkA4;
    u8 padA6[0xAC - 0xA6];
    u8 unkAC;
};

extern f32 D_8021A840;
extern f32 D_8021A848;
extern u8 B_801BBBF0[];
extern s32 D_80006214(void *);

void func_80207FF0(struct func_80207FF0_StructArg0 *arg0, struct func_80207FF0_StructArg1 *arg1) {
    struct func_802070F4_Local local;

    local = D_80164F40;
    local.unk4 = 0x80000900;
    func_80005E44(arg0, &local);
    if (!(arg0->unkAC & 0x10)) {
        local.unk4 = 0x80000600;
        func_80005E44(arg0, &local);
    }
    D_80006214(arg0);
    arg1->o[0]->unk30->unk24 = 0x400 | arg1->o[0]->unk30->unk24;
    arg1->o[0]->unk30->unk30 = (s32)D_8017AF90 | 0x40000000;
    arg1->o[0]->unk30->unk10 = arg0->unkA0;
    arg1->o[0]->unk30->unk12 = arg0->unkA2;
    arg1->o[0]->unk30->unk14 = arg0->unkA4;
    arg1->o[0]->unk30->unk18 = 0.01f;
    arg1->o[0]->unk30->unk1C = 0.01f;
    arg1->o[0]->unk30->unk20 = 0.01f;
    arg1->o[0]->unk30->unk4C = B_801BBBF0[0xF32];
    arg1->o[0]->unk30->unk4D = B_801BBBF0[0xF33];
    arg1->o[0]->unk30->unk4E = B_801BBBF0[0xF34];
    arg1->o[0]->unk30->unk4F = B_801BBBF0[0xF35];
    if (!(arg0->unkAC & 0x10)) {
        func_8012C89C(arg0, 0, 0xDE, 0);
        func_8012C89C(arg0, 1, 0xDE, 1);
        arg1->o[1]->unk30->unk24 |= 0x100;
        arg1->o[1]->unk30->unk30 = (s32)D_80217B60 | 0x40000000;
        arg1->o[1]->unk30->unk10 = arg0->unkA0;
        arg1->o[1]->unk30->unk12 = arg0->unkA2;
        arg1->o[1]->unk30->unk14 = arg0->unkA4;
        arg1->o[1]->unk30->unk18 = 0.01f;
        arg1->o[1]->unk30->unk1C = 0.01f;
        arg1->o[1]->unk30->unk20 = 0.01f;
        arg1->o[1]->unk30->unk48 = 0xFF;
        arg1->o[1]->unk30->unk49 = 0;
        arg1->o[1]->unk30->unk4A = 0;
        arg1->o[1]->unk30->unk4B = 0xFF;
        arg0->unk74 = func_8012C97C(0xDE, 2);
    } else {
        func_8012C89C(arg0, 0, 0xDB, 0);
        arg0->unk74 = func_8012C97C(0xDB, 1);
    }
    arg0->unk3C = 0;
    arg0->unk92 = 0;
    arg0->unk2C |= 0x800;
}
