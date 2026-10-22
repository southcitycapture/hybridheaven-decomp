#include "context.h"

struct func_8038CFF4_StructP {
    u8 pad0[0xC];
    u8 *unkC;
    u8 pad1[0x92 - 0x10];
    u8 unk92;
    u8 pad2[2];
    u8 unk95;
    u8 pad3[2];
    s16 unk98;
    u8 pad4[2];
    u32 unk9C;
};
struct func_8038CFF4_StructG {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0x232 - 0xE0];
    s16 unk232;
    u8 pad2[0xB90 - 0x234];
    f32 unkB90;
    u8 pad3[0x1031 - 0xB94];
    u8 unk1031;
};
struct func_8038CFF4_StructO2 {
    u8 pad0[2];
    s16 unk2;
    u16 unk4;
    s16 unk6;
    s16 unk8;
};
struct func_8038CFF4_StructE {
    u8 pad0[6];
    s16 unk6;
    u8 pad1[0x30 - 8];
    u32 f0 : 3;
    u32 f3 : 4;
    u32 f7 : 2;
    u32 f9 : 2;
    u32 f11 : 2;
    u32 f13 : 3;
    u32 f16 : 6;
    u32 f22 : 2;
    u32 f24 : 8;
    u8 pad3[0x312 - 0x34];
    s16 unk312;
};

struct func_8038CFF4_StructH {
    u8 pad0[0x30];
    u16 h0 : 13;
    u16 h13 : 3;
};

extern struct func_8038CFF4_StructG D_801BBBF0;
extern u8 D_801BBC8C[];
extern u8 D_801BBCAC[];
extern f32 func_8001EAD0(s32);
extern f32 func_8001EB64(s32);
extern s32 func_80228C20(void *, void *, s16);
extern s32 func_80228D90(void *, void *, s16);
extern void func_80228FD0(void *, void *, s32);

void func_8038CFF4(struct func_8038CFF4_StructP *arg0, s32 arg1) {
    s16 a0;
    s16 pa;
    s16 a2;
    s16 pb;
    struct func_8038CFF4_StructO2 *sp24;
    s32 pc;
    struct func_8038CFF4_StructE *a1;
    struct func_8038CFF4_StructE *v1;
    f64 d;
    u16 t;

    a2 = (s16)(0x2800 - D_801BBBF0.unk232) & 0x1FFF;
    if (D_801BBBF0.unkDC == *(s32 *)(arg0->unkC + 0xC)) {
        sp24 = (void *)D_801BBC8C;
    } else {
        sp24 = (void *)D_801BBCAC;
    }
    if (D_801BBBF0.unkDC == *(s32 *)(arg0->unkC + 0xC)) {
        a1 = (void *)D_801BC03C;
    } else {
        a1 = (void *)D_801BC3D8;
    }
    if (D_801BBBF0.unkDC == *(s32 *)(arg0->unkC + 0xC)) {
        v1 = (void *)D_801BC3D8;
    } else {
        v1 = (void *)D_801BC03C;
    }
    if (a1->f9 == 0) return;
    if (a1->f3 == 1) return;
    if (D_801BBBF0.unk1031 >= 7 && D_801BBBF0.unk1031 != 0xF) {
        arg0->unk95 = 0;
        arg0->unk92 = 0;
    }
    if (D_801BBBF0.unk1031 != 5) return;
    if ((a1->f13 & 7) != 0) return;
    d = D_801BBBF0.unkB90;
    if ((d < 15.0 || arg0->unk95 == 1) && arg0->unk98 == 0) {
        if (arg0->unk95 == 0) {
            arg0->unk95 = 1;
            arg0->unk92 = 1;
            return;
        }
        if ((v1->f11 != 0 && v1->unk312 >= 0xB) || v1->f3 == 2) {
            if (a1->unk6 >= 0x64) {
                sp24->unk4 = 0x8000;
            }
            return;
        }
        if (d > 20.0) {
            arg0->unk95 = 0;
            arg0->unk92 = 0;
            return;
        }
        if (arg0->unk92 == 1) {
            if (a1->unk6 >= 0x64) {
                if (func_80228D90(arg0, a1, a2) != 0) {
                    a1->f22 = 0;
                    sp24->unk4 = 0x8000;
                    arg0->unk98 = 0x1E;
                    return;
                }
            }
            func_80228FD0(arg0, sp24, 4);
        }
        return;
    }
    if (a1->f22 == 2) {
        a1->f22 = 0;
    }
    t = arg0->unk9C % 0x130;
    if (t < 0x30) {
        a0 = (s16)(func_80228C20(arg0, a1, a2) + a2) & 0x1FFF;
    } else if (t < 0x60) {
        a0 = (s16)(func_80228C20(arg0, a1, a2) + a2 + 0x800) & 0x1FFF;
    } else if (t < 0x90) {
        a0 = (s16)(func_80228C20(arg0, a1, a2) + a2) & 0x1FFF;
    } else if (t < 0xC0) {
        a0 = (s16)(func_80228C20(arg0, a1, a2) + a2 - 0x800) & 0x1FFF;
    } else if (t < 0xE0) {
        a0 = (s16)(func_80228C20(arg0, a1, a2) + a2) & 0x1FFF;
    } else if (t < 0x110) {
        a0 = (s16)(func_80228C20(arg0, a1, a2) + a2 + 0x800) & 0x1FFF;
    } else {
        return;
    }
    if (arg0->unk98 != 0) {
        arg0->unk98 = arg0->unk98 - 1;
    }
    sp24->unk2 = 0x2000;
    sp24->unk6 = -func_8001EB64(a0) * 40.0f;
    sp24->unk8 = func_8001EAD0(a0) * 40.0f;
}
