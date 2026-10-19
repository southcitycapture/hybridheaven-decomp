#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file062/8038CFC0/func_8038CFC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file062/8038CFC0/func_8038CFFC.s")

extern u8 D_801BC3D8[];

extern void func_80229404(void *);
extern void func_80229CE0(void *, void *, s32);
extern s32 func_8022B640();
extern f64 D_8038DB80;

s32 func_8038D5C4(u8 *arg0, u8 *arg1, u8 *arg2) {
    u32 v = *(u32 *)(arg2 + 0x30);
    if ((((v << 11) >> 30) != 0) || (((v << 3) >> 28) == 2)) {
        func_80229404(arg1);
        *(s16 *)(arg0 + 0x9A) |= 8;
    } else if ((*(u32 *)(arg1 + 0x38) >> 31) != 0) {
        arg1[0x2D8] = 2;
        *(s16 *)(arg0 + 0x9A) |= 2;
        func_80229CE0(arg0, arg1, 1);
    } else if ((*(f32 *)(D_801BC3D8 + 0x3A8) > 25.0f) && (((f64)*(s16 *)arg2 * D_8038DB80) < (f64)*(s16 *)(arg2 + 2))) {
        arg1[0x2D8] = 0x13;
        arg1[0x2D9] = 2;
    } else {
        arg1[0x2D8] = 1;
        func_80229CE0(arg0, arg1, func_8022B640(2) & 0xFF);
    }
    arg0[0xA1] = arg1[0x2D8];
    arg0[0xA2] = arg1[0x2D9];
}


struct func_8038D6FC_Struct {
    u8 pad0[0xC];
    s32 unkC;
};

extern void func_800058DC(void *, void *);
extern void func_80229500(void *, void *, void *);
extern s32 D_801BBCCC;
extern u8 D_801BC03C[];
extern u8 func_8038D784[];

void func_8038D6FC(struct func_8038D6FC_Struct *arg0, void *arg1) {
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
    func_8038D5C4(arg0, var_a1, var_a2);
    func_800058DC(arg0, func_8038D784);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file062/8038CFC0/func_8038D784.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file062/8038CFC0/func_8038DA40.s")

