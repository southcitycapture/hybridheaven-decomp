#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file091/8038CFC0/func_8038CFC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file091/8038CFC0/func_8038CFF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file091/8038CFC0/func_8038D744.s")

extern void *func_800058DC(void *, void *);
extern void func_80229500(void);

typedef struct func_8038D810_Struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0x88];
    s16 unk98;
} func_8038D810_Struct;

extern s32 D_801BBCCC;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern void func_8038D8A0(void);
extern void func_8038D744(void *a, void *b, void *c);

void func_8038D810(func_8038D810_Struct *arg0, void *arg1) {
    void *var_a1;
    void *var_a2;

    extern void func_80229500();

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
    arg0->unk98 = 3;
    func_8038D744(arg0, var_a1, var_a2);
    func_800058DC(arg0, func_8038D8A0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file091/8038CFC0/func_8038D8A0.s")


struct func_8038DA80_Arg0 {
    u8 pad[0xA5];
    u8 unkA5;
};

struct func_8038DA80_Arg1 {
    u8 pad[6];
    s16 unk6;
};

void func_8022A834();

void func_8038DA80(struct func_8038DA80_Arg0 *arg0, struct func_8038DA80_Arg1 *arg1) {
    if (arg1->unk6 >= 0x64) {
        arg0->unkA5 = 1;
        return;
    }
    func_8022A834();
}

