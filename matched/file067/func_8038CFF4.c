#include "common.h"
typedef struct func_8038DA54_G {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0x1031 - 0xE0];
    u8 unk1031;
} func_8038DA54_G;
extern func_8038DA54_G D_801BBBF0;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];


struct func_8038CFF4_Obj {
    u8 pad0[0xA0];
    u8 unkA0;
};
struct func_8038CFF4_Ent {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
};
struct func_8038CFF4_Self {
    u8 pad0[0xC];
    struct func_8038CFF4_Obj *unkC;
    u8 pad10[0x90 - 0x10];
    u8 unk90;
    u8 unk91;
    u8 unk92;
    u8 pad93[2];
    u8 unk95;
    s16 unk96;
    u8 pad98[2];
    s16 unk9A;
    s32 unk9C;
};
struct func_8038CFF4_Mov {
    s16 unk0;
    s16 unk2;
    u16 unk4;
    s16 unk6;
    s16 unk8;
};
struct func_8038CFF4_Pl {
    s16 unk0;
    s16 unk2;
    u8 pad4[2];
    s16 unk6;
    u8 pad8[0x30 - 8];
    u32 b0 : 3;
    u32 b1 : 4;
    u32 b2 : 2;
    u32 b3 : 2;
    u32 b4 : 2;
    u32 b5 : 3;
    u32 b6 : 6;
    u32 b7 : 2;
    u32 b8 : 8;
    u8 pad34[4];
    u32 c0 : 1;
    u32 c1 : 31;
    u8 pad3C[0x2D8 - 0x3C];
    u8 unk2D8;
};
struct func_8038CFF4_G {
    u8 pad0[0xDC];
    s32 unkDC;
    struct func_8038CFF4_Ent **unkE0;
    u8 pad0E4[0xF0 - 0xE4];
    struct func_8038CFF4_Ent **unkF0;
    u8 pad0F4[0x232 - 0xF4];
    s16 unk232;
    u8 pad234[0xB90 - 0x234];
    f32 unkB90;
    u8 padB94[0x1031 - 0xB94];
    u8 unk1031;
};
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s32 func_8010843C(f32, f32, f32, f32, f32, f32);
extern s16 func_80228C20();
extern s32 func_80228D90();
extern void func_80228FD0();
extern s32 func_802291FC();
extern void func_802292D0();
extern struct func_8038CFF4_Mov D_801BBC8C;
extern struct func_8038CFF4_Mov D_801BBCAC;

#define G ((struct func_8038CFF4_G *)&D_801BBBF0)
#define P ((struct func_8038CFF4_Pl *)var_a1)
#define Q ((struct func_8038CFF4_Pl *)var_t2)

void func_8038CFF4(struct func_8038CFF4_Self *arg0, s32 arg1) {
    s16 sp46;
    s16 sp44;
    struct func_8038CFF4_Mov *sp40;
    struct func_8038CFF4_Ent **sp3C;
    u8 *var_a1;
    u8 *var_t2;
    struct func_8038CFF4_Ent *p;
    s16 sp2E;
    f32 sp28;

    sp44 = (s16)(0x2800 - G->unk232) & 0x1FFF;
    sp40 = (G->unkDC == *(s32 *)((u8 *)arg0->unkC + 0xC)) ? &D_801BBC8C : &D_801BBCAC;
    sp3C = (G->unkDC == *(s32 *)((u8 *)arg0->unkC + 0xC)) ? G->unkE0 : G->unkF0;
    var_a1 = (G->unkDC == *(s32 *)((u8 *)arg0->unkC + 0xC)) ? D_801BC03C : D_801BC3D8;
    var_t2 = (G->unkDC != *(s32 *)((u8 *)arg0->unkC + 0xC)) ? D_801BC03C : D_801BC3D8;
    if (arg0->unk91 == 1 && G->unk1031 == 7) {
        arg0->unk91 = 2;
    }
    if (P->b3 != 0 && P->b1 != 1 && P->b1 != 4) {
        if (G->unk1031 >= 7 && G->unk1031 != 0xF) {
            arg0->unk92 = arg0->unk95 = 0;
        }
        if (G->unk1031 == 5 && !(*(u16 *)(var_a1 + 0x30) & 7) && func_802291FC(arg0, var_a1, sp40, 0x1E) == 0) {
            if ((G->unkB90 < 18.0 || arg0->unk95 == 1) && (P->unk0 / 5 < P->unk2 || arg0->unkC->unkA0 == 0)) {
                if (arg0->unk95 == 0) {
                    arg0->unk95 = 1;
                    arg0->unk92 = 1;
                    return;
                }
                if (Q->b4 != 0 || Q->b1 == 2) {
                    if (P->unk6 >= 0x64) {
                        sp40->unk4 = 0x8000;
                    }
                } else {
                    if (G->unkB90 > 23.0 || (P->unk0 / 5 >= P->unk2 && arg0->unkC->unkA0 != 0)) {
                        arg0->unk95 = 0;
                        arg0->unk92 = 0;
                        return;
                    }
                    if (arg0->unk91 == 2) {
                        arg0->unk91 = 3;
                        arg0->unk92 = 3;
                    }
                    if (arg0->unk92 == 1) {
                        if (P->unk6 >= 0x47) {
                            func_802292D0(sp40, var_a1);
                            arg0->unk91 = 1;
                            arg0->unk92 = 2;
                            return;
                        }
                        func_80228FD0(arg0, sp40, 4);
                        return;
                    }
                    if (arg0->unk92 == 2) {
                        if (P->b7 == 2) {
                            arg0->unk92 = 3;
                        }
                        if (P->b7 == 0) {
                            arg0->unk92 = 1;
                        }
                    } else if (arg0->unk92 == 3) {
                        if (P->b3 != 0 || P->c0 != 0) {
                            if (P->unk6 >= 0x64 && func_80228D90(arg0) != 0) {
                                arg0->unk90 = 0;
                                arg0->unk92 = 4;
                                return;
                            }
                            func_80228FD0(arg0, sp40, 4);
                        }
                    } else if (arg0->unk92 == 4) {
                        if (P->b3 != 0 || P->c0 != 0) {
                            P->b7 = 0;
                            sp40->unk4 = 0x8000;
                            arg0->unk91 = 0;
                            arg0->unk92 = 5;
                        }
                    } else if (arg0->unk92 == 5 && G->unk1031 == 5) {
                        arg0->unk92 = 1;
                    }
                }
            } else {
                if (arg0->unk91 == 1) {
                    arg0->unk91 = 2;
                }
                if (P->b7 == 2) {
                    P->b7 = 0;
                }
                if (P->unk0 / 5 >= P->unk2 && arg0->unkC->unkA0 != 0) {
                    if (P->unk2D8 == 0xB && P->unk6 >= 0x1F && (G->unkB90 > 30.0f || (sp28 = func_8001EB64((s16)(func_80228C20(arg0) + 0x1000) & 0x1FFF), func_8010843C((p = sp3C[0xB])->unk4, p->unk8, p->unkC, sp28 * 20.0f + p->unk4, p->unk8, p->unkC + func_8001EAD0((s16)(func_80228C20(arg0) + 0x1000) & 0x1FFF) * 20.0f) != 0))) {
                        sp40->unk4 = 0x8000;
                        return;
                    }
                    arg0->unk9A = 0;
                    arg0->unk96 = func_80228C20(arg0) + 0x1000;
                    sp46 = (s16)(arg0->unk96 + sp44) & 0x1FFF;
                } else {
                    sp28 = func_8001EB64(func_80228C20(arg0) & 0x1FFF);
                    if (func_8010843C((p = sp3C[0xB])->unk4, p->unk8, p->unkC, sp28 * 20.0f + p->unk4, p->unk8, p->unkC + func_8001EAD0(func_80228C20(arg0) & 0x1FFF) * 20.0f) == 0) {
                        sp2E = func_80228C20(arg0);
                        arg0->unk96 = func_8001EAD0((arg0->unk9C & 0xFF) << 7) * 1024.0f + (f32)sp2E;
                    } else {
                        sp28 = func_8001EB64((s16)(func_80228C20(arg0) + 0x800) & 0x1FFF);
                        if (func_8010843C((p = sp3C[0xB])->unk4, p->unk8, p->unkC, sp28 * 60.0f + p->unk4, p->unk8, p->unkC + func_8001EAD0((s16)(func_80228C20(arg0) + 0x800) & 0x1FFF) * 60.0f) == 0) {
                            arg0->unk96 = func_80228C20(arg0) + 0x800;
                        } else {
                            arg0->unk96 = func_80228C20(arg0) - 0x800;
                        }
                    }
                    sp46 = (s16)(arg0->unk96 + sp44) & 0x1FFF;
                }
                arg0->unk96 = 0;
                if (G->unkB90 > 30.0f) {
                    arg0->unk9A = 0x14;
                }
                if (arg0->unk9A > 0) {
                    arg0->unk9A = arg0->unk9A - 1;
                    sp40->unk2 = 0x2000;
                    sp40->unk6 = -func_8001EB64(sp46) * 40.0f;
                    sp40->unk8 = func_8001EAD0(sp46) * 40.0f;
                    return;
                }
                sp40->unk6 = -func_8001EB64(sp46) * 80.0f;
                sp40->unk8 = func_8001EAD0(sp46) * 80.0f;
            }
        }
    }
}
