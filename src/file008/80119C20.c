#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80119C20/func_80119C20.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80119C20/func_80119D38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80119C20/func_80119E24.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80119C20/func_80119F9C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80119C20/func_8011A06C.s")


typedef struct func_8011A0F0_StructB {
    u8 pad0[0x48];
    s32 unk48;
    s32 unk4C;
    f32 unk50;
} func_8011A0F0_StructB;

typedef struct func_8011A0F0_StructA {
    u8 pad0[0x2C];
    func_8011A0F0_StructB *unk2C;
} func_8011A0F0_StructA;

extern void func_80119F9C(s16 *, s16 *);
extern void func_8011A06C(s16, s16, s32, s32, f32, s32);
extern func_8011A0F0_StructA *D_801BBCD8;

void func_8011A0F0(s32 arg0) {
    s16 sp26;
    s16 sp24;
    func_8011A0F0_StructB *temp_v0;

    func_80119F9C(&sp26, &sp24);
    temp_v0 = D_801BBCD8->unk2C;
    func_8011A06C(sp26, sp24, temp_v0->unk48, temp_v0->unk4C, temp_v0->unk50, arg0);
}


f32 func_8001EAD0(s16);                             /* extern */
f32 func_8001EB64(s16);                             /* extern */
void func_80130C40(s16, f32 *, f32 *);              /* extern */

void func_8011A148(s16 arg0, s16 arg1, s16 arg2, f32 *arg3, f32 *arg4, f32 *arg5) {
    *arg3 = 0.0f;
    *arg4 = func_8001EB64(arg2);
    *arg5 = func_8001EAD0(arg2);
    func_80130C40(arg1, arg3, arg4);
    func_80130C40(arg0, arg3, arg5);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80119C20/func_8011A1B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80119C20/func_8011A2D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80119C20/func_8011A348.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80119C20/func_8011A3D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80119C20/func_8011A5A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80119C20/func_8011A724.s")


typedef struct func_8011A7FC_StructInner {
    u8 pad0[0x30];
    f32 unk30;
    u8 pad1[0x4];
    f32 unk38;
    f32 unk3C;
    u8 pad2[0x4];
    f32 unk44;
} func_8011A7FC_StructInner;

typedef struct func_8011A7FC_StructOuter {
    u8 pad0[0x2C];
    func_8011A7FC_StructInner *unk2C;
} func_8011A7FC_StructOuter;

typedef struct func_8011A7FC_Struct {
    u8 pad0[0xE8];
    func_8011A7FC_StructOuter *unkE8;
    u8 pad1[0x232 - 0xEC];
    s16 unk232;
    u8 pad2[0x254 - 0x234];
    u8 unk254;
    u8 unk255;
    u8 unk256;
    u8 pad3[0x2AD - 0x257];
    u8 unk2AD;
    u8 pad4[0x2B0 - 0x2AE];
    s32 unk2B0;
    u8 unk2B4;
    u8 unk2B5;
} func_8011A7FC_Struct;

s16 func_8001EF38(f32, f32);                        /* extern */
extern func_8011A7FC_Struct D_801BBBF0;

void func_8011A7FC(void) {
    func_8011A7FC_StructInner *temp_v0;

    D_801BBBF0.unk2AD = 0;
    D_801BBBF0.unk2B5 = 0;
    D_801BBBF0.unk2B0 = 0;
    if ((D_801BBBF0.unk254 == 0) && (D_801BBBF0.unk255 == 0) && (D_801BBBF0.unk256 == 0)) {
        temp_v0 = D_801BBBF0.unkE8->unk2C;
        D_801BBBF0.unk232 = func_8001EF38(temp_v0->unk44 - temp_v0->unk38, temp_v0->unk3C - temp_v0->unk30);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80119C20/func_8011A878.s")


extern s32 func_8011A3D4(void);
extern void func_800058DC(s32, s32);
extern void func_8011AA88(s32, s32);

void func_8011AA0C(s32 arg0, s32 arg1, s32 arg2) {
    if (func_8011A3D4() != 0) {
        func_800058DC(arg0, arg1);
        return;
    }
    func_8011AA88(arg0, arg2);
}


s32 func_8011A3D4(void);
void func_8011AA88(s32 arg0, s32 arg1);

void func_8011AA54(s32 arg0, s32 arg1) {
    if (func_8011A3D4() == 0) {
        func_8011AA88(arg0, arg1);
    }
}


void func_8011AA88(s32 arg0, s32 arg1) {
    func_8011A7FC_StructInner *temp_v0;

    D_801BBBF0.unk2AD = 0;
    D_801BBBF0.unk2B5 = 0;
    temp_v0 = D_801BBBF0.unkE8->unk2C;
    D_801BBBF0.unk232 = func_8001EF38(temp_v0->unk44 - temp_v0->unk38, temp_v0->unk3C - temp_v0->unk30);
    func_800058DC(arg0, arg1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80119C20/func_8011AAF4.s")


extern s8 D_801BBE8A;

s8 func_8011B254(void) {
    return D_801BBE8A;
}


s32 func_8011B260(void) {
    if (D_801BBBF0.unk254 == 2 && D_801BBBF0.unk255 == 8 && D_801BBBF0.unk256 == 1) {
        return 0;
    }
    return D_801BBBF0.unk256 + (D_801BBBF0.unk254 * 0x2710) + (D_801BBBF0.unk255 * 0x64);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80119C20/func_8011B2E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80119C20/func_8011B3D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80119C20/func_8011B474.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80119C20/func_8011B520.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80119C20/func_8011B7A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80119C20/func_8011BA18.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80119C20/func_8011BAEC.s")

