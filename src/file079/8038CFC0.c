#include "common.h"


extern s32 func_800058DC(s32, void *);
extern s32 func_80229500();
extern void func_8038CFF4();

void func_8038CFC0(s32 arg0, s32 arg1) {
    func_80229500();
    func_800058DC(arg0, &func_8038CFF4);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file079/8038CFC0/func_8038CFF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file079/8038CFC0/func_8038D638.s")


struct func_8038D7B8_Struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0x92 - 0x10];
    u8 unk92;
    u8 unk93;
};

extern void func_8038D638(void *, void *, void *);
extern s32 D_801BBCCC;
extern u8 D_801BC03C;
extern u8 D_801BC3D8;
extern void func_8038D830(void);

void func_8038D7B8(struct func_8038D7B8_Struct *arg0, s32 arg1) {
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
    func_8038D638(arg0, var_a1, var_a2);
    func_800058DC(arg0, (void *)func_8038D830);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file079/8038CFC0/func_8038D830.s")

void *func_8022AAA8(s32 arg0, struct func_8022AAA8_Struct *arg1);

void func_8038DA4C(s32 arg0, struct func_8022AAA8_Struct *arg1) {
    func_8022AAA8(arg0, arg1);
}

