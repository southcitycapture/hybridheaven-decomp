#include "common.h"
typedef void func_8037B86C_Struct;
typedef struct func_8037AA80_Struct { s32 a; s32 b; s32 c; } func_8037AA80_Struct;
extern s32 D_80011140(s32, s32, func_8037AA80_Struct, s32);
extern u16 D_8017DC40[2];
typedef struct func_8037BAEC_StructBBBF0 {
    u8 pad[0xEF0];
    u16 unkEF0;
} func_8037BAEC_StructBBBF0;
extern func_8037BAEC_StructBBBF0 D_801BBBF0;
typedef struct func_8037A320_StructV {
    u8 pad[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_8037A320_StructV;
typedef struct func_8037A320_StructG {
    u8 pad[0x2C];
    func_8037A320_StructV *unk2C;
} func_8037A320_StructG;
extern func_8037A320_StructG *D_801BBCD0;
extern u16 D_801BCAE0;
extern func_8037AA80_Struct D_803889C0;
extern func_8037AA80_Struct D_803889CC;
extern func_8037AA80_Struct D_803889D8;
extern func_8037AA80_Struct D_803889E4;
extern func_8037AA80_Struct D_803889F0;
extern func_8037AA80_Struct D_803889FC;
extern func_8037AA80_Struct D_80388A08;
extern func_8037AA80_Struct D_80388A14;
extern s16 D_80388A68;
extern u8 D_80388A6C;
typedef struct func_8037BAEC_StructA930 {
    f32 unk0;
    f32 unk4;
    f32 unk8;
} func_8037BAEC_StructA930;
extern func_8037BAEC_StructA930 D_8038A930;
extern u8 D_8038A93E;
void func_800058DC(void *, void *);
extern void func_801518D4(s32, s32, s32);
extern void func_801C4A5C(void *, s32);
typedef struct func_8037A320_StructE {
    u32 w0;
    s16 h4;
    s16 h6;
    s32 w8;
} func_8037A320_StructE;
typedef struct func_8037A320_StructP {
    u8 pad[0x1C];
    func_8037A320_StructE e;
} func_8037A320_StructP;
typedef struct func_80379F04_StructA {
    u8 pad[0x2C];
    s32 unk2C;
    u8 pad2[0x10];
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad3[0x10];
    func_8037A320_StructP *unk5C;
} func_80379F04_StructA;
void func_80379F04(func_80379F04_StructA *arg0, s32 arg1);
typedef struct func_8037AB08_B { u8 pad[0x230]; u8 unk230; u8 pad2[0xEF0-0x231]; u16 unkEF0; u8 pad3[0xEFC-0xEF2]; s32 unkEFC; } func_8037AB08_B;
typedef struct func_8037AB08_P { u8 pad[0x1C]; s32 unk1C; } func_8037AB08_P;
typedef struct func_8037AB08_O { u8 pad[0x2C]; s32 unk2C; u8 pad2[0x24]; s32 unk54; u8 pad3[4]; func_8037AB08_P *unk5C; } func_8037AB08_O;

extern void func_8037B240(void);
extern void func_801BF1A0(s32);
extern void func_801DFE50(void *, s32);
extern void func_800113D0(s32, u16 *);
extern void func_80011198(s32, void *);
extern s32 func_8001EF38(f32, f32);
extern u8 D_801E4010;
extern s8 D_8038A93D;

typedef struct func_80379970_StructV { u8 pad[0x12]; s16 unk12; } func_80379970_StructV;
typedef struct func_80379970_StructE {
    s32 w0;
    u16 h4;
    u16 h6;
    s32 w8;
} func_80379970_StructE;
typedef struct func_80379970_StructP {
    u8 pad[0x1C];
    func_80379970_StructE e;
} func_80379970_StructP;

void func_80379970(func_8037AB08_O *arg0, s32 arg1) {
    func_80379970_StructP *s0;
    func_80379970_StructE *p;
    s32 var_a1;
    s32 temp_v0;
    u16 temp_v1_2;

    s0 = (func_80379970_StructP *) arg0->unk5C;
    p = &s0->e;
    D_8038A93E = ((func_8037AB08_B *) &D_801BBBF0)->unk230;
    ((func_8037AB08_B *) &D_801BBBF0)->unk230 = 1;
    if (D_80388A68 >= (s32) D_8017DC40[1]) {
        var_a1 = 5;
    } else {
        if (((f64) (u32) D_8017DC40[0] * 0.05) < (f64) D_80388A68) {
            var_a1 = 4;
        } else {
            var_a1 = 3;
        }
    }
    func_801DFE50(arg0, var_a1);
    if ((p->w0 == 0x01680017) || (p->w0 == 0x01680015)) {
        if (p->w0 == 0x01680017) {
            if (p->h6 & 0x10) {
                D_8038A93D = 1;
            } else {
                D_8038A93D = 0;
            }
        } else if (p->h6 & 0x10) {
            if (p->h4 < 0xF) {
                D_8038A93D = 1;
            } else {
                D_8038A93D = 0;
            }
        } else if (p->h4 < 0xF) {
            D_8038A93D = 0;
        } else {
            D_8038A93D = 1;
        }
        func_800113D0(arg1, &p->h6);
        func_80011198(arg1, s0);
        func_800058DC(arg0, &func_8037B240);
        return;
    }
    func_800113D0(arg1, &p->h6);
    D_801BCAE0 = D_801BBBF0.unkEF0 & 0xFEFF;
    if (D_801E4010 != 0) {
        func_801BF1A0(0xD);
    }
    arg0->unk2C |= 0x40;
    arg0->unk2C |= 0x20;
    arg0->unk2C &= ~0x80;
    temp_v1_2 = (s16) (((func_80379970_StructV *) D_801BBCD0->unk2C)->unk12 -
        (s16) ((func_8001EF38(D_8038A930.unk0, D_8038A930.unk8) + 0x1000) & 0xFFFF)) & 0x1FFF;
    if (temp_v1_2 < 0x400) {
        D_80388A6C = 0;
    } else if (temp_v1_2 < 0xC00) {
        D_80388A6C = 3;
    } else if (temp_v1_2 < 0x1400) {
        D_80388A6C = 1;
    } else if (temp_v1_2 < 0x1C00) {
        D_80388A6C = 2;
    } else {
        D_80388A6C = 0;
    }
    if ((f64) ((D_8038A930.unk0 * D_8038A930.unk0) + (D_8038A930.unk8 * D_8038A930.unk8)) < 1.0) {
        D_80388A6C += 4;
    }
    arg0->unk54 = 0x1F;
    func_801C4A5C(arg0, 0);
    if ((s32) D_80388A6C < 4) {
        func_801518D4(0, 7, 8);
    } else {
        func_801518D4(0, 3, 5);
    }
    func_80011198(arg1, s0);
    switch (D_80388A6C) {
    case 0:
        D_80011140(arg1, (s32) s0, D_803889C0, 2);
        break;
    case 1:
        D_80011140(arg1, (s32) s0, D_803889CC, 2);
        break;
    case 2:
        D_80011140(arg1, (s32) s0, D_803889D8, 2);
        break;
    case 3:
        D_80011140(arg1, (s32) s0, D_803889E4, 2);
        break;
    case 4:
        D_80011140(arg1, (s32) s0, D_803889F0, 2);
        break;
    case 5:
        D_80011140(arg1, (s32) s0, D_803889FC, 2);
        break;
    case 6:
        D_80011140(arg1, (s32) s0, D_80388A08, 2);
        break;
    case 7:
        D_80011140(arg1, (s32) s0, D_80388A14, 2);
        break;
    }
    func_800058DC(arg0, &func_80379F04);
}
