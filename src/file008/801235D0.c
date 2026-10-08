#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file008/801235D0/func_801235D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/801235D0/func_801237AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/801235D0/func_80123850.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/801235D0/func_80123934.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/801235D0/func_80123BF0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/801235D0/func_801243DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/801235D0/func_80124AF0.s")


typedef struct func_80124C0C_Struct {
    u8 pad[0x164];
    u8 unk164;
    u8 pad2[0x3];
    s16 unk168;
    u8 pad3[0x13];
    u8 unk17D;
    u8 unk17E;
} func_80124C0C_Struct;

extern func_80124C0C_Struct D_801BBBF0;

void func_800058DC(s32 arg0, void *arg1);
void func_80124C54(void);

void func_80124C0C(s32 arg0, s32 arg1) {
    D_801BBBF0.unk17E = 7;
    if (D_801BBBF0.unk164 == 0) {
        D_801BBBF0.unk168 = 0;
        D_801BBBF0.unk17D = 0;
        func_800058DC(arg0, func_80124C54);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/801235D0/func_80124C54.s")


void func_801300E8(void);
void func_8012E81C(void);
void func_8012C6B4(s32);
void func_80124D48(s32);
extern u16 D_801BBC20;
extern u8 D_801BBD54;
extern s8 D_801BBD6E;

void func_80124CEC(s32 arg0, s32 arg1) {
    func_801300E8();
    D_801BBD6E = 9;
    func_8012E81C();
    func_8012C6B4(D_801BBC20 + 0x4D2);
    if (D_801BBD54 == 0) {
        func_80124D48(arg0);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/801235D0/func_80124D48.s")

