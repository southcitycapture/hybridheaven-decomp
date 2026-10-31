#include "common.h"

extern s32 D_801BBCCC;
extern s32 func_80229500();
extern s32 func_8022AB58();
extern s32 func_8022B640();
extern u8 D_801BC03C;
extern u8 D_801BC3D8;
extern void D_8038DA0C();
extern void func_802294BC();
extern void func_80229CE0();
extern void func_8022B3E0();
extern void func_8038CFF4();
extern void func_8038DA0C();


extern void func_800058DC(void *a, void *b);

void func_8038CFC0(s32 arg0, s32 arg1) {
    func_80229500();
    func_800058DC(arg0, &func_8038CFF4);
}

#define B_801BBBF0 B_801BBBF0__func_8038CFF4
#define D_801BBBF0 D_801BBBF0__func_8038CFF4
#define D_801BBC8C D_801BBC8C__func_8038CFF4
#define D_801BBCAC D_801BBCAC__func_8038CFF4
#define D_801BC3D8 D_801BC3D8__func_8038CFF4
#define func_8001EAD0 func_8001EAD0__func_8038CFF4
#define func_8001EB64 func_8001EB64__func_8038CFF4
#define func_8001EF38 func_8001EF38__func_8038CFF4
#define func_8022559C func_8022559C__func_8038CFF4
#define func_80228C20 func_80228C20__func_8038CFF4
#define func_80228D90 func_80228D90__func_8038CFF4
#define func_80228E5C func_80228E5C__func_8038CFF4
#define func_80228FD0 func_80228FD0__func_8038CFF4
#define func_80229260 func_80229260__func_8038CFF4
#define func_802292D0 func_802292D0__func_8038CFF4
#define func_8038DA0C_StructG func_8038DA0C_StructG__func_8038CFF4
typedef struct func_8038DA0C_StructG {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 padE0[0x1031 - 0xE0];
    u8 unk1031;
} func_8038DA0C_StructG;
extern func_8038DA0C_StructG D_801BBBF0;
extern u8 D_801BC3D8[];


typedef struct func_8038CFF4_StructS {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
    s16 unk8;
    u8 pad0A[0x26];
    u32 w30;
    u8 pad34[4];
    u32 flag:1;
    u32 x:2;
    u32 b28:1;
    u32 rest:28;
    u8 pad3C[0x29C];
    u8 unk2D8;
    u8 unk2D9;
    u8 pad2DA[0x22];
    u8 unk2FC;
    u8 pad2FD[0x15];
    s16 unk312;
    u8 pad314[0x14];
    u8 unk328;
    u8 unk329;
    s16 unk32A;
} func_8038CFF4_StructS;

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

typedef struct func_8038CFF4_StructG {
    u8 padG[0xDC];
    s32 unkDC;
    u8 padE0[0xC];
    func_8038CFF4_StructU *unkEC;
    u8 padF0[0x142];
    s16 unk232;
    u8 pad234[0x218];
    u8 unk44C[0x744];
    f32 unkB90;
    u8 padB94[0x49D];
    u8 unk1031;
} func_8038CFF4_StructG;

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
    u8 unk9A;
    u8 unk9B;
    s32 unk9C;
} func_8038CFF4_StructP;

extern func_8038CFF4_StructG B_801BBBF0;
#define D_801BBBF0 B_801BBBF0
extern u8 D_801BBC8C[];
extern u8 D_801BBCAC[];
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s32 func_8001EF38(f32, f32);
extern u8 func_8022559C(s32);
extern s32 func_80228C20();
extern s32 func_80228D90();
extern void func_80228E5C();
extern void func_80228FD0();
extern s32 func_80229260();
extern void func_802292D0();

#define W30(p) ((p)->w30)
#define B30(p) (*((u8 *)(p) + 0x30))
#define B32(p) (*((u8 *)(p) + 0x32))
#define TOP(p) ((p)->flag)

void func_8038CFF4(func_8038CFF4_StructP *arg0, s32 arg1) {
    s16 sp36;
    s16 sp34;
    u8 *sp30;
    func_8038CFF4_StructS *s1;
    func_8038CFF4_StructS *t1;
    u8 sp27;
    f32 sp20;

    sp34 = (s16)(0x2800 - D_801BBBF0.unk232) & 0x1FFF;
    if (arg0->unkC->unkC == D_801BBBF0.unkDC) {
        sp30 = D_801BBC8C;
    } else {
        sp30 = D_801BBCAC;
    }
    if (arg0->unkC->unkC == D_801BBBF0.unkDC) {
        s1 = (func_8038CFF4_StructS *)&D_801BC03C;
    } else {
        s1 = (func_8038CFF4_StructS *)D_801BC3D8;
    }
    if (arg0->unkC->unkC == D_801BBBF0.unkDC) {
        t1 = (func_8038CFF4_StructS *)D_801BC3D8;
    } else {
        t1 = (func_8038CFF4_StructS *)&D_801BC03C;
    }
    sp27 = func_8022559C(((s32)t1 == (s32)&D_801BBBF0 + 0x44C) ? ((func_8038CFF4_StructU *)D_801BBBF0.unkDC)->unk5C->unk1C : D_801BBBF0.unkEC->unk5C->unk1C);
    if (arg0->unk91 == 1 && D_801BBBF0.unk1031 == 7) {
        arg0->unk91 = 2;
    }
    if (((W30(s1) << 9) >> 30) == 0) {
        return;
    }
    if (((W30(s1) << 3) >> 28) == 1) {
        return;
    }
    if (D_801BBBF0.unk1031 >= 7 && D_801BBBF0.unk1031 != 0xF) {
        arg0->unk98 = 0;
        arg0->unk92 = arg0->unk95 = *((u8 *)arg0 + 0x99);
    }
    if (D_801BBBF0.unk1031 != 5) {
        return;
    }
    if (*(u16 *)((u8 *)s1 + 0x30) & 7) {
        return;
    }
    if (func_80229260(arg0, s1, sp30, 10) != 0) {
        return;
    }
    if (D_801BBBF0.unkB90 < 20.0 || arg0->unk95 == 1) {
        if (arg0->unk95 == 0) {
            arg0->unk95 = 1;
            arg0->unk92 = 1;
            return;
        }
        if (D_801BBBF0.unkB90 > 25.0) {
            arg0->unk95 = arg0->unk92 = 0;
            return;
        }
        if ((((W30(t1) << 11) >> 30) != 0 && t1->unk312 >= 0xB) || ((W30(t1) << 3) >> 28) == 2) {
            if (s1->unk6 >= 0x64) {
                *(u16 *)(sp30 + 4) = 0x8000;
            }
            return;
        }
        if (arg0->unk91 == 2) {
            arg0->unk92 = 4;
        }
        if (arg0->unk92 == 1) {
            if (TOP(s1) != 0) {
                arg0->unk92 = 4;
                arg0->unk90 = 0;
                return;
            }
            if (s1->unk2FC % 3 == 1) {
                if (s1->unk6 >= 0x64) {
                    *(s16 *)(sp30 + 4) = 0x10;
                    arg0->unk92 = 3;
                    return;
                }
                func_80228E5C(arg0, sp30, 4);
                return;
            }
            if (s1->unk2FC % 3 == 2) {
                if (s1->unk6 >= 0x64) {
                    *(s16 *)(sp30 + 4) = 0x10;
                    arg0->unk92 = 5;
                    return;
                }
                func_80228FD0(arg0, sp30, 4);
                return;
            }
            if (s1->unk6 >= 0x47) {
                func_802292D0(sp30, s1);
                arg0->unk91 = 1;
                arg0->unk92 = 2;
                return;
            }
            func_80228FD0(arg0, sp30, 4);
            return;
        }
        if (arg0->unk92 == 2) {
            if (TOP(s1) != 0) {
                arg0->unk92 = 3;
                arg0->unk90 = 0;
            }
            if ((B32(s1) & 3) == 2U) {
                arg0->unk92 = 4;
            }
            if ((B32(s1) & 3) == 0) {
                arg0->unk92 = 1;
            }
            return;
        }
        if (arg0->unk92 == 3) {
            if (TOP(s1) != 0) {
                if (arg0->unk90++ >= 0x1F) {
                    arg0->unk92 = 4;
                    arg0->unk90 = 0;
                    return;
                }
            }
            if (TOP(s1) == 0 && !(B30(s1) & 1)) {
                arg0->unk92 = 1;
            }
            return;
        }
        if (arg0->unk92 == 4) {
            if (s1->unk6 >= 0x64 && func_80228D90(arg0) != 0) {
                B32(s1) &= 0xFFFC;
                *(u16 *)(sp30 + 4) = 0x8000;
                arg0->unk91 = 0;
                if (s1->unk6 == s1->unk4 && TOP(s1) == 0) {
                    s1->unk2D8 = 0xA;
                    s1->unk2D9 = func_8022B640(2);
                }
                return;
            }
            func_80228FD0(arg0, sp30, 4);
            return;
        }
        if (arg0->unk92 == 5) {
            arg0->unk90++;
            s1->unk328 = 3;
            s1->unk329 = 0;
            sp20 = func_8001EB64(func_80228C20(arg0) + 0x800) * 80.0f / 20.0;
            s1->unk32A = (s16)(func_8001EF38(sp20, func_8001EAD0(func_80228C20(arg0) + 0x800) * 80.0f / 20.0) - sp34) & 0x1FFF;
            if (TOP(s1) != 0 && s1->b28) {
                arg0->unk92 = 4;
            }
            if (TOP(s1) == 0) {
                arg0->unk92 = 1;
            }
        }
        return;
    }
    if (arg0->unk91 == 1) {
        arg0->unk91 = 2;
    }
    if ((B32(s1) & 3) == 2U) {
        B32(s1) &= 0xFFFC;
    }
    if (D_801BBBF0.unkB90 > 60.0f) {
        arg0->unk98 = 0x14;
    }
    if (arg0->unk98-- > 0) {
        s1 = (func_8038CFF4_StructS *)(s32)(s16)func_80228C20(arg0);
        sp36 = func_8001EAD0(arg0->unk9C * 0x10) * 1024.0f + (f32)(s32)s1 + (f32)sp34;
        sp36 &= 0x1FFF;
        *(s16 *)(sp30 + 2) = 0x2000;
        *(s16 *)(sp30 + 6) = (s32)(-func_8001EB64(sp36) * 40.0f);
        *(s16 *)(sp30 + 8) = (s32)(func_8001EAD0(sp36) * 40.0f);
    } else {
        sp36 = (s16)(func_80228C20(arg0) + sp34) & 0x1FFF;
        if (sp27 >= 0x15 || D_801BBBF0.unkB90 > 20.0f) {
            *(s16 *)(sp30 + 6) = (s32)(-func_8001EB64(sp36) * 80.0f);
            *(s16 *)(sp30 + 8) = (s32)(func_8001EAD0(sp36) * 80.0f);
        } else {
            func_80228FD0(arg0, sp30, 4);
        }
        if (s1->unk6 == s1->unk4) {
            *(s16 *)(sp30 + 6) = (s32)(-func_8001EB64(sp36) * 40.0f);
            *(s16 *)(sp30 + 8) = (s32)(func_8001EAD0(sp36) * 40.0f);
        }
    }
}
#undef D_801BBBF0
#undef W30
#undef B30
#undef B32
#undef TOP
#undef B_801BBBF0
#undef D_801BBBF0
#undef D_801BBC8C
#undef D_801BBCAC
#undef D_801BC3D8
#undef func_8001EAD0
#undef func_8001EB64
#undef func_8001EF38
#undef func_8022559C
#undef func_80228C20
#undef func_80228D90
#undef func_80228E5C
#undef func_80228FD0
#undef func_80229260
#undef func_802292D0
#undef func_8038DA0C_StructG

typedef struct func_8038D800_StructA {
    u8 pad0[0x9A];
    s16 unk9A;
    u8 pad9C[4];
    u8 unkA0;
    u8 unkA1;
    u8 unkA2;
} func_8038D800_StructA;
typedef struct func_8038D800_StructB {
    s16 unk0;
    s16 unk2;
    u8 pad4[0x34];
    u32 flag:1;
    u8 pad3C[0x29F];
    u8 unk2D8;
    u8 unk2D9;
} func_8038D800_StructB;
typedef struct func_8038D800_StructC {
    u8 pad[0x30];
    u32 pre:11;
    u32 f:2;
} func_8038D800_StructC;

s32 func_8038D800(func_8038D800_StructA *arg0, func_8038D800_StructB *arg1, func_8038D800_StructC *arg2) {
    if (arg1->flag != 0) {
        arg1->unk2D8 = 2;
        arg0->unk9A = arg0->unk9A | 2;
        func_80229CE0(arg0, arg1, (u8)func_8022B640(2));
    } else if ((arg1->unk2 < (arg1->unk0 / 5)) && (arg0->unkA0 != 0)) {
        arg1->unk2D8 = 0xB;
        arg1->unk2D9 = 3;
        arg0->unkA0 = arg0->unkA0 - 1;
        arg0->unk9A = arg0->unk9A | 0x20;
    } else if (arg2->f != 0) {
        func_802294BC(arg1);
        arg0->unk9A = 8;
    } else if ((f64)*(f32 *)(&D_801BC3D8 + 0x3A8) > 20.0) {
        arg1->unk2D8 = 0x13;
        arg1->unk2D9 = func_8022B640(5);
    } else if (func_8022B640(2) == 0) {
        arg1->unk2D8 = 0;
        func_80229CE0(arg0, arg1, 1);
    } else {
        arg1->unk2D8 = 1;
        func_80229CE0(arg0, arg1, 1);
    }
    arg0->unkA1 = arg1->unk2D8;
    arg0->unkA2 = arg1->unk2D9;
}


typedef struct func_8038D97C_Struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0x90];
    u8 unkA0;
} func_8038D97C_Struct;


void func_8038D97C(func_8038D97C_Struct *arg0, void *arg1) {
    void *var_a1;
    void *var_a2;

    if (D_801BBCCC == arg0->unkC) {
        var_a1 = &D_801BC03C;
    } else {
        var_a1 = &D_801BC3D8;
    }
    if (D_801BBCCC == arg0->unkC) {
        var_a2 = &D_801BC3D8;
    } else {
        var_a2 = &D_801BC03C;
    }
    func_80229500(arg0, var_a1, var_a2);
    arg0->unkA0 = 99;
    func_8038D800(arg0, var_a1, var_a2);
    func_800058DC(arg0, func_8038DA0C);
}


typedef struct func_8038DA0C_StructO {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad10[0x81];
    u8 unk91;
    u8 pad92[8];
    s16 unk9A;
    u8 pad9C[4];
    u8 unkA0;
    u8 padA1[7];
    u8 unkA8;
    u8 padA9[3];
    void *unkAC;
    void *unkB0;
} func_8038DA0C_StructO;

typedef struct func_8038DA0C_StructG {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 padE0[0x1031 - 0xE0];
    u8 unk1031;
} func_8038DA0C_StructG;

extern func_8038DA0C_StructG D_801BBBF0;
typedef struct func_8038DA0C_StructB2 {
    u8 pad0[0x38];
    u32 flag:1;
    u32 x:2;
    u32 b28:1;
} func_8038DA0C_StructB2;


void func_8038DA0C(func_8038DA0C_StructO *arg0, void *arg1) {
    func_8038D800_StructB *a1;
    func_8038D800_StructC *a2;
    u32 v;
    u32 t;

    a1 = (D_801BBBF0.unkDC == arg0->unkC) ? (func_8038D800_StructB *)&D_801BC03C : (func_8038D800_StructB *)&D_801BC3D8;
    a2 = (D_801BBBF0.unkDC == arg0->unkC) ? (func_8038D800_StructC *)&D_801BC3D8 : (func_8038D800_StructC *)&D_801BC03C;
    if (arg0->unkA8 == 2) {
        func_8038D800((func_8038D800_StructA *)arg0, a1, a2);
        arg0->unkA8 = 0;
        return;
    }
    if ((*(u16 *)((u8 *)a1 + 0x30) & 7) || (D_801BBBF0.unk1031 == 6)) {
        arg0->unkA8 = 1;
        return;
    }
    if (D_801BBBF0.unk1031 == 7) {
        arg0->unkAC = D_8038DA0C;
        arg0->unkB0 = D_8038DA0C;
        func_800058DC(arg0, func_8022B3E0);
        return;
    }
    if (a1->flag && !(arg0->unk9A & 2)) {
        func_8038D800((func_8038D800_StructA *)arg0, a1, a2);
        return;
    }
    if (a1->flag && ((func_8038DA0C_StructB2 *)a1)->b28 && !(arg0->unk9A & 4)) {
        func_8038D800((func_8038D800_StructA *)arg0, a1, a2);
        return;
    }
    if (!a1->flag && (arg0->unk9A & 6)) {
        arg0->unk9A = 0;
        func_8038D800((func_8038D800_StructA *)arg0, a1, a2);
        return;
    }
    if (a1->unk2 < a1->unk0 / 5 && arg0->unkA0 != 0 && !(arg0->unk9A & 0x20)) {
        func_8038D800((func_8038D800_StructA *)arg0, a1, a2);
        return;
    }
    t = a2->f;
    if (t != 0 && !(arg0->unk9A & 8)) {
        func_8038D800((func_8038D800_StructA *)arg0, a1, a2);
        return;
    }
    if (t == 0 && (arg0->unk9A & 8)) {
        arg0->unk9A = 0;
        func_8038D800((func_8038D800_StructA *)arg0, a1, a2);
        return;
    }
    if (func_8022AB58(arg0, a1, a2) != 0) {
        arg0->unk91 = 0;
        func_8038D800((func_8038D800_StructA *)arg0, a1, a2);
    }
}


struct func_8038DC3C_Struct1 {
    u8 pad[6];
    s16 unk6;
};

struct func_8038DC3C_Struct2 {
    u8 pad[0xA5];
    u8 unkA5;
};

void func_8038DC3C(struct func_8038DC3C_Struct2 *arg0, struct func_8038DC3C_Struct1 *arg1) {
    if (arg1->unk6 >= 0x64) {
        arg0->unkA5 = 2;
        return;
    }
    arg0->unkA5 = 0;
}

