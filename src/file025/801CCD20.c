#include "common.h"


extern void func_800058DC(s32, void *);
extern void func_801BF6C4(s32);
extern void func_801CCF48(void);
extern s32 D_801E0C38;
extern void func_801CCD60(void);

void func_801CCD20(s32 arg0) {
    D_801E0C38 = 0;
    func_801CCF48();
    func_801BF6C4(1);
    func_800058DC(arg0, func_801CCD60);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CCD20/func_801CCD60.s")


extern void func_801BF850(void *a, s32 b, void *c);
extern void func_801CD804();
extern void func_801CD8D0();
extern u8 D_801DAB88[];
extern s32 D_801DABB8;
extern s32 D_801DABBC;
extern u8 D_801E0CF8[];

void func_801CCDAC(s32 arg0, s32 arg1) {
    D_801DABB8 = arg0;
    D_801DABBC = arg1;
    func_801BF850(D_801DAB88, 1, D_801E0CF8);
    func_801CD804();
    func_801CD8D0();
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CCD20/func_801CCE00.s")


extern s32 D_801DAB20;

s32 func_801CCE0C(s32 arg0) {
    if (arg0 >= 6) {
        D_801DAB20 = 4;
        return 0;
    }
    if (arg0 < 0) {
        D_801DAB20 = 0;
        return 0;
    }
    D_801DAB20 = arg0;
    return 1;
}


typedef struct func_801CCE50_Struct {
    u8 unk0;
    u8 unk1;
    u8 unk2;
    u8 unk3;
    u8 unk4;
    u8 unk5;
    u8 unk6;
    u8 unk7;
} func_801CCE50_Struct;

extern func_801CCE50_Struct D_801E0BC0;

void func_801CCE50(u8 arg0, u8 arg1, u8 arg2) {
    D_801E0BC0.unk0 = arg0;
    D_801E0BC0.unk1 = arg1;
    D_801E0BC0.unk2 = arg2;
    D_801E0BC0.unk3 = 0;
    D_801E0BC0.unk4 = arg0;
    D_801E0BC0.unk5 = arg1;
    D_801E0BC0.unk6 = arg2;
    D_801E0BC0.unk7 = 0;
}


void func_801CCE88(s32 arg0, u8 arg1, u8 arg2, u8 arg3) {
    u8 *temp_v0;

    temp_v0 = (u8 *)&D_801E0BC0 + arg0 * 0x10;
    temp_v0[8] = arg1;
    temp_v0[9] = arg2;
    temp_v0[10] = arg3;
    temp_v0[11] = 0;
    temp_v0[12] = arg1;
    temp_v0[13] = arg2;
    temp_v0[14] = arg3;
    temp_v0[15] = 0;
}


void func_801CCEC8(s32 arg0, s8 arg1, s8 arg2, s8 arg3) {
    u8 *temp_v0;

    if (arg1 == -0x80) {
        arg1 = 0x7F;
    }
    if (arg2 == -0x80) {
        arg2 = 0x7F;
    }
    if (arg3 == -0x80) {
        arg3 = 0x7F;
    }
    if (arg1 == 0) {
        arg1 = 1;
    }
    temp_v0 = (u8 *) &D_801E0BC0 + arg0 * 16;
    if (arg2 == 0) {
        arg2 = 1;
    }
    if (arg3 == 0) {
        arg3 = 1;
    }
    temp_v0[0x10] = arg1;
    temp_v0[0x11] = arg2;
    temp_v0[0x12] = arg3;
    temp_v0[0x13] = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CCD20/func_801CCF48.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CCD20/func_801CD03C.s")


extern u8 D_801BBBF0[];

void func_801CD044(void) {
    D_801BBBF0[0xF20] = 0;
    D_801BBBF0[0xF21] = 0;
    D_801BBBF0[0xF22] = 0;
    D_801BBBF0[0xF23] = 0;
    D_801BBBF0[0xF24] = 0;
    D_801BBBF0[0xF25] = 0;
    D_801BBBF0[0xF29] = 0;
    D_801BBBF0[0xF2A] = 0;
    D_801BBBF0[0xF2B] = 0;
}


extern void func_801C0D04(s32 arg0, s32 arg1);

void func_801CD074(s32 arg0) {
    func_801C0D04(1, arg0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CCD20/func_801CD098.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CCD20/func_801CD354.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CCD20/func_801CD378.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CCD20/func_801CD5C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CCD20/func_801CD71C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CCD20/func_801CD804.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CCD20/func_801CD8D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CCD20/func_801CDB88.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CCD20/func_801CDB94.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CCD20/func_801CDBC8.s")


f32 func_801CDBD4(f32 arg0, f32 arg1, f32 arg2) {
    return ((arg1 - arg0) * arg2) + arg0;
}

