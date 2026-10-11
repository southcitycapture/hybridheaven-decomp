#include "common.h"


extern s32 func_800058DC(s32, void *);
extern s32 func_80229500();
extern void func_8038CFF4();

void func_8038CFC0(s32 arg0, s32 arg1) {
    func_80229500();
    func_800058DC(arg0, &func_8038CFF4);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file067/8038CFC0/func_8038CFF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file067/8038CFC0/func_8038D834.s")


struct func_8038D9D0_Struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0x92 - 0x10];
    u8 unk92;
    u8 unk93;
    u8 pad2[0x9A - 0x94];
    u16 unk9A;
    u8 pad3[0xA0 - 0x9C];
    u8 unkA0;
};

extern s32 D_801BBCCC;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern void func_8038DA54();

void func_8038D834();

void func_8038D9D0(struct func_8038D9D0_Struct *arg0, s32 arg1) {
    u8 *var_a1;
    u8 *var_a2;

    if (D_801BBCCC == arg0->unkC) {
        var_a1 = D_801BC03C;
    } else {
        var_a1 = D_801BC3D8;
    }
    if (D_801BBCCC == arg0->unkC) {
        var_a2 = D_801BC3D8;
    } else {
        var_a2 = D_801BC03C;
    }
    arg0->unk92 = 0;
    arg0->unk93 = 0;
    arg0->unk9A = 0;
    arg0->unkA0 = 1;
    func_8038D834(arg0, var_a1, var_a2);
    func_800058DC(arg0, func_8038DA54);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file067/8038CFC0/func_8038DA54.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file067/8038CFC0/func_8038DC20.s")

