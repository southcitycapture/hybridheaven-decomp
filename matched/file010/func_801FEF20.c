#include "common.h"


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
