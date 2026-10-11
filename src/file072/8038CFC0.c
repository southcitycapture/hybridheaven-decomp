#include "common.h"


extern s32 func_800058DC(s32, void *);
extern s32 func_80229500();
extern void func_8038CFF4();

void func_8038CFC0(s32 arg0, s32 arg1) {
    func_80229500();
    func_800058DC(arg0, &func_8038CFF4);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file072/8038CFC0/func_8038CFF4.s")


extern void func_80229404(void *);
extern void func_80229CE0(void *, void *, s32);
extern s32 func_8022B640(s32);

void func_8038D670(u8 *arg0, u8 *arg1, u8 *arg2) {
    if (((*(u32 *) (arg2 + 0x30)) << 11) >> 30 != 0) {
        func_80229404(arg1);
        *(s16 *) (arg0 + 0x9A) = *(s16 *) (arg0 + 0x9A) | 8;
    } else if ((*(u32 *) (arg1 + 0x38)) >> 31 != 0) {
        arg1[0x2D8] = 2;
        *(s16 *) (arg0 + 0x9A) = 2;
        func_80229CE0(arg0, arg1, func_8022B640(2) & 0xFF);
    } else if (func_8022B640(2) == 0) {
        arg1[0x2D8] = 0;
        func_80229CE0(arg0, arg1, 1);
    } else {
        arg1[0x2D8] = 1;
        func_80229CE0(arg0, arg1, 0);
    }
    arg0[0xA1] = arg1[0x2D8];
    arg0[0xA2] = arg1[0x2D9];
}


struct func_8038D754_Struct {
    u8 pad0[0xC];
    s32 unkC;
};

extern s32 D_801BBCCC;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern u8 func_8038D7DC[];

void func_8038D754(struct func_8038D754_Struct *arg0, void *arg1) {
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
    func_8038D670(arg0, var_a1, var_a2);
    func_800058DC(arg0, func_8038D7DC);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file072/8038CFC0/func_8038D7DC.s")


struct func_8038D9F0_Arg0 {
    u8 pad[0xA5];
    u8 unkA5;
};

struct func_8038D9F0_Arg1 {
    u8 pad[6];
    s16 unk6;
};

void func_8022A834();

void func_8038D9F0(struct func_8038D9F0_Arg0 *arg0, struct func_8038D9F0_Arg1 *arg1) {
    if (arg1->unk6 >= 0x64) {
        arg0->unkA5 = 1;
        return;
    }
    func_8022A834();
}

