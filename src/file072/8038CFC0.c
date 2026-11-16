#include "common.h"


extern s32 func_800058DC(s32, void *);
extern s32 func_80229500();
extern void func_8038CFF4();

void func_8038CFC0(s32 arg0, s32 arg1) {
    func_80229500();
    func_800058DC(arg0, &func_8038CFF4);
}

#define D_801BBBF0 D_801BBBF0__func_8038CFF4
#define D_801BBC8C D_801BBC8C__func_8038CFF4
#define D_801BBCAC D_801BBCAC__func_8038CFF4
#define D_801BC03C D_801BC03C__func_8038CFF4
#define D_801BC3D8 D_801BC3D8__func_8038CFF4
#define D_8038DAC0 D_8038DAC0__func_8038CFF4
#define func_8001EAD0 func_8001EAD0__func_8038CFF4
#define func_8001EB64 func_8001EB64__func_8038CFF4
#define func_8001EF38 func_8001EF38__func_8038CFF4
#define func_80228C20 func_80228C20__func_8038CFF4
#define func_80228D90 func_80228D90__func_8038CFF4
#define func_80228FD0 func_80228FD0__func_8038CFF4
#define func_80229260 func_80229260__func_8038CFF4
#define func_802292D0 func_802292D0__func_8038CFF4
#define func_8038D7DC_G func_8038D7DC_G__func_8038CFF4
typedef struct {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 padE0[0x1031 - 0xE0];
    u8 unk1031;
} func_8038D7DC_G;
extern func_8038D7DC_G D_801BBBF0;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];


extern u8 D_801BBC8C[];
extern u8 D_801BBCAC[];
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s32 func_8001EF38(f32, f32);
extern s32 func_80228C20();
extern s32 func_80228D90();
extern void func_80228FD0();
extern s32 func_80229260();
extern void func_802292D0();
extern u8 D_8038DAC0;

typedef struct func_8038CFF4_StructG {
    u8 padG[0xDC];
    s32 unkDC;
    u8 padE0[0x152];
    s16 unk232;
    u8 pad234[0x95C];
    f32 unkB90;
    u8 padB94[0x49D];
    u8 unk1031;
} func_8038CFF4_StructG;

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
    u8 pad3C[0x2C0];
    u8 unk2FC;
    u8 pad2FD[0x15];
    s16 unk312;
    u8 pad314[0x14];
    u8 unk328;
    u8 unk329;
    s16 unk32A;
} func_8038CFF4_StructS;

typedef struct func_8038CFF4_StructU {
    u8 pad0[0xC];
    s32 unkC;
} func_8038CFF4_StructU;

typedef struct func_8038CFF4_StructP {
    u8 pad0[0xC];
    func_8038CFF4_StructU *unkC;
    u8 pad10[0x80];
    u8 unk90;
    u8 unk91;
    u8 unk92;
    u8 pad93[2];
    u8 unk95;
    u8 pad96[6];
    u32 unk9C;
} func_8038CFF4_StructP;

typedef struct func_8038CFF4_StructO {
    u8 pad0[2];
    s16 unk2;
    u16 unk4;
    s16 unk6;
    s16 unk8;
} func_8038CFF4_StructO;

typedef struct func_8038CFF4_StructH {
    u16 hi13 : 13;
    u16 lo3 : 3;
} func_8038CFF4_StructH;

#define GG (*(func_8038CFF4_StructG *)&D_801BBBF0)
#define B32(p) (*((u8 *)(p) + 0x32))
#define H30(p) (*(u16 *)((u8 *)(p) + 0x30))

void func_8038CFF4(func_8038CFF4_StructP *arg0, s32 arg1) {
    s16 pad36;
    s16 sp34;
    func_8038CFF4_StructO *sp30;
    func_8038CFF4_StructS *a1;
    func_8038CFF4_StructS *v1;
    f32 sp24;
    f64 fv;
    s32 v;
    s16 a;

    sp34 = (s16)(0x2800 - GG.unk232) & 0x1FFF;
    sp30 = (func_8038CFF4_StructO *)((D_801BBBF0.unkDC == arg0->unkC->unkC) ? D_801BBC8C : D_801BBCAC);
    if (D_801BBBF0.unkDC == arg0->unkC->unkC) {
        a1 = (func_8038CFF4_StructS *)D_801BC03C;
    } else {
        a1 = (func_8038CFF4_StructS *)D_801BC3D8;
    }
    if (D_801BBBF0.unkDC == arg0->unkC->unkC) {
        v1 = (func_8038CFF4_StructS *)D_801BC3D8;
    } else {
        v1 = (func_8038CFF4_StructS *)D_801BC03C;
    }
    if ((arg0->unk91 == 1) && (GG.unk1031 == 7)) {
        arg0->unk91 = 2;
    }
    if ((a1->f30_9 != 0) && (a1->f30_3 != 1)) {
        if ((GG.unk1031 >= 7) && (GG.unk1031 != 0xF)) {
            arg0->unk92 = arg0->unk95 = 0;
        }
        if ((GG.unk1031 == 5) && (((func_8038CFF4_StructH *)((u8 *)a1 + 0x30))->lo3 == 0) && (func_80229260(arg0, a1, sp30, 10) == 0)) {
            if (((fv = GG.unkB90) < 15.0) || (arg0->unk95 == 1)) {
                if (arg0->unk95 == 0) {
                    arg0->unk95 = 1;
                    arg0->unk92 = 1;
                    return;
                }
                if (((v1->f30_11 != 0) && (v1->unk312 >= 0xB)) || (v1->f30_3 == 2)) {
                    if (a1->unk6 >= 0x64) {
                        sp30->unk4 = 0x8000;
                    }
                } else {
                    if (fv > 20.0) {
                        arg0->unk95 = 0;
                        arg0->unk92 = 0;
                        return;
                    }
                    if (arg0->unk91 == 2) {
                        arg0->unk92 = 4;
                    }
                    v = arg0->unk92;
                    if (1 == (v | 0)) {
                        if (a1->f38_0 != 0) {
                            arg0->unk92 = 3;
                            arg0->unk90 = 0;
                            return;
                        }
                        v = (a1->unk2FC + D_8038DAC0) % 4;
                        if (1 == (v | 0)) {
                            sp30->unk4 = 0x10;
                            arg0->unk92 = 3;
                            arg0->unk90 = 0;
                            return;
                        }
                        if (2 == (v | 0)) {
                            sp30->unk4 = 0x10;
                            arg0->unk92 = 5;
                            arg0->unk90 = 0;
                            return;
                        }
                        if (a1->unk6 >= 0x46) {
                            func_802292D0(sp30, a1);
                            arg0->unk92 = 2;
                            return;
                        }
                        func_80228FD0(arg0, sp30, 4);
                        return;
                    }
                    if (2 == (v | 0)) {
                        if (a1->f38_0 != 0) {
                            arg0->unk90 = 0;
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
                        if (a1->f38_0 != 0) {
                            arg1 = arg0->unk90++ >= 0x10;
                            if (arg1) {
                                arg0->unk90 = 0;
                                arg0->unk92 = 4;
                                return;
                            }
                        }
                        if ((a1->f38_1 == 0) && (a1->f38_0 == 0)) {
                            arg0->unk92 = 1;
                            D_8038DAC0++;
                        }
                    } else if (v == 4) {
                        if ((a1->unk6 >= 0x64) && (func_80228D90(arg0) != 0)) {
                            B32(a1) = B32(a1) & 0xFFFC;
                            sp30->unk4 = 0x8000;
                            arg0->unk91 = 0;
                            return;
                        }
                        func_80228FD0(arg0, sp30, 4);
                        return;
                    } else if (v == 5) {
                        arg0->unk90 = arg0->unk90 + 1;
                        a1->unk328 = 3;
                        a1->unk329 = 0;
                        sp24 = func_8001EB64((s16)(func_80228C20(arg0) + 0x800)) * 80.0f / 20.0;
                        a1->unk32A = (s16)(func_8001EF38(sp24, func_8001EAD0((s16)(func_80228C20(arg0) + 0x800)) * 80.0f / 20.0) - sp34) & 0x1FFF;
                        if ((a1->f38_0 != 0) && a1->f38_3) {
                            arg0->unk92 = 4;
                        }
                        if ((a1->f38_1 == 0) && (a1->f38_0 == 0)) {
                            arg0->unk92 = 1;
                            D_8038DAC0++;
                        }
                    }
                }
            } else {
                if (arg0->unk91 == 1) {
                    arg0->unk91 = 2;
                }
                v = B32(a1);
                if ((v & 3) == 2U) {
                    B32(a1) = v & 0xFFFC;
                }
                v = arg0->unk9C & 0x3F;
                if ((u32)v < 10) {
                    a = func_80228C20(arg0) + sp34;
                    sp30->unk6 = -func_8001EB64(a) * 80.0f;
                    sp30->unk8 = func_8001EAD0(a) * 80.0f;
                    return;
                }
                if ((u32)v >= 0x31) {
                    a = func_80228C20(arg0) + sp34;
                    sp30->unk2 = 0x2000;
                    sp30->unk6 = -func_8001EB64(a) * 40.0f;
                    sp30->unk8 = func_8001EAD0(a) * 40.0f;
                }
            }
        }
    }
}
#undef GG
#undef B32
#undef H30
#undef D_801BBBF0
#undef D_801BBC8C
#undef D_801BBCAC
#undef D_801BC03C
#undef D_801BC3D8
#undef D_8038DAC0
#undef func_8001EAD0
#undef func_8001EB64
#undef func_8001EF38
#undef func_80228C20
#undef func_80228D90
#undef func_80228FD0
#undef func_80229260
#undef func_802292D0
#undef func_8038D7DC_G


extern void func_80229404(void *);
extern void func_80229CE0(void *, void *, s32);
extern s32 func_8022B640(s32);

void func_8038D670(u8 *arg0, u8 *arg1, u8 *arg2) {
    if (((*(u32 *) (arg2 + 0x30)) << 11) >> 30 != 0) {
        func_80229404(arg1);
        *(s16 *) (arg0 + 0x9A) = *(s16 *) (arg0 + 0x9A) | 8;
    } else if ((*(u32 *) (arg1 + 0x38)) >> 31 != 0) {
        arg1[0x2D8] = 2;
        *(s16 *) (arg0 + 0x9A) = 2;
        func_80229CE0(arg0, arg1, func_8022B640(2) & 0xFF);
    } else if (func_8022B640(2) == 0) {
        arg1[0x2D8] = 0;
        func_80229CE0(arg0, arg1, 1);
    } else {
        arg1[0x2D8] = 1;
        func_80229CE0(arg0, arg1, 0);
    }
    arg0[0xA1] = arg1[0x2D8];
    arg0[0xA2] = arg1[0x2D9];
}


struct func_8038D754_Struct {
    u8 pad0[0xC];
    s32 unkC;
};

extern s32 D_801BBCCC;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
#define func_8038D7DC func_8038D7DC__decl47
extern u8 func_8038D7DC[];

void func_8038D754(struct func_8038D754_Struct *arg0, void *arg1) {
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
    func_8038D670(arg0, var_a1, var_a2);
    func_800058DC(arg0, func_8038D7DC);
}
#undef func_8038D7DC

#define D_801BBBF0 D_801BBBF0__func_8038D7DC
#define D_8038D7DC D_8038D7DC__func_8038D7DC
#define func_8022AB58 func_8022AB58__func_8038D7DC
#define func_8022B3E0 func_8022B3E0__func_8038D7DC
#define func_8038D670 func_8038D670__func_8038D7DC
extern u8 D_8038D7DC[];
void func_8038D670(u8 *arg0, u8 *arg1, u8 *arg2);


typedef struct {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 padE0[0x1031 - 0xE0];
    u8 unk1031;
} func_8038D7DC_G;

typedef struct {
    u8 pad0[0x30];
    union {
        u16 h;
        struct {
            u32 a : 3;
            u32 c : 4;
            u32 d : 4;
            u32 b : 2;
            u32 e : 19;
        } bf;
    } u30;
    u8 pad34[4];
    struct {
        u32 b31 : 1;
        u32 pad : 2;
        u32 b28 : 1;
        u32 rest : 28;
    } u38;
} func_8038D7DC_P;

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
} func_8038D7DC_A;

extern func_8038D7DC_G D_801BBBF0;
extern s32 func_8022AB58();
extern u8 func_8022B3E0[];

void func_8038D7DC(func_8038D7DC_A *arg0, s32 arg1) {
    func_8038D7DC_P *p;
    func_8038D7DC_P *q;

    p = (func_8038D7DC_P *)(D_801BBBF0.unkDC == arg0->unkC ? D_801BC03C : D_801BC3D8);
    q = (func_8038D7DC_P *)(D_801BBBF0.unkDC == arg0->unkC ? D_801BC3D8 : D_801BC03C);
    if (arg0->unkA8 == 2) {
        func_8038D670((u8 *)arg0, (u8 *)p, (u8 *)q);
        arg0->unkA8 = 0;
        return;
    }
    if ((p->u30.h & 7) || (D_801BBBF0.unk1031 == 6)) {
        arg0->unkA8 = 1;
        return;
    }
    if (D_801BBBF0.unk1031 == 7) {
        arg0->unkB0 = D_8038D7DC;
        func_800058DC((s32)arg0, func_8022B3E0);
        return;
    }
    if (func_8022AB58(arg0, p, &D_801BBBF0, q) != 0) {
        arg0->unk91 = 0;
        func_8038D670((u8 *)arg0, (u8 *)p, (u8 *)q);
        return;
    }
    if (q->u30.bf.b != 0 && q->u30.bf.c == 2) {
        func_8038D670((u8 *)arg0, (u8 *)p, (u8 *)q);
        return;
    }
    if (q->u30.bf.b == 0 && q->u30.bf.c != 2) {
        if (arg0->unk9A & 8) {
            arg0->unk9A ^= 8;
            func_8038D670((u8 *)arg0, (u8 *)p, (u8 *)q);
            return;
        }
    }
    if (p->u38.b31 && !p->u38.b28) {
        if (!(arg0->unk9A & 2)) {
            arg0->unk9A |= 2;
            func_8038D670((u8 *)arg0, (u8 *)p, (u8 *)q);
            return;
        }
    }
    if (p->u38.b31 && p->u38.b28 && !(arg0->unk9A & 4)) {
        func_8038D670((u8 *)arg0, (u8 *)p, (u8 *)q);
        return;
    }
    if (!p->u38.b31 && (arg0->unk9A & 6)) {
        arg0->unk9A = 0;
        arg0->unk92 = arg0->unk93;
        func_8038D670((u8 *)arg0, (u8 *)p, (u8 *)q);
    }
}
#undef D_801BBBF0
#undef D_8038D7DC
#undef func_8022AB58
#undef func_8022B3E0
#undef func_8038D670


struct func_8038D9F0_Arg0 {
    u8 pad[0xA5];
    u8 unkA5;
};

struct func_8038D9F0_Arg1 {
    u8 pad[6];
    s16 unk6;
};

void func_8022A834();

void func_8038D9F0(struct func_8038D9F0_Arg0 *arg0, struct func_8038D9F0_Arg1 *arg1) {
    if (arg1->unk6 >= 0x64) {
        arg0->unkA5 = 1;
        return;
    }
    func_8022A834();
}

