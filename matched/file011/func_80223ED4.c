#include "common.h"
struct func_802237B0_Struct {
    u8 pad0[0x74];
    u8 unk74;
};
struct func_802237B0_Arg {
    u8 pad0[0x5C];
    struct func_802237B0_Struct *unk5C;
};
struct func_80223DD0_Struct {
    u8 pad0[4];
    f32 unk4;
    u8 pad8[4];
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};
struct func_80223DD0_Struct2 {
    f32 unk0;
    f32 unk4;
};
struct func_802253B8_Struct {
    u8 pad0[0x2C];
    u16 unk2C;
    u8 pad1[0xDC - 0x2E];
    s32 unkDC;
};


typedef struct func_80223ED4_StructVec { f32 x, y, z; } func_80223ED4_StructVec;
typedef struct func_80223ED4_StructQ { f32 a, b, c, d; } func_80223ED4_StructQ;
typedef struct func_80223ED4_StructPos { u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; } func_80223ED4_StructPos;
typedef struct func_80223ED4_StructUnit { u8 pad0[0x2C]; func_80223ED4_StructPos *unk2C; } func_80223ED4_StructUnit;
typedef struct func_80223ED4_StructG {
    u8 pad0[0xDC];
    struct func_802237B0_Arg *unkDC;
    func_80223ED4_StructUnit *unkE0;
    u8 padE4[0xEC - 0xE4];
    struct func_802237B0_Arg *unkEC;
    func_80223ED4_StructUnit *unkF0;
} func_80223ED4_StructG;
extern s32 func_8010843C(f32, f32, f32, f32, f32, f32);
extern s32 func_80108480(f32, f32, f32, f32, f32, f32);
extern f32 func_80223AB8(u8);
extern void func_80223CB8(void *, void *);
extern s32 func_80223DD0(struct func_80223DD0_Struct *, struct func_80223DD0_Struct *, struct func_80223DD0_Struct2 *, struct func_80223DD0_Struct2 *, f32, f32);
extern void func_802237B0(struct func_802237B0_Arg *, u8);
extern struct func_802253B8_Struct D_801BBBF0;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern f64 D_8023EF80;
extern f64 D_8023EF88;

void func_80223ED4(struct func_802237B0_Arg *arg0, func_80223ED4_StructUnit **arg1) {
    struct func_802237B0_Arg *sp8C;
    u8 *a1;
    u8 *a2;
    u8 *sp80;
    func_80223ED4_StructPos *s0;
    func_80223ED4_StructPos *s1;
    func_80223ED4_StructVec sp6C;
    func_80223ED4_StructQ sp5C;
    func_80223ED4_StructQ sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    u8 t;
    u8 flag;

    if (arg0 != ((func_80223ED4_StructG *)&D_801BBBF0)->unkDC) {
        sp8C = ((func_80223ED4_StructG *)&D_801BBBF0)->unkDC;
    } else {
        sp8C = ((func_80223ED4_StructG *)&D_801BBBF0)->unkEC;
    }
    a1 = (u8 *)arg0->unk5C;
    if (arg0 == ((func_80223ED4_StructG *)&D_801BBBF0)->unkDC) {
        a2 = (u8 *)&D_801BC03C;
    } else {
        a2 = (u8 *)&D_801BC3D8;
    }
    if (arg0 != ((func_80223ED4_StructG *)&D_801BBBF0)->unkDC) {
        sp80 = (u8 *)&D_801BC03C;
    } else {
        sp80 = (u8 *)&D_801BC3D8;
    }
    s1 = (*arg1)->unk2C;
    if (arg0 == ((func_80223ED4_StructG *)&D_801BBBF0)->unkDC) {
        s0 = ((func_80223ED4_StructG *)&D_801BBBF0)->unkF0->unk2C;
    } else {
        s0 = ((func_80223ED4_StructG *)&D_801BBBF0)->unkE0->unk2C;
    }
    sp6C = *(func_80223ED4_StructVec *)(a1 + 0xA4);
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
    if (func_80223DD0((struct func_80223DD0_Struct *)s1, (struct func_80223DD0_Struct *)s0,
                      (struct func_80223DD0_Struct2 *)&sp5C, (struct func_80223DD0_Struct2 *)&sp4C, sp40, sp3C) == 0) {
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
    if (func_80223DD0((struct func_80223DD0_Struct *)s1, (struct func_80223DD0_Struct *)s0,
                      (struct func_80223DD0_Struct2 *)&sp5C, (struct func_80223DD0_Struct2 *)&sp4C, sp40, sp3C) == 0) {
        return;
    }
    if (flag) {
        sp48 = s1->unk4 + (s0->unk4 - s1->unk4) * D_8023EF88;
        sp44 = s1->unkC + (s0->unkC - s1->unkC) * 1.1;
        if (!func_80108480(s0->unk4, s0->unk8, s0->unkC, sp48, s0->unk8, sp44)) {
            s0->unk4 = sp48;
            s0->unkC = sp44;
            func_802237B0(sp8C, 1);
        }
    } else {
        sp48 = s0->unk4 + (s1->unk4 - s0->unk4) * 1.1;
        sp44 = s0->unkC + (s1->unkC - s0->unkC) * 1.1;
        if (!func_80108480(s1->unk4, s1->unk8, s1->unkC, sp48, s1->unk8, sp44)) {
            s1->unk4 = sp48;
            s1->unkC = sp44;
            func_802237B0(arg0, 1);
        }
    }
}
