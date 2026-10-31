#include "common.h"


extern void *func_800058DC(void *, void *);
extern s16 func_80228C20(void *);
extern void func_80229500(void);
extern void func_8038D000();

void func_8038CFC0(void *arg0, void *arg1) {
    func_80229500();
    *(s16 *)((u8 *)arg0 + 0x96) = func_80228C20(arg0);
    func_800058DC(arg0, func_8038D000);
}

#define D_801BBBF0 D_801BBBF0__func_8038D000
#define D_801BBC8C D_801BBC8C__func_8038D000
#define D_801BBCAC D_801BBCAC__func_8038D000
#define D_801BC03C D_801BC03C__func_8038D000
#define D_801BC3D8 D_801BC3D8__func_8038D000
#define func_8001EAD0 func_8001EAD0__func_8038D000
#define func_8001EB64 func_8001EB64__func_8038D000
#define func_8001EF38 func_8001EF38__func_8038D000
#define func_8010843C func_8010843C__func_8038D000
#define func_80228D90 func_80228D90__func_8038D000
#define func_80228FD0 func_80228FD0__func_8038D000
#define func_80229260 func_80229260__func_8038D000
#define func_802292D0 func_802292D0__func_8038D000
#define func_8038D948_StructG func_8038D948_StructG__func_8038D000
typedef struct func_8038D948_StructG {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 padE0[0xB90 - 0xE0];
    f32 unkB90;
    u8 padB94[0x1031 - 0xB94];
    u8 unk1031;
} func_8038D948_StructG;
extern func_8038D948_StructG D_801BBBF0;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];


typedef struct func_8038D000_StructB {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad10[0x98 - 0x10];
    s16 unk98;
} func_8038D000_StructB;

typedef struct func_8038D000_StructA {
    u8 pad0[0xC];
    func_8038D000_StructB *unkC;
    u8 pad1[0x90 - 0x10];
    u8 unk90;
    u8 unk91;
    u8 unk92;
    u8 pad2[2];
    u8 unk95;
    s16 unk96;
    s16 unk98;
    u8 pad9A[0xAC - 0x9A];
    s16 unkAC;
} func_8038D000_StructA;

typedef struct func_8038D000_StructO {
    u8 pad0[6];
    s16 unk6;
    u8 pad8[0x30 - 0x8];
    union {
        struct {
            u32 x0 : 3;
            u32 c3 : 4;
            u32 x7 : 2;
            u32 b9 : 2;
            u32 b11 : 2;
            u32 rest : 19;
        } bf;
        u16 h;
        u8 b[4];
    } u30;
    u8 pad34[4];
    struct {
        u32 b31 : 1;
        u32 b29 : 2;
        u32 b28 : 1;
        u32 rest : 28;
    } u38;
    u8 pad3C[0x9E - 0x3C];
    u16 unk9E;
    u8 padA0[0x2FC - 0xA0];
    u8 unk2FC;
    u8 pad2FD[0x312 - 0x2FD];
    s16 unk312;
    u8 pad314[0x328 - 0x314];
    u8 unk328;
    u8 unk329;
    s16 unk32A;
} func_8038D000_StructO;

typedef struct func_8038D000_StructP {
    u8 pad0[0x2C];
    struct func_8038D000_StructV {
        f32 unk0;
        f32 unk4;
        f32 unk8;
        f32 unkC;
    } *unk2C;
} func_8038D000_StructP;

typedef struct func_8038D000_StructG {
    u8 pad0[0xDC];
    s32 unkDC;
    func_8038D000_StructP *unkE0;
    u8 pad1[0xF0 - 0xE4];
    func_8038D000_StructP *unkF0;
    u8 pad2[0x232 - 0xF4];
    s16 unk232;
    u8 pad3[0xB90 - 0x234];
    f32 unkB90;
    u8 pad4[0x1031 - 0xB94];
    u8 unk1031;
} func_8038D000_StructG;

#define G (*(func_8038D000_StructG *)&D_801BBBF0)

extern u8 D_801BBC8C[];
extern u8 D_801BBCAC[];
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s32 func_8001EF38(f32, f32);
extern s32 func_8010843C(f32, f32, f32, f32, f32, f32);
extern s32 func_80228D90(void *, void *);
extern void func_80228FD0(void *, void *, s32);
extern s32 func_80229260(void *, void *, void *, s32);
extern void func_802292D0(void *, void *);

void func_8038D000(func_8038D000_StructA *arg0, func_8038D000_StructO *arg1) {
    s16 sp56;
    s16 sp54;
    s16 *sp50;
    func_8038D000_StructP *sp4C;
    u8 *a1p;
    u8 *t1p;
#define a1 ((func_8038D000_StructO *)a1p)
#define t1 ((func_8038D000_StructO *)t1p)
    f32 sp40;
    s32 v1;
    s32 v0;
    s32 b;
    s32 padb;
#define q (sp4C->unk2C)
    f32 sp2C;
    s32 padc;

    sp54 = (s16)(0x2800 - G.unk232) & 0x1FFF;
    v1 = arg0->unkC->unkC;
    v0 = G.unkDC;
    sp50 = (v0 == v1) ? (s16 *)D_801BBC8C : (s16 *)D_801BBCAC;
    sp4C = (v0 == v1) ? G.unkE0 : G.unkF0;
    a1p = (v0 == v1) ? D_801BC03C : D_801BC3D8;
    t1p = (v0 == v1) ? D_801BC3D8 : D_801BC03C;
    if (arg0->unk91 == 1 && G.unk1031 == 7) {
        arg0->unk91 = 2;
    }
    if (a1->u30.bf.b9 != 0 && a1->u30.bf.c3 != 1) {
    if (G.unk1031 >= 7 && G.unk1031 != 0xF) {
        arg0->unk92 = arg0->unk95 = 0;
    }
    if (G.unk1031 == 5 && !(a1->u30.h & 7) && func_80229260(arg0, a1, sp50, 10) == 0) {
    if ((G.unkB90 < 15.0 || arg0->unk95 == 1) && arg0->unk98 == 0) {
        if (arg0->unk95 == 0) {
            arg0->unk95 = 1;
            arg0->unk92 = 1;
            return;
        }
        if (G.unkB90 > 20.0) {
            arg0->unk95 = 0;
            arg0->unk92 = 0;
            return;
        }
        if ((t1->u30.bf.b11 != 0 && t1->unk312 >= 0xB) || t1->u30.bf.c3 == 2) {
            if (a1->unk6 >= 0x64) {
                *(u16 *)&sp50[2] = 0x8000;
            }
            return;
        }
        if (arg0->unk91 == 2) {
            arg0->unk92 = 4;
        }
        if (arg0->unk92 == 1) {
            if (a1->u38.b31) {
                arg0->unk92 = 3;
                arg0->unk90 = 0;
                return;
            }
            v0 = a1->unk2FC % 4;
            if ((v0 << 0) == 1) {
                sp50[2] = 0x10;
                arg0->unk92 = 4;
                return;
            }
            if (v0 == 3) {
                sp50[2] = 0x10;
                arg0->unk90 = 0;
                arg0->unk92 = 5;
                return;
            }
            if (a1->unk6 >= 0x47) {
                func_802292D0(sp50, a1);
                arg0->unk91 = 1;
                arg0->unk92 = 2;
                return;
            }
            func_80228FD0(arg0, sp50, 8);
            return;
        }
        if (arg0->unk92 == 2) {
            if (a1->u38.b31) {
                arg0->unk92 = 3;
                arg0->unk90 = 0;
            }
            if ((a1->u30.b[2] & 3) == 2U) {
                arg0->unk92 = 4;
            }
            if ((a1->u30.b[2] & 3) == 0) {
                arg0->unk92 = 1;
            }
        } else if (arg0->unk92 == 3) {
            if (a1->u38.b31) {
                b = arg0->unk90++ >= 0x1F;
                if (b) {
                    arg0->unk92 = 4;
                    arg0->unk90 = 0;
                    return;
                }
            }
            if (a1->u38.b29 == 0 && a1->u38.b31 == 0) {
                arg0->unk92 = 1;
            }
        } else if (arg0->unk92 == 4) {
            if (a1->unk6 >= 0x64) {
                if (func_80228D90(arg0, a1) != 0) {
                    a1->u30.b[2] = a1->u30.b[2] & 0xFFFC;
                    *(u16 *)&sp50[2] = 0x8000;
                    arg0->unk91 = 0;
                    arg0->unk96 = func_80228C20(arg0);
                    arg0->unkAC = 0;
                    return;
                }
            }
            func_80228FD0(arg0, sp50, 4);
        } else if (arg0->unk92 == 5) {
            arg0->unk90 = arg0->unk90 + 1;
            a1->unk328 = 3;
            a1->unk329 = 0;
            sp40 = (func_8001EB64(func_80228C20(arg0) + 0x800) * 80.0f) / 20.0;
            a1->unk32A = (s16)(func_8001EF38(sp40, (func_8001EAD0(func_80228C20(arg0) + 0x800) * 80.0f) / 20.0) - sp54) & 0x1FFF;
            if (a1->u38.b31 && a1->u38.b28) {
                arg0->unk92 = 4;
            }
            if (!a1->u38.b31) {
                arg0->unk92 = 1;
            }
        }
    } else {
        if (arg0->unk91 == 1) {
            arg0->unk91 = 2;
        }
        v0 = a1->u30.b[2];
        if ((v0 & 3) == 2U) {
            a1->u30.b[2] = v0 & 0xFFFC;
        }
        if (arg0->unk98 != 0) {
            if (arg0->unk98 == 10) {
                sp50[2] = 0x4000;
            }
            arg0->unk98 = arg0->unk98 - 1;
            if (arg0->unk98 == 0) {
                arg0->unk96 = func_80228C20(arg0);
                arg0->unkAC = 0;
            }
            return;
        }
        sp2C = func_8001EB64(arg0->unk96 & 0x1FFF);
        if (func_8010843C(q->unk4, q->unk8, q->unkC, sp2C * 20.0f + q->unk4, q->unk8, func_8001EAD0(arg0->unk96 & 0x1FFF) * 20.0f + q->unkC) != 0 || (b = arg0->unkAC++ >= 0x29)) {
            arg0->unk98 = 0x14;
            return;
        }
        if (a1->unk6 >= 0x64) {
            if (func_80228D90(arg0, a1) != 0 && G.unkB90 < 40.0f && G.unkB90 > 20.0f && arg0->unkC->unk98 != 0 && t1->unk9E == 0) {
                a1->u30.b[2] = a1->u30.b[2] & 0xFFFC;
                *(u16 *)&sp50[2] = 0x8000;
                arg0->unkC->unk98 = arg0->unkC->unk98 - 1;
                return;
            }
        }
        sp56 = (s16)(arg0->unk96 + sp54) & 0x1FFF;
        sp50[1] = 0x2000;
        sp50[3] = -func_8001EB64(sp56) * 40.0f;
        sp50[4] = func_8001EAD0(sp56) * 40.0f;
    }
    }
    }
}
#undef G
#undef a1
#undef t1
#undef q
#undef D_801BBBF0
#undef D_801BBC8C
#undef D_801BBCAC
#undef D_801BC03C
#undef D_801BC3D8
#undef func_8001EAD0
#undef func_8001EB64
#undef func_8001EF38
#undef func_8010843C
#undef func_80228D90
#undef func_80228FD0
#undef func_80229260
#undef func_802292D0
#undef func_8038D948_StructG

extern u8 D_801BC3D8[];

typedef struct func_8038D77C_StructA {
    u8 pad0[0x30];
    u32 unk30;
    u8 pad34[0x6A];
    u16 unk9E;
} func_8038D77C_StructA;
typedef struct func_8038D77C_StructB {
    s16 unk0;
    s16 unk2;
    u8 pad4[0x34];
    u32 unk38;
    u8 pad3C[0x29C];
    u8 unk2D8;
    u8 unk2D9;
} func_8038D77C_StructB;
typedef struct func_8038D77C_StructC {
    u8 pad0[0x9A];
    s16 unk9A;
    u8 pad9C[5];
    u8 unkA1;
    u8 unkA2;
} func_8038D77C_StructC;
extern void func_802294BC(void *);
extern void func_80229CE0(void *, void *, s32);
extern s32 func_8022B640(s32);

s32 func_8038D77C(func_8038D77C_StructC *arg0, func_8038D77C_StructB *arg1, func_8038D77C_StructA *arg2) {
    if ((*(f32 *)(D_801BC3D8 + 0x3A8) > 20.0f) && (arg2->unk9E == 0)) {
        arg1->unk2D8 = 0x13;
        arg1->unk2D9 = 7;
    } else if (((arg2->unk30 << 11) >> 30) != 0) {
        func_802294BC(arg1);
        arg0->unk9A = 8;
    } else if ((arg1->unk38 >> 31) != 0) {
        arg1->unk2D8 = 2;
        arg0->unk9A = 2;
        func_80229CE0(arg0, arg1, func_8022B640(2) & 0xFF);
    } else if ((func_8022B640(2) == 0) && (arg1->unk2 < (arg1->unk0 / 5))) {
        arg1->unk2D8 = 0;
        func_80229CE0(arg0, arg1, 2);
    } else {
        arg1->unk2D8 = 1;
        func_80229CE0(arg0, arg1, func_8022B640(2) & 0xFF);
    }
    arg0->unkA1 = arg1->unk2D8;
    arg0->unkA2 = arg1->unk2D9;
}


typedef struct func_8038D8B8_Struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0x88];
    s16 unk98;
} func_8038D8B8_Struct;

extern s32 D_801BBCCC;
extern u8 D_801BC03C[];
#define func_8038D948 func_8038D948__decl76
extern void func_8038D948(void);

void func_8038D8B8(func_8038D8B8_Struct *arg0, void *arg1) {
    void *var_a1;
    void *var_a2;

    extern void func_80229500();

    if (D_801BBCCC == arg0->unkC) {
        var_a1 = D_801BC03C;
    } else {
        var_a1 = D_801BC3D8;
    }
    if (D_801BBCCC == arg0->unkC) {
        var_a2 = D_801BC3D8;
    } else {
        var_a2 = D_801BC03C;
    }
    func_80229500(arg0, var_a1, var_a2);
    arg0->unk98 = 3;
    func_8038D77C(arg0, var_a1, var_a2);
    func_800058DC(arg0, func_8038D948);
}
#undef func_8038D948

#define D_801BBBF0 D_801BBBF0__func_8038D948
#define D_8038D948 D_8038D948__func_8038D948
#define func_8022AB58 func_8022AB58__func_8038D948
#define func_8022B3E0 func_8022B3E0__func_8038D948
#define func_8038D77C_StructA func_8038D77C_StructA__func_8038D948
#define func_8038D77C_StructB func_8038D77C_StructB__func_8038D948
#define func_8038D77C_StructC func_8038D77C_StructC__func_8038D948
#define func_8038D948 D_8038D948
typedef struct func_8038D77C_StructA {
    u8 pad0[0x30];
    u32 unk30;
    u8 pad34[0x6A];
    u16 unk9E;
} func_8038D77C_StructA;
typedef struct func_8038D77C_StructB {
    s16 unk0;
    s16 unk2;
    u8 pad4[0x34];
    u32 unk38;
    u8 pad3C[0x29C];
    u8 unk2D8;
    u8 unk2D9;
} func_8038D77C_StructB;
typedef struct func_8038D77C_StructC {
    u8 pad0[0x9A];
    s16 unk9A;
    u8 pad9C[5];
    u8 unkA1;
    u8 unkA2;
} func_8038D77C_StructC;
#undef func_8038D948
extern void D_8038D948(void);

typedef struct func_8038D948_Struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad10[0x81];
    u8 unk91;
    u8 unk92;
    u8 unk93;
    u8 pad94[4];
    s16 unk98;
    s16 unk9A;
    u8 pad9C[0xC];
    u8 unkA8;
    u8 padA9[7];
    void *unkB0;
} func_8038D948_Struct;

typedef struct func_8038D948_StructP {
    u8 pad0[0x30];
    union {
        u16 h;
        struct {
            u32 pad0 : 11;
            u32 b11 : 2;
            u32 pad13 : 19;
        } bf;
    } u30;
    u8 pad34[4];
    struct {
        u32 b31 : 1;
        u32 pad : 2;
        u32 b28 : 1;
        u32 rest : 28;
    } u38;
    u8 pad3C[0x62];
    u16 unk9E;
} func_8038D948_StructP;

typedef struct func_8038D948_StructG {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 padE0[0xB90 - 0xE0];
    f32 unkB90;
    u8 padB94[0x1031 - 0xB94];
    u8 unk1031;
} func_8038D948_StructG;

extern func_8038D948_StructG D_801BBBF0;
extern s32 func_8022AB58();
extern void func_8022B3E0();

void func_8038D948(func_8038D948_Struct *arg0, s32 arg1) {
    func_8038D948_StructP *a1;
    func_8038D948_StructP *a2;

    a1 = (D_801BBBF0.unkDC == arg0->unkC) ? (func_8038D948_StructP *)D_801BC03C : (func_8038D948_StructP *)D_801BC3D8;
    a2 = (D_801BBBF0.unkDC == arg0->unkC) ? (func_8038D948_StructP *)D_801BC3D8 : (func_8038D948_StructP *)D_801BC03C;
    if (arg0->unkA8 == 2) {
        func_8038D77C((func_8038D77C_StructC *)arg0, (func_8038D77C_StructB *)a1, (func_8038D77C_StructA *)a2);
        arg0->unkA8 = 0;
        return;
    }
    if ((a1->u30.h & 7) || D_801BBBF0.unk1031 == 6) {
        arg0->unkA8 = 1;
        return;
    }
    if (D_801BBBF0.unk1031 == 7) {
        arg0->unkB0 = D_8038D948;
        func_800058DC(arg0, func_8022B3E0);
        return;
    }
    if (func_8022AB58(arg0, a1, a2) != 0) {
        arg0->unk91 = 0;
        func_8038D77C((func_8038D77C_StructC *)arg0, (func_8038D77C_StructB *)a1, (func_8038D77C_StructA *)a2);
        return;
    }
    if (D_801BBBF0.unkB90 > 20.0f && arg0->unk9A == 0 && a2->unk9E == 0 && arg0->unk98 != 0) {
        arg0->unk9A |= 0x100;
        func_8038D77C((func_8038D77C_StructC *)arg0, (func_8038D77C_StructB *)a1, (func_8038D77C_StructA *)a2);
        return;
    }
    if (D_801BBBF0.unkB90 <= 20.0f && (arg0->unk9A & 0x100)) {
        arg0->unk9A ^= 0x100;
        func_8038D77C((func_8038D77C_StructC *)arg0, (func_8038D77C_StructB *)a1, (func_8038D77C_StructA *)a2);
        return;
    }
    if (a2->u30.bf.b11 != 0 && !(arg0->unk9A & 8)) {
        func_8038D77C((func_8038D77C_StructC *)arg0, (func_8038D77C_StructB *)a1, (func_8038D77C_StructA *)a2);
        return;
    }
    if (a2->u30.bf.b11 == 0 && (arg0->unk9A & 8)) {
        arg0->unk9A ^= 8;
        func_8038D77C((func_8038D77C_StructC *)arg0, (func_8038D77C_StructB *)a1, (func_8038D77C_StructA *)a2);
        return;
    }
    if (a1->u38.b31 && !a1->u38.b28 && !(arg0->unk9A & 2)) {
        func_8038D77C((func_8038D77C_StructC *)arg0, (func_8038D77C_StructB *)a1, (func_8038D77C_StructA *)a2);
        return;
    }
    if (a1->u38.b31 && a1->u38.b28 && !(arg0->unk9A & 4)) {
        func_8038D77C((func_8038D77C_StructC *)arg0, (func_8038D77C_StructB *)a1, (func_8038D77C_StructA *)a2);
        return;
    }
    if (!a1->u38.b31 && (arg0->unk9A & 6)) {
        arg0->unk92 = arg0->unk93;
        arg0->unk9A = 0;
        func_8038D77C((func_8038D77C_StructC *)arg0, (func_8038D77C_StructB *)a1, (func_8038D77C_StructA *)a2);
    }
}
#undef D_801BBBF0
#undef D_8038D948
#undef func_8022AB58
#undef func_8022B3E0
#undef func_8038D77C_StructA
#undef func_8038D77C_StructB
#undef func_8038D77C_StructC

void *func_8022A834(s32 arg0, struct func_8022A834_Struct *arg1);

void func_8038DBC4(s32 arg0, struct func_8022A834_Struct *arg1) {
    func_8022A834(arg0, arg1);
}

