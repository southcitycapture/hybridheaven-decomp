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
#define func_8001EAD0 func_8001EAD0__func_8038CFF4
#define func_8001EB64 func_8001EB64__func_8038CFF4
#define func_8001EF38 func_8001EF38__func_8038CFF4
#define func_80228C20 func_80228C20__func_8038CFF4
#define func_80228D90 func_80228D90__func_8038CFF4
#define func_80228FD0 func_80228FD0__func_8038CFF4
#define func_80229260 func_80229260__func_8038CFF4
#define func_802292D0 func_802292D0__func_8038CFF4
#define func_8022B640 func_8022B640__func_8038CFF4
#define func_8038D7D4_StructG func_8038D7D4_StructG__func_8038CFF4
typedef struct func_8038D7D4_StructG {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0x1031 - 0xE0];
    u8 unk1031;
} func_8038D7D4_StructG;
extern func_8038D7D4_StructG D_801BBBF0;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern s32 func_8022B640(s32);


typedef struct func_8038CFF4_StructC {
    u8 pad0[0xC];
    s32 unkC;
} func_8038CFF4_StructC;

typedef struct func_8038CFF4_StructA {
    u8 pad0[0xC];
    func_8038CFF4_StructC *unkC;
    u8 pad10[0x90 - 0x10];
    u8 unk90;
    u8 unk91;
    u8 unk92;
    u8 pad93[2];
    u8 unk95;
    s16 unk96;
    u8 pad98[0x9C - 0x98];
    u32 unk9C;
} func_8038CFF4_StructA;

typedef struct func_8038CFF4_StructB {
    u8 pad0[4];
    u16 unk4;
    s16 unk6;
    s16 unk8;
    u8 padA[0x30 - 0xA];
    union {
        u16 h;
        struct {
            u32 a : 3;
            u32 b : 4;
            u32 c : 2;
            u32 t : 2;
            u32 u : 2;
            u32 d : 3;
        } bf;
        struct {
            u8 pad[2];
            u8 b2;
        } by;
    } unk30;
    u32 pad34;
    struct {
        u32 f : 1;
        u32 p : 2;
        u32 g : 1;
    } unk38;
    u8 pad3C[0x2FC - 0x3C];
    u8 unk2FC;
    u8 pad2FD[0x312 - 0x2FD];
    s16 unk312;
    u8 pad314[0x328 - 0x314];
    u8 unk328;
    u8 unk329;
    s16 unk32A;
} func_8038CFF4_StructB;
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s16 func_8001EF38(f32, f32);
extern s32 func_80228C20();
extern s32 func_80228D90();
extern void func_80228FD0();
extern s32 func_80229260();
extern void func_802292D0();
extern u8 D_801BBC8C[];
extern u8 D_801BBCAC[];

#define G D_801BBBF0
#define G232 (*(s16 *)((u8 *)&D_801BBBF0 + 0x232))
#define GB90 (*(f32 *)((u8 *)&D_801BBBF0 + 0xB90))

void func_8038CFF4(func_8038CFF4_StructA *arg0, s32 arg1) {
    s16 pad36;
    s16 sp34;
    func_8038CFF4_StructB *sp30;
    func_8038CFF4_StructB *a1;
    func_8038CFF4_StructB *v1;
    f32 sp24;
    s32 v;
    s32 bb;

    sp34 = (s16)(0x2800 - G232) & 0x1FFF;
    sp30 = (G.unkDC == arg0->unkC->unkC) ? (func_8038CFF4_StructB *)D_801BBC8C : (func_8038CFF4_StructB *)D_801BBCAC;
    a1 = (G.unkDC == arg0->unkC->unkC) ? (func_8038CFF4_StructB *)D_801BC03C : (func_8038CFF4_StructB *)D_801BC3D8;
    v1 = (G.unkDC == arg0->unkC->unkC) ? (func_8038CFF4_StructB *)D_801BC3D8 : (func_8038CFF4_StructB *)D_801BC03C;
    if (arg0->unk91 == 1 && G.unk1031 == 7) {
        arg0->unk91 = 2;
    }
    if (a1->unk30.bf.t != 0 && a1->unk30.bf.b != 1) {
        if (G.unk1031 >= 7 && G.unk1031 != 0xF) {
            arg0->unk92 = arg0->unk95 = 0;
        }
        if (G.unk1031 == 5 && !(a1->unk30.h & 7) && func_80229260(arg0, a1, sp30, 10) == 0) {
            if (GB90 < 15.0 || arg0->unk95 == 1) {
                if (arg0->unk95 == 0) {
                    arg0->unk95 = 1;
                    arg0->unk92 = 1;
                    return;
                }
                if (GB90 > 20.0) {
                    arg0->unk95 = arg0->unk92 = 0;
                    return;
                }
                if ((v1->unk30.bf.u != 0 && v1->unk312 >= 0xB) || v1->unk30.bf.b == 2) {
                    if (a1->unk6 >= 0x64) {
                        sp30->unk4 = 0x8000;
                    }
                } else {
                    if (arg0->unk91 == 2) {
                        arg0->unk92 = 4;
                    }
                    if (arg0->unk92 == 1) {
                        if (a1->unk38.f != 0) {
                            arg0->unk92 = 3;
                            arg0->unk90 = 0;
                            return;
                        }
                        v = (s32)a1->unk2FC % 4;
                        if ((v << 0) == 1) {
                            sp30->unk4 = 0x10;
                            arg0->unk92 = 3;
                            return;
                        }
                        if (v == 3) {
                            sp30->unk4 = 0x10;
                            arg0->unk90 = 0;
                            arg0->unk92 = 5;
                            return;
                        }
                        if (a1->unk6 >= 0x46) {
                            func_802292D0(sp30, a1);
                            arg0->unk91 = 1;
                            arg0->unk92 = 2;
                            return;
                        }
                        func_80228FD0(arg0, sp30, 4);
                        return;
                    }
                    if (arg0->unk92 == 2) {
                        if (a1->unk38.f != 0) {
                            arg0->unk92 = 3;
                            arg0->unk90 = 0;
                        }
                        v = a1->unk30.by.b2 & 3;
                        if ((v << 0) == 2U) {
                            arg0->unk92 = 4;
                            v = a1->unk30.by.b2 & 3;
                        }
                        if (v == 0) {
                            arg0->unk92 = 1;
                        }
                    } else if (arg0->unk92 == 3) {
                        if (a1->unk38.f != 0) {
                            bb = arg0->unk90++ >= 0x1F;
                            if (bb) {
                                arg0->unk92 = 4;
                                arg0->unk90 = 0;
                            }
                        }
                        if (a1->unk38.f == 0) {
                            arg0->unk92 = 1;
                        }
                    } else {
                        if (arg0->unk92 == 4) {
                            if (a1->unk6 >= 0x64) {
                                if (func_80228D90(arg0, a1) != 0) {
                                    a1->unk30.by.b2 = a1->unk30.by.b2 & 0xFFFC;
                                    sp30->unk4 = 0x8000;
                                    arg0->unk91 = 0;
                                    return;
                                }
                            }
                            func_80228FD0(arg0, sp30, 4);
                            return;
                        }
                        if (arg0->unk92 == 5) {
                            arg0->unk90 = arg0->unk90 + 1;
                            a1->unk328 = 3;
                            a1->unk329 = 0;
                            sp24 = (f32)((f64)(func_8001EB64((s16)(func_80228C20(arg0) + 0x800)) * 80.0f) / 20.0);
                            a1->unk32A = (s16)(func_8001EF38(sp24, (f32)((f64)(func_8001EAD0((s16)(func_80228C20(arg0) + 0x800)) * 80.0f) / 20.0)) - sp34) & 0x1FFF;
                            if (a1->unk38.f != 0 && a1->unk38.g != 0) {
                                arg0->unk92 = 4;
                            }
                            if (a1->unk38.f == 0) {
                                arg0->unk92 = 1;
                            }
                        }
                    }
                }
            } else {
                if (arg0->unk91 == 1) {
                    arg0->unk91 = 2;
                }
                if ((a1->unk30.by.b2 & 3) == 2U) {
                    a1->unk30.by.b2 = a1->unk30.by.b2 & 0xFFFC;
                }
                if (a1->unk6 >= 0x64 && (arg0->unk9C & 0x3F) < 0xA) {
                    s16 t = func_80228C20(arg0) + sp34;
                    sp30->unk6 = -func_8001EB64(t) * 80.0f;
                    sp30->unk8 = func_8001EAD0(t) * 80.0f;
                    return;
                }
                if (a1->unk6 >= 0x64 && (arg0->unk9C & 0x3F) == 0x20 && !(a1->unk30.by.b2 & 3)) {
                    func_802292D0(sp30, a1);
                    return;
                }
                if (a1->unk6 < 0x32) {
                    a1->unk328 = 3;
                    a1->unk329 = 0;
                    arg0->unk96 = (func_8022B640(2) << 12) + 0x800;
                    sp24 = -func_8001EB64(arg0->unk96) * 2;
                    a1->unk32A = func_8001EF38(sp24, func_8001EAD0(arg0->unk96) * 2);
                }
            }
        }
    }
}
#undef G
#undef G232
#undef GB90
#undef D_801BBBF0
#undef D_801BBC8C
#undef D_801BBCAC
#undef D_801BC03C
#undef D_801BC3D8
#undef func_8001EAD0
#undef func_8001EB64
#undef func_8001EF38
#undef func_80228C20
#undef func_80228D90
#undef func_80228FD0
#undef func_80229260
#undef func_802292D0
#undef func_8022B640
#undef func_8038D7D4_StructG


extern void func_80229404(void *);
extern void func_80229CE0(void *, void *, s32);
extern s32 func_8022B640(s32);

void func_8038D668(void *arg0, void *arg1, void *arg2) {
    u8 *p0 = (u8 *) arg0;
    u8 *p1 = (u8 *) arg1;
    u8 *p2 = (u8 *) arg2;

    if (((*(u32 *) (p2 + 0x30) << 11) >> 30) != 0) {
        func_80229404(arg1);
        *(s16 *) (p0 + 0x9A) = (s16) (*(s16 *) (p0 + 0x9A) | 8);
    } else if ((*(u32 *) (p1 + 0x38) >> 31) != 0) {
        p1[0x2D8] = 2;
        *(s16 *) (p0 + 0x9A) = 2;
        func_80229CE0(arg0, arg1, 0);
    } else if (func_8022B640(2) != 0) {
        p1[0x2D8] = 0;
        func_80229CE0(arg0, arg1, 1);
    } else {
        p1[0x2D8] = 1;
        func_80229CE0(arg0, arg1, func_8022B640(2) & 0xFF);
    }
    p0[0xA1] = p1[0x2D8];
    p0[0xA2] = p1[0x2D9];
}


struct func_8038D74C_Struct {
    u8 pad0[0xC];
    s32 unkC;
};

extern s32 D_801BBCCC;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
#define func_8038D7D4 func_8038D7D4__decl51
extern u8 func_8038D7D4[];

void func_8038D74C(struct func_8038D74C_Struct *arg0, void *arg1) {
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
    func_8038D668(arg0, var_a1, var_a2);
    func_800058DC(arg0, func_8038D7D4);
}
#undef func_8038D7D4

#define D_801BBBF0 D_801BBBF0__func_8038D7D4
#define D_8038D7D4 D_8038D7D4__func_8038D7D4
#define func_8022AB58 func_8022AB58__func_8038D7D4
#define func_8022B3E0 func_8022B3E0__func_8038D7D4
extern u8 D_8038D7D4[];
#define func_8038D7D4 D_8038D7D4
#undef func_8038D7D4

typedef struct func_8038D7D4_StructG {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0x1031 - 0xE0];
    u8 unk1031;
} func_8038D7D4_StructG;
typedef struct func_8038D7D4_StructO {
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
} func_8038D7D4_StructO;
typedef struct func_8038D7D4_StructP {
    u8 pad0[0x30];
    union {
        u16 h;
        struct {
            u32 p0 : 3;
            u32 b : 4;
            u32 p1 : 4;
            u32 t : 2;
        } bf;
    } unk30;
    u32 pad34;
    struct {
        u32 f : 1;
        u32 p : 2;
        u32 g : 1;
    } unk38;
} func_8038D7D4_StructP;

extern func_8038D7D4_StructG D_801BBBF0;
extern s32 func_8022AB58();
extern void func_8022B3E0();

#define CALL() func_8038D668(arg0, a3, a2)

void func_8038D7D4(func_8038D7D4_StructO *arg0, s32 arg1) {
    func_8038D7D4_StructP *a3;
    func_8038D7D4_StructP *a2;

    a3 = (D_801BBBF0.unkDC == arg0->unkC) ? (func_8038D7D4_StructP *)&D_801BC03C : (func_8038D7D4_StructP *)&D_801BC3D8;
    a2 = (D_801BBBF0.unkDC == arg0->unkC) ? (func_8038D7D4_StructP *)&D_801BC3D8 : (func_8038D7D4_StructP *)&D_801BC03C;
    if (arg0->unkA8 == 2) {
        CALL();
        arg0->unkA8 = 0;
        return;
    }
    if ((a3->unk30.h & 7) || (D_801BBBF0.unk1031 == 6)) {
        arg0->unkA8 = 1;
        return;
    }
    if (D_801BBBF0.unk1031 == 7) {
        arg0->unkB0 = D_8038D7D4;
        func_800058DC((s32)arg0, func_8022B3E0);
        return;
    }
    if (func_8022AB58(arg0, a3, a2) != 0) {
        arg0->unk91 = 0;
        CALL();
        return;
    }
    if (a2->unk30.bf.t != 0 || a2->unk30.bf.b == 2) {
        CALL();
        return;
    }
    if (a2->unk30.bf.t == 0 && a2->unk30.bf.b != 2) {
        if (arg0->unk9A & 8) {
            arg0->unk9A = 0;
            CALL();
            return;
        }
    }
    if (a3->unk38.f != 0 && !(arg0->unk9A & 2)) {
        CALL();
        return;
    }
    if (a3->unk38.f != 0 && a3->unk38.g && !(arg0->unk9A & 4)) {
        CALL();
        return;
    }
    if (a3->unk38.f == 0 && (arg0->unk9A & 6)) {
        arg0->unk9A = 0;
        arg0->unk92 = arg0->unk93;
        CALL();
    }
}
#undef CALL
#undef D_801BBBF0
#undef D_8038D7D4
#undef func_8022AB58
#undef func_8022B3E0


struct func_8038D9D8_Arg0 {
    u8 pad[0xA5];
    u8 unkA5;
};

struct func_8038D9D8_Arg1 {
    u8 pad[6];
    s16 unk6;
};

void func_8022A834();

void func_8038D9D8(struct func_8038D9D8_Arg0 *arg0, struct func_8038D9D8_Arg1 *arg1) {
    if (arg1->unk6 >= 0x64) {
        arg0->unkA5 = 1;
        return;
    }
    func_8022A834();
}

