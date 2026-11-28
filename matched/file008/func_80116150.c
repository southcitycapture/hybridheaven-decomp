#include "common.h"
extern f32 D_80163C20;
extern f32 D_80163C24;
extern f32 D_80163C28;
extern u8 D_801BBB40[];
extern f32 D_801BBB5C;
extern f32 D_801BBB60;
extern f32 D_801BBB64;
extern f32 D_801BBB68;
extern f32 D_801BBB6C;
extern f32 D_801BBB70;
typedef struct func_80115F10_StructC {
    /* 0x00 */ u8 pad0[0x4];
    /* 0x04 */ f32 x;
    /* 0x08 */ f32 y;
    /* 0x0C */ f32 z;
    /* 0x10 */ u8 pad10[0x14];
    /* 0x24 */ f32 f24;
    /* 0x28 */ f32 f28;
    /* 0x2C */ u8 pad2C[0x4];
    /* 0x30 */ f32 f30;
    /* 0x34 */ f32 f34;
    /* 0x38 */ f32 f38;
    /* 0x3C */ f32 f3C;
    /* 0x40 */ f32 f40;
    /* 0x44 */ f32 f44;
} func_80115F10_StructC;
typedef struct func_80115F10_StructB {
    /* 0x00 */ u8 pad0[0x24];
    /* 0x24 */ struct func_80115F10_StructB *p24;
    /* 0x28 */ u8 pad28[4];
    /* 0x2C */ func_80115F10_StructC *p2C;
} func_80115F10_StructB;
typedef struct func_80115F10_StructA {
    /* 0x000 */ u8 pad0[0x54];
    /* 0x054 */ func_80115F10_StructB *unk54;
    /* 0x058 */ u8 pad58[0x88];
    /* 0x0E0 */ func_80115F10_StructB *unkE0;
    /* 0x0E4 */ func_80115F10_StructB *unkE4;
    /* 0x0E8 */ func_80115F10_StructB *unkE8;
    /* 0x0EC */ u8 padEC[4];
    /* 0x0F0 */ s32 unkF0;
    /* 0x0F4 */ u8 padF4;
    /* 0x0F5 */ u8 unkF5;
    /* 0x0F6 */ u8 padF6[0x1A3];
    /* 0x299 */ u8 unk299;
    /* 0x29A */ u8 pad29A[2];
    /* 0x29C */ f32 unk29C;
    /* 0x2A0 */ f32 unk2A0;
    /* 0x2A4 */ u8 pad2A4[0x1A4];
    /* 0x448 */ func_80115F10_StructB **unk448;
    /* 0x44C */ u8 pad44C[0xBE5];
    /* 0x1031 */ u8 unk1031;
} func_80115F10_StructA;
extern func_80115F10_StructA D_801BBBF0;
extern void func_800058DC(func_80115F10_StructB *, void *);
extern void func_801166C8();


typedef struct func_80116150_StructState {
    u8 pad0[0x230];
    u8 flag230;
    u8 flag231;
    u8 pad232[0x14E];
    f32 f380;
    u8 pad384[4];
    f32 f388;
} func_80116150_StructState;

#define STATE (*(func_80116150_StructState *)&D_801BBBF0)
#define OLD_ANGLE (*(s16 *)D_801BBB40)

extern volatile s32 D_801636F4[];
#define DPRINT(args) ((void)(args))
extern f32 D_801BBB44;
extern f32 D_801BBB48;
extern f32 D_801BBB4C;
extern f32 D_801BBB50;
extern f32 D_801BBB54;
extern f32 D_801BBB58;
extern f32 func_8002FC20(f32);
extern s32 func_8001EF38(f32, f32);
extern f32 func_8001EB64(s16);
extern f32 func_8001EAD0(s16);
extern s32 func_8010843C(f32, f32, f32, f32, f32, f32);
#define ANGLE(a) (((a) & 0x1000) ? (((a) & 0x1FFF) - 0x2000) : ((a) & 0x1FFF))
#define ANGLE_SIGN(a, s) ((s) ? (((a) & 0x1FFF) - 0x2000) : ((a) & 0x1FFF))
#define ABS(a) (((a) < 0) ? -(a) : (a))

void func_80116150(func_80115F10_StructB *arg0, s32 arg1) {
    s16 angle;
    f32 dx;
    f32 dy;
    f32 dz;
    f32 distance;
    f32 radius;
    s32 heading;

    s32 delta;
    s32 sign;
    s32 first;
    s32 r;
    s32 oldAngle;
    u8 mode;
    func_80115F10_StructC *p;

    if (D_801BBBF0.unkE0 != NULL && D_801BBBF0.unkF0 != 0 && D_801BBBF0.unkF5 != 0) {
        if (STATE.flag230 == 0) {
            D_801BBB44 = D_801BBB5C;
            D_801BBB48 = D_801BBB60;
            D_801BBB4C = D_801BBB64;
        } else {
            D_801BBB5C = D_801BBBF0.unkE0->p2C->x;
            D_801BBB44 = D_801BBB5C;
            D_801BBB60 = D_801BBBF0.unkE0->p2C->y;
            D_801BBB48 = D_801BBB60;
            D_801BBB64 = D_801BBBF0.unkE0->p2C->z;
            D_801BBB4C = D_801BBB64;
        }
        if (STATE.flag231 == 0) {
            D_801BBB50 = D_801BBB68;
            D_801BBB54 = D_801BBB6C;
            D_801BBB58 = D_801BBB70;
        } else {
            D_801BBB68 = (*D_801BBBF0.unk448)->p24->p2C->x;
            D_801BBB50 = D_801BBB68;
            D_801BBB6C = (*D_801BBBF0.unk448)->p24->p2C->y;
            D_801BBB54 = D_801BBB6C;
            D_801BBB70 = (*D_801BBBF0.unk448)->p24->p2C->z;
            D_801BBB58 = D_801BBB70;
        }
        dx = D_801BBB50 - D_801BBB44;
        dy = D_801BBB54 - D_801BBB48;
        dz = D_801BBB58 - D_801BBB4C;
        distance = func_8002FC20(dx * dx + dz * dz);
        heading = func_8001EF38(dz, dx);
        D_801BBBF0.unkE8->p2C->f3C = (D_801BBB44 + D_801BBB50) * 0.5;
        D_801BBBF0.unkE8->p2C->f40 = (D_801BBB48 + D_801BBB54) * 0.5 + 8.0;
        D_801BBBF0.unkE8->p2C->f44 = (D_801BBB4C + D_801BBB58) * 0.5;
        D_80163C20 = D_801BBBF0.unkE8->p2C->f3C;
        D_80163C24 = D_801BBBF0.unkE8->p2C->f40;
        D_80163C28 = D_801BBBF0.unkE8->p2C->f44;
        if (D_801636F4[0] != 0) {
            DPRINT((dx, dy, dz, distance, heading));
        }

        mode = D_801BBBF0.unk1031;
        if (mode == 0 || mode == 1 || mode == 2 || mode == 3) {
            angle = (s16)(heading - 0x800U) & 0x1FFF;
            oldAngle = OLD_ANGLE;
            delta = (s16)(angle - oldAngle);
            sign = delta & 0x1000;
            first = ANGLE_SIGN(delta, sign);
            if (first < 0) {
                r = ANGLE_SIGN(delta, sign);
                first = -r;
            } else {
                r = ANGLE_SIGN(delta, sign);
                first = r;
            }
            if (first >= 0x31) {
                first = ANGLE_SIGN(delta, sign);
                if (first > 0) {
                    angle = oldAngle + 0x30;
                } else {
                    angle = oldAngle - 0x30;
                }
                if (D_801636F4[0] != 0) {
                    DPRINT((dx, dy, dz, heading, angle));
                }
            } else {
                D_801BBBF0.unk299 = 1;
                func_800058DC(arg0, func_801166C8);
            }
        } else {
            func_800058DC(arg0, func_801166C8);
            return;
        }
        if ((f64)distance > 20.0) {
            radius = ((((f64)distance - 20.0) / 20.0) * 0.5 + 1.0) * 55.0;
        } else {
            radius = 55.0f;
        }
        dx = func_8001EB64(angle);
        p = D_801BBBF0.unkE8->p2C;
        p->f30 = p->f3C - dx * radius;
        D_801BBBF0.unkE8->p2C->f34 = (D_801BBB48 + D_801BBB54) * 0.5 + 35.0;
        dz = func_8001EAD0(angle);
        p = D_801BBBF0.unkE8->p2C;
        p->f38 = p->f44 - dz * radius;
        p = D_801BBBF0.unkE8->p2C;
        if (func_8010843C(p->f3C, p->f40, p->f44, p->f30, p->f34, p->f38) == 1) {
            D_801BBBF0.unkE8->p2C->f30 = STATE.f380;
            D_801BBBF0.unkE8->p2C->f38 = STATE.f388;
        }
        OLD_ANGLE = angle;
    }
}
