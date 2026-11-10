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
#define func_8001EAD0 func_8001EAD0__func_8038CFF4
#define func_8001EB64 func_8001EB64__func_8038CFF4
#define func_8001EF38 func_8001EF38__func_8038CFF4
#define func_8010843C func_8010843C__func_8038CFF4
#define func_8022559C func_8022559C__func_8038CFF4
#define func_80228C20 func_80228C20__func_8038CFF4
#define func_80228D90 func_80228D90__func_8038CFF4
#define func_80228FD0 func_80228FD0__func_8038CFF4
#define func_80229260 func_80229260__func_8038CFF4
#define func_802292D0 func_802292D0__func_8038CFF4
#define func_8022B640 func_8022B640__func_8038CFF4
#define func_8038DE50_Glob func_8038DE50_Glob__func_8038CFF4
typedef struct func_8038DE50_Glob {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0xAB0];
    f32 unkB90;
    u8 pad2[0x49D];
    u8 unk1031;
} func_8038DE50_Glob;
extern func_8038DE50_Glob D_801BBBF0;
extern u8 D_801BC3D8;



extern u8 D_801BBC8C[];
extern u8 D_801BBCAC[];
extern f32 func_8001EAD0(s16, s16);
extern f32 func_8001EB64(s16, s16);
extern f32 D_8001EAD0(s16);
extern f32 D_8001EB64(s16);
extern s32 func_8001EF38(f32, f32);
extern s32 func_8010843C(f32, f32, f32, f32, f32, f32);
extern u8 func_8022559C(s32, void *);
extern s32 func_80228C20();
extern s32 func_80228D90();
extern void func_80228FD0();
extern s32 func_80229260();
extern void func_802292D0();
extern s32 func_8022B640();

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

typedef struct func_8038CFF4_StructPos {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_8038CFF4_StructPos;

typedef struct func_8038CFF4_StructE {
    u8 pad0[0x2C];
    func_8038CFF4_StructPos *unk2C;
} func_8038CFF4_StructE;

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
    u8 pad3C[0x6A];
    u8 unkA6;
    u8 padA7[0x231];
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

extern u8 D_801BC03C;
#define GG D_801BBBF0
#define G232 (*(s16 *)((u8 *)&D_801BBBF0 + 0x232))
#define GEC (*(func_8038CFF4_StructU **)((u8 *)&D_801BBBF0 + 0xEC))
#define B32(p) (*((u8 *)(p) + 0x32))
#define H30(p) (*(u16 *)((u8 *)(p) + 0x30))
#define B30(p) (*((u8 *)(p) + 0x30))

void func_8038CFF4(func_8038CFF4_StructP *arg0, s32 arg1) {
    s16 sp56;
    s16 sp54;
    func_8038CFF4_StructO *sp50;
    func_8038CFF4_StructS *a1;
    func_8038CFF4_StructS *t1;
    u8 sp47;
    func_8038CFF4_StructE *sp40;
    f32 sp3C;
    s32 pad38;
    s32 pad34;
    s32 pad30;
    s32 pad2C;
    f32 sp28;
    f64 fv;
    s32 v;

    sp54 = (s16)(0x2800 - G232) & 0x1FFF;
    if (arg0->unkC->unkC == GG.unkDC) {
        sp50 = (func_8038CFF4_StructO *)D_801BBC8C;
    } else {
        sp50 = (func_8038CFF4_StructO *)D_801BBCAC;
    }
    if (arg0->unkC->unkC == GG.unkDC) {
        a1 = (func_8038CFF4_StructS *)&D_801BC03C;
    } else {
        a1 = (func_8038CFF4_StructS *)&D_801BC3D8;
    }
    if (arg0->unkC->unkC == GG.unkDC) {
        t1 = (func_8038CFF4_StructS *)&D_801BC3D8;
    } else {
        t1 = (func_8038CFF4_StructS *)&D_801BC03C;
    }
    if ((s32)t1 == (s32)&D_801BBBF0 + 0x44C) {
        arg1 = ((func_8038CFF4_StructU *)GG.unkDC)->unk5C->unk1C;
    } else {
        arg1 = GEC->unk5C->unk1C;
    }
    sp47 = func_8022559C(arg1, a1);
    if (arg0->unkC->unkC == GG.unkDC) {
        sp40 = *(func_8038CFF4_StructE **)((u8 *)&D_801BBBF0 + 0xE0);
    } else {
        sp40 = *(func_8038CFF4_StructE **)((u8 *)&D_801BBBF0 + 0xF0);
    }
    if ((arg0->unk91 == 1) && (GG.unk1031 == 7)) {
        arg0->unk91 = 2;
    }
    if ((a1->f30_9 != 0) && (a1->f30_3 != 1)) {
        if ((GG.unk1031 >= 7) && (GG.unk1031 != 0xF)) {
            arg0->unk98 = 0;
            arg0->unk92 = arg0->unk95 = *((u8 *)arg0 + 0x99);
        }
        if (!(H30(a1) & 7) && (GG.unk1031 == 5) && (func_80229260(arg0, a1, sp50, 6) == 0)) {
            if ((((fv = GG.unkB90) < 10.0) || (arg0->unk95 == 1)) && ((v = a1->unk2D8, v == 0) || (1 == (v | 0)) || (v == 8) || (2 == (v | 0)))) {
                if (arg0->unk95 == 0) {
                    arg0->unk95 = arg0->unk92 = 1;
                    return;
                }
                if (fv > 15.0) {
                    arg0->unk95 = 0;
                    arg0->unk92 = 0;
                    arg0->unk98 = 0x1E;
                    return;
                }
                if (((t1->f30_11 != 0) && ((t1->unk312 >= 0xB) || (t1->f30_3 == 1))) || (t1->f30_3 == 2U)) {
                    if (a1->unk6 >= 0x64) {
                        sp50->unk4 = 0x8000;
                    }
                } else {
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
                        v = (s32)a1->unk2FC % 4;
                        if (1 == (v | 0)) {
                            if (a1->unk6 >= 0x46) {
                                sp50->unk4 = 0x10;
                                arg0->unk92 = 3;
                                arg0->unk90 = 0;
                                return;
                            }
                            if (v == 3) {
                                sp50->unk4 = 0x10;
                                arg0->unk92 = 5;
                                arg0->unk90 = 0;
                                return;
                            }
                            func_80228FD0(arg0, sp50, 4);
                            return;
                        }
                        if (((a1->unk6 >= 0x47) && (a1->unk2D8 != 0xA)) || ((a1->unk6 == a1->unk4) && (a1->unk2D8 == 0xA))) {
                            func_802292D0(sp50, a1);
                            arg0->unk91 = 1;
                            arg0->unk92 = 2;
                            return;
                        }
                        func_80228FD0(arg0, sp50, 4);
                        return;
                    }
                    if (2 == (v | 0)) {
                        if (a1->f38_0 != 0) {
                            arg0->unk92 = 3;
                            arg0->unk90 = 0;
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
                            arg1 = arg0->unk90++ >= 0x1F;
                            if (arg1) {
                                arg0->unk92 = 4;
                                arg0->unk90 = 0;
                                return;
                            }
                        }
                        if ((a1->f38_0 == 0) && !(B30(a1) & 1)) {
                            arg0->unk92 = 1;
                        }
                    } else {
                        if (v == 4) {
                            if (((a1->unk6 >= 0x64) && (func_80228D90(arg0, a1) != 0) && (a1->unk2D8 != 0xA)) || ((a1->unk6 == a1->unk4) && (a1->unk2D8 == 0xA))) {
                                B32(a1) = B32(a1) & 0xFFFC;
                                sp50->unk4 = 0x8000;
                                arg0->unk91 = 0;
                                return;
                            }
                            func_80228FD0(arg0, sp50, 4);
                            return;
                        }
                        if (v == 5) {
                            arg0->unk90 = arg0->unk90 + 1;
                            a1->unk328 = 3;
                            a1->unk329 = 0;
                            sp3C = D_8001EB64((s16)(func_80228C20(arg0) + 0x800)) * 80.0f / 20.0;
                            a1->unk32A = (s16)(func_8001EF38(sp3C, D_8001EAD0((s16)(func_80228C20(arg0) + 0x800)) * 80.0f / 20.0) - sp54) & 0x1FFF;
                            pad2C = a1->f38_0;
                            if ((pad2C != 0) && a1->f38_3) {
                                arg0->unk92 = 4;
                                pad2C = a1->f38_0;
                            }
                            if (pad2C == 0) {
                                arg0->unk92 = 1;
                            }
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
                v = a1->unk2D8;
                if ((v == 0) || (1 == (v | 0)) || (v == 8)) {
                    if (arg0->unk98 == 0) {
                        sp56 = (s16)(func_80228C20(arg0) + sp54) & 0x1FFF;
                        if (GG.unkB90 > 60.0f) {
                            arg0->unk9A = 0x1E;
                        }
                        arg1 = arg0->unk9A-- > 0;
                        if (arg1) {
                            sp50->unk2 = 0x2000;
                            sp50->unk6 = -D_8001EB64(sp56) * 40.0f;
                            sp50->unk8 = D_8001EAD0(sp56) * 40.0f;
                            return;
                        }
                        if ((sp47 >= 0x15) || (GG.unkB90 > 20.0f)) {
                            sp50->unk6 = -D_8001EB64(sp56) * 80.0f;
                            sp50->unk8 = D_8001EAD0(sp56) * 80.0f;
                            return;
                        }
                        sp50->unk6 = -D_8001EB64(sp56) * 40.0f;
                        sp50->unk8 = D_8001EAD0(sp56) * 40.0f;
                        return;
                    } else {
                        arg0->unk98--;
                    }
                } else {
                    if (arg0->unk98 == 0) {
                        if (GG.unkB90 > 25.0f) {
                            if ((a1->unk6 >= 0x64) && (func_80228D90(arg0) != 0)) {
                                sp50->unk4 = 0x8000;
                                arg0->unk91 = 0;
                                arg0->unk98 = 0x1E;
                                return;
                            }
                            func_80228FD0(arg0, sp50, 8);
                            return;
                        }
                        sp28 = D_8001EB64((s16)((s16)(func_80228C20(arg0) + 0x1000) & 0x1FFF));
                        if (func_8010843C(sp40->unk2C->unk4, sp40->unk2C->unk8, sp40->unk2C->unkC, (sp28 * 20.0f) + sp40->unk2C->unk4, sp40->unk2C->unk8, (D_8001EAD0((s16)((s16)(func_80228C20(arg0) + 0x1000) & 0x1FFF)) * 20.0f) + sp40->unk2C->unkC) == 0) {
                            sp56 = (s16)(func_80228C20(arg0) + sp54 + 0x1000) & 0x1FFF;
                        } else {
                            sp28 = D_8001EB64((s16)((s16)(func_80228C20(arg0) + 0x800) & 0x1FFF));
                            if (func_8010843C(sp40->unk2C->unk4, sp40->unk2C->unk8, sp40->unk2C->unkC, (sp28 * 20.0f) + sp40->unk2C->unk4, sp40->unk2C->unk8, (D_8001EAD0((s16)((s16)(func_80228C20(arg0) + 0x800) & 0x1FFF)) * 20.0f) + sp40->unk2C->unkC) == 0) {
                                sp56 = (s16)(func_80228C20(arg0) + sp54 + 0x800) & 0x1FFF;
                            } else {
                                sp28 = D_8001EB64((s16)((s16)(func_80228C20(arg0) - 0x800) & 0x1FFF));
                                if (func_8010843C(sp40->unk2C->unk4, sp40->unk2C->unk8, sp40->unk2C->unkC, (sp28 * 20.0f) + sp40->unk2C->unk4, sp40->unk2C->unk8, (D_8001EAD0((s16)((s16)(func_80228C20(arg0) - 0x800) & 0x1FFF)) * 20.0f) + sp40->unk2C->unkC) == 0) {
                                    sp56 = (s16)(func_80228C20(arg0) + sp54 - 0x800) & 0x1FFF;
                                } else {
                                    sp56 = (s16)(func_80228C20(arg0) + sp54) & 0x1FFF;
                                }
                            }
                        }
                        sp50->unk6 = -D_8001EB64(sp56) * 80.0f;
                        sp50->unk8 = D_8001EAD0(sp56) * 80.0f;
                        return;
                    } else {
                        arg0->unk98--;
                    }
                }
            }
        }
    }
}
#undef GG
#undef G232
#undef GEC
#undef B32
#undef H30
#undef B30
#undef D_8001EAD0
#undef D_8001EB64
#undef D_801BBBF0
#undef D_801BBC8C
#undef D_801BBCAC
#undef D_801BC03C
#undef D_801BC3D8
#undef func_8001EAD0
#undef func_8001EB64
#undef func_8001EF38
#undef func_8010843C
#undef func_8022559C
#undef func_80228C20
#undef func_80228D90
#undef func_80228FD0
#undef func_80229260
#undef func_802292D0
#undef func_8022B640
#undef func_8038DE50_Glob


typedef struct func_8038DB8C_StructA {
    u8 pad0[0x92];
    u8 unk92;
    u8 pad93[0x6];
    s16 unk9A;
    u8 pad9C[4];
    u8 unkA0;
    u8 unkA1;
    u8 unkA2;
} func_8038DB8C_StructA;

typedef struct func_8038DB8C_StructB {
    s16 unk0;
    s16 unk2;
    u8 pad4[0x34];
    u32 unk38;
    u8 pad3C[0x6A];
    u8 unkA6;
    u8 padA7[0x231];
    u8 unk2D8;
    u8 unk2D9;
} func_8038DB8C_StructB;

typedef struct func_8038DB8C_StructC {
    u8 pad0[0x30];
    struct {
        u32 a : 11;
        u32 b : 2;
        u32 c : 19;
    } unk30;
} func_8038DB8C_StructC;

extern void func_802294BC();
extern void func_80229CE0();
extern s32 func_8022B640();
extern u8 D_801BC3D8;

s32 func_8038DB8C(func_8038DB8C_StructA *arg0, func_8038DB8C_StructB *arg1, func_8038DB8C_StructC *arg2) {
    u8 v;
    u8 w;

    if ((arg1->unk2 < (arg1->unk0 / 5)) && (arg0->unkA0 != 0)) {
        arg1->unk2D8 = 0xB;
        arg1->unk2D9 = 4;
        arg0->unkA0 = arg0->unkA0 - 1;
        arg0->unk9A |= 0x20;
    } else if (arg2->unk30.b != 0) {
        func_802294BC(arg1);
        arg0->unk9A = 8;
    } else if ((arg1->unk38 >> 0x1F) != 0) {
        arg1->unk2D8 = 2;
        arg0->unk9A |= 2;
        func_80229CE0(arg0, arg1, 0);
    } else if (*(f32 *)((u8 *)&D_801BC3D8 + 0x3A8) > 25.0f) {
        if (!(arg1->unkA6 & 1)) {
            arg1->unk2D8 = 0xB;
            arg1->unk2D9 = 0x1E;
        } else if (!(arg1->unkA6 & 4)) {
            arg1->unk2D8 = 0xB;
            arg1->unk2D9 = 0x1F;
        } else if (!(arg1->unkA6 & 0x10)) {
            arg1->unk2D8 = 0xB;
            arg1->unk2D9 = 0x20;
        } else {
            arg0->unk92 = w = func_8022B640(5);
            if (w == 0) goto case0;
            if (w == 1) goto case0;
            if (w == 2) goto case0;
            if (w != 3) goto other;
case0:
            arg1->unk2D8 = 0xC;
            arg1->unk2D9 = 0x1C;
            goto done;
other:
            arg1->unk2D8 = 0xC;
            arg1->unk2D9 = 0x1D;
done:;
        }
        arg0->unk9A |= 0x100;
    } else {
        arg0->unk92 = v = func_8022B640(2);
        if (v == 0) {
            arg1->unk2D8 = 0;
            func_80229CE0(arg0, arg1, 1);
        } else {
            arg1->unk2D8 = 1;
            func_80229CE0(arg0, arg1, 1);
        }
    }
    arg0->unkA1 = arg1->unk2D8;
    arg0->unkA2 = arg1->unk2D9;
}


typedef struct func_8038DDC0_Struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0x90];
    u8 unkA0;
} func_8038DDC0_Struct;

extern s32 D_801BBCCC;
extern u8 D_801BC03C;
extern void func_8038DE50();

void func_8038DDC0(func_8038DDC0_Struct *arg0, void *arg1) {
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
    arg0->unkA0 = 1;
    func_8038DB8C(arg0, var_a1, var_a2);
    func_800058DC(arg0, func_8038DE50);
}


typedef struct func_8038DE50_Struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0x81];
    u8 unk91;
    u8 pad2[0x8];
    s16 unk9A;
    u8 pad3[0x4];
    u8 unkA0;
    u8 pad4[0x7];
    u8 unkA8;
    u8 pad5[0x7];
    s32 unkB0;
} func_8038DE50_Struct;

typedef struct func_8038DE50_Bits38 {
    u32 hi : 1;
    u32 pad : 2;
    u32 b28 : 1;
    u32 rest : 28;
} func_8038DE50_Bits38;

typedef struct func_8038DE50_Ctl {
    s16 unk0;
    s16 unk2;
    u8 pad4[0x2C];
    u16 unk30;
    u8 pad32[6];
    func_8038DE50_Bits38 unk38;
} func_8038DE50_Ctl;

typedef struct func_8038DE50_Glob {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0xAB0];
    f32 unkB90;
    u8 pad2[0x49D];
    u8 unk1031;
} func_8038DE50_Glob;

extern func_8038DE50_Glob D_801BBBF0;
extern s32 func_8022AB58();
extern void func_8022B3E0();

#define CALL() func_8038DB8C((func_8038DB8C_StructA *)arg0, (func_8038DB8C_StructB *)a, b)

void func_8038DE50(func_8038DE50_Struct *arg0, s32 arg1) {
    func_8038DE50_Ctl *a;
    func_8038DB8C_StructC *b;
    u32 sub;
    s32 cur;
    func_8038DE50_Bits38 w;

    a = (D_801BBBF0.unkDC == arg0->unkC) ? (func_8038DE50_Ctl *)&D_801BC03C : (func_8038DE50_Ctl *)&D_801BC3D8;
    b = (D_801BBBF0.unkDC == arg0->unkC) ? (func_8038DB8C_StructC *)&D_801BC3D8 : (func_8038DB8C_StructC *)&D_801BC03C;
    if (arg0->unkA8 == 2) {
        CALL();
        arg0->unkA8 = 0;
        return;
    }
    if (((a->unk30 & 7) != 0) || (D_801BBBF0.unk1031 == 6)) {
        arg0->unkA8 = 1;
        return;
    }
    if (D_801BBBF0.unk1031 == 7) {
        arg0->unkB0 = (s32)func_8038DE50;
        func_800058DC((s32)arg0, func_8022B3E0);
        return;
    }
    if ((a->unk2 < a->unk0 / 5) && (arg0->unkA0 != 0) && !(arg0->unk9A & 0x20)) {
        CALL();
        return;
    }
    if (func_8022AB58() != 0) {
        arg0->unk91 = 0;
        CALL();
        return;
    }
    sub = b->unk30.b;
    if (sub != 0 && !(arg0->unk9A & 8)) {
        CALL();
        return;
    }
    if (D_801BBBF0.unkB90 > 25.0f && arg0->unk9A == 0) {
        CALL();
        return;
    }
    if (D_801BBBF0.unkB90 <= 20.0f) {
        s32 f = arg0->unk9A;
        if (f & 0x100) {
            arg0->unk9A = f ^ 0x100;
            CALL();
            return;
        }
    }
    if (a->unk38.hi && !a->unk38.b28 && !(arg0->unk9A & 2)) {
        CALL();
        return;
    }
    if (a->unk38.hi && a->unk38.b28 && !(arg0->unk9A & 4)) {
        CALL();
        return;
    }
    if (!a->unk38.hi && (arg0->unk9A & 6)) {
        arg0->unk9A = 0;
        CALL();
        return;
    }
    if (sub == 0 && (arg0->unk9A & 8)) {
        arg0->unk9A = 0;
        CALL();
    }
}
#undef CALL

void *func_8022A834(s32 arg0, struct func_8022A834_Struct *arg1);

void func_8038E100(s32 arg0, struct func_8022A834_Struct *arg1) {
    func_8022A834(arg0, arg1);
}

