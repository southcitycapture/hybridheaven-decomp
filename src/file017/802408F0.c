#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_802408F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_80240AA8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_80240B10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_80240C00.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_80240C58.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_80240DEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_80240F50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_8024102C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_80241094.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_80241144.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_802411EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_802411F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_80241358.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_802414B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_80241574.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_802415DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_8024168C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_80241784.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_80241790.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_80241854.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_80241910.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_80241A60.s")


extern void func_800058DC(void *, void *);
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern s32 func_8012C97C(s32, s32);
extern u8 D_80164F40[];
extern void func_80241C28(void);

void func_80241BC4(void *arg0, void *arg1) {
    func_80005E44(arg0, D_80164F40);
    func_80006214(arg0);
    *(s32 *)((u8 *)arg0 + 0x2C) = 0xC00;
    *(s32 *)((u8 *)arg0 + 0x74) = func_8012C97C(0x2FA, 8);
    func_800058DC(arg0, func_80241C28);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_80241C28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_80241C34.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_8024245C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_802425DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_8024278C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_802428B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_80242A5C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_80242C3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_80242D80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_80242EEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_80242F50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_80242FD8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_80243290.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_80243588.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_802436EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_80243828.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_80243988.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_80243C30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_80243CC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_80243E48.s")


struct func_802441AC_Struct {
    u8 pad0[0x29C];
    f32 unk29C;
    f32 unk2A0;
    u8 pad1[0xC7C];
    u8 unkF20;
    u8 unkF21;
    u8 unkF22;
    u8 unkF23;
    u8 unkF24;
    u8 unkF25;
    s8 unkF26;
    s8 unkF27;
    s8 unkF28;
    u8 unkF29;
    u8 unkF2A;
    u8 unkF2B;
    u8 unkF2C;
    u8 unkF2D;
    s8 unkF2E;
    u8 pad2[3];
    u8 unkF32;
    u8 unkF33;
    u8 unkF34;
    u8 unkF35;
};

extern struct func_802441AC_Struct D_801BBBF0;
extern f32 D_8025C79C;

void func_802441AC(void) {
    D_801BBBF0.unk29C = 5.0f;
    D_801BBBF0.unkF23 = 0xFF;
    D_801BBBF0.unkF20 = 0;
    D_801BBBF0.unkF21 = 0;
    D_801BBBF0.unkF22 = 0;
    D_801BBBF0.unkF24 = 0xB4;
    D_801BBBF0.unkF25 = 0xDC;
    D_801BBBF0.unkF26 = 0x14;
    D_801BBBF0.unkF27 = 0x1E;
    D_801BBBF0.unkF28 = -0x1E;
    D_801BBBF0.unkF29 = 0x14;
    D_801BBBF0.unkF2A = 0xFA;
    D_801BBBF0.unkF2B = 0x14;
    D_801BBBF0.unkF2C = 0x6E;
    D_801BBBF0.unkF2D = 0x50;
    D_801BBBF0.unkF2E = -0x46;
    D_801BBBF0.unkF32 = 0;
    D_801BBBF0.unkF33 = 0;
    D_801BBBF0.unkF34 = 0;
    D_801BBBF0.unkF35 = 0xB9;
    D_801BBBF0.unk2A0 = D_8025C79C;
}

