#include "common.h"


extern s32 func_800058DC(s32, void *);
extern s32 func_80229500();
extern void func_8038CFF4();

void func_8038CFC0(s32 arg0, s32 arg1) {
    func_80229500();
    func_800058DC(arg0, &func_8038CFF4);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file077/8038CFC0/func_8038CFF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file077/8038CFC0/func_8038D630.s")


struct func_8038D768_Struct {
    u8 pad0[0xC];
    s32 unkC;
};

extern void func_8038D630(void *, void *, void *);
extern s32 D_801BBCCC;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern u8 func_8038D7F0[];

void func_8038D768(struct func_8038D768_Struct *arg0, void *arg1) {
    void *var_a1;
    void *var_a2;

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
    func_80229500(arg0, var_a1, var_a2);
    func_8038D630(arg0, var_a1, var_a2);
    func_800058DC(arg0, func_8038D7F0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file077/8038CFC0/func_8038D7F0.s")

void *func_8022A834(s32 arg0, struct func_8022A834_Struct *arg1);

void func_8038DA6C(s32 arg0, struct func_8022A834_Struct *arg1) {
    func_8022A834(arg0, arg1);
}

