#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file088/8038CFC0/func_8038CFC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file088/8038CFC0/func_8038CFF4.s")


struct func_8038D5F8_StructA {
    u8 pad0[0x9A];
    s16 unk9A;
    u8 pad1[0x5];
    u8 unkA1;
    u8 unkA2;
};

struct func_8038D5F8_StructB {
    u8 pad0[0x38];
    u32 unk38;
    u8 pad1[0x29C];
    u8 unk2D8;
    u8 unk2D9;
};

struct func_8038D5F8_StructC {
    u8 pad0[0x30];
    s32 unk30;
};

void func_80229404(void *);
void func_80229CE0(void *, void *, s32);
s32 func_8022B640(s32);

void func_8038D5F8(void *arg0, void *arg1, void *arg2) {
    struct func_8038D5F8_StructA *a0;
    struct func_8038D5F8_StructB *a1;
    struct func_8038D5F8_StructC *a2;

    a0 = arg0;
    a1 = arg1;
    a2 = arg2;
    if (((u32) (a2->unk30 << 0xB) >> 0x1E) != 0) {
        func_80229404(arg1);
    } else if ((a1->unk38 >> 0x1F) != 0) {
        a1->unk2D8 = 2;
        a0->unk9A = (s16) (a0->unk9A | 2);
        func_80229CE0(arg0, arg1, func_8022B640(2) & 0xFF);
    } else {
        a1->unk2D8 = 0;
        func_80229CE0(arg0, arg1, 0);
    }
    a0->unkA1 = a1->unk2D8;
    a0->unkA2 = a1->unk2D9;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file088/8038CFC0/func_8038D6AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file088/8038CFC0/func_8038D724.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file088/8038CFC0/func_8038D8EC.s")

