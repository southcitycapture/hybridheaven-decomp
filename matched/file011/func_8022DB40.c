#include "common.h"


typedef struct func_8022DB40_StructB {
    u8 pad0[7];
    u8 unk7;
    u8 pad8;
    u8 unk9;
    u8 unkA;
    u8 padB[2];
    u8 unkD;
    u8 unkE;
    u8 padF[2];
    u8 unk11;
} func_8022DB40_StructB;
typedef struct func_8022DB40_StructEnt {
    s16 v;
    u8 pad[4];
} func_8022DB40_StructEnt;
typedef struct func_8022DB40_Struct {
    u8 pad0[0x30];
    u32 unk30;
    u8 pad34[0x4E - 0x34];
    u16 unk4E;
    u8 pad50[0x82 - 0x50];
    u16 unk82;
    u16 unk84;
    u16 unk86;
    u16 unk88;
    u16 unk8A;
    u16 unk8C;
    u8 pad8E[0x9A - 0x8E];
    u16 unk9A;
    u8 pad9C[0xAA - 0x9C];
    func_8022DB40_StructEnt unkAA[1];
    u8 pad_[0x2D4 - 0xB0];
    func_8022DB40_StructB *unk2D4;
} func_8022DB40_Struct;
extern f32 func_8002FC20(f32, s32, u16, u16);

u16 func_8022DB40(void *object) {
    func_8022DB40_Struct *self = object;
    func_8022DB40_StructB *p;
    u16 w82, w84, w86, w88, w8A, w8C;
    s16 sp22;
    f32 sp1C;
    s32 av;
    s16 v1;
    s16 sv0;

    p = self->unk2D4;
    w82 = self->unk82;
    w84 = self->unk84;
    w86 = self->unk86;
    w88 = self->unk88;
    w8A = self->unk8A;
    w8C = self->unk8C;
    switch (p->unk9) {
    case 0:
        if (((self->unk30 << 9) >> 0x1E) == 2) {
            self->unk9A = (u32)((f64)(f32)w86 * 1.5 + (f64)(f32)w8A * 0.5 + (f64)w84 + 0.5);
        } else {
            self->unk9A = (u32)((f64)(f32)w86 * 1.5 + (f64)(f32)w8C * 0.5 + (f64)w84 + 0.5);
        }
        break;
    case 1:
        if (((self->unk30 << 9) >> 0x1E) == 2) {
            self->unk9A = (u32)((f64)(f32)w88 * 1.5 + (f64)(f32)w8A * 0.5 + (f64)w84 + 0.5);
        } else {
            self->unk9A = (u32)((f64)(f32)w88 * 1.5 + (f64)(f32)w8C * 0.5 + (f64)w84 + 0.5);
        }
        break;
    case 2:
        self->unk9A = (u32)((f64)(f32)w8A * 1.5 + (f64)(f32)w8C * 0.5 + (f64)((f32)w84 / 2) + 0.5);
        break;
    case 3:
        self->unk9A = (u32)((f64)(f32)w8A * 0.5 + (f64)(f32)w8C * 1.5 + (f64)((f32)w84 / 2) + 0.5);
        break;
    case 4:
        self->unk9A = (u32)((f64)((f32)(w86 + w88) / 2 + (f32)(w8A + w8C) / 2 + (f32)w84) + 0.5);
        break;
    case 5:
        self->unk9A = (u32)((f64)((f32)((f64)w86 * 0.8) + (f32)((f64)w88 * 0.8) + (f32)w84) + 0.5);
        break;
    case 6:
        self->unk9A = (u32)((f64)((f32)((s32)w86 / 2) + (f32)((s32)w88 / 2) + (f32)((f64)w8A * 0.6) + (f32)((f64)w8C * 0.6) + (f32)w84) + 0.5);
        break;
    case 7:
        self->unk9A = (u32)((f64)((f32)((f64)w86 * 0.6) + (f32)((f64)w88 * 0.6) + (f32)((f64)w8A * 0.3) + (f32)((f64)w8C * 0.3) + (f32)w84) + 0.5);
        break;
    case 8:
        self->unk9A = (u32)((f64)((f32)((f64)w86 * 0.4) + (f32)((f64)w88 * 0.8) + (f32)w84) + 0.5);
        break;
    case 9:
        self->unk9A = (u32)((f32)((f64)w8A * 0.8) + (f32)((f64)w8C * 0.8) + (f32)w84);
        break;
    case 10:
        self->unk9A = (u32)((f64)((f32)((f64)w86 * 0.2) + (f32)((f64)w88 * 0.3) + (f32)((f64)w8A * 0.6) + (f32)((f64)w8C * 0.6) + (f32)w84) + 0.5);
        break;
    case 11:
        self->unk9A = w82;
        break;
    default:
        self->unk9A = w86;
        break;
    }
    sp1C = (f32)((f64)(f32)((f64)(u32)self->unk9A * 0.01) + 0.97);
    sv0 = self->unkAA[p->unkA].v;
    if (sv0 < 0) {
        av = -sv0;
    } else {
        av = sv0;
    }
    v1 = av - p->unkE;
    if (v1 < 0) {
        v1 = 0;
    }
    switch (p->unk11) {
    case 0:
        av = (s16)(p->unkD * v1);
        break;
    case 1:
        av = (s16)(s32)(func_8002FC20((f32)(v1 * 0x6E), av, w8C, w88) * (f32)(u32)p->unkD);
        break;
    case 2:
        av = (s16)(p->unkD * (v1 / 10) * (v1 / 10));
        break;
    case 3:
        av = (s16)(s32)(func_8002FC20((f32)(v1 * 0xDC), av, w8C, w88) * (f32)(u32)p->unkD);
        break;
    case 4:
        av = (s16)(p->unkD * (v1 / 14) * (v1 / 14));
        break;
    default:
        av = sp22;
        break;
    }
    if (av < 0) {
        av = 0;
    }
    av = (s16)(av / 100);
    self->unk9A = (u32)((f64)((f32)(p->unk7 + av) + ((f32)(u32)self->unk4E * sp1C)) + 0.5);
    return self->unk9A;
}
