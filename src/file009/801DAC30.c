#include "common.h"


extern void func_8013B570(void *, s32, s32, s32, void *);
extern u8 D_801BBBF0[];
extern void func_801DAC84();

void func_801DAC30(void *arg0, s32 arg1) {
    *(s8 *)((u8 *)arg0 + 0x35) = *(u16 *)(D_801BBBF0 + 0x104);
    *(u16 *)(D_801BBBF0 + 0x104) = *(u16 *)(D_801BBBF0 + 0x104) + 1;
    func_8013B570(arg0, 0x29, 0, 0, func_801DAC84);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801DAC30/func_801DAC84.s")


struct func_801DAE70_StructC {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};

struct func_801DAE70_StructB {
    u8 pad0[0x2C];
    struct func_801DAE70_StructC *unk2C;
};

struct func_801DAE70_StructA {
    u8 pad0[0x32];
    s16 unk32;
    u8 pad34[0xE0 - 0x34];
    struct func_801DAE70_StructB *unkE0;
    u8 padE4[0x198 - 0xE4];
    f32 unk198;
    f32 unk19C;
    f32 unk1A0;
};

extern s8 D_801E4A90;
extern void func_800058DC(s32, void *);
extern void func_801DAEE8();

void func_801DAE70(s32 a0, s32 a1) {
    struct func_801DAE70_StructA *a;

    D_801E4A90 = 0;
    a = (struct func_801DAE70_StructA *) D_801BBBF0;
    a->unkE0->unk2C->unk4 = a->unk198;
    a->unkE0->unk2C->unk8 = a->unk19C;
    a->unkE0->unk2C->unkC = a->unk1A0;
    a->unkE0->unk2C->unk12 = a->unk32;
    func_800058DC(a0, func_801DAEE8);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801DAC30/func_801DAEE8.s")


extern void func_8001B204(s32, s32, s32, void *, s32);
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
struct func_801DB190_G { u8 pad0[0x1C6]; u16 unk1C6; u16 unk1C8; };
extern struct func_801DB190_G D_800892B0;
extern u8 D_801E3B00[];
extern u8 D_801E3B0C[];
extern u8 D_801E3B18[];
struct func_801DB190_S3 { u8 pad0[4]; f32 unk4; u8 pad8[4]; f32 unkC; u8 pad10[2]; s16 unk12; };
struct func_801DB190_S2 { u8 pad0[0x30]; struct func_801DB190_S3 *unk30; };
struct func_801DB190_S1 { u8 pad0[0x24]; struct func_801DB190_S2 *unk24; };
struct func_801DB190_S0 { u8 pad0[8]; struct func_801DB190_S1 *unk8; };
extern struct func_801DB190_S0 *D_801BBC40;

#define CNT (*(u8 *)&D_801E4A90)
#define BTN (D_800892B0.unk1C6)
#define P (s0->unk24->unk30)

void func_801DB190(void) {
    struct func_801DB190_S1 *s0;
    s32 i;
    s32 n;
    u16 b;

    b = D_800892B0.unk1C8;
    if (b & 0x800) {
        CNT += 1;
    }
    if (b & 0x400) {
        CNT -= 1;
    }
    n = CNT;
    if (n <= 0) {
        n = (CNT = 1);
    }
    for (i = 0, s0 = D_801BBC40->unk8; i < n && s0 != NULL; i++) {
        s0 = *(struct func_801DB190_S1 **)s0;
    }
    if (BTN & 0x100) {
        P->unk12 += 1;
    }
    if (BTN & 0x200) {
        P->unk12 -= 1;
    }
    if (BTN & 1) {
        P->unk4 += func_8001EAD0(P->unk12);
        P->unkC -= func_8001EB64(P->unk12);
    }
    if (BTN & 2) {
        P->unk4 -= func_8001EAD0(P->unk12);
        P->unkC += func_8001EB64(P->unk12);
    }
    if (BTN & 8) {
        P->unk4 += func_8001EAD0(P->unk12);
        P->unkC += func_8001EB64(P->unk12);
    }
    if (BTN & 4) {
        P->unk4 -= func_8001EAD0(P->unk12);
        P->unkC -= func_8001EB64(P->unk12);
    }
    func_8001B204(0x14, 0x64, 0x64, D_801E3B00, P->unk12);
    func_8001B204(0x15, 0x64, 0x6C, D_801E3B0C, (s32)P->unk4);
    func_8001B204(0x16, 0x64, 0x74, D_801E3B18, (s32)P->unkC);
}

