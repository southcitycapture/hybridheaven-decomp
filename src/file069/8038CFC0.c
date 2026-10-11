#include "common.h"


extern s32 func_800058DC(s32, void *);
extern s32 func_80229500();
extern void func_8038CFF4();

void func_8038CFC0(s32 arg0, s32 arg1) {
    func_80229500();
    func_800058DC(arg0, &func_8038CFF4);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file069/8038CFC0/func_8038CFF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file069/8038CFC0/func_8038D59C.s")


struct func_8038D6E8_Struct {
    u8 pad0[0xC];
    s32 unkC;
};

extern void func_8038D59C(void *, void *, void *);
extern s32 D_801BBCCC;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern u8 func_8038D770[];

void func_8038D6E8(struct func_8038D6E8_Struct *arg0, void *arg1) {
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
    func_8038D59C(arg0, var_a1, var_a2);
    func_800058DC(arg0, func_8038D770);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file069/8038CFC0/func_8038D770.s")



void func_8038D9D8(u8 *arg0, s16 *arg1) {
    if (arg1[3] >= 0x64 && 13.0 < (f64) *(f32 *) &D_801BC3D8[0x3A8]) {
        arg0[0xA5] = 2;
        return;
    }
    arg0[0xA5] = 0;
}

