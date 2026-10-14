#include "context.h"

void func_8038BD50(f32, f32, f32);
void D_8038BD88(f32, f32, f32);
void func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);
extern f64 func_80034C24();
u64 func_801C0B2C();
struct func_801E7ECC_Struct1;
extern struct func_801E7ECC_Struct1 D_801BBBF0;

extern f64 D_801FBE28;
extern f64 D_801FBE30;
extern f64 D_801FBE38;
extern f64 D_801FBE40;
extern f64 D_801FBE48;
extern f64 D_801FBE50;
extern f64 D_801FBE58;
extern f64 D_801FBE60;
extern f64 D_801FBE68;
extern f64 D_801FBE70;
extern f64 D_801FBE78;
extern f64 D_801FBE80;
extern f64 D_801FBE88;
extern f64 D_801FBE90;
extern f64 D_801FBE98;
extern f64 D_801FBEA0;
extern f64 D_801FBEA8;
extern f64 D_801FBEB0;
extern f64 D_801FBEB8;
extern f64 D_801FBEC0;
extern f64 D_801FBEC8;
extern f64 D_801FBED0;
extern f64 D_801FBED8;
extern f64 D_801FBEE0;
extern f64 D_801FBEE8;
extern f64 D_801FBEF0;
extern f64 D_801FBEF8;
extern f64 D_801FBF00;
extern f64 D_801FBF08;
extern f64 D_801FBF10;
extern f64 D_801FBF18;
extern f64 D_801FBF20;
extern f64 D_801FBF28;
extern f64 D_801FBF30;
extern f64 D_801FBF38;
extern f64 D_801FBF40;
extern f64 D_801FBF48;
extern f64 D_801FBF50;
extern f32 D_801FBF58;
extern f32 D_801FBF5C;
extern f32 D_801FBF60;

typedef struct {
    u8 pad[0x30];
    f32 unk30;
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
} func_801E2D94_Struct3;

typedef struct {
    u8 pad[0x2C];
    func_801E2D94_Struct3 *unk2C;
} func_801E2D94_Struct2;

typedef struct {
    u8 pad[0xE8];
    func_801E2D94_Struct2 *unkE8;
} func_801E2D94_Struct1;

#define S (*(func_801E2D94_Struct1 *)&D_801BBBF0)
typedef struct {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
} func_801E2D94_Struct7;

typedef struct {
    u8 pad0[0x2C];
    func_801E2D94_Struct7 *unk2C;
} func_801E2D94_Struct6;

typedef struct {
    u8 pad0[0x24];
    func_801E2D94_Struct6 *unk24;
} func_801E2D94_Struct5;

typedef struct {
    u8 pad0[8];
    func_801E2D94_Struct5 *unk8;
} func_801E2D94_Struct4;

#define N (*(func_801E2D94_Struct4 **)&D_801DAB14)

s32 func_801E2D94(s32 arg0, s32 arg1) {
    f64 z;
    f64 w;
    f64 k;

    if (func_801C0B8C(0x08DAFF90) != 0) {
        return 0xC;
    }
    if (func_801C0B8C(0x08695200) != 0) {
        w = (f32)((f32)(func_80034C24(func_801C0B2C()) / D_801FBE28 - D_801FBE30) / D_801FBE38);
        k = w * D_801FBE40;
        S.unkE8->unk2C->unk30 = k + D_801FBE48;
        S.unkE8->unk2C->unk34 = k + D_801FBE50;
        S.unkE8->unk2C->unk38 = w * D_801FBE58 + D_801FBE60;
        S.unkE8->unk2C->unk3C = w * D_801FBE68 + D_801FBE70;
        S.unkE8->unk2C->unk40 = w * D_801FBE78 + D_801FBE80;
        S.unkE8->unk2C->unk44 = w * D_801FBE88 + D_801FBE90;
        return 0xB;
    }
    if (func_801C0B8C(0x079D9D90) != 0) {
        w = (f32)((f32)(func_80034C24(func_801C0B2C()) / D_801FBE98 - D_801FBEA0) / D_801FBEA8);
        S.unkE8->unk2C->unk30 = w * D_801FBEB0 + D_801FBEB8;
        S.unkE8->unk2C->unk34 = w * D_801FBEC0 + D_801FBEC8;
        S.unkE8->unk2C->unk38 = w * D_801FBED0 + D_801FBED8;
        S.unkE8->unk2C->unk3C = w * D_801FBEE0 + 20.0;
        z = 1.0 - 1.0;
        S.unkE8->unk2C->unk40 = w * z + D_801FBEE8;
        S.unkE8->unk2C->unk44 = w * z + D_801FBEF0;
        return 0xB;
    }
    if (func_801C0B8C(0x072B2CB0) != 0) {
        w = (f32)((f32)(func_80034C24(func_801C0B2C()) / D_801FBEF8 - D_801FBF00) / 7.5);
        k = w * D_801FBF08;
        S.unkE8->unk2C->unk30 = k + D_801FBF10;
        S.unkE8->unk2C->unk34 = k + D_801FBF18;
        S.unkE8->unk2C->unk38 = w * D_801FBF20 + D_801FBF28;
        S.unkE8->unk2C->unk3C = w * D_801FBF30 + D_801FBF38;
        z = w * D_801FBF40;
        S.unkE8->unk2C->unk40 = z + D_801FBF48;
        S.unkE8->unk2C->unk44 = z + D_801FBF50;
        return 0xB;
    }
    if (func_801C0B8C(0x071BEA70) != 0) {
        func_8038BD50(24.5f, D_801FBF58, 6.7f);
        D_8038BD88(16.5f, D_801FBF5C, 11.7f);
        N->unk8->unk24->unk2C->unk4 = D_801FBF60;
        N->unk8->unk24->unk2C->unk8 = 0.0f;
        N->unk8->unk24->unk2C->unkC = 4.5f;
        N->unk8->unk24->unk2C->unk12 = 0;
        func_801CC470(0, 0x01B80015, 0, 0x1001, 1.0f);
    }
    return 0xB;
}
