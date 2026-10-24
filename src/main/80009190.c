#include "common.h"


void func_80009190(u8 *arg0, s32 arg1) {
    arg0[0x22] = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/80009190/func_8000919C.s")


extern u16 D_8004347C[];
extern u16 D_80043504[];
extern u16 D_8004353A[];
extern u16 D_80043562[];

u16 func_80009F8C(u16 arg0) {
    u16 sp4[2];
    u16 temp_a0;
    u16 temp_a0_2;
    s32 temp_v0;
    s32 temp_v1;
    u16 var_v1;

    temp_v0 = arg0;
    temp_v1 = (temp_v0 >> 8) & 0xFF;
    switch (temp_v1) {
    default:
        var_v1 = sp4[0];
        break;
    case 0xA1:
        temp_a0 = temp_v0;
        var_v1 = D_8004347C[temp_a0 & 0xFF];
        break;
    case 0xA3:
        temp_a0 = temp_v0;
        var_v1 = D_80043504[temp_a0 & 0xFF];
        break;
    case 0xA4:
        temp_a0 = temp_v0;
        if ((temp_a0 & 0xFF) < 0xE1) {
            var_v1 = (temp_a0 & 0xFF) - 0xA1;
        } else {
            var_v1 = D_8004353A[temp_a0 & 0xFF];
        }
        break;
    case 0xA5:
        temp_a0_2 = temp_v0;
        if ((temp_a0_2 & 0xFF) < 0xE1) {
            var_v1 = (temp_a0_2 & 0xFF) - 0x61;
        } else {
            var_v1 = D_80043562[temp_a0_2 & 0xFF];
        }
        break;
    }
    return var_v1;
}


void func_8000A060(u8 *arg0, s32 arg1) {
    arg0[0x22] = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/80009190/func_8000A06C.s")


struct func_8000A780_Dst2 {
    s16 unk0;
    s16 unk2;
    u8 unk4;
    u8 unk5;
    u8 unk6;
    u8 unk7;
    u8 unk8;
    u8 unk9;
    u8 unkA;
    u8 unkB;
    u16 unkC;
    u16 unkE;
    u16 unk10;
};

struct func_8000A780_Dst {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad1[0x9];
    struct func_8000A780_Dst2 *unk2C;
};

struct func_8000A780_Src {
    s16 unk0;
    s16 unk2;
    u8 unk4;
    u8 unk5;
    u8 unk6;
    u8 unk7;
    u8 unk8;
    u8 unk9;
    u8 unkA;
    u8 unkB;
    u16 unkC;
    u16 unkE;
    u16 unk10;
};

void func_8000A780(struct func_8000A780_Dst *arg0, struct func_8000A780_Src *arg1) {
    arg0->unk22 = 1;
    arg0->unk2C->unk0 = arg1->unk0;
    arg0->unk2C->unk2 = arg1->unk2;
    arg0->unk2C->unk4 = arg1->unk4;
    arg0->unk2C->unk5 = arg1->unk5;
    arg0->unk2C->unk6 = arg1->unk6;
    arg0->unk2C->unk7 = arg1->unk7;
    arg0->unk2C->unk8 = arg1->unk8;
    arg0->unk2C->unk9 = arg1->unk9;
    arg0->unk2C->unkA = arg1->unkA;
    arg0->unk2C->unkB = arg1->unkB;
    arg0->unk2C->unkC = arg1->unkC;
    arg0->unk2C->unkE = arg1->unkE;
    arg0->unk2C->unk10 = arg1->unk10;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/80009190/func_8000A828.s")

