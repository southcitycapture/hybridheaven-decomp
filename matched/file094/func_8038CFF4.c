#include "common.h"


struct func_8038CFF4_Obj {
    u8 pad0[4];
    s16 unk4;
    s16 unk6;
    s16 unk8;
    u8 pad1[0x26];
    u32 p0 : 3;
    u32 f3 : 4;
    u32 p1 : 2;
    u32 f9 : 2;
    u32 f11 : 2;
    u32 p2 : 19;
    u8 unk34[4];
    u32 unk38;
};
struct func_8038CFF4_Vec {
    u8 pad[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
};
struct func_8038CFF4_Mid {
    u8 pad0[0xA0];
    u8 unkA0;
};
struct func_8038CFF4_Arg {
    u8 pad0[0xC];
    struct func_8038CFF4_Mid *unkC;
    u8 pad1[0x80];
    u8 unk90;
    u8 unk91;
    u8 unk92;
    u8 pad2[2];
    u8 unk95;
};
struct func_8038CFF4_G {
    u8 pad0[0x30];
    u16 unk30;
    u8 pad1[0xAA];
    s32 unkDC;
    struct func_8038CFF4_Vec **unkE0;
    u8 pad2[0x0C];
    struct func_8038CFF4_Vec **unkF0;
    u8 pad3[0x13E];
    s16 unk232;
    u8 pad4[0x960];
    f32 unkB94;
    u8 pad5[0x499];
    u8 unk1031;
};
extern u8 D_801CBBF0[];
#define GLOB (*(struct func_8038CFF4_G *)(D_801CBBF0 - 0x10000))
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern s32 func_8022B640();
extern u8 D_801BBC8C[];
extern u8 D_801BBCAC[];
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s32 func_8010843C(f32, f32, f32, f32, f32, f32);
extern s32 func_80228C20();
extern s32 func_80228D90();
extern s32 func_80228FD0();
extern s32 func_802291FC();
extern s32 func_802292D0();
#define CALL_8022B640(a, b) func_8022B640(a, b)


#define RAW(p) (*(u32 *)((u8 *)(p) + 0x30))
#define VP(n) ((struct func_8038CFF4_Vec **)sp44)[11]->n

void func_8038CFF4(struct func_8038CFF4_Arg *arg0, s32 arg1) {
    s16 sp5E;
    f32 sp58;
    s16 sp56;
    struct func_8038CFF4_Obj *sp50;
    struct func_8038CFF4_Obj *a1;
    struct func_8038CFF4_Obj *t1;
    void *sp44;
    s32 v;
    struct func_8038CFF4_Vec *p;
    f32 sp38;
    f32 sp34;
#define k (2048.0f * sp58)

#define V (*(s32 *)((u8 *)arg0->unkC + 0xC))
    sp56 = (s16)(0x2800 - GLOB.unk232) & 0x1FFF;
    sp50 = (GLOB.unkDC == V) ? (void *)D_801BBC8C : (void *)D_801BBCAC;
    if (GLOB.unkDC == V) {
        a1 = (void *)D_801BC03C;
    } else {
        a1 = (void *)D_801BC3D8;
    }
    if (GLOB.unkDC != V) {
        t1 = (void *)D_801BC03C;
    } else {
        t1 = (void *)D_801BC3D8;
    }
    if (GLOB.unkDC == V) {
        sp44 = GLOB.unkE0;
    } else {
        sp44 = GLOB.unkF0;
    }
    if ((arg0->unk91 == 1) &&(GLOB.unk1031 == 7)) {
        arg0->unk91 = 2;
    }
    if (a1->f9 != 0 && a1->f3 != 1) {
        if (GLOB.unk1031 >= 7 && GLOB.unk1031 != 0xF) {
            arg0->unk92 = arg0->unk95 = 0;
        }
        if (GLOB.unk1031 == 5 && (*(u16 *)((u8 *)a1 + 0x30) & 7) == 0 &&
            func_802291FC(arg0, a1, sp50, 0xA) == 0) {
            if (((f64)GLOB.unkB94 < 20.0 &&
                 ((t1->f11 != 0 &&
                   (*(s16 *)((u8 *)t1 + 0x312) >= 0xB || t1->f3 == 1)) ||
                  t1->f3 == 2))) {
                if (a1->unk6 >= 0x64) {
                    *(u16 *)&sp50->unk4 = 0x8000;
                }
            } else {
                if (arg0->unk92 == 0) {
                    if (arg0->unk91 == 1) {
                        arg0->unk91 = 2;
                    }
                    if ((*((u8 *)a1 + 0x32) & 3) == 2U) {
                        *((u8 *)a1 + 0x32) &= 0xFFFC;
                    }
                    if ((a1->unk38 >> 0x1F) != 0) {
                        arg0->unk90 = 0;
                        arg0->unk92 = 3;
                        return;
                    }
                    if (a1->unk6 >= 0x46 && (f64)GLOB.unkB94 < 12.0) {
                        sp5E = (s16)(func_80228C20(arg0, a1) + sp56) & 0x1FFF;
                        sp50->unk6 = -func_8001EB64(sp5E) * 80.0f;
                        sp50->unk8 = func_8001EAD0(sp5E) * 80.0f;
                        arg0->unk92 = 1;
                        arg0->unk90 = 0;
                        return;
                    }
                    if (GLOB.unkB94 > 60.0f) {
                        sp5E = (s16)(func_80228C20(arg0, a1) + sp56) & 0x1FFF;
                        sp50->unk6 = -func_8001EB64(sp5E) * 80.0f;
                        sp50->unk8 = func_8001EAD0(sp5E) * 80.0f;
                        return;
                    }
                    if (((f64)GLOB.unkB94 > 14.0 && (GLOB.unk30 % 10) < 3) ||
                        t1->f11 != 0 ||
                        t1->f3 != 0) {
                        sp58 = 0.0f;
                    } else {
                        sp58 = 1.0f;
                    }
                    if (t1->f11 == 0 && (f64)GLOB.unkB94 > 25.0 &&
                        a1->unk6 >= 0x64) {
                        if (func_80228D90(arg0, a1) != 0 && t1->f3 == 0) {
                            *((u8 *)a1 + 0x32) &= 0xFFFC;
                            *(u16 *)&sp50->unk4 = 0x8000;
                            return;
                        }
                    }
                    if (GLOB.unk30 & 0x80) {
                        sp38 = func_8001EB64((s16)((s16)((f32)func_80228C20(arg0, a1) + k) & 0x1FFF));
                        sp34 = func_8001EAD0((s16)((s16)((f32)func_80228C20(arg0) + k) & 0x1FFF));
                        p = ((struct func_8038CFF4_Vec **)sp44)[11];
                        if (func_8010843C(p->unk4, p->unk8, p->unkC, sp38 * 20.0f + p->unk4, p->unk8,
                                          sp34 * 20.0f + p->unkC) == 0) {
                            sp5E = (s16)((f32)func_80228C20(arg0) + k + (f32)sp56) & 0x1FFF;
                        }
                    } else {
                        sp38 = func_8001EB64((s16)((s16)((f32)func_80228C20(arg0, a1) - k) & 0x1FFF));
                        sp34 = func_8001EAD0((s16)((s16)((f32)func_80228C20(arg0) - k) & 0x1FFF));
                        p = ((struct func_8038CFF4_Vec **)sp44)[11];
                        if (func_8010843C(p->unk4, p->unk8, p->unkC, sp38 * 20.0f + p->unk4, p->unk8,
                                          sp34 * 20.0f + p->unkC) == 0) {
                            sp5E = (s16)((f32)func_80228C20(arg0) + (-2048.0f * sp58) + (f32)sp56) & 0x1FFF;
                        }
                    }
                    sp50->unk6 = -func_8001EB64(sp5E) * 80.0f;
                    sp50->unk8 = func_8001EAD0(sp5E) * 80.0f;
                    return;
                }
                v = arg0->unk92;
                if ((v << 0) == 1) {
                    if ((f64)GLOB.unkB94 > 15.0) {
                        if (func_80228D90(arg0, a1) == 0) {
                            arg0->unk92 = 0;
                            return;
                        }
                    }
                    if ((a1->unk38 >> 0x1F) != 0) {
                        arg0->unk90 = 0;
                        arg0->unk92 = 3;
                        return;
                    }
                    if (arg0->unk91 != 2) {
                        func_802292D0(sp50, a1);
                        arg0->unk91 = 1;
                        arg0->unk92 = 2;
                        return;
                    }
                    arg0->unk92 = 4;
                    return;
                }
                if (v == 2) {
                    if ((a1->unk38 >> 0x1F) != 0) {
                        arg0->unk90 = 0;
                        arg0->unk92 = 3;
                        return;
                    }
                    if ((f64)GLOB.unkB94 > 15.0) {
                        arg0->unk92 = 0;
                        return;
                    }
                    if ((*((u8 *)a1 + 0x32) & 3) == 2U) {
                        sp5E = (s16)(func_80228C20(arg0, a1) + sp56) & 0x1FFF;
                        sp50->unk6 = -func_8001EB64(sp5E) * 40.0f;
                        sp50->unk8 = func_8001EAD0(sp5E) * 40.0f;
                        arg0->unk92 = 4;
                        return;
                    }
                    if ((*((u8 *)a1 + 0x32) & 3) == 0) {
                        arg0->unk92 = 1;
                    }
                } else if (v == 3) {
                    if ((a1->unk38 >> 0x1F) != 0) {
                        if (arg0->unk90++ >= 0x1F) {
                            arg0->unk92 = 4;
                            arg0->unk90 = 0;
                            return;
                        }
                    }
                    if ((f64)GLOB.unkB94 > 15.0 || (a1->unk38 >> 0x1F) == 0) {
                        arg0->unk92 = 0;
                    }
                } else if (v == 4) {
                    if (a1->unk6 >= 0x64) {
                        if (func_80228D90(arg0, a1) != 0) {
                            *((u8 *)a1 + 0x32) &= 0xFFFC;
                            *(u16 *)&sp50->unk4 = 0x8000;
                            if (a1->unk6 == a1->unk4 && (a1->unk38 >> 0x1F) == 0) {
                                *((u8 *)a1 + 0x2D8) = 0xA;
                                *((u8 *)a1 + 0x2D9) = CALL_8022B640(2, a1);
                            } else if (*((u8 *)a1 + 0x2D8) == 0xB) {
                                arg0->unkC->unkA0 = arg0->unkC->unkA0 - 1;
                            }
                            arg0->unk91 = 0;
                            arg0->unk92 = 0;
                            return;
                        }
                    }
                    if ((f64)GLOB.unkB94 > 15.0) {
                        arg0->unk92 = 0;
                        return;
                    }
                    func_80228FD0(arg0, sp50, 7);                }
            }
        }
    }
}
#undef GLOB
#undef k
#undef V
#undef RAW
#undef VP
#undef CALL_8022B640
