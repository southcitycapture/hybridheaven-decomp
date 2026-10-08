#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file083/8038CFC0/func_8038CFC0.s")

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

#pragma GLOBAL_ASM("asm/nonmatchings/file083/8038CFC0/func_8038D688.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file083/8038CFC0/func_8038D718.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file083/8038CFC0/func_8038D8BC.s")

