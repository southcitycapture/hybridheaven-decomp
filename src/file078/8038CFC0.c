#include "common.h"

extern f32 D_801BC3D8[];
extern s16 func_80228C20(void *);
extern s32 D_801BBCCC;
extern u8 D_801BC03C[];
#define func_8038D5BC func_8038D5BC__decl
extern u8 func_8038D5BC[];
extern void func_800058DC();
extern void func_802294BC(void *);
extern void func_80229500();
extern void func_80229CE0(void *, void *, s32);
extern void func_8038D000();
extern void func_8038D470(void *, void *, void *);



void func_8038CFC0(void *arg0, void *arg1) {
    func_80229500();
    *(s16 *)((u8 *)arg0 + 0x96) = func_80228C20(arg0);
    func_800058DC(arg0, func_8038D000);
}

#define D_801BBBF0 D_801BBBF0__func_8038D000
#define D_801BBC8C D_801BBC8C__func_8038D000
#define D_801BBCAC D_801BBCAC__func_8038D000
#define func_8001EAD0 func_8001EAD0__func_8038D000
#define func_8001EB64 func_8001EB64__func_8038D000
#define func_8010843C func_8010843C__func_8038D000
#define func_80228D90 func_80228D90__func_8038D000

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
#undef v0
#undef D_801BBBF0
#undef D_801BBC8C
#undef D_801BBCAC
#undef func_8001EAD0
#undef func_8001EB64
#undef func_8010843C
#undef func_80228D90


struct func_8038D470_Struct0 {
    u8 pad0[0x92];
    u8 unk92;
    u8 unk93;
    u8 pad94[0x9A - 0x94];
    u16 unk9A;
    u8 pad9C[0xA1 - 0x9C];
    u8 unkA1;
    u8 unkA2;
};

struct func_8038D470_Struct1 {
    u8 pad0[0x2D8];
    u8 unk2D8;
    u8 unk2D9;
};

struct func_8038D470_Struct2 {
    u8 pad0[0x30];
    u32 unk30;
};


void func_8038D470(void *arg0, void *arg1, void *arg2) {
    struct func_8038D470_Struct0 *a0 = arg0;
    struct func_8038D470_Struct1 *a1 = arg1;
    struct func_8038D470_Struct2 *a2 = arg2;
    u8 temp_v0;

    if (((a2->unk30 << 0xB) >> 0x1E) != 0) {
        func_802294BC(arg1);
        a0->unk9A = 8;
    } else if ((f64) *(f32 *) ((u8 *) D_801BC3D8 + 0x3A8) > 20.0) {
        a1->unk2D8 = 0x13;
        a1->unk2D9 = 0;
    } else {
        a1->unk2D8 = 0;
        func_80229CE0(arg0, arg1, 2);
        temp_v0 = a0->unk92;
        a0->unk92 = temp_v0 + 1;
        a0->unk93 = temp_v0;
    }
    a0->unkA1 = a1->unk2D8;
    a0->unkA2 = a1->unk2D9;
}


struct func_8038D534_Struct {
    u8 pad0[0xC];
    s32 unkC;
};


void func_8038D534(struct func_8038D534_Struct *arg0, void *arg1) {
    void *var_a1;
    void *var_a2;

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
    func_8038D470(arg0, var_a1, var_a2);
    func_800058DC(arg0, func_8038D5BC);
}

#undef func_8038D5BC
#define D_801BBBF0 D_801BBBF0__func_8038D5BC
#define D_801BC3D8 D_801BC3D8__func_8038D5BC
#define D_8038D5BC D_8038D5BC__func_8038D5BC
#define func_800058DC func_800058DC__func_8038D5BC
#define func_8022AB58 func_8022AB58__func_8038D5BC
#define func_8022B3E0 func_8022B3E0__func_8038D5BC
#define func_8038D000_Glob func_8038D000_Glob__func_8038D5BC
#define func_8038D000_StructE func_8038D000_StructE__func_8038D5BC
#define func_8038D000_StructF func_8038D000_StructF__func_8038D5BC
#define func_8038D470 func_8038D470__func_8038D5BC
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
extern u8 D_801BC3D8[];
extern void *func_800058DC(void *, void *);
void func_8038D470(void *arg0, void *arg1, void *arg2);


typedef struct {
    u8 pad0[0xC];
    void *unkC;
    u8 pad10[0x91 - 0x10];
    u8 unk91;
    u8 unk92;
    u8 unk93;
    u8 pad94[0x9A - 0x94];
    s16 unk9A;
    u8 pad9C[0xA8 - 0x9C];
    u8 unkA8;
    u8 padA9[0xB0 - 0xA9];
    void *unkB0;
} func_8038D5BC_Obj;

typedef struct {
    u8 pad0[0x30];
    union {
        u16 h;
        struct {
            u32 pad : 11;
            u32 b : 2;
            u32 rest : 19;
        } bf;
    } u30;
    u8 pad34[0x38 - 0x34];
    u32 b31 : 1;
    u32 rest38 : 31;
} func_8038D5BC_P;
extern s32 func_8022AB58(void *, void *, void *);
extern u8 func_8022B3E0[];
extern u8 D_8038D5BC[];

void func_8038D5BC(func_8038D5BC_Obj *arg0, s32 arg1) {
    func_8038D5BC_P *a1;
    func_8038D5BC_P *a2;
    u32 c;
    u32 t;
    s32 flag;

    a1 = (D_801BBBF0.unkDC == arg0->unkC) ? (func_8038D5BC_P *)D_801BC03C : (func_8038D5BC_P *)D_801BC3D8;
    a2 = (D_801BBBF0.unkDC == arg0->unkC) ? (func_8038D5BC_P *)D_801BC3D8 : (func_8038D5BC_P *)D_801BC03C;
    if (arg0->unkA8 == 2) {
        func_8038D470(arg0, a1, a2);
        arg0->unkA8 = 0;
        return;
    }
    if ((a1->u30.h & 7) || (D_801BBBF0.unk1031 == 6)) {
        arg0->unkA8 = 1;
        return;
    }
    if (D_801BBBF0.unk1031 == 7) {
        arg0->unkB0 = D_8038D5BC;
        func_800058DC(arg0, func_8022B3E0);
        return;
    }
    if (func_8022AB58(arg0, a1, a2) != 0) {
        arg0->unk91 = 0;
        func_8038D470(arg0, a1, a2);
        return;
    }
    c = a2->u30.bf.b;
    if (c) {}
    if ((c != 0) && !(arg0->unk9A & 8)) {
        func_8038D470(arg0, a1, a2);
        return;
    }
#define v (arg0->unk9A)
    t = a1->b31;
    flag = !(v & 2);
    if (flag & t) {
        func_8038D470(arg0, a1, a2);
        return;
    }
    if ((D_801BBBF0.unkB90 > 20.0f) && (v == 0)) {
        arg0->unk9A = v | 0x100;
        func_8038D470(arg0, a1, a2);
        return;
    }
    if ((D_801BBBF0.unkB90 <= 18.0f) && (v & 0x100)) {
        arg0->unk9A = v ^ 0x100;
        func_8038D470(arg0, a1, a2);
        return;
    }
    flag = (t == 0);
    if (flag) {}
    if (flag & v & 2) {
        arg0->unk9A = v & 0xFD;
        arg0->unk92 = arg0->unk93;
        func_8038D470(arg0, a1, a2);
        return;
    }
    if ((c == 0) && (v & 8)) {
        arg0->unk9A = v ^ 8;
        func_8038D470(arg0, a1, a2);
    }
}
#undef v
#undef D_801BBBF0
#undef D_801BC3D8
#undef D_8038D5BC
#undef func_800058DC
#undef func_8022AB58
#undef func_8022B3E0
#undef func_8038D000_Glob
#undef func_8038D000_StructE
#undef func_8038D000_StructF
#undef func_8038D470
#define func_8038D5BC func_8038D5BC__decl

void *func_8022A834(s32 arg0, struct func_8022A834_Struct *arg1);

void func_8038D7D4(s32 arg0, struct func_8022A834_Struct *arg1) {
    func_8022A834(arg0, arg1);
}

