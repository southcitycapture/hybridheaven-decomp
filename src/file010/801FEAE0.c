#include "common.h"

#define D_80172570 D_80172570__func_801FEAE0
#define D_80181A84 D_80181A84__func_801FEAE0
#define func_80146088 func_80146088__func_801FEAE0


typedef struct func_801FEAE0_Struct {
    s16 x, y, w, h;
    u8 r, g, b, a;
    u8 r2, g2, b2, a2;
    u16 flags;
    s16 unk12;
    u8 pad14[4];
    u16 unk18;
    u8 pad1A[2];
    s32 unk1C;
    u8 pad20[8];
    s16 unk28, unk2A, unk2C, unk2E, unk30, unk32;
} func_801FEAE0_Struct;
typedef struct func_801FEAE0_StructData {
    u16 *unk0;
    s32 *unk4;
} func_801FEAE0_StructData;
typedef struct func_801FEAE0_StructDesc {
    u8 pad[12];
    func_801FEAE0_Struct *unkC;
} func_801FEAE0_StructDesc;
extern func_801FEAE0_StructData *D_80172570;
extern func_801FEAE0_StructDesc D_80181A84;
extern s32 func_80146088(void *, func_801FEAE0_StructDesc *, s8 *);

s32 func_801FEAE0(arg0, arg1, arg2, arg3, arg4, arg5, arg6)
    void *arg0;
    u8 arg1;
    s16 arg2;
    s16 arg3;
    s32 arg4;
    s8 *arg5;
    volatile u8 arg6;
{
    u8 unusedTail[8];
    func_801FEAE0_Struct sp24;
    func_801FEAE0_StructData **dataRef = &D_80172570;

    sp24.x = arg2;
    sp24.y = arg3;
    sp24.unk30 = sp24.w = 12;
    sp24.unk32 = sp24.h = 16;
    if (arg6 == 0) {
        sp24.r = 255;
        sp24.g = 48;
        sp24.b = 0;
        sp24.a = 255;
    } else {
        s32 m = arg6;
        if (m == 1) {
            sp24.r = 0;
            sp24.g = 255;
            sp24.b = 48;
            sp24.a = 255;
        } else if (m == 3) {
            sp24.r = 255, sp24.g = 48;
            sp24.b = 0;
            sp24.a = 255;
        } else {
            sp24.r = 255;
            sp24.g = 144;
            sp24.b = 0;
            sp24.a = 255;
        }
    }
    sp24.b2 = sp24.g2 = sp24.r2 = 0;
    sp24.a2 = 255;
    sp24.flags = ((u16)arg4 & (u16)~0x46) | 0x46;
    sp24.unk12 = 0;
    sp24.unk18 = *(*dataRef)->unk0;
    sp24.unk1C = *(*dataRef)->unk4;
    sp24.unk28 = 128;
    sp24.unk2A = 16;
    sp24.unk2E = arg1 * 12;
    sp24.unk2C = 0;
    D_80181A84.unkC = &sp24;
    return func_80146088(arg0, &D_80181A84, arg5);
}
#undef D_80172570
#undef D_80181A84
#undef func_80146088

#define func_80006214 func_80006214__func_801FEC58
#define func_801FEAE0 func_801FEAE0__func_801FEC58

typedef struct func_801FEC58_Struct {
    u8 pad0[0x90];
    u8 unk90;
    u8 pad91[0xAB - 0x91];
    u8 unkAB;
} func_801FEC58_Struct;
extern s8 func_80006214(void *);
extern s32 func_801FEAE0(void *, u8, s16, s16, s32, s8 *, u8);

void func_801FEC58(arg0, arg1, arg2, arg3, arg4)
    func_801FEC58_Struct *arg0;
    s16 arg1;
    s16 arg2;
    s16 arg3;
    u8 arg4;
{
    s8 sp37;
    u8 var_t0;

    sp37 = 0;
    var_t0 = 0;
    arg0->unk90 = 0;
    if (arg1 >= 1000) {
        func_801FEAE0(arg0, arg1 / 1000, arg2 - 0x24, arg3, 0x20, &sp37, arg4);
        arg1 -= (arg1 / 1000) * 1000;
        if (arg1 < 0) {
            arg1 = 0;
        }
        var_t0 = 1;
        arg0->unk90++;
    }
    if ((arg1 >= 100) || (var_t0 != 0)) {
        func_801FEAE0(arg0, arg1 / 100, arg2 - 0x18, arg3, 0x20, &sp37, arg4);
        var_t0 = 1;
        arg1 -= (arg1 / 100) * 100;
        if (arg1 < 0) {
            arg1 = 0;
        }
        arg0->unk90++;
    }
    if ((arg1 >= 10) || (var_t0 != 0)) {
        func_801FEAE0(arg0, arg1 / 10, arg2 - 0xC, arg3, 0x20, &sp37, arg4);
        arg1 -= (arg1 / 10) * 10;
        if (arg1 < 0) {
            arg1 = 0;
        }
        arg0->unk90++;
    }
    func_801FEAE0(arg0, arg1, arg2, arg3, 0x20, &sp37, arg4);
    arg0->unkAB = func_80006214(arg0);
    arg0->unk90++;
}
#undef func_80006214
#undef func_801FEAE0


extern void func_800058DC(void *, void *);
extern void func_801FEC58();
#define func_801FEF20 func_801FEF20__decl150
extern s32 func_801FEF20;

typedef struct func_801FEE94_Struct {
    u8 pad0[0x94];
    s16 unk94;
    u8 unk96;
    u8 unk97;
    u8 unk98;
    u8 pad99[0xA4 - 0x99];
    s16 unkA4;
    s16 unkA6;
    u8 padA8[0xB0 - 0xA8];
    s16 unkB0;
} func_801FEE94_Struct;

void func_801FEE94(func_801FEE94_Struct *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = arg0->unk98;
    arg0->unk98 = temp_v0 - 1;
    if (temp_v0 == 0) {
        if (arg0->unk96 == 0) {
            arg0->unkA4 = 0x78;
            arg0->unkA6 = 0x64;
        } else {
            arg0->unkA4 = 0xC8;
            arg0->unkA6 = 0x64;
        }
        func_801FEC58(arg0, arg0->unk94, arg0->unkA4, arg0->unkA6, arg0->unk97);
        arg0->unkB0 = -0x14;
        func_800058DC(arg0, &func_801FEF20);
    }
}
#undef func_801FEF20

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FEAE0/D_80219230.s")

#define D_80219340 D_80219340__func_801FEF20
#define D_80219348 D_80219348__func_801FEF20
#define func_80005700 func_80005700__func_801FEF20


typedef struct func_801FEF20_StructC {
    s16 unk0;
    s16 unk2;
    u8 pad4[0xB - 0x4];
    s8 unkB;
    u8 padC[0x34 - 0xC];
    f32 unk34;
    f32 unk38;
} func_801FEF20_StructC;

typedef struct func_801FEF20_StructB {
    u8 pad0[0x30];
    func_801FEF20_StructC *unk30;
} func_801FEF20_StructB;

typedef struct func_801FEF20_Struct {
    u8 pad0[0x90];
    u8 unk90;
    u8 pad91[0x96 - 0x91];
    u8 unk96;
    u8 unk97;
    u8 pad98[0xA4 - 0x98];
    s16 unkA4;
    s16 unkA6;
    u8 padA8[0xB0 - 0xA8];
    s16 unkB0;
} func_801FEF20_Struct;
extern void func_80005700();
extern f64 D_80219340;
extern f64 D_80219348;

void func_801FEF20(func_801FEF20_Struct *arg0, func_801FEF20_StructB **arg1) {
    f32 k;
    f32 f;
    s32 m;
    s32 t;
    u8 i;

    k = (arg0->unk97 != 3) ? (f32) D_80219340 : (f32) D_80219348;
    if (arg0->unk97 == 3) {
        m = 10;
    } else {
        m = 0;
    }
    if (arg0->unkB0 < 0) {
        arg0->unkB0++;
        return;
    }
    if (arg0->unkB0++ < 20) {
        for (i = 0; i < arg0->unk90; i++) {
            if (arg0->unk96 != 0) {
                arg1[i]->unk30->unk0 = arg0->unkB0 * 6 + arg0->unkA4 - (arg0->unk90 - i) * 12 + 12;
                arg1[i]->unk30->unk2 = (f32) arg0->unkB0 * (k * (f32) arg0->unkB0) / 2 + (f32) (arg0->unkA6 - m * arg0->unkB0);
            } else {
                arg1[i]->unk30->unk0 = arg0->unkA4 - (arg0->unk90 - i) * 12 - arg0->unkB0 * 6 + 12;
                t = arg0->unkB0;
                f = t;
                arg1[i]->unk30->unk2 = (f32) (arg0->unkA6 + m * t) - f * (k * f) / 2;
            }
            arg1[i]->unk30->unkB = 0xFF - arg0->unkB0 * 12;
            f = 1.0 - arg0->unkB0 * 0.04;
            arg1[i]->unk30->unk38 = f;
            arg1[i]->unk30->unk34 = f;
        }
    } else {
        func_80005700();
    }
}
#undef D_80219340
#undef D_80219348
#undef func_80005700

/* Readonly constants retained after the last ASM donor became C. */
static const f64 D_80219340__rodata[] = {1.2};
static const f64 D_80219348__rodata[] = {1.2};
#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FEAE0/_pad_16.s")
