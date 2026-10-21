#include "context.h"

typedef struct func_80242B2C_StructA {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad10[0x95];
    u8 unkA5;
} func_80242B2C_StructA;

typedef struct func_80242B2C_StructB {
    s16 unk0;
    s16 unk2;
    u8 pad4[2];
    s16 unk6;
    u8 pad8[0x28];
    u32 unk30_0 : 3;
    u32 unk30_3 : 4;
    u32 unk30_7 : 2;
    u32 unk30_9 : 2;
    u32 unk30_11 : 2;
    u32 unk30_13 : 19;
    u8 pad34[4];
    u32 unk38;
    u8 pad3C[0x29D];
    u8 unk2D9;
} func_80242B2C_StructB;

typedef struct func_80242B2C_StructC {
    u8 pad0[0x33];
    u8 b7 : 1;
} func_80242B2C_StructC;

extern s32 func_802242D0(s32);
extern void func_8022AAA8(void *);
extern f64 D_802491E8;

void func_80242B2C(func_80242B2C_StructA *arg0, func_80242B2C_StructB *arg1) {
    f64 a;
    f64 b;
    s32 t;

    if ((arg1->unk38 >> 31) != 0) {
        if ((f64)arg1->unk2 < (f64)arg1->unk0 * 0.5) {
            arg0->unkA5 = 0;
            return;
        }
        if (arg1->unk6 >= 100) {
            arg0->unkA5 = 1;
            return;
        }
        arg0->unkA5 = 2;
        return;
    }
    if (arg1->unk30_11 != 0) {
        if (((f64)arg1->unk2 < (f64)arg1->unk0 * 0.5) && (arg1->unk6 >= 100)) {
            arg0->unkA5 = 1;
            return;
        }
        arg0->unkA5 = 2;
        return;
    }
    if (((s32)arg1->unk30_3 == 1) || ((s32)arg1->unk30_3 == 4) || (((func_80242B2C_StructC *)arg1)->b7 == 1) || (func_802242D0(arg0->unkC) == 0)) {
        arg0->unkA5 = 2;
        arg1->unk2D9 = 0;
    }
    if (((f64)arg1->unk2 < (f64)arg1->unk0 * D_802491E8) && (arg1->unk6 >= 100) && (arg1->unk30_9 != 0)) {
        arg0->unkA5 = 1;
        return;
    }
    if ((f64)arg1->unk2 < (f64)arg1->unk0 * 0.5) {
        arg0->unkA5 = 0;
        return;
    }
    arg0->unkA5 = 2;
    b = (f64) * (f32 *)(D_801BC3D8 + 0x3A8);
    if (b < 15.0) {
        arg1->unk2D9 = 0;
        return;
    }
    if (b < 22.0) {
        arg1->unk2D9 = 4;
        return;
    }
    func_8022AAA8(arg0);
}
