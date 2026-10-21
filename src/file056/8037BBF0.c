#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file056/8037BBF0/func_8037BBF0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/8037BBF0/func_8037BE10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/8037BBF0/func_8037C8F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/8037BBF0/func_8037CFE8.s")


extern void func_800058DC(s32, void (*)(void));
extern void func_80020718(s32);
extern s32 func_8011AAF4(void *, s32, s32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_801FBB30(void);
extern u8 D_80389854[];
extern f32 D_803898E8;
extern f32 D_803898EC;
extern f32 D_803898F0;
extern f32 D_803898F4;
extern f32 D_803898F8;
extern f32 D_803898FC;
extern void func_8037D1DC();

void func_8037D0F8(s32 arg0, s32 arg1) {
    if (func_8011AAF4(D_80389854, 0x21C, arg0, 0, 1, 1.0f, D_803898E8, D_803898EC, D_803898F0, 1.0f, D_803898F4, D_803898F8, D_803898FC, 0.0f, 35.0f, -1, -1) == 0) {
        func_80020718(8);
        func_801FBB30();
        func_800058DC(arg0, func_8037D1DC);
    }
}


typedef struct {
    u8 pad0[0x40];
    f32 unk40;
    f32 unk44;
    f32 unk48;
} func_8037D1DC_DC;

typedef struct {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0x2];
    s16 unk12;
} func_8037D1DC_E0S;

typedef struct {
    u8 pad0[0x24];
    f32 unk24;
} func_8037D1DC_E8S;

typedef struct {
    u8 pad0[0x2C];
    func_8037D1DC_E0S *unk2C;
} func_8037D1DC_E0;

typedef struct {
    u8 pad0[0x2C];
    func_8037D1DC_E8S *unk2C;
} func_8037D1DC_E8;

typedef struct {
    u8 pad0[0xDC];
    func_8037D1DC_DC *unkDC;
    func_8037D1DC_E0 *unkE0;
    u8 padE4[4];
    func_8037D1DC_E8 *unkE8;
    u8 padEC[0xEF0 - 0xEC];
    u16 unkEF0;
} func_8037D1DC_Glob;

extern func_8037D1DC_Glob D_801BBBF0;
extern f32 D_80389900;

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_8037D1DC_Arg;

typedef struct {
    u8 pad0[0x1C];
    func_8037D1DC_Arg unk1C;
} func_8037D1DC_S1;

typedef struct {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x54 - 0x30];
    s32 unk54;
    u8 pad58[0x5C - 0x58];
    func_8037D1DC_S1 *unk5C;
} func_8037D1DC_Arg0;

extern void func_8013A28C(s32, func_8037D1DC_Arg);
extern void func_801C4A5C(void *, s32);
extern void func_80010550(s32, void *);
extern void func_8037D320();

void func_8037D1DC(func_8037D1DC_Arg0 *arg0, s32 arg1) {
    func_8037D1DC_S1 *s1;

    arg0->unk2C |= 0xE0;
    s1 = arg0->unk5C;
    D_801BBBF0.unkE0->unk2C->unk4 = 34.0f;
    D_801BBBF0.unkE0->unk2C->unk8 = D_80389900;
    D_801BBBF0.unkE0->unk2C->unkC = 308.0f;
    D_801BBBF0.unkDC->unk40 = D_801BBBF0.unkDC->unk44 =
        D_801BBBF0.unkDC->unk48 = 0.0f;
    s1->unk1C.unk0 = 0x01680015;
    *(s16 *)((u8 *)s1 + 0x20) = 0;
    *(s16 *)((u8 *)s1 + 0x22) = 0;
    *(f32 *)((u8 *)s1 + 0x24) = 1.0f;
    func_8013A28C(arg1, s1->unk1C);
    D_801BBBF0.unkEF0 = D_801BBBF0.unkEF0 & 0xFEFF;
    D_801BBBF0.unkE0->unk2C->unk12 = 0x1E;
    arg0->unk54 = 0x181;
    func_801C4A5C(arg0, 0);
    func_80010550(arg1, s1);
    D_801BBBF0.unkE8->unk2C->unk24 = 1.0f;
    func_800058DC(arg0, func_8037D320);
}

extern void func_801E95D4(void *, s32, void *, u16, s32);
extern s32 D_80010550(s32, void *);
void func_8037D320(func_8037D1DC_Arg0 *arg0, s32 arg1) {
    func_8037D1DC_S1 *t;
    u16 r;
    t = arg0->unk5C;
    D_801BBBF0.unkE8->unk2C->unk24 = 1.0f;
    D_801BBBF0.unkE0->unk2C->unk12 = 0x1E;
    r = D_80010550(arg1, t);
    func_801E95D4(arg0, arg1, t, r, 1);
}

