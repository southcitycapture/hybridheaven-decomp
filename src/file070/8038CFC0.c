#include "common.h"


extern s32 func_800058DC(s32, void *);
extern s32 func_80229500();
extern void func_8038CFF4();

void func_8038CFC0(s32 arg0, s32 arg1) {
    func_80229500();
    func_800058DC(arg0, &func_8038CFF4);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file070/8038CFC0/func_8038CFF4.s")

extern u8 D_801BC3D8[];

struct func_8038D7E8_StructA {
    u8 pad0[0x9A];
    s16 unk9A;
    u8 pad1[0xA1 - 0x9C];
    u8 unkA1;
    u8 unkA2;
};

struct func_8038D7E8_StructB {
    u8 pad0[0x30];
    s32 unk30;
};

struct func_8038D7E8_StructC {
    u8 pad0[0x38];
    s32 unk38;
    u8 pad1[0xA6 - 0x3C];
    u8 unkA6;
    u8 pad2[0x2D8 - 0xA7];
    u8 unk2D8;
    u8 unk2D9;
};

extern void func_80229404();
extern void func_80229CE0();
extern s32 func_8022B640();

s32 func_8038D7E8(struct func_8038D7E8_StructA *arg0, struct func_8038D7E8_StructC *arg1, struct func_8038D7E8_StructB *arg2) {
    if (((u32) (arg2->unk30 << 0xB) >> 0x1E) != 0) {
        func_80229404(arg1);
        arg0->unk9A = arg0->unk9A | 8;
    } else if (((u32) arg1->unk38 >> 0x1F) != 0) {
        arg1->unk2D8 = 2;
        arg0->unk9A = arg0->unk9A | 2;
        func_80229CE0(arg0, arg1, func_8022B640(2) & 0xFF);
    } else if ((*(f32 *) ((u8 *) &D_801BC3D8 + 0x3A8) > 30.0f) && !(arg1->unkA6 & 0x10)) {
        arg1->unk2D8 = 0xB;
        arg1->unk2D9 = 0x20;
        arg0->unk9A = arg0->unk9A | 0x100;
    } else {
        if (func_8022B640(2) == 0) {
            arg1->unk2D8 = 0;
        } else {
            arg1->unk2D8 = 1;
        }
        func_80229CE0(arg0, arg1, func_8022B640(2) & 0xFF);
    }
    arg0->unkA1 = arg1->unk2D8;
    arg0->unkA2 = arg1->unk2D9;
}


struct func_8038D918_Struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0x92 - 0x10];
    u8 unk92;
    u8 unk93;
};

extern s32 D_801BBCCC;
extern u8 D_801BC03C;
extern void func_8038D990();

void func_8038D918(struct func_8038D918_Struct *arg0, s32 arg1) {
    u8 *var_a1;
    u8 *var_a2;

    if (D_801BBCCC == arg0->unkC) {
        var_a1 = &D_801BC03C;
    } else {
        var_a1 = &D_801BC3D8;
    }
    if (D_801BBCCC == arg0->unkC) {
        var_a2 = &D_801BC3D8;
    } else {
        var_a2 = &D_801BC03C;
    }
    arg0->unk92 = 0;
    arg0->unk93 = 0;
    func_8038D7E8(arg0, var_a1, var_a2);
    func_800058DC(arg0, (void *)func_8038D990);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file070/8038CFC0/func_8038D990.s")


extern void func_8022A824();
extern void func_8022A834();

void func_8038DC2C(s32 arg0, s16 *arg1) {
    if (arg1[3] >= 0x64) {
        func_8022A824(arg0);
        return;
    }
    func_8022A834(arg0);
}

