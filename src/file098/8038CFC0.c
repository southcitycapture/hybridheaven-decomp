#include "common.h"


extern s32 func_800058DC(s32, void *);
extern s32 func_80229500();
extern void func_8038CFF4();

void func_8038CFC0(s32 arg0, s32 arg1) {
    func_80229500();
    func_800058DC(arg0, &func_8038CFF4);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file098/8038CFC0/func_8038CFF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file098/8038CFC0/func_8038D800.s")


typedef struct func_8038D97C_Struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0x90];
    u8 unkA0;
} func_8038D97C_Struct;

extern s32 D_801BBCCC;
extern u8 D_801BC03C;
extern u8 D_801BC3D8;
extern void func_8038DA0C();
extern void func_8038D800(void *a, void *b, void *c);

void func_8038D97C(func_8038D97C_Struct *arg0, void *arg1) {
    void *var_a1;
    void *var_a2;

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
    func_80229500(arg0, var_a1, var_a2);
    arg0->unkA0 = 99;
    func_8038D800(arg0, var_a1, var_a2);
    func_800058DC(arg0, func_8038DA0C);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file098/8038CFC0/func_8038DA0C.s")


struct func_8038DC3C_Struct1 {
    u8 pad[6];
    s16 unk6;
};

struct func_8038DC3C_Struct2 {
    u8 pad[0xA5];
    u8 unkA5;
};

void func_8038DC3C(struct func_8038DC3C_Struct2 *arg0, struct func_8038DC3C_Struct1 *arg1) {
    if (arg1->unk6 >= 0x64) {
        arg0->unkA5 = 2;
        return;
    }
    arg0->unkA5 = 0;
}

