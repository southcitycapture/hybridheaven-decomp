#include "context.h"
f32 func_80223AB8(u8 arg0);
s32 func_80223DD0(struct func_80223DD0_Struct *arg0, struct func_80223DD0_Struct *arg1, struct func_80223DD0_Struct2 *arg2, struct func_80223DD0_Struct2 *arg3, f32 arg4, f32 arg5);
extern struct func_802253B8_Struct D_801BBBF0;
struct func_802253B8_Struct {
    u8 pad0[0x2C];
    u16 unk2C;
    u8 pad1[0xDC - 0x2E];
    s32 unkDC;
};

typedef struct func_80223ED4_Vec { f32 x, y, z; } func_80223ED4_Vec;
typedef struct func_80223ED4_Q { f32 a, b, c, d; } func_80223ED4_Q;
typedef struct func_80223ED4_Pos { u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; } func_80223ED4_Pos;
typedef struct func_80223ED4_Unit { u8 pad0[0x2C]; func_80223ED4_Pos *unk2C; } func_80223ED4_Unit;
typedef struct func_80223ED4_G {
    u8 pad0[0xDC];
    struct func_802237B0_Arg *unkDC;
    func_80223ED4_Unit *unkE0;
    u8 padE4[0xEC - 0xE4];
    struct func_802237B0_Arg *unkEC;
    func_80223ED4_Unit *unkF0;
} func_80223ED4_G;

extern void func_80223CB8(void *, void *);
extern s32 func_8010843C(f32, f32, f32, f32, f32, f32);
extern s32 func_80108480(f32, f32, f32, f32, f32, f32);
extern f64 D_8023EF80;
extern f64 D_8023EF88;
extern f64 D_8023EF90;
extern f64 D_8023EF98;
extern f64 D_8023EFA0;

#define G (*(func_80223ED4_G *)&D_801BBBF0)
#define FN_DD0(a, b, c, d, e, f) func_80223DD0((struct func_80223DD0_Struct *)(a), (struct func_80223DD0_Struct *)(b), \
    (struct func_80223DD0_Struct2 *)(c), (struct func_80223DD0_Struct2 *)(d), e, f)

void func_80223ED4(struct func_802237B0_Arg *arg0, func_80223ED4_Pos *s0) {
    struct func_802237B0_Arg *sp8C;
    u8 *a1;
    u8 *a2;
    u8 *sp80;
    struct func_802237B0_Arg *cur;
    func_80223ED4_Pos *s1;
    func_80223ED4_Vec sp6C;
    func_80223ED4_Q sp5C;
    func_80223ED4_Q sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    u8 unused;
    u8 flag;
    u8 t;

    if (arg0 != G.unkDC) {
        sp8C = G.unkDC;
    } else {
        sp8C = G.unkEC;
    }
    a1 = (u8 *)arg0->unk5C;
    if (arg0 == G.unkDC) {
        a2 = (u8 *)&D_801BC03C;
    } else {
        a2 = (u8 *)&D_801BC3D8;
    }
    if (arg0 != G.unkDC) {
        sp80 = (u8 *)&D_801BC03C;
    } else {
        sp80 = (u8 *)&D_801BC3D8;
    }
    s1 = (*(func_80223ED4_Unit **)s0)->unk2C;
    if (arg0 == G.unkDC) {
        s0 =G.unkF0->unk2C;
    } else {
        s0 = G.unkE0->unk2C;
    }
    sp6C = *(func_80223ED4_Vec *)(a1 + 0xA4);
    t = a2[0x392];
    if (t == 6) {
        return;
    }
    sp40 = func_80223AB8(t);
    sp3C = func_80223AB8(sp80[0x392]);
    if ((f64)sp3C == 0.0) {
        return;
    }
    if (t == 1 || t == 3 || t == 5) {
        flag = 1;
    } else {
        flag = 0;
    }
    func_80223CB8(arg0, &sp5C);
    if (a2[0x392] == 4 || a2[0x392] == 5) {
        sp5C.d = sp5C.d * 0.5;
    }
    func_80223CB8(sp8C, &sp4C);
    if (sp80[0x392] == 4 || sp80[0x392] == 5) {
        sp4C.d = sp4C.d * D_8023EF80;
    }
    if (FN_DD0(s1, s0, &sp5C, &sp4C, sp40, sp3C) == 0) {
        return;
    }
    if (flag && func_8010843C(s0->unk4, s0->unk8, s0->unkC, (s0->unk4 + s1->unk4) - sp6C.x, s0->unk8, (s0->unkC + s1->unkC) - sp6C.z)) {
        s0->unk4 = s0->unk4 + (s1->unk4 - sp6C.x);
        s0->unkC = s0->unkC + (s1->unkC - sp6C.z);
        func_802237B0(sp8C, 1);
    } else {
        s1->unk4 = sp6C.x;
        s1->unkC = sp6C.z;
        func_802237B0(arg0, 1);
    }
    if (FN_DD0(s1, s0, &sp5C, &sp4C, sp40, sp3C) == 0) {
        return;
    }
    if (flag) {
        sp48 = s1->unk4 + (s0->unk4 - s1->unk4) * D_8023EF88;
        sp44 = s1->unkC + (s0->unkC - s1->unkC) * D_8023EF90;
        if (!func_80108480(s0->unk4, s0->unk8, s0->unkC, sp48, s0->unk8, sp44)) {
            s0->unk4 = sp48;
            s0->unkC = sp44;
            func_802237B0(sp8C, 1);
        }
    } else {
        sp48 = s0->unk4 + (s1->unk4 - s0->unk4) * D_8023EF98;
        sp44 = s0->unkC + (s1->unkC - s0->unkC) * D_8023EFA0;
        if (!func_80108480(s1->unk4, s1->unk8, s1->unkC, sp48, s1->unk8, sp44)) {
            s1->unk4 = sp48;
            s1->unkC = sp44;
            func_802237B0(arg0, 1);
        }
    }
}
