#include "common.h"
struct func_8020C39C_StructInner {
    u8 pad0[4];
    f32 x, y, z;
    u8 pad10[2];
    s16 angle;
};
struct func_8020C39C_StructPlayer {
    u8 pad0[0x2C];
    struct func_8020C39C_StructInner *inner;
};
extern struct func_8020C39C_StructPlayer *D_801BBCD0;
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s16 func_8001EF38(f32, f32);
extern void func_80020718(s32);
extern s32 func_80108590(f32, f32, f32, f32, f32, f32);
extern s32 func_8012C6B4();
extern u16 func_8012FF58();
extern s32 func_80150584();
extern s32 func_801C3D20(f32, f32, f32);
extern void func_801FC830(f32, f32, f32, f32, s32);
typedef struct {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x3C - 0x30];
    u16 unk3C;
    u8 pad3E[0x44 - 0x3E];
    f32 unk44;
    u8 pad48[0x74 - 0x48];
    s32 unk74;
    f32 unk78;
    f32 unk7C;
    f32 unk80;
    u16 unk84;
    u16 unk86;
    u16 unk88;
    u8 pad8A[0x90 - 0x8A];
    u8 unk90;
    u8 unk91;
    u8 pad92[0x94 - 0x92];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    u16 unkA0;
    u16 unkA2;
    u16 unkA4;
    u8 padA6[0xAC - 0xA6];
    u8 unkAC;
    u8 padAD[0xB0 - 0xAD];
    u8 unkB0;
} func_8020FB98_Struct;
extern void func_801FCF98(func_8020FB98_Struct *);
extern s32 func_801FD168(f32, f32, f32, f32, f32, f32, s32, s32, s32, s32, s32, s32);
extern void func_801FD260(s32, void *);
extern s16 func_801FD3EC(s16, s16, s16);
extern s32 func_801FD68C(func_8020FB98_Struct *);
extern void func_801FDB3C(s32);
struct func_80212A28_Struct {
    u8 pad0[0xAD];
    u8 unkAD;
};
void func_80212A28(struct func_80212A28_Struct *arg0);
u8 func_80212A48(struct func_80212A28_Struct *arg0);
extern void func_80380F94(f32, f32, f32, f32, f32, f32, s32);

struct func_8020CBC0_StructA {
    u8 pad0[0x3C]; u16 timer; u8 pad3E[2];
    f32 vx, vy, vz; u8 pad4C[0x44];
    u8 state; u8 pad91; s16 duration;
    f32 x, y, z; u16 ax, ay, az; u8 padA6[6]; u8 flags;
};
struct func_8020CBC0_StructI {
    u8 pad0[4]; f32 x, y, z; u16 ax, ay, az;
};
struct func_8020CBC0_StructO {
    u8 pad0[0x22]; u8 active; u8 pad23[0xD];
    struct func_8020CBC0_StructI *p;
};
extern u16 D_80217C78[];
extern u16 D_80217C80[];
extern f64 D_8021AA98;
extern f64 D_8021AAA0;
extern f64 D_8021AAA8;
extern f64 D_8021AAB0;
extern f64 D_8021AAB8;
extern s32 func_801FD4F4(s16, s16, s32);

s32 func_8020CBC0(struct func_8020CBC0_StructA *a, struct func_8020CBC0_StructO **b)
{
    s32 divisor1;
    s32 hit;
    f32 speed;
    u16 angle;
    s32 time;
    s32 divisor2;
    f32 sn2, cs, sn;
    s32 period;
    s32 shot;
    f64 lift;

    time = a->timer++;
    switch (a->state) {
    case 0:
        return 1;
    case 2:
        if (func_80150584() == 0) {
            if (a->flags & 1) {
                sn2 = func_8001EAD0(a->ay);
                if (func_801C3D20(sn2 * 35.0f + a->x,
                    func_8001EB64(a->ay) * 35.0f + a->z, 30.0f) &&
                    D_801BBCD0->inner->y >= a->y - 15.0f &&
                    D_801BBCD0->inner->y < a->y + 10.0f) {
                    sn = func_8001EAD0(a->ay);
                    if (func_80108590(sn * 5.0 + a->x, a->y + 1.0,
                        func_8001EB64(a->ay) * 5.0 + a->z,
                        D_801BBCD0->inner->x, a->y + 1.0, D_801BBCD0->inner->z) == 0) {
                        a->state = 9;
                        a->timer = 0;
                        divisor1 = 10;
                        a->duration = func_8012FF58() / divisor1 * divisor1 + 20;
                        func_80212A28((void *)a);
                        func_80020718(D_80217C78[func_80212A48((void *)a) % 3]);
                    }
                }
            } else {
                if (func_801C3D20(a->x, a->z, 45.0f) &&
                    D_801BBCD0->inner->y >= a->y - 15.0f &&
                    D_801BBCD0->inner->y < a->y + 10.0f &&
                    func_80108590(a->x, a->y + 1.0, a->z,
                        D_801BBCD0->inner->x, a->y + 1.0, D_801BBCD0->inner->z) == 0) {
                    a->state = 4;
                    a->timer = 0;
                    divisor2 = 10;
                    a->duration = func_8012FF58() / divisor2 * divisor2 + 20;
                    func_80212A28((void *)a);
                    func_80020718(D_80217C78[func_80212A48((void *)a) % 3]);
                }
            }
        }
        break;
    case 4:
        angle = func_8001EF38(D_801BBCD0->inner->x - a->x, D_801BBCD0->inner->z - a->z);
        a->ay = func_801FD3EC(a->ay, (s16)angle, 0x44);
        if ((time >= 30 && func_801FD4F4(a->ay, (s16)angle, 0x44)) || time >= 90) {
            a->state = 9;
            a->timer = 15;
        }
        break;
    case 9:
        if (time >= 30) {
            a->state = 15;
            a->timer = 0;
            a->duration = 0;
            func_80020718(D_80217C80[func_80212A48((void *)a) % 3]);
        }
        break;
    case 15:
        if (time >= 75) {
            a->state = 2;
            a->timer = 0;
            a->duration = 0;
        }
        break;
    case 7:
        if (time == 0) {
            func_801FC830(a->x, a->y, a->z, 400.0f, 0x116);
            func_80380F94(a->x, a->y, a->z, 0.0f, 0.0f, 0.0f, 0x12);
        }
        if (time >= 4) {
            (*b)->active = 0;
            a->state = 0;
            func_801FCF98((void *)a);
        }
        break;
    default:
        break;
    }
    if (func_80150584() == 0) {
        period = a->duration ? 2 : 4;
        if (time % period == 0) {
            if (a->duration) speed = D_8021AA98;
            else speed = D_8021AAA0;
            sn = func_8001EAD0(a->ay);
            cs = func_8001EB64(a->ay);
            sn2 = func_8001EAD0(a->ay);
            lift = a->duration ? func_8012C6B4(35) / D_8021AAA8 + D_8021AAB0 : 0.0;
            shot = func_801FD168(sn * 4.5 + a->x, a->y + D_8021AAB8,
                cs * 4.5 + a->z, sn2 * speed, lift,
                func_8001EB64(a->ay) * speed,
                a->ax, a->ay, a->az, 16, 0, a->duration);
            if (shot) func_801FD260(shot, a);
        }
    }
    if (a->state != 7 && a->state != 0) {
        hit = func_801FD68C((void *)a);
        if (hit) {
            a->vx = 0.0f;
            a->vz = 0.0f;
            func_801FC830(a->x, a->y, a->z, 400.0f, 0x3AA);
            func_80380F94(a->x, a->y + 2.0f, a->z, 0.0f, 0.0f, 0.0f, 0x21);
            func_801FDB3C(hit);
        }
    }
    (*b)->p->x = a->x;
    (*b)->p->y = a->y;
    (*b)->p->z = a->z;
    (*b)->p->ax = 0;
    (*b)->p->ay = a->ay;
    (*b)->p->az = 0;
    return 1;
}
