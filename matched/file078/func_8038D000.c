#include "context.h"

typedef struct {
    u8 pad0[0xC];
    struct func_8038D000_StructJ *unkC;
    u8 pad10[0x92 - 0x10];
    u8 unk92;
    u8 pad93[2];
    u8 unk95;
    s16 unk96;
    s16 unk98;
    u8 pad9A[0xAC - 0x9A];
    s16 unkAC;
} func_8038D000_StructA;
typedef struct {
    u8 pad0[6];
    s16 unk6;
    u8 pad8[0x30 - 8];
    union { u32 w; u16 h; struct { u8 b0, b1, b2; } c;
        struct { u32 f0 : 3; u32 f3 : 4; u32 f7 : 2; u32 f9 : 2; u32 f11 : 2; u32 f13 : 3; u32 rest : 16; } bf; } u30;
} func_8038D000_StructB;
typedef struct {
    u8 pad0[2];
    s16 unk2;
    u16 unk4;
    s16 unk6;
    s16 unk8;
} func_8038D000_StructC;
typedef struct {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_8038D000_StructF;
typedef struct {
    u8 pad0[0x2C];
    func_8038D000_StructF *unk2C;
} func_8038D000_StructE;
struct func_8038D000_StructG {
    u8 pad0[0x12];
    s16 unk12;
};
struct func_8038D000_StructH {
    u8 pad0[0x2C];
    struct func_8038D000_StructG *unk2C;
};
struct func_8038D000_StructI {
    u8 pad0[0x24];
    struct func_8038D000_StructH *unk24;
};
struct func_8038D000_StructJ {
    u8 pad0[0xC];
    struct func_8038D000_StructI *unkC;
};
typedef struct {
    u8 pad0[0xDC];
    void *unkDC;
    func_8038D000_StructE *unkE0;
    u8 padE4[0xF0 - 0xE4];
    func_8038D000_StructE *unkF0;
    u8 padF4[0x232 - 0xF4];
    s16 unk232;
    u8 pad234[0xB90 - 0x234];
    f32 unkB90;
    u8 padB94[4];
    s16 unkB98;
    u8 padB9A[0x1031 - 0xB9A];
    u8 unk1031;
} func_8038D000_Glob;
extern func_8038D000_Glob D_801BBBF0;
extern u8 D_801BBC8C[];
extern u8 D_801BBCAC[];
extern f32 func_8001EAD0();
extern f32 func_8001EB64();
extern s32 func_8010843C(f32, f32, f32, f32, f32, f32);
extern s32 func_80228D90();

void func_8038D000(func_8038D000_StructA *arg0, s32 arg1) {
    s16 sp3E;
    s16 sp3C;
    func_8038D000_StructC *sp38;
    func_8038D000_StructE *sp34;
    func_8038D000_StructB *sp30;
    func_8038D000_StructB *sp2C;
    s16 sp2A;
    s16 sp28;
    s32 pad;
    f32 sp20;
    s16 d;
    s32 v1;

    sp3C = (s16)(0x2800 - D_801BBBF0.unk232) & 0x1FFF;
#define v0 (arg0->unkC->unkC)
    sp38 = (D_801BBBF0.unkDC == v0) ? (func_8038D000_StructC *)D_801BBC8C : (func_8038D000_StructC *)D_801BBCAC;
    if (D_801BBBF0.unkDC == v0) {
        sp34 = D_801BBBF0.unkE0;
    } else {
        sp34 = D_801BBBF0.unkF0;
    }
    if (D_801BBBF0.unkDC == v0) {
        sp30 = (func_8038D000_StructB *)D_801BC03C;
    } else {
        sp30 = (func_8038D000_StructB *)D_801BC3D8;
    }
    if (D_801BBBF0.unkDC == v0) {
        sp2C = (func_8038D000_StructB *)D_801BC3D8;
    } else {
        sp2C = (func_8038D000_StructB *)D_801BC03C;
    }
    sp2A = v0->unk24->unk2C->unk12;
    if (D_801BBBF0.unkDC == v0) {
        sp28 = D_801BBBF0.unkB98;
    } else {
        sp28 = D_801BBBF0.unkB98 + 0x1000;
    }
    if (sp30->u30.bf.f9 != 0 && sp30->u30.bf.f3 != 1) {
        if (D_801BBBF0.unk1031 >= 7 && D_801BBBF0.unk1031 != 0xF) {
            arg0->unk92 = arg0->unk95 = 0;
        }
        if (sp30->u30.bf.f13 == 0 &&D_801BBBF0.unk1031 == 5) {
            if ((func_80228D90(arg0) != 0 && arg0->unk98 == 0 && D_801BBBF0.unkB90 < 20.0 && sp30->unk6 >= 0x64) || arg0->unk95 == 1) {
                if (arg0->unk95 == 0) {
                    arg0->unk95 = 1;
                    arg0->unk92 = 1;
                    return;
                }
                if ((sp2C->u30.bf.f11 != 0 && D_801BBBF0.unkB90 < 15.0) || sp2C->u30.bf.f3 == 2) {
                    if (sp30->unk6 >= 0x64) {
                        sp38->unk4 = 0x8000;
                    }
                } else if (arg0->unk92 == 1) {
                    sp30->u30.c.b2 &= 0xFFFC;
                    sp38->unk4 = 0x8000;
                    arg0->unk98 = 0x1E;
                }
            } else {
                if ((sp30->u30.c.b2 & 3) == 2) {
                    sp30->u30.c.b2 &= 0xFFFC;
                }
                sp20 = func_8001EB64((s16)(arg0->unk96 & 0x1FFF));
                if (func_8010843C(sp34->unk2C->unk4, sp34->unk2C->unk8, sp34->unk2C->unkC, sp20 * 40.0f + sp34->unk2C->unk4, sp34->unk2C->unk8, func_8001EAD0((s16)(arg0->unk96 & 0x1FFF)) * 40.0f + sp34->unk2C->unkC) != 0 || (v1 = arg0->unkAC++ >= 0x3D)) {
                    d = sp28 - sp2A;
                    if (d & 0x1000) {
                        v1 = (d & 0x1FFF) - 0x2000;
                    } else {
                        v1 = d & 0x1FFF;
                    }
                    if (v1 > 0) {
                        v1 = -0x800;
                    } else {
                        v1 = 0x800;
                    }
                    arg0->unkAC = 0;
                    arg0->unk96 += v1;
                }
                if (arg0->unk98 != 0) {
                    arg0->unk98--;
                }
                sp3E = (s16)(arg0->unk96 + sp3C) & 0x1FFF;
                sp38->unk2 = 0x2000;
                sp38->unk6 = -func_8001EB64(sp3E) * 40.0f;
                sp38->unk8 = func_8001EAD0(sp3E) * 40.0f;
                if (func_80228D90(arg0) != 0 && sp30->unk6 >= 0x64 && arg0->unk98 == 0 && D_801BBBF0.unkB90 < 40.0) {
                    sp38->unk4 = 0x8000;
                    arg0->unk98 = 0x64;
                }
            }
        }
    }
}
