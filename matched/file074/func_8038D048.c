#include "common.h"
struct func_8038CFC0_S2 {
    u8 pad[0x5C];
    u8 *unk5C;
};
struct func_8038CFC0_G {
    u8 pad[0xDC];
    struct func_8038CFC0_S2 *unkDC;
    u8 padE0[0xC];
    struct func_8038CFC0_S2 *unkEC;
};
extern struct func_8038CFC0_G D_801BBBF0;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern s32 func_8022B640(s32);


struct func_8038D048_StructY {
    u8 pad0[0x9C];
    u8 unk9C;
};

struct func_8038D048_StructO {
    u8 pad0[0x5C];
    struct func_8038D048_StructY *unk5C;
};

struct func_8038D048_StructQ {
    u8 pad0[0xC];
    struct func_8038D048_StructO *unkC;
};

struct func_8038D048_StructG {
    u8 pad0[0xDC];
    struct func_8038D048_StructO *unkDC;
    void *unkE0;
    u8 padE4[0xEC - 0xE4];
    struct func_8038D048_StructO *unkEC;
    void *unkF0;
    u8 padF4[0x232 - 0xF4];
    s16 unk232;
    u8 pad234[0xB90 - 0x234];
    f32 unkB90;
    u8 padB94[0x1031 - 0xB94];
    u8 unk1031;
};

struct func_8038D048_StructA {
    u8 pad0[4];
    s16 unk4;
    s16 unk6;
    u8 pad8[0x30 - 8];
    u32 u0 : 3;
    u32 mode : 4;
    u32 u1 : 2;
    u32 fa : 2;
    u32 fc : 2;
    u32 f13 : 3;
    u32 u2 : 6;
    u32 b32 : 2;
    u32 u3 : 8;
    u8 pad34[4];
    u32 unk38 : 1;
};

struct func_8038D048_StructR {
    u8 pad0[4];
    s16 unk4;
    s16 unk6;
    s16 unk8;
};

struct func_8038D048_StructV {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
};

struct func_8038D048_StructS {
    u8 pad0[0x2C];
    struct func_8038D048_StructV *unk2C;
};

struct func_8038D048_StructX {
    u8 pad0[0xC];
    struct func_8038D048_StructQ *unkC;
    u8 pad10[0x90 - 0x10];
    u8 unk90;
    u8 unk91;
    u8 unk92;
    u8 pad93[2];
    u8 unk95;
    u8 pad96[6];
    u32 unk9C_hi : 27;
    u32 unk9C : 5;
};

extern struct func_8038D048_StructG B_801BBBF0;
#define D_801BBBF0 B_801BBBF0
extern u8 D_801BBC8C[];
extern u8 D_801BBCAC[];
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s32 func_8010843C(f32, f32, f32, f32, f32, f32);
extern s32 func_80228C20(void *);
extern s32 func_80228D90(void *, void *);
extern void func_80228FD0(void *, void *, s32);
extern s32 func_80229260(void *, void *, void *, s32);
extern void func_802292D0(void *, void *);

void func_8038D048(struct func_8038D048_StructX *arg0, s32 arg1) {
    s16 sp56;
    s16 sp54;
    u8 *sp50;
    struct func_8038D048_StructS *sp4C;
    struct func_8038D048_StructA *a1;
    struct func_8038D048_StructA *t3;
    struct func_8038D048_StructY *sp40;
    u8 pad[0x14];
    f32 sp28;
    struct func_8038D048_StructV *p;

    sp54 = (s16)(0x2800 - D_801BBBF0.unk232) & 0x1FFF;
    sp50 = (arg0->unkC->unkC == (void *)D_801BBBF0.unkDC) ? D_801BBC8C : D_801BBCAC;
    if (arg0->unkC->unkC == (void *)D_801BBBF0.unkDC) {
        sp4C = D_801BBBF0.unkE0;
    } else {
        sp4C = D_801BBBF0.unkF0;
    }
    if (arg0->unkC->unkC == (void *)D_801BBBF0.unkDC) {
        a1 = (void *)D_801BC03C;
    } else {
        a1 = (void *)D_801BC3D8;
    }
    if (arg0->unkC->unkC == (void *)D_801BBBF0.unkDC) {
        t3 = (void *)D_801BC3D8;
    } else {
        t3 = (void *)D_801BC03C;
    }
    if (arg0->unkC->unkC == (void *)D_801BBBF0.unkDC) {
        sp40 = D_801BBBF0.unkDC->unk5C;
    } else {
        sp40 = D_801BBBF0.unkEC->unk5C;
    }
    if ((arg0->unk91 == 1) && (D_801BBBF0.unk1031 == 7)) {
        arg0->unk91 = 2;
    }
    if (a1->fa == 0 || a1->mode == 1) {
        return;
    }
    if (D_801BBBF0.unk1031 >= 7 && D_801BBBF0.unk1031 != 0xF) {
        arg0->unk92 = arg0->unk95 = 0;
    }
    if (D_801BBBF0.unk1031 != 5) {
        return;
    }
    if (a1->f13) {
        return;
    }
    if (func_80229260(arg0, a1, sp50, 0xA) != 0) {
        return;
    }
    if (((f64)D_801BBBF0.unkB90 < 20.0 || arg0->unk95 == 1 || a1->unk38 != 0) && a1->unk6 >= 0x65) {
        if (arg0->unk95 == 0) {
            arg0->unk95 = 1;
            arg0->unk92 = 1;
            return;
        }
        if ((f64)D_801BBBF0.unkB90 > 25.0) {
            arg0->unk95 = arg0->unk92 = 0;
            return;
        }
        if (t3->fc != 0 || t3->mode == 2) {
            sp40->unk9C = 3;
            if (a1->unk6 >= 0x64) {
                *(u16 *)(sp50 + 4) = 0x8000;
            }
        } else {
            if (arg0->unk91 == 2) {
                arg0->unk92 = 4;
            }
            if (arg0->unk92 == 1) {
                if (a1->unk38 != 0) {
                    arg0->unk92 = 3;
                    arg0->unk90 = 0;
                    return;
                }
                if (a1->unk6 >= 0x47) {
                    func_802292D0(sp50, a1);
                    sp40->unk9C = 3;
                    arg0->unk91 = 1;
                    arg0->unk92 = 2;
                    return;
                }
                func_80228FD0(arg0, sp50, 4);
                return;
            }
            if (arg0->unk92 == 2) {
                if (a1->unk38 != 0) {
                    arg0->unk90 = 0;
                    arg0->unk92 = 3;
                }
                if (a1->b32 == 2) {
                    arg0->unk92 = 4;
                }
                if (a1->b32 == 0) {
                    arg0->unk92 = 1;
                }
            } else if (arg0->unk92 == 3) {
                if (a1->unk38 != 0) {
                    if (arg0->unk90++ > 0x1E) {
                        arg0->unk90 = 0;
                        arg0->unk92 = 4;
                    }
                }
                if (a1->unk38 == 0) {
                    arg0->unk92 = 1;
                }
            } else if (arg0->unk92 == 4) {
                if (a1->unk6 >= 0x64 && func_80228D90(arg0, a1) != 0 && sp40->unk9C == 0) {
                    sp40->unk9C = 3;
                    a1->b32 = 0;
                    *(u16 *)(sp50 + 4) = 0x8000;
                    if (a1->unk6 == a1->unk4 && a1->unk38 == 0) {
                        *((u8 *)a1 + 0x2D8) = 0xA;
                        *((u8 *)a1 + 0x2D9) = func_8022B640(2);
                    }
                } else {
                    if (sp40->unk9C == 2) {
                        sp40->unk9C = 3;
                    }
                    func_80228FD0(arg0, sp50, 4);
                }
            }
        }
    } else {
        if (arg0->unk91 == 1) {
            arg0->unk91 = 2;
        }
        if (a1->b32 == 2) {
            a1->b32 = 0;
        }
        if (sp40->unk9C == 0) {
            sp40->unk9C = 1;
        }
        if (a1->unk6 < 0x64) {
            if ((f64)D_801BBBF0.unkB90 < 30.0) {
                sp28 = func_8001EB64((s16)(func_80228C20(arg0) + 0x1000) & 0x1FFF);
                if (func_8010843C((p = sp4C->unk2C)->unk4, p->unk8, p->unkC, sp28 * 20.0f + p->unk4, p->unk8, p->unkC + func_8001EAD0((s16)(func_80228C20(arg0) + 0x1000) & 0x1FFF) * 20.0f) == 0) {
                    sp56 = (s16)(func_80228C20(arg0) + sp54 + 0x1000) & 0x1FFF;
                } else {
                    sp28 = func_8001EB64((s16)(func_80228C20(arg0) + 0x400) & 0x1FFF);
                    if (func_8010843C((p = sp4C->unk2C)->unk4, p->unk8, p->unkC, sp28 * 20.0f + p->unk4, p->unk8, p->unkC + func_8001EAD0((s16)(func_80228C20(arg0) + 0x400) & 0x1FFF) * 20.0f) == 0) {
                        sp56 = (s16)(func_80228C20(arg0) + sp54 + 0xC00) & 0x1FFF;
                    } else {
                        sp28 = func_8001EB64((s16)(func_80228C20(arg0) - 0x400) & 0x1FFF);
                        if (func_8010843C((p = sp4C->unk2C)->unk4, p->unk8, p->unkC, sp28 * 20.0f + p->unk4, p->unk8, p->unkC + func_8001EAD0((s16)(func_80228C20(arg0) - 0x400) & 0x1FFF) * 20.0f) == 0) {
                            sp56 = (s16)(func_80228C20(arg0) + sp54 - 0xC00) & 0x1FFF;
                        }
                    }
                }
                *(s16 *)(sp50 + 6) = (s32)(-func_8001EB64(sp56) * 80.0f);
                *(s16 *)(sp50 + 8) = (s32)(func_8001EAD0(sp56) * 80.0f);
            }
            if (arg0->unk9C == 0x1F) {
                sp40->unk9C = 3;
            }
        } else {
            sp56 = (s16)(func_80228C20(arg0) + sp54) & 0x1FFF;
            *(s16 *)(sp50 + 6) = (s32)(-func_8001EB64(sp56) * 80.0f);
            *(s16 *)(sp50 + 8) = (s32)(func_8001EAD0(sp56) * 80.0f);
            if (arg0->unk9C == 0x1F) {
                sp40->unk9C = 3;
            }
        }
    }
}
