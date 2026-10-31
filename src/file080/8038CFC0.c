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
#define func_80228C20 func_80228C20__func_8038CFF4
#define func_80228D90 func_80228D90__func_8038CFF4
#define func_80228FD0 func_80228FD0__func_8038CFF4
#define func_802291FC func_802291FC__func_8038CFF4
#define func_802292D0 func_802292D0__func_8038CFF4
#define func_8038D438_StructGlobal func_8038D438_StructGlobal__func_8038CFF4
struct func_8038D438_StructGlobal {
    u8 pad0[0xB90];
    f32 unkB90;
};
extern struct func_8038D438_StructGlobal D_801BBBF0;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];


struct func_8038CFF4_StructA {
    u8 pad0[4];
    u16 unk4;
    s16 unk6;
    s16 unk8;
};
struct func_8038CFF4_StructB {
    u8 pad0[6];
    s16 unk6;
    u8 pad8[0x28];
    union {
        struct {
            u32 pad30a:3;
            u32 mode:4;
            u32 padx:2;
            u32 c:2;
            u32 d:2;
            u32 rest:19;
        } bits;
        u16 half[2];
        u8 byte[4];
    } flags;
    u8 pad34[0x2DE];
    s16 unk312;
};
struct func_8038CFF4_StructP {
    u8 pad0[0xC];
    s32 unkC;
};
struct func_8038CFF4_StructO {
    u8 pad0[0xC];
    struct func_8038CFF4_StructP *unkC;
    u8 pad10[0x81];
    u8 unk91;
    u8 unk92;
    u8 pad93[2];
    u8 unk95;
    u8 pad96[6];
    u32 unk9C;
};
extern u8 D_801BBC8C[];
extern u8 D_801BBCAC[];
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s32 func_80228C20(struct func_8038CFF4_StructO *, struct func_8038CFF4_StructB *);
extern s32 func_80228D90(struct func_8038CFF4_StructO *, struct func_8038CFF4_StructB *);
extern s32 func_80228FD0(struct func_8038CFF4_StructO *, struct func_8038CFF4_StructA *, s32);
extern s32 func_802291FC(struct func_8038CFF4_StructO *, struct func_8038CFF4_StructB *, struct func_8038CFF4_StructA *, s32);
extern void func_802292D0(struct func_8038CFF4_StructA *, struct func_8038CFF4_StructB *);

#define G8 ((u8 *)&D_801BBBF0)

void func_8038CFF4(struct func_8038CFF4_StructO *arg0, s32 arg1) {
    s16 h;
    s16 sp34;
    register struct func_8038CFF4_StructA *sp30;
    s32 t;
    struct func_8038CFF4_StructB *a1;
    struct func_8038CFF4_StructB *v1;
    unsigned long v;
    s32 two;
    f64 distance;

    sp34 = (s16)(0x2800 - *(s16 *)(G8 + 0x232)) & 0x1FFF;
    t = *(s32 *)(G8 + 0xDC);
    sp30 = (t == arg0->unkC->unkC) ? (struct func_8038CFF4_StructA *)D_801BBC8C : (struct func_8038CFF4_StructA *)D_801BBCAC;
    if (t == arg0->unkC->unkC) {
        a1 = (struct func_8038CFF4_StructB *)D_801BC03C;
    } else {
        a1 = (struct func_8038CFF4_StructB *)D_801BC3D8;
    }
    v1 = (t == arg0->unkC->unkC) ? (struct func_8038CFF4_StructB *)D_801BC3D8 : (struct func_8038CFF4_StructB *)D_801BC03C;
    if (arg0->unk91 == 1 && G8[0x1031] == 7) {
        arg0->unk91 = 2;
    }
    if (a1->flags.bits.c != 0 && a1->flags.bits.mode != 1) {
        if (G8[0x1031] >= 7 && G8[0x1031] != 0xF) {
            arg0->unk95 = 0;
            arg0->unk92 = 0;
        }
        if (G8[0x1031] == 5 && !(u16)(a1->flags.half[0] & 7) && func_802291FC(arg0, a1, sp30, 0xA) == 0) {
            distance = D_801BBBF0.unkB90;
            if (distance < 25.0 || arg0->unk95 == 1) {
                if (arg0->unk95 == 0) {
                    arg0->unk95 = 1;
                    arg0->unk92 = 1;
                    return;
                }
                if (distance > 30.0) {
                    arg0->unk95 = 0;
                    arg0->unk92 = 0;
                    return;
                }
                if ((v1->flags.bits.d != 0 && v1->unk312 >= 0xB) || v1->flags.bits.mode == 2) {
                    if (a1->unk6 >= 0x64) {
                        sp30->unk4 = 0x8000;
                    }
                } else {
                    if (arg0->unk91 == 2) {
                        arg0->unk92 = 3;
                    }
                    if (arg0->unk92 == 1) {
                        if (a1->unk6 >= 0x47) {
                            func_802292D0(sp30, a1);
                            arg0->unk91 = 1;
                            arg0->unk92 = 2;
                            return;
                        }
                        func_80228FD0(arg0, sp30, 4);
                        return;
                    }
                    if (arg0->unk92 == 2) {
                        two = 2;
                        if ((a1->flags.byte[2] & 3) == 2U) {
                            arg0->unk92 = 3;
                        }
                        if ((a1->flags.byte[2] & 3) == 0) {
                            arg0->unk92 = 1;
                        }
                    } else if (arg0->unk92 == 3) {
                        if (a1->unk6 >= 0x64) {
                            if (func_80228D90(arg0, a1) != 0) {
                                a1->flags.byte[2] &= 0xFFFC;
                                sp30->unk4 = 0x8000;
                                arg0->unk91 = 0;
                                return;
                            }
                        }
                        func_80228FD0(arg0, sp30, 4);
                    }
                }
            } else {
                if (arg0->unk91 == 1) {
                    arg0->unk91 = 2;
                }
                if (2U == (a1->flags.byte[2] & 3)) {
                    a1->flags.byte[2] &= 0xFFFC;
                }
                if ((arg0->unk9C & 0xFF) >= 0xC0) {
                    h = (s16)(func_80228C20(arg0, a1) + sp34) & 0x1FFF;
                    sp30->unk6 = -func_8001EB64(h) * 40.0f;
                    sp30->unk8 = func_8001EAD0(h) * 40.0f;
                    return;
                }
                if (a1->unk6 >= 0x64) {
                    if (func_80228D90(arg0, a1) != 0 && D_801BBBF0.unkB90 > 40.0f) {
                        a1->flags.byte[2] &= 0xFFFC;
                        sp30->unk4 = 0x8000;
                    }
                }
            }
        }
    }
}
#undef G8
#undef D_801BBBF0
#undef D_801BBC8C
#undef D_801BBCAC
#undef D_801BC03C
#undef D_801BC3D8
#undef func_8001EAD0
#undef func_8001EB64
#undef func_80228C20
#undef func_80228D90
#undef func_80228FD0
#undef func_802291FC
#undef func_802292D0
#undef func_8038D438_StructGlobal


struct func_8038D438_Struct0 {
    u8 pad0[0x92];
    u8 unk92;
    u8 pad93[7];
    s16 unk9A;
    u8 pad9C[5];
    u8 unkA1;
    u8 unkA2;
};
struct func_8038D438_Struct1 {
    u8 pad0[0x2D8];
    u8 unk2D8;
    u8 unk2D9;
};
struct func_8038D438_Struct2 {
    u8 pad0[0x30];
    u32 unk30;
};
struct func_8038D438_StructGlobal {
    u8 pad0[0xB90];
    f32 unkB90;
};
extern void func_802294BC(void *);
extern void func_80229CE0(void *, void *, s32);
extern s32 func_8022B640(s32);
extern struct func_8038D438_StructGlobal D_801BBBF0;

void func_8038D438(void *arg0, void *arg1, void *arg2) {
    struct func_8038D438_Struct0 *a = arg0;
    struct func_8038D438_Struct1 *b = arg1;
    struct func_8038D438_Struct2 *c = arg2;

    if ((c->unk30 << 11) >> 30) {
        func_802294BC(b);
        a->unk9A = 8;
        a->unk92 = 0;
    } else if (D_801BBBF0.unkB90 > 25.0f) {
        b->unk2D8 = 0x13;
        if (D_801BBBF0.unkB90 > 40.0f) {
            b->unk2D9 = 0;
        } else {
            b->unk2D9 = 5;
        }
        a->unk92 = 0;
    } else {
        b->unk2D8 = 1;
        if (func_8022B640(2) == 0) {
            b->unk2D9 = 0x23;
            a->unk92 = 0;
        } else {
            func_80229CE0(a, b, 0);
            a->unk92 = 1;
        }
    }
    a->unkA1 = b->unk2D8;
    a->unkA2 = b->unk2D9;
}


struct func_8038D548_Struct {
    u8 pad0[0xC];
    s32 unkC;
};

extern s32 D_801BBCCC;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
#define func_8038D5D0 func_8038D5D0__decl82
extern u8 func_8038D5D0[];

void func_8038D548(struct func_8038D548_Struct *arg0, void *arg1) {
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
    func_8038D438(arg0, var_a1, var_a2);
    func_800058DC(arg0, func_8038D5D0);
}
#undef func_8038D5D0

#define D_801BBBF0 D_801BBBF0__func_8038D5D0
#define D_8038D438 D_8038D438__func_8038D5D0
#define D_8038D5D0 D_8038D5D0__func_8038D5D0
#define func_8022AB58 func_8022AB58__func_8038D5D0
#define func_8022B3E0 func_8022B3E0__func_8038D5D0
extern u8 D_8038D5D0[];


struct func_8038D5D0_StructObj {
    u8 pad0[0x0C];
    s32 unkC;
    u8 pad10[0x91 - 0x10];
    u8 unk91;
    u8 pad92[0x9A - 0x92];
    s16 unk9A;
    u8 pad9C[0xA8 - 0x9C];
    u8 unkA8;
    u8 padA9[0xB0 - 0xA9];
    void *unkB0;
};

struct func_8038D5D0_StructA {
    u8 pad0[0x30];
    u16 unk30;
};

struct func_8038D5D0_StructB {
    u8 pad0[0x30];
    s32 unk30;
};

struct func_8038D5D0_StructGlobal {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 padE0[0xB90 - 0xE0];
    f32 unkB90;
    u8 padB94[0x1031 - 0xB94];
    u8 unk1031;
};

extern struct func_8038D5D0_StructGlobal D_801BBBF0;
#define G D_801BBBF0
extern s32 func_8022AB58(void *, void *, void *);
extern void D_8038D438(void *, void *, void *, void *);
extern u8 func_8022B3E0[];

void func_8038D5D0(struct func_8038D5D0_StructObj *arg0, void *arg1) {
    struct func_8038D5D0_StructA *var_a1;
    struct func_8038D5D0_StructB *var_a2;
    s16 temp_v0;
    s16 temp_v0_2;
    u32 temp_v0_3;

    if (G.unkDC == arg0->unkC) {
        var_a1 = (struct func_8038D5D0_StructA *) D_801BC03C;
    } else {
        var_a1 = (struct func_8038D5D0_StructA *) D_801BC3D8;
    }
    if (G.unkDC == arg0->unkC) {
        var_a2 = (struct func_8038D5D0_StructB *) D_801BC3D8;
    } else {
        var_a2 = (struct func_8038D5D0_StructB *) D_801BC03C;
    }
    if (arg0->unkA8 == 2) {
        D_8038D438(arg0, var_a1, var_a2, &G);
        arg0->unkA8 = 0;
        return;
    }
    if ((var_a1->unk30 & 7) || (G.unk1031 == 6)) {
        arg0->unkA8 = 1;
        return;
    }
    if (G.unk1031 == 7) {
        arg0->unkB0 = D_8038D5D0;
        func_800058DC((s32) arg0, func_8022B3E0);
        return;
    }
    if (func_8022AB58(arg0, var_a1, var_a2) != 0) {
        arg0->unk91 = 0;
        D_8038D438(arg0, var_a1, var_a2, &G);
        return;
    }
    if (G.unkB90 > 25.0f) {
        temp_v0 = arg0->unk9A;
        if (temp_v0 == 0) {
            arg0->unk9A = (s16) (temp_v0 | 0x100);
            D_8038D438(arg0, var_a1, var_a2, &G);
            return;
        }
    }
    if (G.unkB90 <= 20.0f) {
        temp_v0_2 = arg0->unk9A;
        if (temp_v0_2 & 0x100) {
            arg0->unk9A = (s16) (temp_v0_2 ^ 0x100);
            D_8038D438(arg0, var_a1, var_a2, &G);
            return;
        }
    }
    temp_v0_3 = (u32) (var_a2->unk30 << 0xB) >> 0x1E;
    if ((temp_v0_3 != 0) && !(arg0->unk9A & 8)) {
        D_8038D438(arg0, var_a1, var_a2, &G);
        return;
    }
    if ((temp_v0_3 == 0) && (arg0->unk9A & 8)) {
        arg0->unk9A = (s16) (arg0->unk9A ^ 8);
        D_8038D438(arg0, var_a1, var_a2, &G);
    }
}
#undef G
#undef D_801BBBF0
#undef D_8038D438
#undef D_8038D5D0
#undef func_8022AB58
#undef func_8022B3E0

void *func_8022A834(s32 arg0, struct func_8022A834_Struct *arg1);

void func_8038D7A4(s32 arg0, struct func_8022A834_Struct *arg1) {
    func_8022A834(arg0, arg1);
}

