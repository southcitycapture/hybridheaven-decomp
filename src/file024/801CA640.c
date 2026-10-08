#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801CA640/func_801CA640.s")


typedef struct func_801CA6C8_Struct {
    u8 pad0[0x26];
    u8 unk26;
    u8 pad27;
    s16 unk28;
    s16 unk2A;
} func_801CA6C8_Struct;

extern void func_8001B194(u8, s16, s16, s32);
extern void func_8001B204(u8, s16, s16, void *, ...);
extern u8 D_801CF620[];

void func_801CA6C8(func_801CA6C8_Struct *arg0, s16 arg1, u8 arg2) {
    s16 temp_s0;
    s32 var_a3;

    temp_s0 = arg0->unk2A + arg1 + 0x78;
    if ((temp_s0 < 0x6B) || (temp_s0 >= 0xBA)) {
        func_8001B204(arg0->unk26, 0, 0, D_801CF620);
        return;
    }
    func_8001B204(arg0->unk26, arg0->unk28, temp_s0, (void *) ((u8 *) arg0 + 8), 0, (s32) arg2);
    var_a3 = 0;
    if (temp_s0 < 0x78) {
        var_a3 = (temp_s0 - 0x78) & 0xFF;
    }
    if ((temp_s0 + 0xD) >= 0xBA) {
        var_a3 = (temp_s0 - 0xAC) & 0xFF;
    }
    func_8001B194(arg0->unk26, arg0->unk28, temp_s0, var_a3);
}


extern void func_80002364();
extern void func_8001A804();
extern void func_80116E80();
extern void func_80126930();
extern u8 D_801CF624[];
extern s16 D_801CFDE4;
extern s8 D_801CFDE0;
extern s8 D_801CFDE1;
extern s8 D_801CFDE2;
extern void func_801CA874();

void func_801CA7A4(s32 arg0, s32 arg1) {
    func_80126930(0);
    D_801CFDE4 = 0;
    D_801CFDE0 = 0;
    D_801CFDE1 = 0;
    D_801CFDE2 = 0;
    func_80116E80(0x100);
    func_80002364(0x0C000C0C, 0xA, 2, 0);
    func_8001A804(0, D_801CF624, 8, 8, 0x130, 0xE0, 8, 0, 0, 0, 0xFF, 0, 0, 0, 0xFF);
    func_800058DC(arg0, func_801CA874);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801CA640/func_801CA874.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801CA640/func_801CAA20.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801CA640/func_801CAA68.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801CA640/func_801CACE4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801CA640/func_801CACF0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801CA640/func_801CAD70.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801CA640/func_801CAE00.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801CA640/func_801CAEEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801CA640/func_801CB038.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801CA640/func_801CB0D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801CA640/func_801CB27C.s")


extern void func_8012FE50(s32, s32, s32, s32, s32);
extern u16 D_80089474[];

void func_801CB550(s32 arg0, s32 arg1) {
    if (D_80089474[2] & 0xB000) {
        func_8012FE50(0x17, 0x73, 1, 1, 0);
    }
}

