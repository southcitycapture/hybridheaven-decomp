#include "common.h"


extern s32 func_800058DC(s32, void *);
extern s32 func_80229500();
extern void func_802417E4();

void func_802417B0(s32 arg0, s32 arg1) {
    func_80229500();
    func_800058DC(arg0, &func_802417E4);
}

#define D_801BBBF0 D_801BBBF0__func_802417E4
#define D_801BBC8C D_801BBC8C__func_802417E4
#define D_801BBCAC D_801BBCAC__func_802417E4
#define D_801BC03C D_801BC03C__func_802417E4
#define D_801BC3D8 D_801BC3D8__func_802417E4
#define D_801BCC21 D_801BCC21__func_802417E4
#define func_8001EAD0 func_8001EAD0__func_802417E4
#define func_8001EB64 func_8001EB64__func_802417E4
#define func_8010843C func_8010843C__func_802417E4
#define func_8012C6B4 func_8012C6B4__func_802417E4
#define func_802242D0 func_802242D0__func_802417E4
#define func_80228C20 func_80228C20__func_802417E4
#define func_80228D90 func_80228D90__func_802417E4
#define func_80228FD0 func_80228FD0__func_802417E4
#define func_802290C8 func_802290C8__func_802417E4
#define func_802291FC func_802291FC__func_802417E4
#define func_80229260 func_80229260__func_802417E4
#define func_80242D80 func_80242D80__func_802417E4
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
#undef DIST
#undef D_801BBBF0
#undef D_801BBC8C
#undef D_801BBCAC
#undef D_801BC03C
#undef D_801BC3D8
#undef D_801BCC21
#undef func_8001EAD0
#undef func_8001EB64
#undef func_8010843C
#undef func_8012C6B4
#undef func_802242D0
#undef func_80228C20
#undef func_80228D90
#undef func_80228FD0
#undef func_802290C8
#undef func_802291FC
#undef func_80229260
#undef func_80242D80


struct func_80242328_Struct {
    u8 pad0[0x92];
    u8 unk92;
    u8 unk93;
    u8 pad94[0x9A - 0x94];
    u16 unk9A;
    u8 pad9C[0xA0 - 0x9C];
    u8 unkA0;
};

extern void func_80242364(void);

void func_80242328(struct func_80242328_Struct *arg0, s32 arg1) {
    arg0->unk92 = 3;
    arg0->unk93 = 0;
    arg0->unk9A = 0;
    arg0->unkA0 = 3;
    func_800058DC(arg0, func_80242364);
}

/* hh-block asm/nonmatchings/file012/802417B0/_mrg_keep_tail_7764d936b1ece19d.s {"functions":["func_80242364"],"rodata":[],"rodata_bytes":[2149880280,6266488,24]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file012/802417B0/_mrg_keep_tail_7764d936b1ece19d.s")

#define D_801BBBF0 D_801BBBF0__func_80242874
#define D_801BC03C D_801BC03C__func_80242874
#define D_801BC3D8 D_801BC3D8__func_80242874
#define D_801BCC21 D_801BCC21__func_80242874
#define D_80242874 D_80242874__func_80242874
#define D_802491E0 D_802491E0__func_80242874
#define func_8012C6B4 func_8012C6B4__func_80242874
#define func_8022AB58 func_8022AB58__func_80242874
#define func_8022B3E0 func_8022B3E0__func_80242874
extern u8 D_801BC3D8[];


struct func_80242874_Struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad10[0x91 - 0x10];
    u8 unk91;
    u8 unk92;
    u8 unk93;
    u8 pad94[0x9A - 0x94];
    s16 unk9A;
    u8 pad9C[0xA0 - 0x9C];
    u8 unkA0;
    u8 padA1[0xA8 - 0xA1];
    u8 unkA8;
    u8 padA9[3];
    void *unkAC;
    void *unkB0;
};
struct func_80242874_StructInfo {
    s16 unk0;
    s16 unk2;
};
struct func_80242874_StructInfo2 {
    u8 pad0[0x30];
    u32 unk30;
};
struct func_80242874_StructInfo3 {
    u8 pad0[4];
    s16 unk4;
    s16 unk6;
    u8 pad8[0x38 - 8];
    u32 unk38;
    u8 pad3C[0x2D8 - 0x3C];
    u8 unk2D8;
};
extern u8 D_801BCC21;
extern u8 D_801BBBF0[];
extern u8 D_801BC03C[];
extern u8 D_80242874[];
extern f64 D_802491E0;
extern u8 func_8022B3E0[];
extern s32 func_8022AB58(void *, void *);
extern s32 func_8012C6B4(s32);

void func_80242874(arg0, arg1)
struct func_80242874_Struct *arg0;
u8 arg1;
{
    struct func_80242874_StructInfo3 *a1;
    struct func_80242874_StructInfo2 *a3;
    u32 t38;
    u32 bits;
    s32 v;
    s32 cur;
    s32 c;
    s32 x;
    s32 k;

    k = 6;
    cur = arg0->unkC;
    v = *(s32 *)((u8 *)&D_801BBBF0 + 0xDC);
    a1 = (v == cur) ? (void *)D_801BC03C : (void *)D_801BC3D8;
    if (v == cur) {
        a3 = (void *)D_801BC3D8;
    } else {
        a3 = (void *)D_801BC03C;
    }
    c = ((u8 *)&D_801BBBF0)[0x1031];
    if (k != c &&(x = arg0->unkA8) != 0) {
        arg0->unkA8 = 0;
        c = D_801BCC21;
    }
    if (k == c) {
        arg0->unkA8 = 1;
        return;
    }
    if (c == 7) {
        arg0->unkAC = D_80242874;
        arg0->unkB0 = (void *)func_80242364;
        func_800058DC((s32)arg0, func_8022B3E0);
        return;
    }
    if ((f64)((struct func_80242874_StructInfo *)a1)->unk2 <= (f64)((struct func_80242874_StructInfo *)a1)->unk0 * D_802491E0 && !(arg0->unk9A & 0x20) && arg0->unkA0 != 0) {
        func_800058DC((s32)arg0, (void *)func_80242364);
        return;
    }
    if (func_8022AB58(arg0, a1) != 0) {
        arg0->unk91 = 0;
        func_800058DC((s32)arg0, (void *)func_80242364);
        return;
    }
    v = a1->unk38;
    bits = (u32)v >> 31;
    if (bits != 0 && !(arg0->unk9A & 2)) {
        func_800058DC((s32)arg0, (void *)func_80242364);
        return;
    }
    if (bits != 0 && (((u32)v << 3) >> 31) &&!(arg0->unk9A & 4)) {
        func_800058DC((s32)arg0, (void *)func_80242364);
        return;
    }
    {
        u32 f = (a3->unk30 << 11) >> 30;
        if (f != 0) {
            func_800058DC((s32)arg0, (void *)func_80242364);
            return;
        }
        if (bits == 0 && f == 0 && arg0->unk9A != 0) {
            arg0->unk9A = 0;
            arg0->unk92 = arg0->unk93;
            func_800058DC((s32)arg0, (void *)func_80242364);
            return;
        }
    }
    if (arg0->unk9A == 0) {
        if (a1->unk6 == a1->unk4) {
            if (a1->unk2D8 != 0xA) {
                func_800058DC((s32)arg0, (void *)func_80242364);
                return;
            }
        }
        if (a1->unk6 == 0xC8 && func_8012C6B4(4) <= 0) {
            func_800058DC((s32)arg0, (void *)func_80242364);
        }
    }
}
#undef D_801BBBF0
#undef D_801BC03C
#undef D_801BC3D8
#undef D_801BCC21
#undef D_80242874
#undef D_802491E0
#undef func_8012C6B4
#undef func_8022AB58
#undef func_8022B3E0

extern u8 D_801BC3D8[];

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


/* Original readonly objects; named loads retain their original addresses. */

static const unsigned char rodata_802417B0[] = {
    0xA3, 0xC3, 0xA3, 0xD0, 0xA3, 0xD5, 0x28, 0xC2, 0xD0, 0xC0, 0xEF, 0xCD, 0xD1, 0xA3, 0xD0, 0xA3,
    0xB1, 0xC3, 0xCB, 0x3A, 0xC4, 0xBE, 0xB9, 0xD4, 0xB7, 0xBF, 0x29, 0xA4, 0xCE, 0xB0, 0xDC, 0xC6,
    0xB0, 0xA4, 0xCB, 0xA4, 0xCF, 0xA4, 0xA4, 0xA4, 0xEA, 0xA4, 0xDE, 0xA4, 0xB9, 0x20, 0x62, 0x79,
    0x20, 0x6B, 0x6F, 0x68, 0x69, 0x72, 0x61, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x43, 0x50, 0x55, 0x5F,
    0x53, 0x54, 0x45, 0x50, 0x20, 0x25, 0x64, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x50, 0x55, 0x53, 0x48,
    0x20, 0x20, 0x54, 0x52, 0x47, 0x20, 0x41, 0x20, 0x21, 0x21, 0x0A, 0x00, 0x50, 0x55, 0x53, 0x48,
    0x20, 0x20, 0x54, 0x52, 0x47, 0x20, 0x41, 0x20, 0x49, 0x54, 0x45, 0x4D, 0x20, 0x25, 0x64, 0x21,
    0x21, 0x0A, 0x00, 0x00, 0xB1, 0xA6, 0xB1, 0xAA, 0xB2, 0xF3, 0xA4, 0xB7, 0xA4, 0xDE, 0xA4, 0xB9,
    0x0A, 0x00, 0x00, 0x00, 0xBA, 0xB8, 0xB1, 0xAA, 0xB2, 0xF3, 0xA4, 0xB7, 0xA4, 0xDE, 0xA4, 0xB9,
    0x0A, 0x00, 0x00, 0x00, 0x50, 0x55, 0x53, 0x48, 0x20, 0x20, 0x54, 0x52, 0x47, 0x20, 0x5A, 0x20,
    0x52, 0x55, 0x4E, 0x20, 0x21, 0x21, 0x20, 0x25, 0x64, 0x0A, 0x00, 0x00, 0xA3, 0xC3, 0xA3, 0xD0,
    0xA3, 0xD5, 0x28, 0xC2, 0xD0, 0xC0, 0xEF, 0xCD, 0xD1, 0xA3, 0xD0, 0xA3, 0xB1, 0xC3, 0xCB, 0x29,
    0xA4, 0xCE, 0xB9, 0xB6, 0xB7, 0xE2, 0xBB, 0xD7, 0xB9, 0xCD, 0xB3, 0xAB, 0xBB, 0xCF, 0x0A, 0x00,
    0xB9, 0xB6, 0xB7, 0xE2, 0xB5, 0xBB, 0xB7, 0xE8, 0xC4, 0xEA, 0xA1, 0xAA, 0xA1, 0xAA, 0x20, 0x53,
    0x54, 0x45, 0x50, 0x20, 0x25, 0x64, 0x0A, 0x00, 0xBC, 0xA1, 0xA4, 0xCF, 0xA5, 0xA2, 0xA5, 0xA4,
    0xA5, 0xC6, 0xA5, 0xE0, 0xA4, 0xC7, 0xA4, 0xCE, 0xB2, 0xF3, 0xC9, 0xFC, 0x0A, 0x00, 0x00, 0x00,
    0xBB, 0xD7, 0xB9, 0xCD, 0xBA, 0xC6, 0xB3, 0xAB, 0xA1, 0xAA, 0xA1, 0xAA, 0x0A, 0x00, 0x00, 0x00,
    0xA5, 0xBB, 0xA5, 0xEC, 0xA5, 0xAF, 0xA5, 0xC8, 0xC3, 0xE6, 0xBB, 0xD7, 0xB9, 0xCD, 0xC4, 0xE4,
    0xBB, 0xDF, 0xA1, 0xAA, 0xA1, 0xAA, 0x0A, 0x00, 0xA5, 0xE2, 0xA1, 0xBC, 0xA5, 0xB7, 0xA5, 0xE7,
    0xA5, 0xF3, 0xB3, 0xAB, 0xBB, 0xCF, 0x0A, 0x00, 0xC2, 0xCE, 0xCE, 0xCF, 0x33, 0xB3, 0xE4, 0xA4,
    0xEA, 0xB0, 0xCA, 0xB2, 0xBC, 0x0A, 0x00, 0x00, 0xC6, 0xCD, 0xC1, 0xB3, 0xB2, 0xBF, 0xBD, 0xE8,
    0xA4, 0xAB, 0xC9, 0xE9, 0xBD, 0xFD, 0xA4, 0xB7, 0xA4, 0xBF, 0x0A, 0x00, 0x44, 0x45, 0x4D, 0x4F,
    0x20, 0x50, 0x4C, 0x41, 0x59, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
/* hh-owned-pool func_802417E4 80249190 802491D8 */
