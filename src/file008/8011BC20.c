#include "common.h"

#define B_80164DF0 B_80164DF0__func_8011BC20
#define D_801636F8 D_801636F8__func_8011BC20
#define D_80164DF0 D_80164DF0__func_8011BC20
#define D_801BBBF0 D_801BBBF0__func_8011BC20
#define func_8001EAD0 func_8001EAD0__func_8011BC20
#define func_8001EB64 func_8001EB64__func_8011BC20
#define func_8001EF38 func_8001EF38__func_8011BC20
#define func_8002FC20 func_8002FC20__func_8011BC20
#define func_8010843C func_8010843C__func_8011BC20
#define func_80119F9C func_80119F9C__func_8011BC20


typedef struct func_8011BC20_Node {
    u8 pad0[0x30];
    f32 unk30;
    f32 unk34;
    f32 unk38;
} func_8011BC20_Node;

typedef struct func_8011BC20_Ent {
    u8 pad0[0x2C];
    func_8011BC20_Node *unk2C;
} func_8011BC20_Ent;

typedef struct func_8011BC20_Struct {
    u8 pad0[0xA0];
    u16 unkA0;
    u8 pad1[0xE8 - 0xA2];
    func_8011BC20_Ent *unkE8;
    u8 pad2[0x35A - 0xEC];
    u8 unk35A;
    u8 pad3[0x368 - 0x35B];
    f32 unk368;
    f32 unk36C;
    f32 unk370;
    u8 pad4[0x380 - 0x374];
    f32 unk380;
    u8 pad5[4];
    f32 unk388;
} func_8011BC20_Struct;

extern func_8011BC20_Struct D_801BBBF0;
extern s32 D_801636F8;
extern f32 D_80164DF0;
extern f32 B_80164DF0;

f32 func_8001EAD0(s16);
f32 func_8001EB64(s16);
s16 func_8001EF38(f32, f32);
f32 func_8002FC20(f32);
s32 func_8010843C(f32, f32, f32, f32, f32, f32);
void func_80119F9C(s16 *, s16 *);

#define P D_801BBBF0
#define N (P.unkE8->unk2C)

void func_8011BC20(f32 arg0, f32 arg1, f32 arg2, s16 arg3, s16 arg4) {
    s16 spDE;
    s32 t;
    f32 spD4;
    s16 spD2;
    s16 spD0;
    f32 dx;
    f32 dy;
    f32 dz;
    f32 spC0;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    f32 spB0;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    f32 sp98;
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    s16 sp4A;
    s16 sp48;
    s16 ang;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    f32 sp2C;

    if (P.unkA0 & 0x100) {
        B_80164DF0 = D_80164DF0 + 0.5;
    }
    if (P.unkA0 & 0x200) {
        D_80164DF0 = B_80164DF0 - 0.5;
    }
    func_80119F9C(&sp4A, &sp48);
    dx = N->unk30 - arg0;
    dy = N->unk34 - arg1;
    dz = N->unk38 - arg2;
    func_8002FC20(dx * dx + dy * dy + dz * dz);
    func_8001EF38(N->unk38 - arg2, N->unk30 - arg0);
    t = (s16)(arg4 + 0x800);
    sp40 = sp3C = sp38 = 0.0f;
    if (t & 0x1000) {
        spD2 = (t & 0x1FFF) - 0x2000;
    } else {
        spD2 = t & 0x1FFF;
    }
    dx = N->unk30 - arg0;
    dz = N->unk38 - arg2;
    spD4 = func_8002FC20(dx * dx + dz * dz);
    if (func_8001EF38(N->unk34 - arg1, spD4) & 0x1000) {
        dx = N->unk30 - arg0;
        dz = N->unk38 - arg2;
        spD4 = func_8002FC20(dx * dx + dz * dz);
        spDE = (func_8001EF38(N->unk34 - arg1, spD4) & 0x1FFF) - 0x2000;
    } else {
        dx = N->unk30 - arg0;
        dz = N->unk38 - arg2;
        spD4 = func_8002FC20(dx * dx + dz * dz);
        spDE = func_8001EF38(N->unk34 - arg1, spD4) & 0x1FFF;
    }
    sp2C = func_8001EB64(arg3);
    sp30 = func_8001EB64(spD2);
    func_8001EB64(spDE);
    func_8001EB64(arg3);
    sp84 = (f64)((sp84 = arg0) + D_80164DF0 * sp30 * sp2C);
    sp34 = func_8001EAD0(spD2);
    func_8001EAD0(spDE);
    sp80 = (f64)((sp80 = arg1) + D_80164DF0 * sp34);
    sp2C = func_8001EAD0(arg3);
    sp30 = func_8001EB64(spD2);
    func_8001EB64(spDE);
    func_8001EAD0(arg3);
    sp7C = (f64)((sp7C = arg2) + D_80164DF0 * sp30 * sp2C);
    sp34 = func_8001EB64(spD2);
    spC0 = func_8001EB64(arg3) * (D_80164DF0 * sp34) + N->unk30;
    spBC = func_8001EAD0(spD2) * D_80164DF0 + N->unk34;
    sp34 = func_8001EB64(spD2);
    spB8 = func_8001EAD0(arg3) * (D_80164DF0 * sp34) + N->unk38;
    if (func_8010843C(sp84, sp80, sp7C, spC0, spBC, spB8) == 1) {
        if ((P.unk35A != 2) && (P.unk35A != 0x12) && (P.unk35A != 0x21)) {
            if (D_801636F8 != 0) {
                func_8001EF38(P.unk370, P.unk368);
            }
            N->unk30 += P.unk368;
            N->unk34 += P.unk36C;
            N->unk38 += P.unk370;
            sp40 += P.unk368;
            sp3C += P.unk36C;
            sp38 += P.unk370;
        }
    } else if (func_8010843C(arg0, arg1, arg2, spC0, spBC, spB8) == 1) {
        if ((P.unk35A != 2) && (P.unk35A != 0x12) && (P.unk35A != 0x21)) {
            if (D_801636F8 != 0) {
                func_8001EF38(P.unk370, P.unk368);
            }
            N->unk30 += P.unk368;
            N->unk34 += P.unk36C;
            N->unk38 += P.unk370;
            sp40 += P.unk368;
            sp3C += P.unk36C;
            sp38 += P.unk370;
        }
    }
    t = (s16)(arg4 - 0x800);
    if (t & 0x1000) {
        spD0 = (t & 0x1FFF) - 0x2000;
    } else {
        spD0 = t & 0x1FFF;
    }
    dx = N->unk30 - arg0;
    dz = N->unk38 - arg2;
    spD4 = func_8002FC20(dx * dx + dz * dz);
    if (func_8001EF38(N->unk34 - arg1, spD4) & 0x1000) {
        dx = N->unk30 - arg0;
        dz = N->unk38 - arg2;
        spD4 = func_8002FC20(dx * dx + dz * dz);
        spDE = (func_8001EF38(N->unk34 - arg1, spD4) & 0x1FFF) - 0x2000;
    } else {
        dx = N->unk30 - arg0;
        dz = N->unk38 - arg2;
        spD4 = func_8002FC20(dx * dx + dz * dz);
        spDE = func_8001EF38(N->unk34 - arg1, spD4) & 0x1FFF;
    }
    sp2C = func_8001EB64(arg3);
    sp30 = func_8001EB64(spD0);
    func_8001EB64(spDE);
    func_8001EB64(arg3);
    sp78 = (f64)((sp78 = arg0) + D_80164DF0 * sp30 * sp2C);
    sp34 = func_8001EAD0(spD0);
    func_8001EAD0(spDE);
    sp74 = (f64)((sp74 = arg1) + D_80164DF0 * sp34);
    sp2C = func_8001EAD0(arg3);
    sp30 = func_8001EB64(spD0);
    func_8001EB64(spDE);
    func_8001EAD0(arg3);
    sp70 = (f64)((sp70 = arg2) + D_80164DF0 * sp30 * sp2C);
    sp34 = func_8001EB64(spD0);
    spB4 = func_8001EB64(arg3) * (D_80164DF0 * sp34) + N->unk30;
    spB0 = func_8001EAD0(spD0) * D_80164DF0 + N->unk34;
    sp34 = func_8001EB64(spD0);
    spAC = func_8001EAD0(arg3) * (D_80164DF0 * sp34) + N->unk38;
    if (func_8010843C(sp78, sp74, sp70, spB4, spB0, spAC) == 1) {
        if ((P.unk35A != 2) && (P.unk35A != 0x12) && (P.unk35A != 0x21)) {
            if (D_801636F8 != 0) {
                func_8001EF38(P.unk370, P.unk368);
            }
            N->unk30 += P.unk368;
            N->unk34 += P.unk36C;
            N->unk38 += P.unk370;
            sp40 += P.unk368;
            sp3C += P.unk36C;
            sp38 += P.unk370;
        }
    } else if (func_8010843C(arg0, arg1, arg2, spB4, spB0, spAC) == 1) {
        if ((P.unk35A != 2) && (P.unk35A != 0x12) && (P.unk35A != 0x21)) {
            if (D_801636F8 != 0) {
                func_8001EF38(P.unk370, P.unk368);
            }
            N->unk30 += P.unk368;
            N->unk34 += P.unk36C;
            N->unk38 += P.unk370;
            sp40 += P.unk368;
            sp3C += P.unk36C;
            sp38 += P.unk370;
        }
    }
    spDE = func_8001EF38(N->unk38 - arg2, N->unk30 - arg0);
    ang = arg3 + 0x1000;
    ang &= 0x1FFF;
    sp34 = func_8001EB64(ang);
    func_8001EB64(spDE);
    sp54 = (f64)((sp54 = arg0) + D_80164DF0 * sp34);
    sp34 = func_8001EAD0(ang);
    func_8001EAD0(spDE);
    sp4C = (f64)((sp4C = arg2) + D_80164DF0 * sp34);
    sp50 = arg1;
    sp90 = func_8001EB64(ang) * D_80164DF0 + N->unk30;
    sp8C = N->unk34;
    sp88 = func_8001EAD0(ang) * D_80164DF0 + N->unk38;
    if (func_8010843C(sp54, sp50, sp4C, sp90, sp8C, sp88) == 1) {
        if ((P.unk35A != 2) && (P.unk35A != 0x12) && (P.unk35A != 0x21)) {
            if (D_801636F8 != 0) {
                func_8001EF38(P.unk370, P.unk368);
            }
            if (D_801636F8 != 0) {
                dx = sp90 - sp54;
                dz = sp88 - sp4C;
                func_8002FC20(dx * dx + dz * dz);
                dz = P.unk380 - sp54;
                dy = P.unk388 - sp4C;
                func_8002FC20(dz * dz + dy * dy);
                dz = sp90 - P.unk380;
                dy = sp88 - P.unk388;
                func_8002FC20(dz * dz + dy * dy);
            }
            N->unk30 += P.unk368;
            N->unk34 += P.unk36C;
            N->unk38 += P.unk370;
            sp40 += P.unk368;
            sp3C += P.unk36C;
            sp38 += P.unk370;
        }
    } else if (func_8010843C(arg0, arg1, arg2, sp90, sp8C, sp88) == 1) {
        if ((P.unk35A != 2) && (P.unk35A != 0x12) && (P.unk35A != 0x21)) {
            if (D_801636F8 != 0) {
                func_8001EF38(P.unk370, P.unk368);
            }
            N->unk30 += P.unk368;
            N->unk34 += P.unk36C;
            N->unk38 += P.unk370;
            sp40 += P.unk368;
            sp3C += P.unk36C;
            sp38 += P.unk370;
        }
    }
    spDE = func_8001EF38(N->unk38 - arg2, N->unk30 - arg0);
    ang = arg3 - 0x800;
    ang &= 0x1FFF;
    sp34 = func_8001EB64(ang);
    func_8001EB64(spDE);
    sp6C = (f64)((sp6C = arg0) + D_80164DF0 * sp34);
    sp34 = func_8001EAD0(ang);
    func_8001EAD0(spDE);
    sp64 = (f64)((sp64 = arg2) + D_80164DF0 * sp34);
    sp68 = arg1;
    spA8 = func_8001EB64(ang) * D_80164DF0 + N->unk30;
    spA4 = N->unk34;
    spA0 = func_8001EAD0(ang) * D_80164DF0 + N->unk38;
    if (func_8010843C(sp6C, sp68, sp64, spA8, spA4, spA0) == 1) {
        if ((P.unk35A != 2) && (P.unk35A != 0x12) && (P.unk35A != 0x21)) {
            if (D_801636F8 != 0) {
                func_8001EF38(P.unk370, P.unk368);
            }
            N->unk30 += P.unk368;
            N->unk34 += P.unk36C;
            N->unk38 += P.unk370;
            sp40 += P.unk368;
            sp3C += P.unk36C;
            sp38 += P.unk370;
        }
    } else if (func_8010843C(arg0, arg1, arg2, spA8, spA4, spA0) == 1) {
        if ((P.unk35A != 2) && (P.unk35A != 0x12) && (P.unk35A != 0x21)) {
            if (D_801636F8 != 0) {
                func_8001EF38(P.unk370, P.unk368);
            }
            N->unk30 += P.unk368;
            N->unk34 += P.unk36C;
            N->unk38 += P.unk370;
            sp40 += P.unk368;
            sp3C += P.unk36C;
            sp38 += P.unk370;
        }
    }
    spDE = func_8001EF38(N->unk38 - arg2, N->unk30 - arg0);
    ang = arg3 + 0x800;
    ang &= 0x1FFF;
    sp34 = func_8001EB64(ang);
    func_8001EB64(spDE);
    sp60 = (f64)((sp60 = arg0) + D_80164DF0 * sp34);
    sp34 = func_8001EAD0(ang);
    func_8001EAD0(spDE);
    sp58 = (f64)((sp58 = arg2) + D_80164DF0 * sp34);
    sp5C = arg1;
    sp9C = func_8001EB64(ang) * D_80164DF0 + N->unk30;
    sp98 = N->unk34;
    sp94 = func_8001EAD0(ang) * D_80164DF0 + N->unk38;
    if (func_8010843C(sp60, sp5C, sp58, sp9C, sp98, sp94) == 1) {
        if ((P.unk35A != 2) && (P.unk35A != 0x12) && (P.unk35A != 0x21)) {
            if (D_801636F8 != 0) {
                func_8001EF38(P.unk370, P.unk368);
            }
            N->unk30 += P.unk368;
            N->unk34 += P.unk36C;
            N->unk38 += P.unk370;
            sp40 += P.unk368;
            sp3C += P.unk36C;
            sp38 += P.unk370;
        }
    } else if (func_8010843C(arg0, arg1, arg2, sp9C, sp98, sp94) == 1) {
        if ((P.unk35A != 2) && (P.unk35A != 0x12) && (P.unk35A != 0x21)) {
            if (D_801636F8 != 0) {
                func_8001EF38(P.unk370, P.unk368);
            }
            N->unk30 += P.unk368;
            N->unk34 += P.unk36C;
            N->unk38 += P.unk370;
            sp40 += P.unk368;
            sp3C += P.unk36C;
            sp38 += P.unk370;
        }
    }
    if ((sp40 == 0.0f || sp3C == 0.0f || sp38 == 0.0f) && D_801636F8 && sp4A && sp48) {
    }
}
#undef P
#undef N
#undef B_80164DF0
#undef D_801636F8
#undef D_80164DF0
#undef D_801BBBF0
#undef func_8001EAD0
#undef func_8001EB64
#undef func_8001EF38
#undef func_8002FC20
#undef func_8010843C
#undef func_80119F9C

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8011BC20/_pad_32.s")
