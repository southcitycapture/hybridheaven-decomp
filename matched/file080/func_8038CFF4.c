#include "common.h"
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
