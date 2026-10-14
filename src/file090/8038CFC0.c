#include "common.h"


extern s32 func_800058DC(s32, void *);
extern s32 func_80229500();
extern void func_8038CFF4();

void func_8038CFC0(s32 arg0, s32 arg1) {
    func_80229500();
    func_800058DC(arg0, &func_8038CFF4);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file090/8038CFC0/func_8038CFF4.s")

extern u8 D_801BC3D8[];

struct func_8038D4D4_Struct0 {
    u8 pad0[0x9A];
    s16 unk9A;
    u8 pad1[5];
    u8 unkA1;
    u8 unkA2;
};

struct func_8038D4D4_Struct1 {
    u8 pad0[0x38];
    s32 unk38;
    u8 pad1[0x29C];
    u8 unk2D8;
    u8 unk2D9;
};

struct func_8038D4D4_Struct2 {
    u8 pad0[0x30];
    s32 unk30;
};

extern void func_80229404(void *);
extern void func_80229CE0(void *, void *, s32);
extern s32 func_8022B640(s32);

s32 func_8038D4D4(struct func_8038D4D4_Struct0 *arg0, struct func_8038D4D4_Struct1 *arg1, struct func_8038D4D4_Struct2 *arg2) {
    if ((f64) *(f32 *) &D_801BC3D8[0x3A8] > 15.0) {
        arg1->unk2D8 = 0x13U;
        arg1->unk2D9 = 7U;
    } else if (((u32) (arg2->unk30 << 0xB) >> 0x1E) != 0) {
        func_80229404(arg1);
        arg0->unk9A = (s16) (arg0->unk9A | 8);
    } else if (((u32) arg1->unk38 >> 0x1F) != 0) {
        arg1->unk2D8 = 2U;
        arg0->unk9A = (s16) (arg0->unk9A | 2);
        func_80229CE0(arg0, arg1, func_8022B640(2) & 0xFF);
    } else if (func_8022B640(0xA) < 7) {
        arg1->unk2D8 = 0U;
        func_80229CE0(arg0, arg1, 1);
    } else {
        arg1->unk2D8 = 1U;
        func_80229CE0(arg0, arg1, func_8022B640(2) & 0xFF);
    }
    arg0->unkA1 = (u8) arg1->unk2D8;
    arg0->unkA2 = (u8) arg1->unk2D9;
}


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

