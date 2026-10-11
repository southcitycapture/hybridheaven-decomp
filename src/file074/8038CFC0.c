#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file074/8038CFC0/func_8038CFC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file074/8038CFC0/func_8038D048.s")


extern void func_80229404(void *);
extern void func_80229CE0(void *, void *, s32);
extern s32 func_8022B640(s32);

void func_8038D864(u8 *arg0, u8 *arg1, u8 *arg2) {
    if (((*(u32 *)(arg2 + 0x30) << 11) >> 30) != 0) {
        func_80229404(arg1);
        *(s16 *)(arg0 + 0x9A) = 8;
    } else if ((*(u32 *)(arg1 + 0x38) >> 31) != 0) {
        arg1[0x2D8] = 2;
        func_80229CE0(arg0, arg1, func_8022B640(2) & 0xFF);
    } else if (func_8022B640(3) == 0) {
        arg1[0x2D8] = 0;
        func_80229CE0(arg0, arg1, 1);
        arg0[0x92] = 0;
    } else {
        arg1[0x2D8] = 1;
        func_80229CE0(arg0, arg1, 1);
        arg0[0x92] = 1;
    }
    arg0[0xA1] = arg1[0x2D8];
    arg0[0xA2] = arg1[0x2D9];
}


struct func_8038D948_Struct {
    u8 pad0[0xC];
    s32 unkC;
};

extern void func_800058DC(void *, void *);
extern void func_80229500(void *, void *, void *);
extern s32 D_801BBCCC;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern u8 func_8038D9D0[];

void func_8038D948(struct func_8038D948_Struct *arg0, void *arg1) {
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
    func_8038D864(arg0, var_a1, var_a2);
    func_800058DC(arg0, func_8038D9D0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file074/8038CFC0/func_8038D9D0.s")

void *func_8022A834(s32 arg0, struct func_8022A834_Struct *arg1);

void func_8038DBA0(s32 arg0, struct func_8022A834_Struct *arg1) {
    func_8022A834(arg0, arg1);
}

