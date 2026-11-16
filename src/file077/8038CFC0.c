#include "common.h"


extern s32 func_800058DC(s32, void *);
extern s32 func_80229500();
extern void func_8038CFF4();

void func_8038CFC0(s32 arg0, s32 arg1) {
    func_80229500();
    func_800058DC(arg0, &func_8038CFF4);
}

#define D_8001EAD0 D_8001EAD0__func_8038CFF4
#define D_8001EB64 D_8001EB64__func_8038CFF4
#define D_801BBBF0 D_801BBBF0__func_8038CFF4
#define D_801BBC8C D_801BBC8C__func_8038CFF4
#define D_801BBCAC D_801BBCAC__func_8038CFF4
#define D_801BC03C D_801BC03C__func_8038CFF4
#define D_801BC3D8 D_801BC3D8__func_8038CFF4
#define func_8022559C func_8022559C__func_8038CFF4
#define func_80228C20 func_80228C20__func_8038CFF4
#define func_80228D90 func_80228D90__func_8038CFF4
#define func_80228FD0 func_80228FD0__func_8038CFF4
#define func_80229260 func_80229260__func_8038CFF4
#define func_802292D0 func_802292D0__func_8038CFF4
#define func_8038D7F0_StructG func_8038D7F0_StructG__func_8038CFF4
typedef struct {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 padE0[0xB90 - 0xE0];
    f32 unkB90;
    u8 padB94[0x1031 - 0xB94];
    u8 unk1031;
} func_8038D7F0_StructG;
extern func_8038D7F0_StructG D_801BBBF0;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];


extern u8 D_801BBC8C[];
extern u8 D_801BBCAC[];
extern f32 D_8001EAD0(s16);
extern f32 D_8001EB64(s16);
extern u8 func_8022559C(s32, void *);
extern s32 func_80228C20();
extern s32 func_80228D90();
extern void func_80228FD0();
extern s32 func_80229260();
extern void func_802292D0();

typedef struct func_8038CFF4_StructT {
    u8 pad0[0x1C];
    s32 unk1C;
} func_8038CFF4_StructT;

typedef struct func_8038CFF4_StructU {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad10[0x4C];
    func_8038CFF4_StructT *unk5C;
} func_8038CFF4_StructU;

typedef struct func_8038CFF4_StructS {
    u8 pad0[4];
    s16 unk4;
    s16 unk6;
    u8 pad8[0x28];
    u32 f30_0:3;
    u32 f30_3:4;
    u32 f30_7:2;
    u32 f30_9:2;
    u32 f30_11:2;
    u32 f30_13:19;
    u8 pad34[4];
    u32 f38_0:1;
    u32 f38_1:2;
    u32 f38_3:1;
    u32 f38_4:28;
    u8 pad3C[0x29C];
    u8 unk2D8;
    u8 unk2D9;
    u8 pad2DA[0x22];
    u8 unk2FC;
    u8 pad2FD[0x15];
    s16 unk312;
} func_8038CFF4_StructS;

typedef struct func_8038CFF4_StructP {
    u8 pad0[0xC];
    func_8038CFF4_StructU *unkC;
    u8 pad10[0x80];
    u8 unk90;
    u8 unk91;
    u8 unk92;
    u8 pad93[2];
    u8 unk95;
    u8 pad96[2];
    s16 unk98;
    s16 unk9A;
} func_8038CFF4_StructP;

typedef struct func_8038CFF4_StructO {
    u8 pad0[2];
    s16 unk2;
    u16 unk4;
    s16 unk6;
    s16 unk8;
} func_8038CFF4_StructO;

#define GG D_801BBBF0
#define G232 (*(s16 *)((u8 *)&D_801BBBF0 + 0x232))
#define GEC (*(func_8038CFF4_StructU **)((u8 *)&D_801BBBF0 + 0xEC))
#define B32(p) (*((u8 *)(p) + 0x32))
#define H30(p) (*(u16 *)((u8 *)(p) + 0x30))

void func_8038CFF4(func_8038CFF4_StructP *arg0, s32 arg1) {
    s16 sp36;
    s16 sp34;
    func_8038CFF4_StructO *sp30;
    s32 pad2C;
    func_8038CFF4_StructS *a1;
    func_8038CFF4_StructS *t1;
    u8 sp23;
    f64 fv;
    s32 v;

    sp34 = (s16)(0x2800 - G232) & 0x1FFF;
    if (arg0->unkC->unkC == GG.unkDC) {
        sp30 = (func_8038CFF4_StructO *)D_801BBC8C;
    } else {
        sp30 = (func_8038CFF4_StructO *)D_801BBCAC;
    }
    if (arg0->unkC->unkC == GG.unkDC) {
        a1 = (func_8038CFF4_StructS *)D_801BC03C;
    } else {
        a1 = (func_8038CFF4_StructS *)D_801BC3D8;
    }
    if (arg0->unkC->unkC == GG.unkDC) {
        t1 = (func_8038CFF4_StructS *)D_801BC3D8;
    } else {
        t1 = (func_8038CFF4_StructS *)D_801BC03C;
    }
    if ((s32)t1 == (s32)&D_801BBBF0 + 0x44C) {
        arg1 = ((func_8038CFF4_StructU *)GG.unkDC)->unk5C->unk1C;
    } else {
        arg1 = GEC->unk5C->unk1C;
    }
    if (t1) {}
    sp23 = func_8022559C(arg1, a1);
    if ((a1->f30_9 != 0) && (a1->f30_3 != 1)) {
        if ((GG.unk1031 >= 7) && (GG.unk1031 != 0xF)) {
            arg0->unk92 = arg0->unk95 = 0;
        }
        if ((GG.unk1031 == 5) && !(H30(a1) & 7) && (func_80229260(arg0, a1, sp30, 0x14) == 0)) {
            if ((((fv = GG.unkB90) < 15.0) || (arg0->unk95 == 1)) && (a1->unk6 >= 0x33)) {
                if (arg0->unk95 == 0) {
                    arg0->unk95 = 1;
                    arg0->unk92 = 1;
                    return;
                }
                if (fv > 20.0) {
                    arg0->unk95 = 0;
                    arg0->unk92 = 0;
                    return;
                }
                if (((t1->f30_11 != 0) && (t1->unk312 >= 0xB)) || (t1->f30_3 == 2U)) {
                    if (a1->unk6 >= 0x64) {
                        sp30->unk4 = 0x8000;
                    }
                } else {
                    v = arg0->unk92;
                    if (1 == (v | 0)) {
                        if (a1->f38_0 != 0) {
                            arg0->unk90 = 0;
                            arg0->unk92 = 3;
                            return;
                        }
                        if (a1->unk2D8 == 0x13) {
                            arg0->unk92 = 4;
                            return;
                        }
                        if (1 == ((s32)a1->unk2FC % 4)) {
                            sp30->unk4 = 0x10;
                            arg0->unk92 = 3;
                            arg0->unk90 = 0;
                            return;
                        }
                        if (a1->unk6 >= 0x47) {
                            func_802292D0(sp30, a1);
                            arg0->unk91 = 1;
                            arg0->unk92 = 2;
                            return;
                        }
                        func_80228FD0(arg0, sp30, 4);
                        return;
                    }
                    if (v == 2) {
                        if (a1->f38_0 != 0) {
                            arg0->unk92 = 3;
                        }
                        v = B32(a1) & 3;
                        if (2U == (v | 0)) {
                            arg0->unk92 = 4;
                            v = B32(a1) & 3;
                        }
                        if (v == 0) {
                            arg0->unk92 = 1;
                        }
                    } else if (v == 3) {
                        if (++arg0->unk90 >= 0xB) {
                            arg0->unk92 = 4;
                            arg0->unk90 = 0;
                        }
                    } else if (v == 4) {
                        if ((a1->unk6 >= 0x64) && (func_80228D90(arg0, a1) != 0)) {
                            B32(a1) = B32(a1) & 0xFFFC;
                            sp30->unk4 = 0x8000;
                            arg0->unk91 = 0;
                            return;
                        }
                        func_80228FD0(arg0, sp30, 4);
                    }
                }
            } else {
                v = B32(a1);
                if ((v & 3) == 2U) {
                    B32(a1) = v & 0xFFFC;
                }
                if (arg0->unk91 == 1) {
                    arg0->unk91 = 2;
                }
                if ((a1->unk6 >= 0x64) && (a1->unk2D8 == 0xC) && (func_80228D90(arg0) != 0) && (GG.unkB90 > 30.0)) {
                    sp30->unk4 = 0x8000;
                    arg0->unk91 = 0;
                    return;
                }
                sp36 = (s16)(func_80228C20(arg0) + sp34) & 0x1FFF;
                if (GG.unkB90 > 50.0f) {
                    arg0->unk9A = 0x14;
                }
                arg1 = arg0->unk9A-- > 0;
                if (arg1) {
                    sp30->unk2 = 0x2000;
                    sp30->unk6 = -D_8001EB64(sp36) * 40.0f;
                    sp30->unk8 = D_8001EAD0(sp36) * 40.0f;
                    return;
                }
                if (((sp23 >= 0x15) && (GG.unkB90 > 30.0f)) || (GG.unkB90 > 30.0f)) {
                    sp30->unk6 = -D_8001EB64(sp36) * 80.0f;
                    sp30->unk8 = D_8001EAD0(sp36) * 80.0f;
                    return;
                }
                sp30->unk6 = -D_8001EB64(sp36) * 40.0f;
                sp30->unk8 = D_8001EAD0(sp36) * 40.0f;
            }
        }
    }
}
#undef GG
#undef G232
#undef GEC
#undef B32
#undef H30
#undef D_8001EAD0
#undef D_8001EB64
#undef D_801BBBF0
#undef D_801BBC8C
#undef D_801BBCAC
#undef D_801BC03C
#undef D_801BC3D8
#undef func_8022559C
#undef func_80228C20
#undef func_80228D90
#undef func_80228FD0
#undef func_80229260
#undef func_802292D0
#undef func_8038D7F0_StructG

extern u8 D_801BC3D8[];

struct func_8038D630_StructA {
    u8 pad0[0x9A];
    s16 unk9A;
    u8 pad9C[5];
    u8 unkA1;
    u8 unkA2;
};
struct func_8038D630_StructB {
    u8 pad0[0x38];
    u32 unk38;
    u8 pad3C[0x2D8 - 0x3C];
    u8 unk2D8;
    u8 unk2D9;
};
struct func_8038D630_StructC {
    u8 pad0[0x30];
    u32 pad30_0 : 11;
    u32 f : 2;
    u32 pad30_1 : 19;
};
extern void func_802294BC(void *);
extern void func_80229CE0(void *, void *, s32);
extern s32 func_8022B640(s32);

void func_8038D630(void *a0, void *a1, void *a2) {
    struct func_8038D630_StructA *arg0 = a0;
    struct func_8038D630_StructB *arg1 = a1;
    struct func_8038D630_StructC *arg2 = a2;
    s32 v;

    if (arg2->f != 0) {
        func_802294BC(arg1);
        arg0->unk9A |= 8;
    } else if ((arg1->unk38 >> 31) != 0) {
        arg1->unk2D8 = 2;
        arg0->unk9A |= 2;
        func_80229CE0(arg0, arg1, func_8022B640(2) & 0xFF);
    } else if (*(f32 *)(D_801BC3D8 + 0x3A8) > 30.0f) {
        arg1->unk2D8 = 0x13;
        arg1->unk2D9 = 1;
    } else {
        v = func_8022B640(5);
        if (v == 0 || v == 1 || v == 2) {
            arg1->unk2D8 = 0;
            func_80229CE0(arg0, arg1, 1);
        } else {
            arg1->unk2D8 = 1;
            func_80229CE0(arg0, arg1, func_8022B640(2) & 0xFF);
        }
    }
    arg0->unkA1 = arg1->unk2D8;
    arg0->unkA2 = arg1->unk2D9;
}


struct func_8038D768_Struct {
    u8 pad0[0xC];
    s32 unkC;
};

extern s32 D_801BBCCC;
extern u8 D_801BC03C[];
#define func_8038D7F0 func_8038D7F0__decl78
extern u8 func_8038D7F0[];

void func_8038D768(struct func_8038D768_Struct *arg0, void *arg1) {
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
    func_8038D630(arg0, var_a1, var_a2);
    func_800058DC(arg0, func_8038D7F0);
}
#undef func_8038D7F0

#define D_801BBBF0 D_801BBBF0__func_8038D7F0
#define D_8038D7F0 D_8038D7F0__func_8038D7F0
#define func_8022AB58 func_8022AB58__func_8038D7F0
#define func_8022B3E0 func_8022B3E0__func_8038D7F0
#define func_8038D7F0 D_8038D7F0
#undef func_8038D7F0

typedef struct {
    u8 pad0[0x30];
    union {
        u16 h;
        struct {
            u32 pad0 : 11;
            u32 f : 2;
            u32 pad1 : 19;
        } bf;
    } u30;
    u8 pad34[4];
    u32 b31 : 1;
    u32 pad38 : 2;
    u32 b28 : 1;
    u32 pad38b : 28;
    u8 pad3C[0x396 - 0x3C];
    u8 unk396;
} func_8038D7F0_StructP;

typedef struct {
    u8 pad0[0xC];
    s32 unkC;
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
} func_8038D7F0_StructA;

typedef struct {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 padE0[0xB90 - 0xE0];
    f32 unkB90;
    u8 padB94[0x1031 - 0xB94];
    u8 unk1031;
} func_8038D7F0_StructG;

extern func_8038D7F0_StructG D_801BBBF0;
extern s32 func_8022AB58(void *, void *, void *);
extern u8 func_8022B3E0[];
extern u8 D_8038D7F0[];

void func_8038D7F0(func_8038D7F0_StructA *arg0, s32 arg1) {
    func_8038D7F0_StructP *p;
    func_8038D7F0_StructP *q;
    u32 f;

    p = (D_801BBBF0.unkDC == arg0->unkC) ? (func_8038D7F0_StructP *)D_801BC03C : (func_8038D7F0_StructP *)D_801BC3D8;
    q = (D_801BBBF0.unkDC == arg0->unkC) ? (func_8038D7F0_StructP *)D_801BC3D8 : (func_8038D7F0_StructP *)D_801BC03C;
    if (arg0->unkA8 == 2) {
        func_8038D630(arg0, p, q);
        arg0->unkA8 = 0;
        return;
    }
    if ((p->u30.h & 7) || (D_801BBBF0.unk1031 == 6)) {
        arg0->unkA8 = 1;
        return;
    }
    if (D_801BBBF0.unk1031 == 7) {
        arg0->unkB0 = D_8038D7F0;
        func_800058DC((s32)arg0, func_8022B3E0);
        return;
    }
    if (func_8022AB58(arg0, p, q) != 0) {
        arg0->unk91 = 0;
        func_8038D630(arg0, p, q);
        return;
    }
    f = q->u30.bf.f;
    if ((f != 0) && !(arg0->unk9A & 8)) {
        func_8038D630(arg0, p, q);
        return;
    }
    if (p->b31 && !p->b28 && !(arg0->unk9A & 2)) {
        func_8038D630(arg0, p, q);
        return;
    }
    if (p->b31 && p->b28 && !(arg0->unk9A & 4)) {
        func_8038D630(arg0, p, q);
        return;
    }
    if (D_801BBBF0.unkB90 > 30.0f) {
        if ((arg0->unk9A == 0) && (q->unk396 == 0)) {
            arg0->unk9A |= 0x100;
            func_8038D630(arg0, p, q);
            return;
        }
    }
    if (D_801BBBF0.unkB90 <= 25.0f) {
        if (arg0->unk9A & 0x100) {
            arg0->unk9A ^= 0x100;
            func_8038D630(arg0, p, q);
            return;
        }
    }
    if (!p->b31 && (arg0->unk9A & 6)) {
        arg0->unk9A = 0;
        arg0->unk92 = arg0->unk93;
        func_8038D630(arg0, p, q);
        return;
    }
    if (f == 0) {
        if (arg0->unk9A & 8) {
            arg0->unk9A ^= 8;
            func_8038D630(arg0, p, q);
        }
    }
}
#undef D_801BBBF0
#undef D_8038D7F0
#undef func_8022AB58
#undef func_8022B3E0

void *func_8022A834(s32 arg0, struct func_8022A834_Struct *arg1);

void func_8038DA6C(s32 arg0, struct func_8022A834_Struct *arg1) {
    func_8022A834(arg0, arg1);
}

