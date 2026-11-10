#include "context.h"

extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s16 func_80228C20();
extern s32 func_80228D90();
extern void func_80228FD0();
extern s32 func_80229260();
extern void func_802292D0();
extern u8 D_801BBC8C[];
extern u8 D_801BBCAC[];

typedef struct func_8038CFF4_G {
    u8 pad0[0x232];
    s16 unk232;
} func_8038CFF4_G;

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
    u8 pad96[0x9A - 0x96];
    s16 unk9A;
    s32 unk9C;
} func_8038CFF4_StructA;

typedef struct func_8038CFF4_StructO {
    u8 pad0[2];
    s16 unk2;
    u16 unk4;
    s16 unk6;
    s16 unk8;
} func_8038CFF4_StructO;

typedef union func_8038CFF4_U30 {
    struct {
        u32 p0 : 3;
        u32 m : 4;
        u32 p1 : 2;
        u32 a : 2;
        u32 b : 2;
        u32 rest : 19;
    } bf;
    struct {
        u16 h;
        u8 b2;
        u8 b3;
    } by;
} func_8038CFF4_U30;

typedef struct func_8038CFF4_StructE {
    u8 pad0[6];
    s16 unk6;
    u8 pad8[0x30 - 8];
    func_8038CFF4_U30 u30;
    u32 unk34;
    u32 neg : 1;
    u32 mid : 2;
    u32 rest38 : 29;
    u8 pad3C[0x2D8 - 0x3C];
    u8 unk2D8;
    u8 pad2D9[0x2FC - 0x2D9];
    u8 unk2FC;
    u8 pad2FD[0x312 - 0x2FD];
    s16 unk312;
} func_8038CFF4_StructE;

void func_8038CFF4(func_8038CFF4_StructA *arg0, s32 arg1) {
    s16 sp36;
    s16 sp34;
    func_8038CFF4_StructO *sp30;
    func_8038CFF4_StructE *a1;
    func_8038CFF4_StructE *v1;
    s16 sp26;
    s32 v;
    s32 q;
    s32 padC;
    f64 fv;
    s32 bb;

    sp34 = (s16)(0x2800 - ((func_8038CFF4_G *)&D_801BBBF0)->unk232) & 0x1FFF;
    q = D_801BBBF0.unkDC;
    padC = arg0->unkC->unkC;
    sp30 = (q == padC) ? (func_8038CFF4_StructO *)D_801BBC8C : (func_8038CFF4_StructO *)D_801BBCAC;
    if (q == padC) {
        a1 = (func_8038CFF4_StructE *)D_801BC03C;
    } else {
        a1 = (func_8038CFF4_StructE *)D_801BC3D8;
    }
    if (q != padC) {
        v1 = (func_8038CFF4_StructE *)D_801BC03C;
    } else {
        v1 = (func_8038CFF4_StructE *)D_801BC3D8;
    }
    if (arg0->unk91 == 1 && D_801BBBF0.unk1031 == 7) {
        arg0->unk91 = 2;
    }
    if (a1->u30.bf.a != 0 && a1->u30.bf.m != 1) {
        if (D_801BBBF0.unk1031 >= 7 && D_801BBBF0.unk1031 != 0xF) {
            arg0->unk92 = arg0->unk95 = 0;
        }
        if (D_801BBBF0.unk1031 == 5 && (a1->u30.by.h & 7) == 0 && func_80229260(arg0, a1, sp30, 0xA) == 0) {
            fv = D_801BBBF0.unkB90;
            if ((fv < 20.0 || arg0->unk95 == 1) && a1->unk2D8 != 0xC) {
                if (arg0->unk95 == 0) {
                    arg0->unk95 = arg0->unk92 = 1;
                    return;
                }
                if (fv > 25.0) {
                    arg0->unk95 = arg0->unk92 = 0;
                    return;
                }
                if ((v1->u30.bf.b != 0 && (v1->unk312 >= 0xB || v1->u30.bf.m == 1U)) || v1->u30.bf.m == 2U) {
                    if (a1->unk6 >= 0x64) {
                        sp30->unk4 = 0x8000;
                    }
                } else {
                    if (arg0->unk91 == 2) {
                        arg0->unk92 = 4;
                    }
                    if (arg0->unk92 == 1) {
                        if (a1->neg != 0) {
                            arg0->unk90 = 0;
                            arg0->unk92 = 3;
                            return;
                        }
                        if (1 == a1->unk2FC % 3) {
                            if (a1->unk6 >= 0x50) {
                                sp30->unk4 = 0x10;
                                arg0->unk90 = 0;
                                arg0->unk92 = 4;
                                return;
                            }
                            func_80228FD0(arg0, sp30, 7);
                            return;
                        }
                        if (a1->unk6 >= 0x47) {
                            func_802292D0(sp30, a1);
                            arg0->unk91 = 1;
                            arg0->unk92 = 2;
                            return;
                        }
                        sp26 = func_80228C20(arg0, a1);
                        sp36 = (s16)(s32)((func_8001EAD0(arg0->unk9C << 7) * 1024.0f) + (f32)(sp26 + 0x1000) + (f32)sp34) & 0x1FFF;
                        sp30->unk6 = (s16)(s32)(-func_8001EB64(sp36) * 40.0f);
                        sp30->unk8 = (s16)(s32)(func_8001EAD0(sp36) * 40.0f);
                        return;
                    }
                    if (arg0->unk92 == 2) {
                        if (a1->neg != 0) {
                            arg0->unk90 = 0;
                            arg0->unk92 = 3;
                        }
                        v = a1->u30.by.b2 & 3;
                        if ((v << 0) == 2U) {
                            arg0->unk92 = 4;
                            v = a1->u30.by.b2 & 3;
                        }
                        if (v == 0) {
                            arg0->unk92 = 1;
                        }
                    } else if (arg0->unk92 == 3) {
                        if (a1->neg != 0) {
                            bb = arg0->unk90++ >= 0x15;
                            if (bb) {
                                arg0->unk92 = 4;
                                arg0->unk90 = 0;
                                return;
                            }
                        }
                        if (a1->mid == 0 && a1->neg == 0) {
                            arg0->unk92 = 1;
                        }
                    } else if (arg0->unk92 == 4) {
                        if (a1->unk6 >= 0x64) {
                            if (func_80228D90(arg0, a1) != 0) {
                                a1->u30.by.b2 = a1->u30.by.b2 & 0xFFFC;
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
                if ((a1->u30.by.b2 & 3) == 2U) {
                    a1->u30.by.b2 = a1->u30.by.b2 & 0xFFFC;
                }
                if (a1->unk6 >= 0x64 && a1->unk2D8 == 0xC && func_80228D90(arg0) != 0) {
                    sp30->unk4 = 0x8000;
                    arg0->unk91 = 0;
                    return;
                }
                sp36 = (s16)(func_80228C20(arg0) + sp34) & 0x1FFF;
                if (D_801BBBF0.unkB90 > 60.0f) {
                    arg0->unk9A = 0x1E;
                }
                if (arg0->unk9A-- > 0) {
                    sp30->unk2 = 0x2000;
                    sp30->unk6 = (s16)(s32)(-func_8001EB64(sp36) * 40.0f);
                    sp30->unk8 = (s16)(s32)(func_8001EAD0(sp36) * 40.0f);
                } else {
                    sp30->unk6 = (s16)(s32)(-func_8001EB64(sp36) * 80.0f);
                    sp30->unk8 = (s16)(s32)(func_8001EAD0(sp36) * 80.0f);
                }
            }
        }
    }
}
