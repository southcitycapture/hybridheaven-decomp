#include "common.h"


extern s32 func_800058DC(s32, void *);
extern s32 func_80229500();
extern void func_8038CFF4();

void func_8038CFC0(s32 arg0, s32 arg1) {
    func_80229500();
    func_800058DC(arg0, &func_8038CFF4);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file085/8038CFC0/func_8038CFF4.s")


struct func_8038D744_Struct {
    u8 pad0[0x30];
    u32 unk30;
    u32 unk34;
    u32 unk38;
    u8 pad1[0x92 - 0x3C];
    u8 unk92;
    u8 unk93;
    u8 pad2[0x9A - 0x94];
    s16 unk9A;
    u8 pad3[0xA1 - 0x9C];
    u8 unkA1;
    u8 unkA2;
    u8 pad4[0x2D8 - 0xA3];
    u8 unk2D8;
    u8 unk2D9;
};

extern void func_80229404(void *);
extern void func_80229CE0(void *, void *, u8);
extern s32 func_8022B640(s32);

void func_8038D744(struct func_8038D744_Struct *arg0, struct func_8038D744_Struct *arg1, struct func_8038D744_Struct *arg2) {
    if (((arg2->unk30 << 0xB) >> 0x1E) != 0) {
        func_80229404(arg1);
        arg0->unk9A = arg0->unk9A | 8;
    } else if ((arg1->unk38 >> 0x1F) != 0) {
        arg1->unk2D8 = 2;
        arg0->unk9A = arg0->unk9A | 2;
        func_80229CE0(arg0, arg1, (u8) func_8022B640(2));
    } else {
        if (func_8022B640(2) == 0) {
            arg1->unk2D8 = 0;
        } else {
            arg1->unk2D8 = 1;
        }
        func_80229CE0(arg0, arg1, (u8) func_8022B640(2));
        arg0->unk93 = arg0->unk92;
        arg0->unk92 = 0;
    }
    arg0->unkA1 = arg1->unk2D8;
    arg0->unkA2 = arg1->unk2D9;
}


struct func_8038D830_Struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0x92 - 0x10];
    u8 unk92;
    u8 unk93;
};

extern s32 D_801BBCCC;
extern u8 D_801BC03C;
extern u8 D_801BC3D8;
extern void func_8038D8A8();

void func_8038D830(struct func_8038D830_Struct *arg0, s32 arg1) {
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
    func_8038D744(arg0, var_a1, var_a2);
    func_800058DC(arg0, (void *)func_8038D8A8);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file085/8038CFC0/func_8038D8A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file085/8038CFC0/func_8038DAAC.s")

