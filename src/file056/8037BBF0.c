#include "common.h"


typedef struct func_8037BBF0_Struct {
    u8 id;
    u8 pad[3];
    f32 x;
    f32 z;
} func_8037BBF0_Struct;

extern f32 func_8002FC20(f32);
extern func_8037BBF0_Struct D_80388A8C[];
extern func_8037BBF0_Struct D_80388B1C[];
extern f32 D_8038A940;
extern f32 D_8038A948;

extern u16 D_801CBBF0[];
#define G_ID (((u16 *)((u8 *)D_801CBBF0 - 0x10000))[2])

s32 func_8037BBF0(f32 arg0, f32 arg1, u8 arg2) {
    u8 i;
    f32 dx;
    f32 dz;

    i = 0;
    if (arg2) {
        for (; D_80388A8C[i].id < 0xFF; i++) {
            if (G_ID == D_80388A8C[i].id) {
                dx = arg1 - D_80388A8C[i].z;
                dz = arg0 - D_80388A8C[i].x;
                if (func_8002FC20(dx * dx + dz * dz) < 30.0) {
                    D_8038A940 = D_80388A8C[i].x;
                    D_8038A948 = D_80388A8C[i].z;
                    return 1;
                }
            }
        }
        return 0;
    }
    for (; D_80388B1C[i].id < 0xFF; i++) {
        if (G_ID == D_80388B1C[i].id) {
            dx = arg1 - D_80388B1C[i].z;
            dz = arg0 - D_80388B1C[i].x;
            if (func_8002FC20(dx * dx + dz * dz) < 30.0) {
                D_8038A940 = D_80388B1C[i].x;
                D_8038A948 = D_80388B1C[i].z;
                return 1;
            }
        }
    }
    return 0;
}

/* hh-block asm/nonmatchings/file056/8037BBF0/_mrg_keep_text_func_8037BE10.s {"functions":["func_8037BE10"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file056/8037BBF0/_mrg_keep_text_func_8037BE10.s")

/* hh-block asm/nonmatchings/file056/8037BBF0/_mrg_keep_text_func_8037C8F8.s {"functions":["func_8037C8F8"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file056/8037BBF0/_mrg_keep_text_func_8037C8F8.s")

/* hh-block asm/nonmatchings/file056/8037BBF0/_mrg_keep_text_func_8037CFE8.s {"functions":["func_8037CFE8"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file056/8037BBF0/_mrg_keep_text_func_8037CFE8.s")

#define func_8037D1DC func_8037D1DC__func_8037D0F8

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
#undef func_8037D1DC

#define func_8037D320 func_8037D320__func_8037D1DC

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
#undef func_8037D320

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


/* Original readonly objects; named loads retain their original addresses. */
static const unsigned char rodata_8037BBF0[] = {
    0xA5, 0xC8, 0xA5, 0xE9, 0xA5, 0xD6, 0xA5, 0xEB, 0xC8, 0xAF, 0xC0, 0xB8, 0xA1, 0xAA, 0xA1, 0xAA,
    0x0A, 0x00, 0x00, 0x00, 0x68, 0x61, 0x73, 0x69, 0x67, 0x6F, 0x20, 0x25, 0x64, 0x0A, 0x00, 0x00,
    0xCA, 0xE4, 0xB4, 0xB0, 0xC3, 0xE6, 0x20, 0x00, 0xB6, 0xAF, 0xC0, 0xA9, 0xBD, 0xAA, 0xCE, 0xBB,
    0xA1, 0xAA, 0x0A, 0x00, 0x44, 0x45, 0x4D, 0x4F, 0x32, 0x31, 0x30, 0x20, 0x4F, 0x4B, 0x21, 0x0A,
    0x00, 0x00, 0x00, 0x00, 0x2F, 0x68, 0x64, 0x69, 0x73, 0x6B, 0x31, 0x2F, 0x75, 0x2F, 0x6E, 0x75,
    0x36, 0x34, 0x2F, 0x72, 0x7A, 0x30, 0x31, 0x31, 0x5F, 0x75, 0x73, 0x61, 0x2F, 0x6D, 0x61, 0x69,
    0x6E, 0x2F, 0x67, 0x61, 0x6D, 0x65, 0x2F, 0x73, 0x6F, 0x75, 0x72, 0x63, 0x65, 0x2F, 0x70, 0x6C,
    0x61, 0x79, 0x65, 0x72, 0x2F, 0x70, 0x6C, 0x61, 0x79, 0x65, 0x72, 0x5F, 0x64, 0x65, 0x6D, 0x6F,
    0x2E, 0x63, 0x00, 0x00, 0x80, 0x37, 0xBF, 0x2C, 0x80, 0x37, 0xBF, 0x48, 0x80, 0x37, 0xC8, 0xE4,
    0x80, 0x37, 0xC4, 0xFC, 0x80, 0x37, 0xC5, 0x64, 0x40, 0x30, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x40, 0x33, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x33, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCD,
    0x80, 0x37, 0xC9, 0xA0, 0x80, 0x37, 0xCB, 0xC8, 0x80, 0x37, 0xCC, 0x00, 0x80, 0x37, 0xCC, 0x70,
    0x80, 0x37, 0xCC, 0xC8, 0x80, 0x37, 0xCD, 0x18, 0x80, 0x37, 0xCD, 0xC8, 0x80, 0x37, 0xCE, 0xF0,
    0x80, 0x37, 0xCF, 0x1C, 0x3E, 0x4C, 0xCC, 0xCD, 0x42, 0x03, 0x99, 0x9A, 0x3F, 0x99, 0x99, 0x9A,
    0x43, 0xA6, 0xC0, 0x00, 0x42, 0x44, 0x66, 0x66, 0x41, 0x56, 0x66, 0x66, 0x43, 0x82, 0x26, 0x66,
    0x3E, 0x4C, 0xCC, 0xCD, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
