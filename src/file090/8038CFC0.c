#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file090/8038CFC0/func_8038CFC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file090/8038CFC0/func_8038CFF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file090/8038CFC0/func_8038D4D4.s")


struct func_8038D600_Struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0x82];
    u8 unk92;
    u8 unk93;
    u8 pad2[4];
    s16 unk98;
};

extern s32 D_801BBCCC;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern void func_8038D4D4(void *, void *, void *);
extern void func_800058DC(void *, void *);
extern void func_8038D680(void);

void func_8038D600(struct func_8038D600_Struct *arg0, s32 arg1) {
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
    arg0->unk92 = 0;
    arg0->unk93 = 0;
    arg0->unk98 = 5;
    func_8038D4D4(arg0, var_a1, var_a2);
    func_800058DC(arg0, (void *)func_8038D680);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file090/8038CFC0/func_8038D680.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file090/8038CFC0/func_8038D8E0.s")

