#include "context.h"

typedef struct func_802460E0_StructC {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0x38];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
} func_802460E0_StructC;
typedef struct func_802460E0_StructB {
    u8 pad0[0x30];
    func_802460E0_StructC *unk30;
} func_802460E0_StructB;
typedef struct func_802460E0_StructA {
    u8 pad0[0x3C];
    u16 unk3C;
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad4C[0x45];
    u8 unk91;
    s16 unk92;
    f32 unk94;
    f32 unk98;
    f32 unk9C;
} func_802460E0_StructA;
typedef struct func_802460E0_StructE {
    u8 pad0[4];
    f32 unk4;
    u8 pad8[4];
    f32 unkC;
} func_802460E0_StructE;
typedef struct func_802460E0_StructD {
    u8 pad0[0x2C];
    func_802460E0_StructE *unk2C;
} func_802460E0_StructD;
typedef struct func_802460E0_StructG {
    u8 pad0[0xE0];
    func_802460E0_StructD *unkE0;
} func_802460E0_StructG;

extern s32 func_8010843C(f32, f32, f32, f32, f32, f32);
extern void func_80129FB8(f32, f32, f32, f32, f32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32, s32);
extern f64 D_8024F0D0;
extern f64 D_8024F0D8;
extern f64 D_8024F0E0;
extern f64 D_8024F0E8;
extern f64 D_8024F0F0;
extern f32 D_8024F0F8;
extern f32 D_8024F0FC;

s32 func_802460E0(func_802460E0_StructA *arg0, func_802460E0_StructB **arg1) {
    f32 fv1;
    f32 fa0;
    f32 y;
    f32 z;
    f32 t;

    fv1 = arg0->unk9C;
    arg0->unk40 = arg0->unk40 + D_8024F0D0;
    fa0 = ((func_802460E0_StructG *)D_801BBBF0)->unkE0->unk2C->unkC;
    if (fv1 < fa0 && arg0->unk48 < D_8024F0D8) {
        arg0->unk48 = arg0->unk48 + D_8024F0E0;
    } else if (fa0 < fv1) {
        if (D_8024F0E8 < arg0->unk48) {
            arg0->unk48 = arg0->unk48 - D_8024F0F0;
        }
    }
    if ((*arg1)->unk30->unk4B != 0xFF) {
        (*arg1)->unk30->unk4B = (*arg1)->unk30->unk4B + 0x20;
        if ((*arg1)->unk30->unk4B >= 0xE0) {
            (*arg1)->unk30->unk4B = 0xFF;
        }
    }
    if (((func_802460E0_StructG *)D_801BBBF0)->unkE0->unk2C->unk4 + 50.0f <= arg0->unk94) {
        return 0;
    }
    y = arg0->unk98;
    z = arg0->unk9C;
    if (func_8010843C(arg0->unk94 - arg0->unk40, y + 5.0f - arg0->unk44, z - arg0->unk48, arg0->unk94, y, z) != 0) {
        func_801FD644(arg0->unk94, arg0->unk98, arg0->unk9C, 0.6f, 0x800, 5.0f, 1.0f, (u32)(func_801FD780(arg0->unk91) * 60.0f));
        func_80129FB8(arg0->unk94, arg0->unk98, arg0->unk9C, 0.0f, 0.0f, 0.0f, 0.0f, 0xFF, 0xFF, 0xFF, 0xFF, 0, 0, 0xD2, -6, D_8024F0F8, 0x16, 0);
        return 0;
    }
    if (arg0->unk3C++ >= 0x258) {
        return 0;
    }
    if (func_801FD644(arg0->unk94, arg0->unk98, arg0->unk9C, 5.5f, 0x800, 2.0f, 1.0f, (u32)(func_801FD780(arg0->unk91) * 100.0f)) != 0) {
        func_80129FB8(arg0->unk94, arg0->unk98, arg0->unk9C, 0.0f, 0.0f, 0.0f, 0.0f, 0xFF, 0xFF, 0xFF, 0xFF, 0, 0, 0xD2, -6, D_8024F0FC, 0x16, 0);
        return 0;
    }
    t = func_8001EB64(arg0->unk92) * 0.25 + 0.75;
    arg0->unk92 = (s16)((s16)(arg0->unk92 + 0x400) & 0x1FFF);
    (*arg1)->unk30->unk48 = 0xFF;
    (*arg1)->unk30->unk49 = 0xFF;
    (*arg1)->unk30->unk4A = 0xFF;
    (*arg1)->unk30->unk4C = (u32)(255.0f * t);
    (*arg1)->unk30->unk4D = (u32)(90.0f * t);
    (*arg1)->unk30->unk4E = (u32)(26.0f * t);
    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk8 = arg0->unk98;
    (*arg1)->unk30->unkC = arg0->unk9C;
    return 1;
}
