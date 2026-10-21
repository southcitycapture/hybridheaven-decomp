#include "common.h"


extern u16 D_8017DC40;

s32 func_803879D0(u8 arg0, u16 arg1) {
    s32 temp_lo;

    temp_lo = (D_8017DC40 * arg0) / 100;
    if (temp_lo < arg1) {
        return arg1;
    }
    return temp_lo & 0xFFFF;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file056/803879D0/func_80387A20.s")

typedef struct func_80387DDC_Struct {
    u8 pad0[8];
    s16 x, y, w, h;
    u8 c0[4];
    u8 c1[4];
    s16 s34, s36;
    u8 pad38[4];
    u16 s3C;
    u8 pad3E[2];
    s32 s40;
    u8 pad44[8];
    s16 s4C, s4E, s50, s52, s54, s56;
    u8 pad58[8];
} func_80387DDC_Struct;
typedef struct {
    u8 pad[0xC];
    void *unkC;
} func_80387DDC_Struct2;
typedef struct {
    u16 *unk0;
    s32 *unk4;
} func_80387DDC_Struct3;
extern void func_80146088(s32, func_80387DDC_Struct2 *, s32, u8);
extern func_80387DDC_Struct3 *D_80172594;
extern func_80387DDC_Struct2 D_80388F14;
void func_80387DDC(s32 arg0, s16 arg1, s16 arg2, u8 arg3, s32 arg4) {
    func_80387DDC_Struct s;
    s.x = arg1;
    s.y = arg2;
    s.w = 0x10;
    s.h = 0x30;
    s.s4C = 0x10; s.s54 = 0x10;
    s.c0[2] = 0xA0; s.s4E = 0x30; s.s56 = 0x30;
    s.c0[2] = 0xA0; s.c0[1] = 0xA0; s.c0[0] = 0xA0;
    s.c0[3] = 0xFF;
    s.c1[2] = 0; s.c1[1] = 0; s.c1[0] = 0;
    s.c1[3] = 0xFF;
    s.s34 = 0x66; s.s36 = 0;
    s.s3C = *D_80172594->unk0;
    s.s40 = D_80172594->unk4[arg3 & 0xFFFF];
    s.s50 = 0; s.s52 = 0;
    D_80388F14.unkC = &s.x;
    func_80146088(arg0, &D_80388F14, arg4, arg3);
}

extern void func_800058DC(s32, void *);
void func_80387F10(s32 arg1, s32 arg2);

s32 func_80126A0C(s32, s32, s32);

void func_80387ED0(s32 arg0, void *arg1) {
    if (func_80126A0C(arg0, 0x12F, 0) != 0) {
        func_800058DC(arg0, &func_80387F10);
    }
}


extern u8 D_801BCC25;
extern void func_80387F48();

void func_80387F10(s32 arg1, s32 arg2) {
    if (D_801BCC25 == 1) {
        func_800058DC(arg1, func_80387F48);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file056/803879D0/func_80387F48.s")


void func_80388444();

extern void func_80006088(s32);
extern void func_8001B204(s32, s32, s32, void *);
extern u8 D_80389E90[];
extern u8 D_80389E94[];

void func_80388388(void *arg0, s32 *arg1) {
    s32 temp_v0;
    s8 var_s0;

    temp_v0 = *(s32 *) ((u8 *) arg0 + 0xB0);
    *(s32 *) ((u8 *) arg0 + 0xB0) = temp_v0 - 1;
    if ((temp_v0 < 0) || (D_801BCC25 == 0)) {
        func_8001B204(3, 0, 0, D_80389E90);
        func_8001B204(4, 0, 0, D_80389E94);
        var_s0 = 0xD;
        do {
            func_80006088(arg1[var_s0]);
            var_s0 -= 1;
        } while (var_s0 >= 0);
        *(s32 *) ((u8 *) arg0 + 0xB0) = 5;
        func_800058DC((s32) arg0, (void *) func_80388444);
    }
}


typedef struct func_80388444_Struct {
    u8 pad[0xB0];
    s32 unkB0;
} func_80388444_Struct;

extern void func_80005700(void *);
extern void func_80126E88(s32, void *);

void func_80388444(func_80388444_Struct *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = arg0->unkB0;
    arg0->unkB0 = temp_v0 - 1;
    if (temp_v0 < 0) {
        func_80126E88(0x12F, arg0);
        func_80005700(arg0);
    }
}

