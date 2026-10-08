#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FC490/func_801FC490.s")


extern u16 D_801BBE08[];
extern void (*D_80217120[])(void);

typedef struct func_801FC4C0_Struct0 {
    u8 pad[0];
} func_801FC4C0_Struct0;

void func_801FC4C0(func_801FC4C0_Struct0 arg0, s32 arg1) {
    void (*temp_v0)(void);

    temp_v0 = D_80217120[*(u16 *)((u8 *)D_801BBE08 + 4)];
    if (temp_v0 != NULL) {
        temp_v0();
    }
}


struct func_801FC504_Struct {
    u8 pad0[0x21C];
    s16 unk21C;
    u8 pad1[6];
    s16 unk224;
    s16 unk226;
    u16 unk228;
};

extern u16 func_80020718(u16);
extern struct func_801FC504_Struct D_801BBBF0;

void func_801FC504(s32 arg0) {
    D_801BBBF0.unk226 = D_801BBBF0.unk226 - 1;
    if (D_801BBBF0.unk226 == 0) {
        func_80020718(D_801BBBF0.unk228);
        D_801BBBF0.unk224 = 0;
        D_801BBBF0.unk21C = 0;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FC490/func_801FC558.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FC490/func_801FC6AC.s")


void func_801FC700(void) {
    D_801BBBF0.unk21C = 0;
    *(s32 *)&D_801BBBF0.pad1[2] = 0;
    D_801BBBF0.unk224 = 0;
    D_801BBBF0.unk226 = 0;
    D_801BBBF0.unk228 = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FC490/func_801FC720.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FC490/func_801FC824.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FC490/func_801FC830.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FC490/func_801FC9C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FC490/func_801FCA4C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FC490/func_801FCAE0.s")


void func_800208C4(u16);
s32 func_80020DAC(u16);

void func_801FCBA8(u16 arg0) {
    if (func_80020DAC(arg0) == 0) {
        func_800208C4(arg0);
    }
}

