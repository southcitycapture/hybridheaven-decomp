#include "common.h"
#define a0
#define a1
extern u8 D_801BBBF0[];
typedef struct func_80232E94_Obj2 {
    u8 pad0[0x9C];
    u8 unk9C;
} func_80232E94_Obj2;
typedef struct func_80232E94_Obj {
    u8 pad0[0x5C];
    func_80232E94_Obj2 *unk5C;
} func_80232E94_Obj;
typedef struct func_80232E94_Struct {
    u8 pad0[0x30];
    u8 unk30;
    u8 pad1[0x2D8 - 0x31];
    u8 unk2D8;
    u8 pad2[0x2DA - 0x2D9];
    u8 unk2DA;
    u8 pad3[0x396 - 0x2DB];
    u8 unk396;
} func_80232E94_Struct;
typedef struct func_80232E94_G {
    u8 pad0[0xDC];
    func_80232E94_Obj *unkDC;
    u8 padE0[0xEC - 0xE0];
    func_80232E94_Obj *unkEC;
    u8 padF0[0x44C - 0xF0];
    func_80232E94_Struct unk44C;
    u8 pad7E8[0x1030 - 0x44C - sizeof(func_80232E94_Struct)];
    u8 unk1030;
} func_80232E94_G;
#define G ((func_80232E94_G *)D_801BBBF0)
#define A (G.unkDC->unk36)
#define B (G.unkEC->unk36)
struct func_80230728_Inner {
    u8 pad0[4];
    u8 unk4;
    u8 pad5[5];
    u8 unkA;
    u8 pad0B[0x15 - 0xB];
    s8 unk15[1];
};
struct func_80230728_Struct {
    u8 pad0[0x2D];
    s8 unk2D;
    u8 pad2E[0x38 - 0x2E];
    u32 unk38;
    u8 pad3C[0x52 - 0x3C];
    u16 unk52;
    u16 unk54;
    s16 unk56;
    u8 pad58[0xAA - 0x58];
    s16 unkAA;
    u8 unkAC;
    u8 pad_AD[0x2D4 - 0xAD];
    struct func_80230728_Inner *unk2D4;
    u8 pad2D8[2];
    u8 unk2DA;
    u8 unk2DB;
    u8 pad2DC[0x399 - 0x2DC];
    u8 unk399;
};
#define arg0 ((struct func_80230728_Struct *)a0)
#define arg1 ((struct func_80230728_Struct *)a1)

#undef a0
#undef a1
#undef arg0
#undef arg1
#undef A
#undef B
#undef G

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
typedef struct func_8022DB40_Ent { s16 v; u8 pad[4]; } func_8022DB40_Ent;
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
    func_8022DB40_Ent unkAA[1];
    u8 pad_[0x2D4 - 0xB0];
    func_8022DB40_StructB *unk2D4;
} func_8022DB40_Struct;
extern f32 func_8002FC20(f32, s32, u16, u16);
u16 func_8022DB40(func_8022DB40_Struct *self) {
    u32 res;
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
        if (((u32)(self->unk30 << 9) >> 0x1E) == 2) {
            self->unk9A = (u32)((f64)(f32)w86 * 1.5 + (f64)(f32)w8A * 0.5 + (f64)w84 + 0.5);
        } else {
            self->unk9A = (u32)((f64)(f32)w86 * 1.5 + (f64)(f32)w8C * 0.5 + (f64)w84 + 0.5);
        }
        break;
    case 1:
        if (((u32)(self->unk30 << 9) >> 0x1E) == 2) {
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
