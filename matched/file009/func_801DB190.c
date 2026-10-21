#include "context.h"

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
