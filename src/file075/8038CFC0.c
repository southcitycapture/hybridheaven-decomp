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
#define func_8038D750_Struct func_8038D750_Struct__func_8038CFF4
#define func_8038D7D8_StructG func_8038D7D8_StructG__func_8038CFF4
typedef struct func_8038D7D8_StructG {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0x1031 - 0xE0];
    u8 unk1031;
} func_8038D7D8_StructG;
extern func_8038D7D8_StructG D_801BBBF0;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
struct func_8038D750_Struct {
    u8 pad0[0xC];
    s32 unkC;
};


typedef struct func_8038CFF4_StructG {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 padE0[0x232 - 0xE0];
    s16 unk232;
    u8 pad234[0xB90 - 0x234];
    f32 unkB90;
    u8 padB94[0x1031 - 0xB94];
    u8 unk1031;
} func_8038CFF4_StructG;

typedef struct func_8038CFF4_StructS {
    u8 pad0[2];
    s16 unk2;
    u16 unk4;
    s16 unk6;
    s16 unk8;
} func_8038CFF4_StructS;

typedef struct func_8038CFF4_StructA {
    u8 pad0[4];
    s16 unk4;
    s16 unk6;
    u8 pad8[0x28];
    u32 b31 : 3;
    u32 b28 : 4;
    u32 b24 : 2;
    u32 b22 : 2;
    u32 b20 : 2;
    u32 b18 : 3;
    u32 b15 : 6;
    u32 b9 : 2;
    u32 b7 : 8;
    u8 pad34[4];
    union {
        u32 word;
        struct {
            u32 f31 : 1;
            u32 f30 : 2;
            u32 f28 : 1;
            u32 f27 : 28;
        } bits;
    } flags;
    u8 pad3C[0x2D8 - 0x3C];
    u8 unk2D8;
    u8 unk2D9;
    u8 pad2DA[0x2FC - 0x2DA];
    u8 unk2FC;
    u8 pad2FD[0x312 - 0x2FD];
    s16 unk312;
    u8 pad314[0x328 - 0x314];
    u8 unk328;
    u8 unk329;
    s16 unk32A;
} func_8038CFF4_StructA;

typedef struct func_8038CFF4_StructE {
    u8 pad0[0xC];
    struct func_8038D750_Struct *unkC;
    u8 pad10[0x90 - 0x10];
    u8 unk90;
    u8 unk91;
    u8 unk92;
    u8 pad93[2];
    u8 unk95;
    u8 pad96[6];
    u32 unk9C;
} func_8038CFF4_StructE;
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s16 func_8001EF38(f32, f32);
extern s32 func_80228C20(void *);
extern s32 func_80228D90(void *, void *);
extern void func_80228FD0(void *, void *, s32);
extern s32 func_80229260(void *, void *, void *, s32);
extern void func_802292D0(void *, void *);
extern u8 D_801BBC8C[];
extern u8 D_801BBCAC[];

#define GLOBAL (*(func_8038CFF4_StructG *)&D_801BBBF0)

void func_8038CFF4(func_8038CFF4_StructE *arg0, s32 arg1) {
    s16 ang;
    s16 sp34;
    func_8038CFF4_StructS *sp30;
    func_8038CFF4_StructA *a1;
    func_8038CFF4_StructA *v1;
    f32 sp24;
    s32 t;
    u32 v;
    register u32 v5;
    u32 x;
    u8 one;

    sp34 = (s16)(0x2800 - GLOBAL.unk232) & 0x1FFF;
    t = GLOBAL.unkDC;
    sp30 = (func_8038CFF4_StructS *)((t == arg0->unkC->unkC) ? D_801BBC8C : D_801BBCAC);
    a1 = (func_8038CFF4_StructA *)((t == arg0->unkC->unkC) ? D_801BC03C : D_801BC3D8);
    v1 = (func_8038CFF4_StructA *)((t == arg0->unkC->unkC) ? D_801BC3D8 : D_801BC03C);
    if ((arg0->unk91 == 1) && (GLOBAL.unk1031 == 7)) {
        arg0->unk91 = 2;
    }
    if (a1->b22 == 0 || a1->b28 == 1) {
        return;
    }
    if ((GLOBAL.unk1031 >= 7) && (GLOBAL.unk1031 != 0xF)) {
        arg0->unk95 = 0;
        arg0->unk92 = 0;
    }
    if (GLOBAL.unk1031 != 5) {
        return;
    }
    if ((a1->b18 & 7) != 0) {
        return;
    }
    if (func_80229260(arg0, a1, sp30, 0xA) != 0) {
        return;
    }
    if ((GLOBAL.unkB90 < 15.0) || ((u16)arg0->unk95 == 1)) {
        if (arg0->unk95 == 0) {
            arg0->unk95 = 1;
            arg0->unk92 = 1;
            return;
        }
        if (20.0 < GLOBAL.unkB90) {
            arg0->unk95 = 0;
            arg0->unk92 = 0;
            return;
        }
        if ((v1->b20 != 0 && v1->unk312 >= 0xB) || (v1->b28 == 2)) {
            if (a1->unk6 >= 0x64) {
                sp30->unk4 = 0x8000;
            }
            return;
        }
        if (arg0->unk91 == 2) {
            arg0->unk92 = 4;
        }
        if (arg0->unk92 == 1) {
            if (a1->flags.bits.f31) {
                arg0->unk92 = 3;
                return;
            }
            if (a1->unk2FC % 5 == 1) {
                if (a1->unk6 >= 0x46) {
                    sp30->unk4 = 0x10;
                    arg0->unk90 = 0;
                    arg0->unk92 = 3;
                    return;
                }
                func_80228FD0(arg0, sp30, 4);
                return;
            }
            if (a1->unk2FC % 5 == 3) {
                if (a1->unk6 >= 0x46) {
                    sp30->unk4 = 0x10;
                    arg0->unk90 = 0;
                    arg0->unk92 = 3;
                    return;
                }
                func_80228FD0(arg0, sp30, 4);
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
        } else if (arg0->unk92 == 2) {
            if (a1->flags.bits.f31) {
                arg0->unk90 = 0;
                arg0->unk92 = 4;
            }
            if (a1->b9 == 2) {
                arg0->unk92 = 4;
            }
            if (a1->b9 == 0) {
                arg0->unk92 = 1;
            }
        } else if (arg0->unk92 == 3) {
            if (a1->flags.bits.f31) {
                if (arg0->unk90++ >= 0x15) {
                    arg0->unk90 = 0;
                    arg0->unk92 = 4;
                    return;
                }
            }
            if (a1->flags.bits.f30 == 0 && a1->flags.bits.f31 == 0) {
                arg0->unk92 = 1;
            }
        } else if (arg0->unk92 == 4) {
            if (a1->unk6 >= 0x64) {
                if (func_80228D90(arg0, a1) != 0) {
                    a1->b9 = 0;
                    sp30->unk4 = 0x8000;
                    if (!a1->flags.bits.f31 && a1->unk6 == a1->unk4) {
                        a1->unk2D8 = 0xA;
                        a1->unk2D9 = 0;
                    }
                    arg0->unk91 = 0;
                    return;
                }
            }
            func_80228FD0(arg0, sp30, 4);
            return;
        } else if (arg0->unk92 == 5) {
            arg0->unk90++;
            a1->unk328 = 3;
            a1->unk329 = 0;
            sp24 = (f32)((f64)(func_8001EB64((s16)(func_80228C20(arg0) + 0x800)) * 80.0f) / 20.0);
            a1->unk32A = (s16)(func_8001EF38(sp24, (f32)((f64)(func_8001EAD0((s16)(func_80228C20(arg0) + 0x800)) * 80.0f) / 20.0)) - sp34) & 0x1FFF;
            if (a1->flags.bits.f31 && a1->flags.bits.f28) {
                arg0->unk92 = 4;
            }
            if ((a1->flags.word >> 31) == 0) {
                arg0->unk92 = 1;
            }
        }
    } else {
    if (1 == (s16)arg0->unk91) {
        arg0->unk91 = 2;
    }
    if (a1->b9 == 2) {
        a1->b9 = 0;
    }
    v = arg0->unk9C & 0x3F;
    if (v < 0x20) {
        func_80228FD0(arg0, sp30, 0x20);
        return;
    }
    if (v < 0x30) {
        ang = (s16)(func_80228C20(arg0) + sp34) & 0x1FFF;
        sp30->unk2 = 0x2000;
        sp30->unk6 = -func_8001EB64(ang) * 40.0f;
        sp30->unk8 = func_8001EAD0(ang) * 40.0f;
        return;
    }
    sp30->unk4 = 0x4000;
    }
}
#undef GLOBAL
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
#undef func_8038D750_Struct
#undef func_8038D7D8_StructG


struct func_8038D680_StructA {
    u8 pad0[0x9A];
    s16 unk9A;
    u8 pad1[5];
    u8 unkA1;
    u8 unkA2;
};

struct func_8038D680_StructB {
    u8 pad0[0x2D8];
    u8 unk2D8;
    u8 unk2D9;
};

struct func_8038D680_StructC {
    u8 pad0[0x30];
    u32 unk30;
};

extern s32 func_80229404(void *);
extern void func_80229CE0(void *, void *, s32);
extern s32 func_8022B640(s32);

void func_8038D680(struct func_8038D680_StructA *arg0, struct func_8038D680_StructB *arg1, struct func_8038D680_StructC *arg2) {
    if (((arg2->unk30 << 0xB) >> 0x1E) != 0) {
        func_80229404(arg1);
        arg0->unk9A = (s16) (arg0->unk9A | 8);
    } else if (((u32) *(s32 *) ((u8 *) arg1 + 0x38) >> 0x1F) != 0) {
        arg1->unk2D8 = 2;
        arg0->unk9A = 2;
        func_80229CE0(arg0, arg1, 0);
    } else {
        if (func_8022B640(2) == 0) {
            arg1->unk2D8 = 0;
        } else {
            arg1->unk2D8 = 1;
        }
        func_80229CE0(arg0, arg1, func_8022B640(2) & 0xFF);
    }
    arg0->unkA1 = arg1->unk2D8;
    arg0->unkA2 = arg1->unk2D9;
}


struct func_8038D750_Struct {
    u8 pad0[0xC];
    s32 unkC;
};

extern s32 D_801BBCCC;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
#define func_8038D7D8 func_8038D7D8__decl67
extern u8 func_8038D7D8[];

void func_8038D750(struct func_8038D750_Struct *arg0, void *arg1) {
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
    func_8038D680(arg0, var_a1, var_a2);
    func_800058DC(arg0, func_8038D7D8);
}
#undef func_8038D7D8

#define D_801BBBF0 D_801BBBF0__func_8038D7D8
#define D_8038D7D8 D_8038D7D8__func_8038D7D8
#define func_8022AB58 func_8022AB58__func_8038D7D8
#define func_8022B3E0 func_8022B3E0__func_8038D7D8
#define func_8038D680_StructA func_8038D680_StructA__func_8038D7D8
#define func_8038D680_StructB func_8038D680_StructB__func_8038D7D8
#define func_8038D680_StructC func_8038D680_StructC__func_8038D7D8
struct func_8038D680_StructA {
    u8 pad0[0x9A];
    s16 unk9A;
    u8 pad1[5];
    u8 unkA1;
    u8 unkA2;
};
struct func_8038D680_StructB {
    u8 pad0[0x2D8];
    u8 unk2D8;
    u8 unk2D9;
};
struct func_8038D680_StructC {
    u8 pad0[0x30];
    u32 unk30;
};

typedef struct func_8038D7D8_StructG {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0x1031 - 0xE0];
    u8 unk1031;
} func_8038D7D8_StructG;
typedef struct func_8038D7D8_StructO {
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
} func_8038D7D8_StructO;
typedef struct func_8038D7D8_StructP {
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
} func_8038D7D8_StructP;

extern func_8038D7D8_StructG D_801BBBF0;
extern s32 func_8022AB58();
extern void func_8022B3E0();
extern u8 D_8038D7D8[];

#define CALL() func_8038D680((struct func_8038D680_StructA *)arg0, (struct func_8038D680_StructB *)a3, (struct func_8038D680_StructC *)a2)

void func_8038D7D8(func_8038D7D8_StructO *arg0, s32 arg1) {
    func_8038D7D8_StructP *a3;
    func_8038D7D8_StructP *a2;

    a3 = (D_801BBBF0.unkDC == arg0->unkC) ? (func_8038D7D8_StructP *)&D_801BC03C : (func_8038D7D8_StructP *)&D_801BC3D8;
    a2 = (D_801BBBF0.unkDC == arg0->unkC) ? (func_8038D7D8_StructP *)&D_801BC3D8 : (func_8038D7D8_StructP *)&D_801BC03C;
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
        arg0->unkB0 = D_8038D7D8;
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
            arg0->unk9A ^= 8;
            CALL();
            return;
        }
    }
    if (a3->unk38.f != 0 && !a3->unk38.g && !(arg0->unk9A & 2)) {
        CALL();
        return;
    }
    if (a3->unk38.f != 0 && a3->unk38.g && !(arg0->unk9A & 4)) {
        CALL();
        return;
    }
    if (a3->unk38.f == 0 && (arg0->unk9A & 6)) {
        arg0->unk92 = arg0->unk93;
        arg0->unk9A &= ~6;
        CALL();
    }
}
#undef CALL
#undef D_801BBBF0
#undef D_8038D7D8
#undef func_8022AB58
#undef func_8022B3E0
#undef func_8038D680_StructA
#undef func_8038D680_StructB
#undef func_8038D680_StructC


typedef struct func_8038D9E4_Struct { u8 pad[0xA5]; u8 unkA5; } func_8038D9E4_Struct;

void func_8038D9E4(func_8038D9E4_Struct *arg0, s32 arg1) {
    arg0->unkA5 = 0;
}

