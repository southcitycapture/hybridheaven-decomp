#include "common.h"
extern u8 D_801BBBF0[];
extern u8 D_801BC03C;
extern u8 D_801BC3D8[];


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
    u32 f38_1:31;
    u8 pad3C[0x29C];
    u8 unk2D8;
    u8 unk2D9;
    u8 pad2DA[0x38];
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
    u8 pad9A[2];
    s32 unk9C;
} func_8038CFF4_StructP;

typedef struct func_8038CFF4_StructO {
    u8 pad0[2];
    s16 unk2;
    u16 unk4;
    s16 unk6;
    s16 unk8;
} func_8038CFF4_StructO;

extern u8 D_801BBC8C[];
extern u8 D_801BBCAC[];
extern f32 func_8001EAD0(s16, s16);
extern f32 func_8001EB64(s16, s16);
extern f32 D_8001EAD0(s16);
extern f32 D_8001EB64(s16);
extern u8 func_8022559C(s32, void *);
extern s16 func_80228C20();
extern s32 func_80228D90();
extern void func_802290C8();
extern s32 func_80229260();
extern void func_802292D0();

#define GG (*(func_8038CFF4_StructG *)D_801BBBF0)
#define B32(p) (*((u8 *)(p) + 0x32))
#define H30(p) (*(u16 *)((u8 *)(p) + 0x30))

void func_8038CFF4(func_8038CFF4_StructP *arg0, s32 arg1) {
    s16 a1s;
    s16 sp3C;
    func_8038CFF4_StructO *sp38;
    s32 activeEntity;
    func_8038CFF4_StructS *a1;
    func_8038CFF4_StructS *t1;
    u8 sp2B;
    s32 v;
    s16 ang;
    s16 sp20;
    f64 fv;

    sp3C = (s16)(0x2800 - GG.unk232) & 0x1FFF;
    activeEntity = GG.unkDC;
    if (arg0->unkC->unkC == activeEntity) {
        sp38 = (func_8038CFF4_StructO *)D_801BBC8C;
    } else {
        sp38 = (func_8038CFF4_StructO *)D_801BBCAC;
    }
    if (arg0->unkC->unkC == activeEntity) {
        a1 = (func_8038CFF4_StructS *)&D_801BC03C;
    } else {
        a1 = (func_8038CFF4_StructS *)D_801BC3D8;
    }
    if (arg0->unkC->unkC == activeEntity) {
        t1 = (func_8038CFF4_StructS *)D_801BC3D8;
    } else {
        t1 = (func_8038CFF4_StructS *)&D_801BC03C;
    }
    if ((s32)t1 == (s32)D_801BBBF0 + 0x44C) {
        arg1 = ((func_8038CFF4_StructU *)activeEntity)->unk5C->unk1C;
    } else {
        arg1 = GG.unkEC->unk5C->unk1C;
    }
    sp2B = func_8022559C(arg1, a1);
    if ((arg0->unk91 == 1) && (GG.unk1031 == 7)) {
        arg0->unk91 = 2;
    }
    if ((a1->f30_9 != 0) && (a1->f30_3 != 1)) {
        if ((GG.unk1031 >= 7) && (GG.unk1031 != 0xF)) {
            arg0->unk98 = 0;
            arg0->unk92 = arg0->unk95 = *((u8 *)arg0 + 0x99);
        }
        if (!(H30(a1) & 7) && (GG.unk1031 == 5) && (func_80229260(arg0, a1, sp38, 10) == 0)) {
            if (((fv = GG.unkB90) < 15.0) || (arg0->unk95 == 1)) {
                if (arg0->unk95 == 0) {
                    arg0->unk95 = arg0->unk92 = 1;
                    return;
                }
                if (fv > 20.0) {
                    arg0->unk95 = 0;
                    arg0->unk92 = 0;
                    return;
                }
                if (((t1->f30_11 != 0) && ((t1->unk312 >= 0xB) || (t1->f30_3 == 1))) || (t1->f30_3 == 2U)) {
                    if (a1->unk6 >= 0x64) {
                        sp38->unk4 = 0x8000;
                    }
                } else {
                    if (arg0->unk91 == 2) {
                        arg0->unk92 = 4;
                    }
                    if (arg0->unk92 == 1) {
                        if (a1->f38_0 != 0) {
                            arg0->unk92 = 3;
                            arg0->unk90 = 0;
                            return;
                        }
                        if (a1->unk6 >= 0x47) {
                            func_802292D0(sp38, a1);
                            arg0->unk91 = 1;
                            arg0->unk92 = 2;
                            return;
                        }
                        func_802290C8(arg0, sp38, 4, 0x41700000);
                        return;
                    }
                    if (arg0->unk92 == 2) {
                        if (a1->f38_0 != 0) {
                            arg0->unk92 = 3;
                            arg0->unk90 = 0;
                        }
                        if ((B32(a1) & 3) == 2U) {
                            arg0->unk92 = 4;
                        }
                        v = B32(a1) & 3;
                        if (v == 0) {
                            arg0->unk92 = 1;
                        }
                    } else if (arg0->unk92 == 3) {
                        if (a1->f38_0 != 0) {
                            arg1 = arg0->unk90++ >= 0x1F;
                            if (arg1) {
                                arg0->unk92 = 4;
                                arg0->unk90 = 0;
                                return;
                            }
                        }
                        if (a1->f38_0 == 0) {
                            arg0->unk90 = 1;
                        }
                    } else if (arg0->unk92 == 4) {
                        if ((a1->unk6 >= 0x64) && (func_80228D90(arg0, a1) != 0)) {
                            B32(a1) = B32(a1) & 0xFFFC;
                            sp38->unk4 = 0x8000;
                            arg0->unk91 = 0;
                            if ((a1->unk6 == a1->unk4) && (a1->f38_0 == 0)) {
                                a1->unk2D8 = 0xA;
                                a1->unk2D9 = 3;
                            }
                            return;
                        }
                        func_802290C8(arg0, sp38, 4, 0x41700000);
                        return;
                    }
                }
            } else {
                if (arg0->unk91 == 1) {
                    arg0->unk91 = 2;
                }
                if ((B32(a1) & 3) == 2U) {
                    B32(a1) = B32(a1) & 0xFFFC;
                }
                if ((a1->unk6 >= 0x64) && (a1->unk2D8 == 0xC) && (func_80228D90(arg0) != 0)) {
                    sp38->unk4 = 0x8000;
                    arg0->unk91 = 0;
                    return;
                }
                sp20 = func_80228C20(arg0);
                ang = (arg0->unk9C & 0xFF) << 6;
                a1s = (s16)(D_8001EAD0(ang) * 1024.0f + sp20 + sp3C) & 0x1FFF;
                if (GG.unkB90 > 60.0f) {
                    arg0->unk98 = 0x14;
                }
                arg1 = arg0->unk98-- > 0;
                if (arg1) {
                    sp38->unk2 = 0x2000;
                    sp38->unk6 = -D_8001EB64(a1s) * 40.0f;
                    sp38->unk8 = D_8001EAD0(a1s) * 40.0f;
                    return;
                }
                if ((sp2B >= 0x15) || (GG.unkB90 > 20.0f)) {
                    sp38->unk6 = -D_8001EB64(a1s) * 80.0f;
                    sp38->unk8 = D_8001EAD0(a1s) * 80.0f;
                    return;
                }
                sp38->unk6 = -D_8001EB64(a1s) * 40.0f;
                sp38->unk8 = D_8001EAD0(a1s) * 40.0f;
            }
        }
    }
}
