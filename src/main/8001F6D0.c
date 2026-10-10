#include "common.h"


extern s32 D_800892B0;

void func_8001F6D0(void) {
    s32 *p = (s32 *) ((u8 *) &D_800892B0 + 0x429C);
    *p = *p;
}


void func_8001F6E4(void) {
    s32 *p;

    p = (s32 *) ((u8 *) &D_800892B0 + 0x429C);
    *p = *p | 1;
}


void func_8001F6FC(void) {
    s32 *p;
    p = (s32 *) ((u8 *) &D_800892B0 + 0x429C);
    *p = *p & ~1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/8001F6D0/func_8001F718.s")


struct func_8001F740_Struct {
    u8 pad[0x28];
    u16 unk28;
};

void func_8001F740(struct func_8001F740_Struct *arg0) {
    arg0->unk28 = (u16) arg0->unk28;
}


struct func_8001F74C_Struct {
    u8 pad[0x28];
    u16 unk28;
};

void func_8001F74C(struct func_8001F74C_Struct *arg0) {
    arg0->unk28 = arg0->unk28 | 1;
}


struct func_8001F75C_Struct {
    u8 pad[0x28];
    u16 unk28;
};

void func_8001F75C(struct func_8001F75C_Struct *arg0) {
    arg0->unk28 &= 0xFFFE;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/8001F6D0/func_8001F76C.s")


void func_8001F790(void *arg0) {
    *(u16 *)((u8 *)arg0 + 0x28) |= 2;
}


struct func_8001F7A0_Struct {
    u8 pad[0x28];
    u16 unk28;
};

void func_8001F7A0(struct func_8001F7A0_Struct *arg0) {
    arg0->unk28 &= 0xFFFD;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/8001F6D0/func_8001F7B0.s")


struct func_8001F7D4_Struct {
    u8 pad[0x28];
    u16 unk28;
};

void func_8001F7D4(struct func_8001F7D4_Struct *arg0) {
    arg0->unk28 = arg0->unk28 | 4;
}


void func_8001F7E4(u8 *arg0) {
    *(u16 *)(arg0 + 0x28) = *(u16 *)(arg0 + 0x28) & 0xFFFB;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/8001F6D0/func_8001F7F4.s")

