#include "context.h"

typedef struct func_8038CFF4_StructE {
    u8 pad0[4];
    s16 unk4;
    s16 unk6;
    u8 pad8[2];
    s16 unkA;
    u8 padC[0x30 - 0xC];
    u32 a : 3;
    u32 f3 : 4;
    u32 gap : 2;
    u32 b : 2;
    u32 f11 : 2;
    u32 rest : 19;
    u32 pad34;
    u32 g0 : 1;
    u32 g1 : 2;
    u32 grest : 29;
    u8 pad3C[0x312 - 0x3C];
    s16 unk312;
    u8 pad314[0x38B - 0x314];
    u8 unk38B;
} func_8038CFF4_StructE;

typedef struct func_8038CFF4_StructO {
    u8 pad0[2];
    s16 unk2;
    u16 unk4;
    s16 unk6;
    s16 unk8;
} func_8038CFF4_StructO;

typedef struct func_8038CFF4_StructP {
    u8 pad0[0xC];
    struct func_8038CFF4_StructQ *unkC;
    u8 pad10[0x92 - 0x10];
    u8 unk92;
    u8 pad93[2];
    u8 unk95;
    u8 pad96[2];
    s16 unk98;
    u8 pad9A[2];
    u32 unk9C;
} func_8038CFF4_StructP;

typedef struct func_8038CFF4_StructQ {
    u8 pad0[0xC];
    s32 unkC;
} func_8038CFF4_StructQ;

typedef struct func_8038CFF4_StructG {
    u8 pad0[0xDC];
    s32 unkDC;
    void *unkE0;
    u8 padE4[0xF0 - 0xE4];
    void *unkF0;
    u8 padF4[0x232 - 0xF4];
    s16 unk232;
    u8 pad234[0xB90 - 0x234];
    f32 unkB90;
    u8 padB94[0x1031 - 0xB94];
    u8 unk1031;
} func_8038CFF4_StructG;

typedef struct func_8038CFF4_StructW {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_8038CFF4_StructW;

typedef struct func_8038CFF4_StructV {
    u8 pad0[0x2C];
    struct func_8038CFF4_StructW *unk2C;
} func_8038CFF4_StructV;

extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s32 func_8010843C(f32, f32, f32, f32, f32, f32);
extern s32 func_80228C20();
extern s32 func_80228D90();
extern void func_80228FD0();
extern s32 func_80229260();
extern u8 D_801BBC8C[];
extern u8 D_801BBCAC[];
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];

extern u8 D_801CBBF0[];

#define GLOB ((func_8038CFF4_StructG *)(D_801CBBF0 - 0x10000))

void func_8038CFF4(func_8038CFF4_StructP *arg0, s32 arg1) {
    s16 sp4E;
    s16 sp4C;
    func_8038CFF4_StructO *o;
    func_8038CFF4_StructE *e1;
    func_8038CFF4_StructE *e2;
    void *v;
    u8 pad[12];
    f32 f;
    f32 g;

    sp4C = (s16)(0x2800 - GLOB->unk232) & 0x1FFF;
    o = (arg0->unkC->unkC == GLOB->unkDC) ? (void *)D_801BBC8C : (void *)D_801BBCAC;
    e1 = (arg0->unkC->unkC == GLOB->unkDC) ? (void *)D_801BC03C : (void *)D_801BC3D8;
    e2 = (arg0->unkC->unkC == GLOB->unkDC) ? (void *)D_801BC3D8 : (void *)D_801BC03C;
    v = (arg0->unkC->unkC == GLOB->unkDC) ? GLOB->unkE0 : GLOB->unkF0;
    if (e1->b != 0 && e1->f3 != 1) {
        if (GLOB->unk1031 >= 7 && GLOB->unk1031 != 0xF) {
            arg0->unk98 = 0;
            arg0->unk95 = ((u8 *)&arg0->unk98)[1];
            arg0->unk92 = ((u8 *)&arg0->unk98)[1];
        }
        if (GLOB->unk1031 == 5 && e2->f11 == 0 && !(*(u16 *)((u8 *)e1 + 0x30) & 7) && func_80229260(arg0, e1, o, 10) == 0) {
            if (((((f64)GLOB->unkB90 < 15.0) || arg0->unk92 != 0) && (e1->unk4 / 5 < e1->unk6 || e2->unk38B < 10)) || e2->f3 != 0) {
                if (arg0->unk92 == 0) {
                    arg0->unk92 = 1;
                }
                if (e2->f11 != 0 && e2->unk312 >= 11 && e1->unk6 >= 31 && e1->unkA < 50) {
                    o->unk4 = 0x8000;
                    return;
                }
                if ((f64)GLOB->unkB90 > 25.0 || func_80228D90(arg0) == 0) {
                    arg0->unk92 = 0;
                    return;
                }
                if (arg0->unk92 == 1) {
                    if (e1->b != 0) {
                        o->unk4 = 0x10;
                        arg0->unk92 = 2;
                        return;
                    }
                    if (e1->g0 != 0) {
                        arg0->unk92 = 3;
                        return;
                    }
                    arg0->unk92 = 1;
                    return;
                }
                if (arg0->unk92 == 2) {
                    if (e1->g0 != 0) {
                        arg0->unk92 = 3;
                        return;
                    }
                    if (e1->g0 == 0 && !(((u8 *)e1)[0x30] & 1)) {
                        arg0->unk92 = 4;
                    }
                } else if (arg0->unk92 == 3) {
                    if (e1->unk6 >= 100 && e1->g0 != 0 && e1->g1 == 0 && e2->g0 != 0 && e2->g1 == 0) {
                        if (!(arg0->unk9C & 7)) {
                            o->unk4 = 0x8000;
                            arg0->unk92 = 4;
                        }
                    } else {
                        func_80228FD0(arg0, o, 4, e1);
                    }
                    if (e1->g0 == 0) {
                        arg0->unk92 = 0;
                    }
                } else if (arg0->unk92 == 4 && GLOB->unk1031 == 5) {
                    arg0->unk92 = 0;
                }
            } else if (e1->unk6 < 100) {
                if (GLOB->unkB90 < 50.0f) {
                    f = func_8001EB64((s16)(func_80228C20(arg0) + 0x1000) & 0x1FFF);
                    g = func_8001EAD0((s16)(func_80228C20(arg0) + 0x1000) & 0x1FFF);
                    {
                        func_8038CFF4_StructW *p = ((func_8038CFF4_StructV *)v)->unk2C;
                        if (func_8010843C(p->unk4, p->unk8, p->unkC, f * 40.0f + p->unk4, p->unk8, g * 40.0f + p->unkC) != 0) {
                            sp4E = (s16)((s16)(func_80228C20(arg0) + sp4C + 0x800) & 0x1FFF);
                        } else {
                            sp4E = (s16)((s16)(func_80228C20(arg0) + sp4C + 0x1000) & 0x1FFF);
                        }
                    }
                    o->unk6 = -func_8001EB64(sp4E) * 40.0f;
                    o->unk8 = func_8001EAD0(sp4E) * 40.0f;
                }
            } else if (GLOB->unkB90 > 10.0f && (arg0->unk9C & 0xFF) > 0x80) {
                o->unk2 = 0x2000;
                sp4E = func_80228C20(arg0) + sp4C;
                o->unk6 = -func_8001EB64(sp4E) * 40.0f;
                o->unk8 = func_8001EAD0(sp4E) * 40.0f;
            }
        }
    }
}
