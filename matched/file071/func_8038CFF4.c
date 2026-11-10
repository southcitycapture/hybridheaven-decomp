#include "common.h"
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
extern s32 func_802292D0();
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
