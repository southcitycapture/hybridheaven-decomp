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


struct func_801DAEE8_StructP {
    u8 pad0[0x90];
    u8 unk90;
};
struct func_801DAEE8_StructG {
    u8 pad0[0x32];
    s16 unk32;
    u8 pad34[0xE0 - 0x34];
    struct func_801DAE70_StructB *unkE0;
    u8 padE4[0x198 - 0xE4];
    f32 unk198;
    f32 unk19C;
    f32 unk1A0;
    u8 pad1A4[0x230 - 0x1A4];
    u8 unk230;
    u8 pad231;
    u16 unk232;
    u8 pad234[0x35A - 0x234];
    u8 unk35A;
    u8 pad35B[0x374 - 0x35B];
    f32 unk374;
    f32 unk378;
    f32 unk37C;
    u8 pad380[0x38C - 0x380];
    struct func_801DAEE8_StructP *unk38C;
};
struct func_801DAEE8_StructH {
    u8 pad0[0x1CA];
    s16 unk1CA;
    s16 unk1CC;
    u16 unk1CE;
};
extern s16 func_8001EF38(f32, f32);
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern struct func_801DB190_G D_800892B0;
extern s32 func_8010843C(f32, f32, f32, f32, f32, f32);
extern s32 func_80108634(f32, f32, f32);

#define G ((struct func_801DAEE8_StructG *)D_801BBBF0)
#define H ((struct func_801DAEE8_StructH *)&D_800892B0)

void func_801DAEE8(s32 arg0, s32 arg1) {
    f32 sp3C;
    f32 sp38;
    f32 fv1;
    f32 fa1;

    if (func_80108634(G->unkE0->unk2C->unk4, G->unkE0->unk2C->unk8, G->unkE0->unk2C->unkC) != 0) {
        G->unkE0->unk2C->unk4 = G->unk374;
        G->unkE0->unk2C->unk8 = G->unk378;
        G->unkE0->unk2C->unkC = G->unk37C;
    }
    fa1 = G->unkE0->unk2C->unk8;
    fv1 = G->unkE0->unk2C->unkC;
    sp3C = G->unkE0->unk2C->unk4;
    G->unkE0->unk2C->unk8 = fa1 - 2.0f;
    if (func_8010843C(sp3C, fa1, fv1, G->unkE0->unk2C->unk4, G->unkE0->unk2C->unk8, G->unkE0->unk2C->unkC) != 0) {
        G->unkE0->unk2C->unk4 = G->unk374;
        G->unkE0->unk2C->unk8 = G->unk378;
        G->unkE0->unk2C->unkC = G->unk37C;
    }
    sp3C = G->unkE0->unk2C->unk4;
    sp38 = G->unkE0->unk2C->unk8;
    fv1 = G->unkE0->unk2C->unkC;
    G->unk230 = 0;
    if (H->unk1CE & 0xF00) {
        G->unk230 = 1;
        arg0 = (s16)(func_8001EF38((f32)H->unk1CC, (f32)-H->unk1CA) - 0x800);
        arg1 = G->unk232;
        arg1 = (arg0 + arg1) & 0x1FFF;
        G->unkE0->unk2C->unk12 = (u16)(0x800 - arg1) & 0x1FFF;
        G->unkE0->unk2C->unk4 += func_8001EB64(arg1) * (f32)2.0;
        G->unkE0->unk2C->unkC += func_8001EAD0(arg1) * (f32)2.0;
    }
    if (func_8010843C(sp3C, sp38, fv1, G->unkE0->unk2C->unk4, G->unkE0->unk2C->unk8, G->unkE0->unk2C->unkC) != 0) {
        G->unkE0->unk2C->unk4 = G->unk374;
        G->unkE0->unk2C->unk8 = G->unk378;
        G->unkE0->unk2C->unkC = G->unk37C;
        if (G->unk35A == 6 || G->unk35A == 7) {
            G->unk38C->unk90 = G->unk35A;
            G->unkE0->unk2C->unk4 = G->unk198;
            G->unkE0->unk2C->unk8 = G->unk19C;
            G->unkE0->unk2C->unkC = G->unk1A0;
            G->unkE0->unk2C->unk12 = G->unk32;
        }
    }
}


extern void func_8001B204(s32, s32, s32, void *, s32);
struct func_801DB190_G { u8 pad0[0x1C6]; u16 unk1C6; u16 unk1C8; };
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

