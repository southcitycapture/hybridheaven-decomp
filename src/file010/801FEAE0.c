#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FEAE0/func_801FEAE0.s")


typedef struct func_801FEC58_Struct {
    u8 pad0[0x90];
    u8 unk90;
    u8 pad91[0xAB - 0x91];
    u8 unkAB;
} func_801FEC58_Struct;

extern s8 func_80006214(void *);
extern s32 func_801FEAE0(void *, u8, s16, s16, s32, s8 *, u8);

void func_801FEC58(arg0, arg1, arg2, arg3, arg4)
    func_801FEC58_Struct *arg0;
    s16 arg1;
    s16 arg2;
    s16 arg3;
    u8 arg4;
{
    s8 sp37;
    u8 var_t0;

    sp37 = 0;
    var_t0 = 0;
    arg0->unk90 = 0;
    if (arg1 >= 1000) {
        func_801FEAE0(arg0, arg1 / 1000, arg2 - 0x24, arg3, 0x20, &sp37, arg4);
        arg1 -= (arg1 / 1000) * 1000;
        if (arg1 < 0) {
            arg1 = 0;
        }
        var_t0 = 1;
        arg0->unk90++;
    }
    if ((arg1 >= 100) || (var_t0 != 0)) {
        func_801FEAE0(arg0, arg1 / 100, arg2 - 0x18, arg3, 0x20, &sp37, arg4);
        var_t0 = 1;
        arg1 -= (arg1 / 100) * 100;
        if (arg1 < 0) {
            arg1 = 0;
        }
        arg0->unk90++;
    }
    if ((arg1 >= 10) || (var_t0 != 0)) {
        func_801FEAE0(arg0, arg1 / 10, arg2 - 0xC, arg3, 0x20, &sp37, arg4);
        arg1 -= (arg1 / 10) * 10;
        if (arg1 < 0) {
            arg1 = 0;
        }
        arg0->unk90++;
    }
    func_801FEAE0(arg0, arg1, arg2, arg3, 0x20, &sp37, arg4);
    arg0->unkAB = func_80006214(arg0);
    arg0->unk90++;
}


extern void func_800058DC(void *, void *);
extern s32 func_801FEF20;

typedef struct func_801FEE94_Struct {
    u8 pad0[0x94];
    s16 unk94;
    u8 unk96;
    u8 unk97;
    u8 unk98;
    u8 pad99[0xA4 - 0x99];
    s16 unkA4;
    s16 unkA6;
    u8 padA8[0xB0 - 0xA8];
    s16 unkB0;
} func_801FEE94_Struct;

void func_801FEE94(func_801FEE94_Struct *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = arg0->unk98;
    arg0->unk98 = temp_v0 - 1;
    if (temp_v0 == 0) {
        if (arg0->unk96 == 0) {
            arg0->unkA4 = 0x78;
            arg0->unkA6 = 0x64;
        } else {
            arg0->unkA4 = 0xC8;
            arg0->unkA6 = 0x64;
        }
        func_801FEC58(arg0, arg0->unk94, arg0->unkA4, arg0->unkA6, arg0->unk97);
        arg0->unkB0 = -0x14;
        func_800058DC(arg0, &func_801FEF20);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FEAE0/func_801FEF20.s")

