#include "common.h"
extern u8 D_801BC03C;
extern u8 D_801BC3D8;


struct func_8038CFF4_StructA {
    u8 pad0[0xC];
    s32 *unkC;
    u8 pad1[0x90 - 0x10];
    u8 unk90;
    u8 unk91;
    u8 unk92;
    u8 pad2[2];
    u8 unk95;
    u8 pad3[0x9A - 0x96];
    s16 unk9A;
};
struct func_8038CFF4_StructD {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0x232 - 0xE0];
    s16 unk232;
    u8 pad2[0xB90 - 0x234];
    f32 unkB90;
    f32 unkB94;
    u8 pad3[0x1031 - 0xB98];
    u8 unk1031;
};
extern struct func_8038CFF4_StructD D_801BBBF0;
extern u8 D_801BBC8C[];
extern u8 D_801BBCAC[];
extern s32 func_80228C20();
extern s32 func_80228D90();
extern void func_80228E5C();
extern s32 func_80229260();
extern void func_802292D0();
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s32 func_8001EF38(f32, f32);

#define W(p, o, T) (*(T *)((u8 *)(p) + (o)))
typedef struct {
    unsigned b0 : 3;
    unsigned b3 : 4;
    unsigned b7 : 2;
    unsigned b9 : 2;
    unsigned b11 : 2;
    unsigned b13 : 3;
    unsigned b16 : 3;
    unsigned b19 : 3;
    unsigned b22 : 2;
    unsigned b24 : 8;
    u32 unk34;
    unsigned c0 : 1;
    unsigned c1 : 2;
    unsigned c3 : 1;
    unsigned c4 : 28;
} func_8038CFF4_BF;
#define BF(p) ((func_8038CFF4_BF *)((u8 *)(p) + 0x30))

void func_8038CFF4(struct func_8038CFF4_StructA *arg0, s32 arg1) {
    f32 sp3C;
    s32 pad38;
    s16 pad36;
    s16 sp34;
    u8 *sp30;
    s32 pad2C;
    u8 *a1;
    u8 *v1;
    f64 f;
    s16 ang;
    s32 b;

    sp34 = (s16)(0x2800 - D_801BBBF0.unk232) & 0x1FFF;
    sp30 = D_801BBBF0.unkDC == arg0->unkC[3] ? D_801BBC8C : D_801BBCAC;
    a1 = D_801BBBF0.unkDC == arg0->unkC[3] ? &D_801BC03C : &D_801BC3D8;
    v1 = D_801BBBF0.unkDC != arg0->unkC[3] ? &D_801BC03C : &D_801BC3D8;
    if (arg0->unk91 == 1) {
        if (D_801BBBF0.unk1031 == 7) {
            arg0->unk91 = 2;
        }
    }
    if (BF(a1)->b9 == 0) {
        return;
    }
    if (BF(a1)->b3 == 1) {
        return;
    }
    {
        if (D_801BBBF0.unk1031 >= 7 && D_801BBBF0.unk1031 != 0xF) {
            arg0->unk92 = arg0->unk95 = 0;
        }
        if (D_801BBBF0.unk1031 == 5 && !BF(a1)->b13 &&
            !func_80229260(arg0, a1, sp30, 0xA)) {
            f = D_801BBBF0.unkB90;
            if (f < 15.0 || arg0->unk95 == 1) {
                if (arg0->unk95 == 0) {
                    arg0->unk95 = 1;
                    arg0->unk92 = 1;
                    f = *(f32 *)(&D_801BC3D8 + 0x3A8);
                }
                if (f > 20.0) {
                    arg0->unk95 = 0;
                    arg0->unk92 = 0;
                }
                if ((BF(v1)->b11 != 0 && W(v1, 0x312, s16) >= 0xB) ||
                    BF(v1)->b3 == 2U) {
                    if (W(a1, 6, s16) >= 0x64) {
                        W(sp30, 4, u16) = 0x8000;
                    }
                } else {
                    if (W(a1, 4, s16) / 2 >= W(a1, 6, s16) && arg0->unk9A == 0) {
                        arg0->unk9A = 1;
                        W(a1, 0x328, u8) = 3;
                        W(a1, 0x329, u8) = 0;
                        sp3C = func_8001EB64(func_80228C20(arg0) + 0x1000) * 80.0f / 20.0;
                        W(a1, 0x32A, s16) = (s16)(func_8001EF38(sp3C, func_8001EAD0(func_80228C20(arg0) + 0x1000) * 80.0f / 20.0) - sp34) & 0x1FFF;
                        return;
                    }
                    if (arg0->unk91 == 2) {
                        arg0->unk92 = 4;
                    }
                    if (arg0->unk92 == 1) {
                        if (BF(a1)->c0 != 0) {
                            arg0->unk90 = 0;
                            arg0->unk92 = 3;
                            return;
                        }
                        if (W(a1, 0x2FC, u8) % 5 == 2) {
                            if (W(a1, 6, s16) >= 0x50) {
                                W(sp30, 4, s16) = 0x10;
                                arg0->unk90 = 0;
                                arg0->unk92 = 3;
                                return;
                            }
                            func_80228E5C(arg0, sp30, 7);
                            return;
                        }
                        if (W(a1, 0x2FC, u8) % 5 == 4) {
                            if (W(a1, 6, s16) >= 0x50) {
                                W(sp30, 4, s16) = 0x10;
                                arg0->unk90 = 0;
                                arg0->unk92 = 5;
                                return;
                            }
                            func_80228E5C(arg0, sp30, 7);
                            return;
                        }
                        if (W(a1, 6, s16) >= 0x46) {
                            func_802292D0(sp30, a1);
                            arg0->unk91 = 1;
                            arg0->unk92 = 2;
                            return;
                        }
                        func_80228E5C(arg0, sp30, 7);
                        return;
                    }
                    if (arg0->unk92 == 2) {
                        if (BF(a1)->c0 != 0) {
                            arg0->unk90 = 0;
                            arg0->unk92 = 3;
                            return;
                        }
                        if (BF(a1)->b22 == 2) {
                            arg0->unk92 = 4;
                            return;
                        }
                        if (BF(a1)->b22 == 0) {
                            arg0->unk92 = 1;
                            return;
                        }
                        func_80228E5C(arg0, sp30, 7);
                        return;
                    }
                    if (arg0->unk92 == 3) {
                        if (BF(a1)->c0 != 0) {
                            if (arg0->unk90++ >= 0x1F) {
                                arg0->unk90 = 0;
                                arg0->unk92 = 4;
                                return;
                            }
                        }
                        if (BF(a1)->c1 == 0 && BF(a1)->c0 == 0) {
                            arg0->unk92 = 1;
                        }
                    } else {
                        if (arg0->unk92 == 4) {
                            if (W(a1, 6, s16) >= 0x64) {
                                if (func_80228D90(arg0) != 0) {
                                    W(a1, 0x32, u8) = W(a1, 0x32, u8) & 0xFFFC;
                                    W(sp30, 4, u16) = 0x8000;
                                    arg0->unk9A = 0;
                                    arg0->unk91 = 0;
                                    return;
                                }
                            }
                            func_80228E5C(arg0, sp30, 7);
                            return;
                        }
                        if (arg0->unk92 == 5) {
                            arg0->unk90 = arg0->unk90 + 1;
                            W(a1, 0x328, u8) = 3;
                            W(a1, 0x329, u8) = 0;
                            sp3C = func_8001EB64(func_80228C20(arg0) + 0x800) * 80.0f / 20.0;
                            W(a1, 0x32A, s16) = (s16)(func_8001EF38(sp3C, func_8001EAD0(func_80228C20(arg0) + 0x800) * 80.0f / 20.0) - sp34) & 0x1FFF;
                            if ((W(a1, 0x38, u32) >> 31) != 0 && BF(a1)->c3 != 0) {
                                arg0->unk92 = 4;
                            }
                            if ((W(a1, 0x38, u32) >> 31) == 0) {
                                arg0->unk92 = 1;
                            }
                            return;
                        }
                    }
                }
                return;
            }
            {
                if (arg0->unk91 == 1) {
                    arg0->unk91 = 2;
                }
                b = W(a1, 0x32, u8);
                if ((b & 3) == 2U) {
                    W(a1, 0x32, u8) = b & 0xFFFC;
                }
                if ((D_801BBBF0.unkB94 > 35.0f && BF(a1)->b16 == 3) ||
                    D_801BBBF0.unkB94 > 45.0f) {
                    W(sp30, 2, s16) = 0x2000;
                }
                ang = (s16)(func_80228C20(arg0) + sp34) & 0x1FFF;
                W(sp30, 6, s16) = -func_8001EB64(ang) * 80.0f;
                W(sp30, 8, s16) = func_8001EAD0(ang) * 80.0f;
            }
        }
    }
}
