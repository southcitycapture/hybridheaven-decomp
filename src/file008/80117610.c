#include "common.h"


typedef struct func_80117610_Struct {
    u8 pad0[0x18E];
    u16 unk18E;
    u16 unk190;
    u8 pad1[0x1D8 - 0x192];
    u16 unk1D8;
    u8 pad2[2];
    u16 unk1DC;
} func_80117610_Struct;

extern func_80117610_Struct D_801BBBF0;

s32 func_80117610(s32 arg0) {
    if (D_801BBBF0.unk18E == 0) {
        D_801BBBF0.unk18E = 1;
        D_801BBBF0.unk190 = 3;
        D_801BBBF0.unk1D8 = 1;
        D_801BBBF0.unk1DC = 0;
        return 1;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80117610/func_80117650.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80117610/func_801178E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80117610/func_80117A7C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80117610/func_80117C0C.s")


struct func_80117CD0_Struct1 {
    u8 pad[0x1C];
    f32 unk1C;
};

struct func_80117CD0_Struct0 {
    u8 pad[0x2C];
    struct func_80117CD0_Struct1 *unk2C;
};

extern s32 func_80117A7C(s16, f32 *, f32 *, f32 *, f32 *, f32 *, f32 *);
extern s32 func_8011AAF4(void *, s32, s32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern u8 D_8018959C[];
extern struct func_80117CD0_Struct0 *D_801BBCD8;

void func_80117CD0(s32 arg0, s16 arg1) {
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;

    func_80117A7C(arg1, &sp64, &sp60, &sp5C, &sp58, &sp54, &sp50);
    func_8011AAF4(D_8018959C, 0xFB, arg0, 2, 1, 0.0f, sp64, sp60, sp5C, 0.0f, sp58, sp54, sp50, 0.0f, D_801BBCD8->unk2C->unk1C, -1, -1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80117610/func_80117DA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80117610/func_80117E58.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80117610/func_80117F64.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80117610/func_80118038.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80117610/func_801182F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80117610/func_80118500.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80117610/func_80118768.s")

extern void func_800058DC();

extern s32 func_80117DA0();
extern void func_80117E58();
extern void func_80118BB0();

void func_80118B70(s32 arg0) {
    if (func_80117DA0() == 0) {
        func_80117E58();
        func_800058DC(arg0, func_80118BB0);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80117610/func_80118BB0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80117610/func_801190F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80117610/func_8011913C.s")

void func_80119B80(s32 arg0, s32 arg1);

extern void func_80119F9C(void *, void *);
extern void func_8011A0F0(void *);
extern u8 D_801BBB90[];
extern u8 D_801BBB92[];
extern u8 D_801BBB94[];

void func_80119B24(s32 arg0, s32 arg1) {
    if (func_80117610(0) != 0) {
        func_80119F9C(D_801BBB90, D_801BBB92);
        func_8011A0F0(D_801BBB94);
        func_800058DC(arg0, func_80119B80);
    }
}


extern u16 D_801BBC8E;
extern void func_80119BB8();

void func_80119B80(s32 arg0, s32 arg1) {
    if (!(D_801BBC8E & 4)) {
        func_800058DC(arg0, func_80119BB8);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80117610/func_80119BB8.s")

