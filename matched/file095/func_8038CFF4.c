#include "common.h"
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
