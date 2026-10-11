#include "common.h"


extern void *func_800058DC(void *, void *);
extern s16 func_80228C20(void *);
extern void func_80229500(void);
extern void func_8038D000(void);

void func_8038CFC0(void *arg0, void *arg1) {
    func_80229500();
    *(s16 *)((u8 *)arg0 + 0x96) = func_80228C20(arg0);
    func_800058DC(arg0, func_8038D000);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file064/8038CFC0/func_8038D000.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file064/8038CFC0/func_8038D77C.s")


typedef struct func_8038D8B8_Struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0x88];
    s16 unk98;
} func_8038D8B8_Struct;

extern s32 D_801BBCCC;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern void func_8038D948(void);
extern void func_8038D77C(void *a, void *b, void *c);

void func_8038D8B8(func_8038D8B8_Struct *arg0, void *arg1) {
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
    func_8038D77C(arg0, var_a1, var_a2);
    func_800058DC(arg0, func_8038D948);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file064/8038CFC0/func_8038D948.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file064/8038CFC0/func_8038DBC4.s")

