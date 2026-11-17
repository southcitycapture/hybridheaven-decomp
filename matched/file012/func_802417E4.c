#include "common.h"
extern u8 D_801BBBF0[];
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern u8 D_801BCC21;
extern s32 func_8012C6B4(s32);
extern s32 func_802242D0(s32);


typedef struct func_802417E4_StructInfo {
    s16 unk0, unk2, unk4, unk6, unk8, unkA;
    u8 padC[0x24];
    u32 unk30;
    u8 pad34[4];
    u32 unk38;
    u8 pad3C[0x29C];
    u8 unk2D8;
} Info;
typedef struct func_802417E4_StructActor {
    u8 pad0[0xC];
    struct func_802417E4_StructActor *unkC;
    u8 pad10[0x80];
    u8 unk90, unk91, unk92, unk93, unk94, unk95;
    s16 unk96;
    u8 pad98[2];
    s16 unk9A;
    s32 unk9C;
    u8 unkA0;
} Actor;
typedef struct func_802417E4_StructControl { u16 unk0, unk2, unk4; s16 unk6, unk8; } Control;
typedef struct func_802417E4_StructPos { f32 unk0, unk4, unk8, unkC; } Pos;
typedef struct func_802417E4_StructObj { u8 pad0[0x2C]; Pos *unk2C; } Obj;
extern u8 D_801BBC8C[];
extern u8 D_801BBCAC[];
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s32 func_8010843C(f32, f32, f32, f32, f32, f32);
extern s16 func_80228C20(Actor *);
extern s32 func_80228D90(Actor *, Info *);
extern void func_80228FD0(Actor *, Control *, s32);
extern void func_802290C8(Actor *, Control *, s32, f32);
extern s32 func_802291FC(Actor *, Info *, Control *, s32);
extern s32 func_80229260(Actor *, Info *, Control *, s32);
extern void func_80242D80();

#define DIST (*(f32 *)(D_801BC3D8 + 0x3A8))
void func_802417E4(Actor *arg0, s32 arg1) {
    s16 sp46;
    s16 sp44;
    Control *sp40;
    Obj *sp3C;
    Info *a1;
    Info *t0;
    f32 cosine;
    s16 sp2E;
    f32 sp28;
    Pos *pos;
    s32 v;
    s32 cur;

    sp44 = (s16)(0x2800 - *(s16 *)(D_801BBBF0 + 0x232)) & 0x1FFF;
    v = *(s32 *)(D_801BBBF0 + 0xDC);
    cur = (s32)arg0->unkC->unkC;
    sp40 = (v == cur) ? (void *)D_801BBC8C : (void *)D_801BBCAC;
    if (v == cur) sp3C = *(Obj **)(D_801BBBF0 + 0xE0);
    else sp3C = *(Obj **)(D_801BBBF0 + 0xF0);
    if (v == cur) a1 = (void *)D_801BC03C;
    else a1 = (void *)D_801BC3D8;
    if (v != cur) t0 = (void *)D_801BC03C;
    else t0 = (void *)D_801BC3D8;
    func_80242D80();
    if (arg1) {}
    arg0->unk91 = 2;
    if (((u32)(a1->unk30 << 9) >> 30) == 0) return;
    if (((u32)(a1->unk30 << 3) >> 28) == 1 || ((u32)(a1->unk30 << 3) >> 28) == 4) return;
    if (D_801BCC21 >= 6) { arg0->unk92 = 3; arg0->unk95 = 0; }
    if (D_801BCC21 != 5) return;
    if (func_80229260(arg0, a1, sp40, 5)) return;
    if ((f64)a1->unkA <= (f64)a1->unk8 * 0.3 || arg0->unkC->unk9A == 0x20) {
        if (func_802291FC(arg0, a1, sp40, 10)) return;
    }
    if (((f64)DIST < 20.0 || arg0->unk95 == 1 || a1->unk38 >> 31) &&
        ((f64)a1->unk0 * 0.3 < (f64)a1->unk2 || arg0->unkC->unkA0 == 0)) {
        if (arg0->unk95 == 0) { arg0->unk95 = 1; arg0->unk92 = 3; return; }
        if (!(a1->unk38 >> 31) && ((f64)DIST > 25.0 || ((f64)a1->unk2 <= (f64)a1->unk0 * 0.3 && arg0->unkC->unkA0 != 0) ||
            ((f64)a1->unk0 * 0.7 <= (f64)a1->unk2 && a1->unk6 < 200) || a1->unk6 < 100)) {
            arg0->unk95 = 0; arg0->unk92 = 2; return;
        }
        if (a1->unk2D8 == 11) { arg0->unk95 = 0; arg0->unk92 = 4; }
        if (arg0->unk92 < 3) {
            if (a1->unk38 >> 31) { arg0->unk95 = 1; arg0->unk92 = 3; }
            func_802290C8(arg0, sp40, 30, 0.0f); return;
        }
        if (arg0->unk92 == 3) {
            if ((a1->unk38 >> 31) && (f64)a1->unk8 * 0.3 < (f64)a1->unkA &&
                (!(a1->unk38 << 3 >> 31) || (a1->unk38 << 4 >> 30) == 1)) {
                if (a1->unk6 >= 100) { arg0->unk90 = 0; arg0->unk92 = 4; return; }
                func_80228FD0(arg0, sp40, 4); return;
            }
            if (a1->unk30 << 9 >> 30) {
                if (func_80228D90(arg0, a1)) {
                                        if ((f64)a1->unk6 >= 30.0) {
                        if ((((f64)t0->unk2 < (f64)t0->unk0 * 0.1 ||
                              ((t0->unk30 << 11 >> 30) && (f64)DIST <= 19.0) ||
                              (t0->unk30 << 3 >> 28) || (f64)a1->unk2 <= (f64)a1->unk0 * 0.3) && a1->unk6 >= 100) ||
                            (((f64)t0->unk2 < (f64)t0->unk0 * 0.3 || (f64)a1->unk2 < (f64)a1->unk0 * 0.7) && a1->unk6 >= 200) ||
                            a1->unk6 == a1->unk4) {
                            arg0->unk90 = 0;
                            arg0->unk92 = 4;
                            return;
                        }
                        func_80228FD0(arg0, sp40, 4); return;
                    }
                }
            }
            func_80228FD0(arg0, sp40, 4); return;
        }
        if (arg0->unk92 == 4) {
            if ((func_802242D0((s32)arg0->unkC->unkC) &&
                (((a1->unk30 << 9 >> 30) && !(t0->unk30 << 11 >> 30)) ||
                 ((t0->unk30 << 11 >> 30) && (f64)DIST <= 19.0))) ||
                (a1->unk38 >> 31) || a1->unk2D8 == 11) {
                sp40->unk4 = 0x8000;
                arg0->unk91 = 0;
                arg0->unk92 = 5;
            }
        } else if (arg0->unk92 == 5 && D_801BCC21 == 5) arg0->unk92 = 2;
    } else {
        if ((f64)a1->unk2 <= (f64)a1->unk0 * 0.3 && arg0->unkC->unkA0 != 0) {
            if (a1->unk2D8 == 11 && a1->unk6 >= 31) {
                if (DIST > 30.0f) goto attack;
                sp28 = func_8001EB64((s16)((s16)(func_80228C20(arg0) + 0x1000) & 0x1FFF));
                cosine = func_8001EAD0((s16)((s16)(func_80228C20(arg0) + 0x1000) & 0x1FFF));
                pos = sp3C->unk2C;
                if (func_8010843C(pos->unk4, pos->unk8, pos->unkC, sp28 * 20.0f + pos->unk4, pos->unk8, cosine * 20.0f + pos->unkC)) {
attack:
                    sp40->unk4 = 0x8000; arg0->unkC->unkA0--; return;
                }
            }
            arg0->unk9A = 0;
            arg0->unk96 = func_80228C20(arg0) + 0x1000;
            sp46 = (s16)((s16)(arg0->unk96 + sp44) & 0x1FFF);
            goto movement;
        }
        sp28 = func_8001EB64((s16)(func_80228C20(arg0) & 0x1FFF));
        cosine = func_8001EAD0((s16)(func_80228C20(arg0) & 0x1FFF));
        pos = sp3C->unk2C;
        if (func_8010843C(pos->unk4, pos->unk8, pos->unkC, sp28 * 20.0f + pos->unk4, pos->unk8, cosine * 20.0f + pos->unkC) == 0) {
            sp2E = func_80228C20(arg0);
            arg0->unk96 = (s32)(func_8001EAD0((s16)((arg0->unk9C & 0xFF) << 7)) * 1024.0f + (f32)sp2E);
        } else {
            sp28 = func_8001EB64((s16)((s16)(func_80228C20(arg0) + 0x800) & 0x1FFF));
            cosine = func_8001EAD0((s16)((s16)(func_80228C20(arg0) + 0x800) & 0x1FFF));
            pos = sp3C->unk2C;
            if (func_8010843C(pos->unk4, pos->unk8, pos->unkC, sp28 * 60.0f + pos->unk4, pos->unk8, cosine * 60.0f + pos->unkC) == 0)
                arg0->unk96 = func_80228C20(arg0) + 0x800;
            else arg0->unk96 = func_80228C20(arg0) - 0x800;
        }
        sp46 = (s16)((s16)(arg0->unk96 + sp44) & 0x1FFF);
movement:
        {
        s16 energy;
        arg0->unk96 = 0;
        if (DIST > 30.0f) arg0->unk9A = 20;
        energy = arg0->unk9A;
        if (energy > 0) {
            arg0->unk9A = energy - 1;
            sp40->unk2 = 0x2000;
            sp40->unk6 = (s32)(-func_8001EB64(sp46) * 40.0f);
            sp40->unk8 = (s32)(func_8001EAD0(sp46) * 40.0f);
            return;
        }
        if (!(a1->unk38 >> 31) && a1->unk6 >= 200 && (f64)a1->unk8 * 0.3 <= (f64)a1->unkA) {
            if (func_8012C6B4(10) < 3) { sp40->unk2 = 0x10; return; }
        }
        sp40->unk6 = (s32)(-func_8001EB64(sp46) * 80.0f);
        sp40->unk8 = (s32)(func_8001EAD0(sp46) * 80.0f);
        }
    }
}
