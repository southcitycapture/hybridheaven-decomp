#include "common.h"


extern s32 func_800058DC(s32, void *);
extern s32 func_80229500();
extern void func_8038CFF4();

void func_8038CFC0(s32 arg0, s32 arg1) {
    func_80229500();
    func_800058DC(arg0, &func_8038CFF4);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file083/8038CFC0/func_8038CFF4.s")


typedef struct {
    u8 pad0[0x9A];
    s16 unk9A;
    u8 pad9C[4];
    u8 unkA0;
    u8 unkA1;
    u8 unkA2;
} func_8038D59C_Struct0;

typedef struct {
    s16 unk0;
    s16 unk2;
    u8 pad4[0x2D8 - 4];
    u8 unk2D8;
    u8 unk2D9;
} func_8038D59C_Struct1;

typedef struct {
    u8 pad0[0x30];
    s32 unk30;
} func_8038D59C_Struct2;

void func_802294BC(void *);
void func_80229CE0(void *, void *, s32);
s32 func_8022B640(s32);

void func_8038D59C(func_8038D59C_Struct0 *arg0, func_8038D59C_Struct1 *arg1, func_8038D59C_Struct2 *arg2) {
    if ((arg1->unk2 < (arg1->unk0 / 5)) && (arg0->unkA0 != 0)) {
        arg1->unk2D8 = 0xBU;
        arg1->unk2D9 = 3U;
        arg0->unkA0 = arg0->unkA0 - 1;
        arg0->unk9A = arg0->unk9A | 0x20;
    } else if (((u32) arg2->unk30 << 0xB) >> 0x1E != 0) {
        func_802294BC(arg1);
        arg0->unk9A = 8;
    } else {
        if (func_8022B640(2) == 0) {
            arg1->unk2D8 = 0U;
        } else {
            arg1->unk2D8 = 1U;
        }
        func_80229CE0(arg0, arg1, func_8022B640(2) & 0xFF);
    }
    arg0->unkA1 = arg1->unk2D8;
    arg0->unkA2 = arg1->unk2D9;
}


typedef struct func_8038D688_Struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0x90];
    u8 unkA0;
} func_8038D688_Struct;

extern s32 D_801BBCCC;
extern u8 D_801BC03C;
extern u8 D_801BC3D8;
extern void func_8038D718();

void func_8038D688(func_8038D688_Struct *arg0, void *arg1) {
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
    arg0->unkA0 = 1;
    func_8038D59C(arg0, var_a1, var_a2);
    func_800058DC(arg0, func_8038D718);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file083/8038CFC0/func_8038D718.s")

void *func_8022A834(s32 arg0, struct func_8022A834_Struct *arg1);

void func_8038D8BC(s32 arg0, struct func_8022A834_Struct *arg1) {
    func_8022A834(arg0, arg1);
}

