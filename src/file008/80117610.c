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


extern s32 func_8011AAF4(void *, s32, s32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern struct func_80117CD0_Struct0 *D_801BBCD8;
extern void func_801178E4(f32 *, f32 *, f32 *, f32 *, f32 *, f32 *);
extern u8 D_80189558[];

struct func_80117C0C_Struct1 {
    u8 pad[0x1C];
    f32 unk1C;
};

struct func_80117C0C_Struct0 {
    u8 pad[0x2C];
    struct func_80117C0C_Struct1 *unk2C;
};

void func_80117C0C(s32 arg0) {
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;

    func_801178E4(&sp64, &sp60, &sp5C, &sp58, &sp54, &sp50);
    func_8011AAF4(D_80189558, 0xE6, arg0, 2, 1, 0.0f, sp64, sp60, sp5C, 0.0f, sp58, sp54, sp50, 0.0f, ((struct func_80117C0C_Struct0 *)D_801BBCD8)->unk2C->unk1C, -1, -1);
}


struct func_80117CD0_Struct1 {
    u8 pad[0x1C];
    f32 unk1C;
};

struct func_80117CD0_Struct0 {
    u8 pad[0x2C];
    struct func_80117CD0_Struct1 *unk2C;
};

extern s32 func_80117A7C(s16, f32 *, f32 *, f32 *, f32 *, f32 *, f32 *);
extern u8 D_8018959C[];

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


typedef struct func_80117DA0_Struct0 {
    u8 pad0[0x5C];
    s32 unk5C;
} func_80117DA0_Struct0;

typedef struct func_80117DA0_Struct1 {
    u8 pad0[0xEF0];
    u16 unkEF0;
} func_80117DA0_Struct1;

typedef struct func_80117DA0_Struct2 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_80117DA0_Struct2;

extern s32 func_80011140(s32, s32, func_80117DA0_Struct2, s32);
extern s16 D_80216BF8;
extern func_80117DA0_Struct2 D_80216B90;

s32 func_80117DA0(arg0, arg1)
func_80117DA0_Struct0 *arg0;
s32 arg1;
{
    s32 sp24;
    s32 flags;

    sp24 = arg0->unk5C;
    flags = ((func_80117DA0_Struct1 *) &D_801BBBF0)->unkEF0;
    if (flags & 0x2000) {
        D_80216BF8 -= 1;
        if (D_80216BF8 <= 0) {
            D_80216BF8 = 0;
            ((func_80117DA0_Struct1 *) &D_801BBBF0)->unkEF0 = flags & 0xDFFF;
        }
    } else {
        D_80216BF8 = 0;
    }
    if (func_80011140(arg1, sp24, D_80216B90, 5) != 0) {
        return 0;
    }
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80117610/func_80117E58.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80117610/func_80117F64.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80117610/func_80118038.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80117610/func_801182F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80117610/func_80118500.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80117610/func_80118768.s")

extern void func_800058DC();

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

