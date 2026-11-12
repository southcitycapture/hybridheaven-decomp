#include "common.h"
typedef struct func_802026C4_StructD {
    u8 pad0[0xF32];
    u8 unkF32;
    u8 unkF33;
    u8 unkF34;
    u8 unkF35;
} func_802026C4_StructD;
extern func_802026C4_StructD D_801BBBF0;
extern void (*D_8021793C[])();
extern void func_80020718();
extern s32 func_8010843C(f32, f32, f32, f32, f32, f32);
extern s32 func_80126944();
extern s32 func_801FD5BC(f32, f32, f32);


typedef struct func_80202BF0_StructA {
    u8 pad0[0x40];
    f32 unk40, unk44, unk48;
    u8 pad4C[0x2C];
    f32 unk78, unk7C, unk80;
    s16 unk84, unk86, unk88;
    u8 pad8A[6];
    f32 unk90, unk94, unk98;
    s16 unk9C;
    u8 unk9E;
    u8 pad9F[3];
    s16 unkA2;
    u8 *unkA4;
    u8 padA8[4];
    f32 unkAC;
} func_80202BF0_StructA;
typedef struct func_80202BF0_StructM {
    u8 pad0[4];
    f32 unk4, unk8, unkC;
    s16 unk10;
} func_80202BF0_StructM;
typedef struct func_80202BF0_StructO {
    u8 pad0[0x30];
    func_80202BF0_StructM *unk30;
} func_80202BF0_StructO;
typedef struct func_80202BF0_StructD {
    u8 pad0[0x35A];
    u8 unk35A;
    u8 pad35B[0x29];
    f32 unk384;
} func_80202BF0_StructD;
extern void func_801FC830(f32, f32, f32, f32, s32);
extern void func_80380F94(f32, f32, f32, f32, f32, f32, s32);
extern const f64 D_80219618;
extern const f64 D_80219620;
extern const f64 D_80219628;
extern const f64 D_80219630;
extern const f64 D_80219638;
extern const f64 D_80219640;
#define WORLD ((func_80202BF0_StructD *) &D_801BBBF0)

void func_80202BF0(func_80202BF0_StructA *arg0, func_80202BF0_StructO **arg1) {
    u8 *sp34;
    f32 mag, input, y, vel;
    f64 dy;
    s32 first;
    s32 v0;
    func_80202BF0_StructM *p, *left, *right;
    s16 angle;

    sp34 = arg0->unkA4;
    switch (arg0->unk9E) {
case 1:
    first = (arg0->unkA2++ == 0);
    if (first) func_80020718(0x112);
    left = arg1[1]->unk30;
    left->unk8 += arg0->unkAC;
    right = arg1[2]->unk30;
    right->unk8 += arg0->unkAC;
    arg0->unkAC *= 0.7;
    mag = arg0->unkAC < 0.0f ? -(arg0->unkAC *= 0.7) : (arg0->unkAC *= 0.7);
    if (mag < 0.01) {
        arg0->unk9E = 4;
        arg0->unkA2 = 0;
    }
    goto done;
case 4:
    left = arg1[1]->unk30;
    angle = left->unk10;
    if (angle < 0x471) {
        arg0->unkA2 += 0x10;
        left = arg1[1]->unk30;
        angle = left->unk10;
    }
    if (angle >= 0x9C8) {
        arg0->unkA2 -= 0x10;
        left = arg1[1]->unk30;
        angle = left->unk10;
    }
    left->unk10 = angle + arg0->unkA2;
    arg1[2]->unk30->unk10 += arg0->unkA2;
    if (arg0->unkA2 == 0) {
        arg1[1]->unk30->unk10 = 0xE38;
        arg1[2]->unk30->unk10 = 0xE38;
        arg0->unk9E = 2;
        *arg0->unkA4 |= 8;
        *arg0->unkA4 &= 0xFFFB;
    }
    goto done;
case 3:
    if (arg0->unkA2 == 0) func_80020718(0x113);
    left = arg1[1]->unk30;
    angle = left->unk10;
    if (angle < 0x471) {
        arg0->unkA2 += 0x10;
        left = arg1[1]->unk30;
        angle = left->unk10;
    }
    if (angle >= 0x9C8) {
        arg0->unkA2 -= 0x10;
        left = arg1[1]->unk30;
        angle = left->unk10;
    }
    left->unk10 = angle + arg0->unkA2;
    arg1[2]->unk30->unk10 += arg0->unkA2;
    if (arg0->unkA2 == 0) {
        arg0->unk9E = 5;
        arg1[1]->unk30->unk10 = 0;
        arg1[2]->unk30->unk10 = 0;
    }
    goto done;
case 5:
    arg1[1]->unk30->unk8 -= 0.2;
    arg1[2]->unk30->unk8 -= 0.2;
    y = arg0->unk94 + 3.0f;
    if (arg1[1]->unk30->unk8 <= y) {
        arg1[1]->unk30->unk8 = y;
        arg1[2]->unk30->unk8 = arg0->unk94 + 3.0f;
        arg0->unk9E = 0;
        *arg0->unkA4 &= 0xFFF3;
    }
done:
        break;
    }
    if (sp34 != NULL && (*sp34 & 0x20) && func_80126944() == 0) {
                dy = arg0->unk94;
                v0 = func_8010843C(arg0->unk90, dy - 2.0 * (f64)arg0->unk44, arg0->unk98, arg0->unk90, dy - 0.6, arg0->unk98);
                if (v0 != 0 && WORLD->unk35A != 0x16) {
                arg1[0]->unk30->unk8 += WORLD->unk384 - arg0->unk94;
                arg1[1]->unk30->unk8 += WORLD->unk384 - arg0->unk94;
                arg1[2]->unk30->unk8 += WORLD->unk384 - arg0->unk94;
                if (arg0->unk44 <= D_80219638) {
                    func_801FC830(arg0->unk90, arg0->unk94, arg0->unk98, 400.0f, 0x1FE);
                    func_80380F94(arg0->unk90, arg0->unk94, arg0->unk98, 0.0f, 0.0f, 0.0f, 0x1F);
                }
                arg0->unk94 += WORLD->unk384 - arg0->unk94;
                arg0->unk44 = 0.0f;
            } else {
                if (arg0->unk44 > -4.0) arg0->unk44 -= D_80219640;
                if (func_801FD5BC(arg0->unk90, arg0->unk94, arg0->unk98)) {
                    *sp34 &= 0xFFDF;
                    arg0->unk44 = 0.0f;
                }
            }
    }
    vel = arg0->unk40;
    arg0->unk90 += vel;
    arg0->unk94 += arg0->unk44;
    arg0->unk98 += arg0->unk48;
    arg1[0]->unk30->unk4 += vel;
    arg1[0]->unk30->unk8 += arg0->unk44;
    arg1[0]->unk30->unkC += arg0->unk48;
    arg1[1]->unk30->unk4 += arg0->unk40;
    arg1[1]->unk30->unk8 += arg0->unk44;
    arg1[1]->unk30->unkC += arg0->unk48;
    arg1[2]->unk30->unk4 += arg0->unk40;
    arg1[2]->unk30->unk8 += arg0->unk44;
    arg1[2]->unk30->unkC += arg0->unk48;
    arg0->unk84 = 0;
    arg0->unk88 = 0;
    arg0->unk78 = arg0->unk90;
    arg0->unk7C = arg0->unk94;
    arg0->unk80 = arg0->unk98;
    arg0->unk86 = arg0->unk9C;
}
