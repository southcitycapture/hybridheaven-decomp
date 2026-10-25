#define func_8038CFF8 func_8038CFF8_ctx
#include "context.h"
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
struct func_8038D7D0_StructG {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0x1031 - 0xE0];
    u8 unk1031;
};
extern struct func_8038D7D0_StructG D_801BBBF0;
#undef func_8038CFF8

struct func_8038CFF8_StructG {
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
};
struct func_8038CFF8_StructB {
    u8 pad0[0xC];
    s32 unkC;
};
struct func_8038CFF8_StructA {
    u8 pad0[0xC];
    struct func_8038CFF8_StructB *unkC;
    u8 pad10[0x2C - 0x10];
    u8 *unk2C;
    u8 pad30[0x90 - 0x30];
    u8 unk90;
    u8 unk91;
    u8 unk92;
    u8 pad93[2];
    u8 unk95;
    u8 pad96[3];
    u8 unk99;
    u8 pad9A[2];
    s32 unk9C;
};
struct func_8038CFF8_StructBF {
    u8 pad0[0x33];
    u8 b0 : 3;
    u8 f : 2;
    u8 b1 : 3;
};
struct func_8038CFF8_StructQ {
    s16 unk0;
    s16 unk2;
    u16 unk4;
    s16 unk6;
    s16 unk8;
};
extern u8 D_801BBC8C[];
extern u8 D_801BBCAC[];
f32 func_8001EAD0(s16);
f32 func_8001EB64(s16);
s32 func_8010843C(f32, f32, f32, f32, f32, f32);
s16 func_80228C20(void *);
s32 func_80228D90(void *);
s32 func_802291FC(void *, void *, void *, s32);

#define Q(i) ((*(f32 **)((u8 *)sp44 + 0x2C))[i])
#define G ((struct func_8038CFF8_StructG *)&D_801BBBF0)
#define P8(p, o) (*(u8 *)((u8 *)(p) + (o)))
#define P16(p, o) (*(s16 *)((u8 *)(p) + (o)))

void func_8038CFF8(struct func_8038CFF8_StructA *arg0, s32 arg1) {
    s16 sp4E;
    s16 sp4C;
    struct func_8038CFF8_StructQ *sp48;
    struct func_8038CFF8_StructG *sp44;
    u8 *sp40;
    u8 pad[12];
    s16 sp32;
    f32 sp2C;
    u32 v;
    u8 st;
    f32 x;
    u8 *p;

    sp4C = (s16)(0x2800 - G->unk232) & 0x1FFF;
    sp48 = (arg0->unkC->unkC == G->unkDC) ? (void *)D_801BBC8C : (void *)D_801BBCAC;
    if (arg0->unkC->unkC == G->unkDC) {
        sp44 = G->unkE0;
    } else {
        sp44 = G->unkF0;
    }
    if (arg0->unkC->unkC == G->unkDC) {
        sp40 = D_801BC03C;
    } else {
        sp40 = D_801BC3D8;
    }
    if ((arg0->unk91 == 1) && (G->unk1031 == 7)) {
        arg0->unk91 = 2;
    }
    v = *(u32 *)(sp40 + 0x30);
    if ((((v << 11) >> 30) == 0) && (((v << 3) >> 28) != 1)) {
        if ((G->unk1031 >= 7) && (G->unk1031 != 0xF)) {
            P16(arg0, 0x98) = 0;
            arg0->unk95 = arg0->unk99;
            arg0->unk92 = arg0->unk99;
        }
        if ((G->unk1031 == 5) && !(*(u16 *)(sp40 + 0x30) & 7) && (func_802291FC(arg0, sp40, sp48, 0xA) == 0)) {
            if (((f64)G->unkB90 < 15.0) && (arg0->unk95 == 0)) {
                sp40[0x390] = 1;
                sp40[0x33] = sp40[0x33] & 0xFFE7;
                arg0->unk92 = 0;
                arg0->unk95 = 0x28;
                return;
            }
            if (arg0->unk95 > 0) {
                arg0->unk95 = arg0->unk95 - 1;
            }
            p = sp40;
            st = arg0->unk92;
            if (arg0->unk92 == 0) {
                p[0x390] = 0;
                if ((G->unkB90 < 40.0f) && (p[0x390] != 1)) {
                    sp2C = func_8001EB64((s16)((s16)(func_80228C20(arg0) + 0x1000) & 0x1FFF));
                    if (func_8010843C(x = Q(1), Q(2), Q(3), (sp2C * 40.0f) + x, Q(2), Q(3) + (func_8001EAD0((s16)((s16)(func_80228C20(arg0) + 0x1000) & 0x1FFF)) * 40.0f)) != 0) {
                        sp2C = func_8001EB64((s16)((s16)(func_80228C20(arg0) + 0x400) & 0x1FFF));
                            if (func_8010843C(x = Q(1), Q(2), Q(3), (sp2C * 40.0f) + x, Q(2), Q(3) + (func_8001EAD0((s16)((s16)(func_80228C20(arg0) + 0x400) & 0x1FFF)) * 40.0f)) == 0) {
                            sp4E = (s16)(func_80228C20(arg0) + sp4C + 0x400) & 0x1FFF;
                        }
                        sp2C = func_8001EB64((s16)((s16)(func_80228C20(arg0) - 0x400) & 0x1FFF));
                            if (func_8010843C(x = Q(1), Q(2), Q(3), (sp2C * 40.0f) + x, Q(2), Q(3) + (func_8001EAD0((s16)((s16)(func_80228C20(arg0) - 0x400) & 0x1FFF)) * 40.0f)) == 0) {
                            sp4E = (s16)((func_80228C20(arg0) + sp4C) - 0x400) & 0x1FFF;
                        }
                    } else {
                        sp32 = func_80228C20(arg0);
                        sp4E = (s16)((func_8001EAD0((s16)(arg0->unk9C << 8)) * 1024.0f) + (f32)(sp32 + 0x1000) + (f32)sp4C) & 0x1FFF;
                    }
                    sp48->unk2 = 0x2000;
                    sp48->unk6 = (s16)(s32)(-func_8001EB64(sp4E) * 40.0f);
                    sp48->unk8 = (s16)(s32)(func_8001EAD0(sp4E) * 40.0f);
                    if ((((*(u32 *)(sp40 + 0x30) << 27) >> 30) == 2) && (sp40[0x390] == 5) && (arg0->unk90 == 0)) {
                        arg0->unk92 = 2;
                    }
                } else if (p[0x390] != 1) {
                    if (arg0->unk90 == 0) {
                        arg0->unk92 = 1;
                        return;
                    }
                    arg0->unk90 = arg0->unk90 - 1;
                }
            } else if (st == 1) {
                if (P16(sp40, 6) >= 0x50) {
                    arg0->unk95 = 0;
                    sp40[0x390] = 5;
                    arg0->unk90 = 0x14;
                    arg0->unk92 = 2;
                }
            } else if (st == 2) {
                if ((P16(sp40, 6) >= 0x64) && (arg0->unk90 == 0)) {
                    arg0->unk90 = 0;
                    arg0->unk92 = 3;
                    return;
                }
                if ((((*(u32 *)(sp40 + 0x30) << 27) >> 30) == 0) && (sp40[0x390] == 0)) {
                    arg0->unk92 = 0;
                    return;
                }
                if (arg0->unk90 != 0) {
                    arg0->unk90 = arg0->unk90 - 1;
                }
            } else if ((st == 3) && (func_80228D90(arg0) != 0) && (((*(u32 *)(sp40 + 0x30) << 27) >> 30) == 2)) {
                sp48->unk4 = 0x8000;
                arg0->unk90 = 0x78;
                arg0->unk91 = 0;
                ((struct func_8038CFF8_StructBF *)sp40)->f = 3;
            }
        }
    }
}

#undef Q
#undef G
#undef P8
#undef P16
