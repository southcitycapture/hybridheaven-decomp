#include "common.h"


extern s32 func_800058DC(s32, void *);
extern s32 func_80229500();
extern void func_8038CFF4();

void func_8038CFC0(s32 arg0, s32 arg1) {
    func_80229500();
    func_800058DC(arg0, &func_8038CFF4);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file058/8038CFC0/func_8038CFF4.s")


typedef struct func_8038D830_StructA0 {
    u8 pad0[0x9A];
    s16 unk9A;
    u8 pad1[0x4];
    u8 unkA0;
    u8 unkA1;
    u8 unkA2;
} func_8038D830_StructA0;

typedef struct func_8038D830_StructA1 {
    s16 unk0;
    s16 unk2;
    u8 pad0[0x2D4];
    u8 unk2D8;
    u8 unk2D9;
} func_8038D830_StructA1;

typedef struct func_8038D830_StructA2 {
    u8 pad0[0x30];
    s32 unk30;
    u8 pad1[0x2D1 - 0x34];
    u8 unk2D1;
} func_8038D830_StructA2;

extern void func_80229404(void *a);
extern void func_80229CE0(void *a, void *b, s32 c);
extern s32 func_8022B640(s32 a);

void func_8038D830(void *arg0, void *arg1, void *arg2) {
    func_8038D830_StructA0 *a0 = arg0;
    func_8038D830_StructA1 *a1 = arg1;
    func_8038D830_StructA2 *a2 = arg2;
    s32 temp_v0;

    if ((((s16) a1->unk0 / 5) >= a1->unk2) && (a0->unkA0 != 0)) {
        a1->unk2D8 = 0xBU;
        a1->unk2D9 = 1U;
        a0->unkA0 = (u8) (a0->unkA0 - 1);
        a0->unk9A = 0x20;
    } else {
        temp_v0 = a2->unk30;
        if (((((u32) (temp_v0 << 0xB) >> 0x1E) != 0) || (((u32) (temp_v0 * 8) >> 0x1C) == 2)) && ((s32) a2->unk2D1 >= 5)) {
            func_80229404(a1);
            a0->unk9A = 8;
        } else if (func_8022B640(2) == 0) {
            a1->unk2D8 = 0U;
            func_80229CE0(a0, a1, func_8022B640(2) & 0xFF);
        } else {
            a1->unk2D8 = 1U;
            func_80229CE0(a0, a1, 0);
        }
    }
    a0->unkA1 = (u8) a1->unk2D8;
    a0->unkA2 = (u8) a1->unk2D9;
}


typedef struct func_8038D94C_Struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0x90];
    u8 unkA0;
} func_8038D94C_Struct;

extern s32 D_801BBCCC;
extern u8 D_801BC03C;
extern u8 D_801BC3D8;
extern void func_8038D9DC();

void func_8038D94C(func_8038D94C_Struct *arg0, void *arg1) {
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
    arg0->unkA0 = 3;
    func_8038D830(arg0, var_a1, var_a2);
    func_800058DC(arg0, func_8038D9DC);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file058/8038CFC0/func_8038D9DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file058/8038CFC0/func_8038DBA4.s")

