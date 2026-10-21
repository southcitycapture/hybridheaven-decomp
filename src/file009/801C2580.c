#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C2580/func_801C2580.s")

struct func_801C2820_S2C { u8 pad0[4]; f32 unk4; u8 pad8[4]; f32 unkC; u8 pad10[2]; s16 unk12; };
struct func_801C2820_S24 { u8 pad0[0x2C]; struct func_801C2820_S2C *unk2C; };
struct func_801C2820_S0 { u8 pad0[0x24]; struct func_801C2820_S24 *unk24; u8 pad28[0x18]; f32 unk40; f32 unk44; f32 unk48; u8 pad4C[0x10]; s32 unk5C; };
struct func_801C2820_SB { u8 pad0[0x1B4]; u16 unk1B4; u8 pad1B6[2]; s32 unk1B8; s32 unk1BC; s32 unk1C0; u8 pad1C4[0xC]; u16 unk1D0; u16 unk1D2; };
extern void func_8012A7F4(void *, s32, s32, s32);
extern s32 func_8012AE54(void *, s32, s32, s32);
extern void func_8012AEE0(void *, s32);
struct func_801C2820_S10 { s32 unk0; s32 unk4; s32 unk8; };
extern s32 func_8012CE9C(s32, s32, struct func_801C2820_S10, s32);
extern void func_801C3C3C(s32);
extern void func_800058DC(void *, void *);
extern void func_801C2580();
extern void func_801C3BAC(u16);
extern void func_801C3B48(s32);
extern s32 func_80010550(s32, s32);
extern struct func_801C2E20_Struct10 D_801E0B10;
extern struct func_801C2F0C_StructBBBF0 D_801BBBF0;
#define B ((struct func_801C2820_SB *)&D_801BBBF0)

void func_801C2820(struct func_801C2820_S0 *arg0, s32 arg1) {
    s32 sp34;
    u8 pad[4];
    s32 sp2C;

    sp34 = arg0->unk5C;
    if (B->unk1B4 & 1) {
        B->unk1B4 = B->unk1B4 & 0xFFFE;
        func_800058DC(arg0, func_801C2580);
        return;
    }
    arg0->unk24->unk2C->unk12 += B->unk1D0;
    func_8012A7F4(arg0, B->unk1B8, B->unk1BC, 0x80);
    func_8012AEE0(arg0, B->unk1C0);
    arg0->unk24->unk2C->unk12 -= B->unk1D0;
    if (func_8012CE9C(arg1, sp34, *(struct func_801C2820_S10 *)&D_801E0B10, 0xA) == 0) {
        func_80010550(arg1, sp34);
        sp2C = 0;
        if (B->unk1D2 != 0) {
            if (--B->unk1D2 == 0) {
                sp2C = 1;
                func_801C3C3C(0);
                arg0->unk24->unk2C->unk4 = *(f32 *)&B->unk1B8;
                arg0->unk24->unk2C->unkC = *(f32 *)&B->unk1BC;
            }
        }
        if (func_8012AE54(arg0, B->unk1B8, B->unk1BC, 0x3FC00000) == 0 || sp2C != 0) {
            arg0->unk44 = 0.0f;
            arg0->unk40 = 0.0f;
            arg0->unk48 = 0.0f;
            func_801C3BAC(0);
            func_801C3B48(4);
            func_800058DC(arg0, func_801C2580);
        }
    }
}

struct func_801C2E20_Struct0 {
    u8 pad0[0x5C];
    s32 unk5C;
};
struct func_801C2E20_Struct10 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};
extern s32 func_80011140(s32, s32, struct func_801C2E20_Struct10, s32);
struct func_801C2F0C_StructBBBF0 {
    u8 pad0[0x1B4];
    u16 unk1B4;
    u8 pad1[0x1E0 - 0x1B6];
    f32 unk1E0;
};

struct func_801C29BC_StructBBBF0 {
    u8 pad[0x1C4];
    u16 unk1C4;
};

void func_801C29BC(struct func_801C2E20_Struct0 *arg0, s32 arg1) {
    s32 sp24;

    sp24 = arg0->unk5C;
    if (D_801BBBF0.unk1B4 & 1) {
        D_801BBBF0.unk1B4 &= 0xFFFE;
        func_800058DC(arg0, func_801C2580);
        return;
    }
    if (func_80011140(arg1, sp24, D_801E0B10,
            ((struct func_801C29BC_StructBBBF0 *)&D_801BBBF0)->unk1C4) != 0) {
        func_801C3BAC(0);
        func_801C3B48(4);
        func_800058DC(arg0, func_801C2580);
    }
}


void func_801C2A74(struct func_801C2E20_Struct0 *arg0, s32 arg1) {
    s32 temp = arg0->unk5C;
    if (D_801BBBF0.unk1B4 & 1) {
        D_801BBBF0.unk1B4 = D_801BBBF0.unk1B4 & 0xFFFE;
        func_800058DC(arg0, func_801C2580);
        return;
    }
    if (func_80010550(arg1, temp) != 0) {
        func_801C3BAC(0);
        func_801C3B48(4);
        func_800058DC(arg0, func_801C2580);
    }
}


extern void func_8013A1B4();
extern void func_801C2BDC();

void func_801C2B00(struct func_801C2E20_Struct0 *arg0, s32 arg1) {
    s32 sp24;

    sp24 = arg0->unk5C;
    if (D_801BBBF0.unk1B4 & 1) {
        D_801BBBF0.unk1B4 &= 0xFFFE;
        func_800058DC(arg0, func_801C2580);
        return;
    }
    if (func_80011140(arg1, sp24, D_801E0B10,
                     *(u16 *)((u8 *)&D_801BBBF0 + 0x1C4)) != 0) {
        func_8013A1B4(arg1, D_801E0B10, 0xFFFFFF);
        func_800058DC(arg0, func_801C2BDC);
    }
}



void func_801C2BDC(struct func_801C2E20_Struct0 *arg0, s32 arg1)
{
    register s32 temp_a2;

    temp_a2 = arg0->unk5C;
    if (D_801BBBF0.unk1B4 & 1) {
        D_801BBBF0.unk1B4 &= 0xFFFE;
        func_800058DC(arg0, func_801C2580);
        return;
    }
    if (func_80010550(arg1, temp_a2) != 0) {
        func_801C3BAC(0);
        func_800058DC(arg0, func_801C2580);
        func_801C3BAC(0);
        func_801C3B48(4);
        func_800058DC(arg0, func_801C2580);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C2580/func_801C2C80.s")


struct func_801C2E20_Struct12 {
    u8 pad0[0x12];
    s16 unk12;
};
struct func_801C2E20_Struct2C {
    u8 pad0[0x2C];
    struct func_801C2E20_Struct12 *unk2C;
};
struct func_801C2E20_StructBBBF0 {
    u8 pad0[0xE0];
    struct func_801C2E20_Struct2C *unkE0;
    u8 pad1[0x1B4 - 0xE4];
    u16 unk1B4;
    u8 pad2[0x1D4 - 0x1B6];
    s16 unk1D4;
};

extern s16 func_801FD284(s16, s16, s32, void *);

void func_801C2E20(struct func_801C2E20_Struct0 *arg0, s32 arg1) {
    s32 sp24;

    sp24 = arg0->unk5C;
    if (((struct func_801C2E20_StructBBBF0 *) &D_801BBBF0)->unk1B4 & 1) {
        ((struct func_801C2E20_StructBBBF0 *) &D_801BBBF0)->unk1B4 = ((struct func_801C2E20_StructBBBF0 *) &D_801BBBF0)->unk1B4 & 0xFFFE;
        func_800058DC(arg0, &func_801C2580);
        return;
    }
    ((struct func_801C2E20_StructBBBF0 *) &D_801BBBF0)->unkE0->unk2C->unk12 = func_801FD284(((struct func_801C2E20_StructBBBF0 *) &D_801BBBF0)->unkE0->unk2C->unk12, ((struct func_801C2E20_StructBBBF0 *) &D_801BBBF0)->unk1D4, 0x3DCCCCCD, arg0);
    if (func_80011140(arg1, sp24, D_801E0B10, 0x19) != 0) {
        func_801C3BAC(0);
        func_801C3B48(4);
        func_800058DC(arg0, &func_801C2580);
    }
}


struct func_801C2F0C_Struct20 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
};


extern void func_801C3B5C();
extern s32 func_801C3BBC();
extern u8 D_801BBDA0[];
extern f32 D_801E0B18;

s32 func_801C2F0C(u16 arg0, void *arg1) {
    struct func_801C2F0C_Struct20 *src;

    if ((func_801C3B20() >= 2) && (func_801C3B3C() == 2)) {
        if (arg1 != NULL) {
            src = arg1;
            *(struct func_801C2F0C_Struct20 *) (D_801BBDA0 + 8) = *src;
        }
        D_801BBBF0.unk1B4 = 0;
        if (func_801C3BBC() != 0) {
            D_801BBBF0.unk1B4 = D_801BBBF0.unk1B4 | 1;
        }
        D_801BBBF0.unk1E0 = D_801E0B18;
        func_801C3BAC(arg0);
        func_801C3B5C();
        func_801C3BBC();
        return 1;
    }
    return 0;
}


extern s32 func_801C3B20();
extern s32 func_801C3B3C();

s32 func_801C2FF8(void) {
    if ((func_801C3B20() >= 2) && (func_801C3B3C() == 2)) {
        return 1;
    }
    return 0;
}


void func_801C3044(s32 arg0, struct func_801C3BBC_Struct *arg1) {
    func_801C3BBC(arg0, arg1);
}

