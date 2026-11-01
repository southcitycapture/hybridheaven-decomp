#include "common.h"
struct func_80242F10_Inner {
    u8 pad[4];
    f32 unk4;
};
struct func_80242F10_Outer {
    u8 pad[0x2C];
    struct func_80242F10_Inner *unk2C;
};
extern struct func_80242F10_Outer *D_801BBCD0;
extern f32 D_8024F4F0;
void func_80006214(void *);
extern void func_80020718(s32);
extern void func_80129FB8(f32, f32, f32, f32, f32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32, s32);
extern s32 func_8012C6B4(s32);
extern s32 func_8012C97C(s32, s32);
extern void func_801FD168(f32, f32, f32, f32, f32, f32, s32, s32, s32, s32, s32, s32);
extern s32 func_801FD644(f32, f32, f32, f32, s32, f32, f32, u32);
extern s32 func_801FD68C(void *);
extern f32 func_801FD780(u8);
extern void func_801FDB3C(s32);
void func_802467B0(f32 arg0, f32 arg1, s32 arg2, s32 arg3);
extern void func_80380F94(f32, f32, f32, f32, f32, f32, s32);


typedef struct func_802432CC_StructInner {
    u8 pad0[4];
    f32 x, y, z;
    u16 rx, ry, rz;
} func_802432CC_StructInner;
typedef struct func_802432CC_StructOuter {
    u8 pad0[0x30];
    func_802432CC_StructInner *p;
} func_802432CC_StructOuter;
typedef struct func_802432CC_StructObj {
    u8 pad0[0x24];
    func_802432CC_StructOuter *model;
    u8 pad28[0x14];
    u16 timer;
    u8 pad3E[0x36];
    s32 handle;
    f32 oldx, oldy, oldz;
    u16 oldrx, oldry, oldrz;
    u8 pad8A[6];
    u8 state, id;
    s16 ticks;
    f32 x, y, z;
    u16 rx, ry, rz;
    u8 padA6[2];
    s32 actor;
    u8 padAC[4];
    u8 health;
} func_802432CC_StructObj;
extern s32 D_80129FB8(f32, f32, f32, f32, f32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32, s32);
#define func_80129FB8 D_80129FB8
extern s32 D_80006214(void *);
#define func_80006214 D_80006214
extern s32 func_801517CC(s32);
extern void func_80151430(s32, u16);
extern void func_801512CC(s32, f32, f32, f32);
extern void func_8015115C(s32, void *);
extern void func_8015122C(s32, void *, s32);
extern void func_8015133C(s32, void *);
extern s32 func_8014B4A0(s32, void *);
extern void func_8013E570(void *, s32, void *, void *, void *);
extern void func_8013E5C4(void *, s32, void *, void *, void *);
extern void func_801C3B2C(s32);
extern void func_801C3B10(s32);
extern void func_80133980(s32);
extern void func_801C2F0C(s32, s32);
extern void func_8013A334(void *, void *, s32, s32);
extern void func_8014ADB4(f32, f32, f32, s32, s32, s32, s32);
extern void func_801FD260(s32, void *);
extern void func_800208C4(s32);
extern s32 D_80133A24(s32);
extern s32 D_801FD168(f32, f32, f32, f32, f32, f32, s32, s32, s32, s32, s32, s32);
extern u8 D_802499E0[];
extern u8 D_802499EC[];
extern u8 D_802499F8[];
extern u8 D_80249A04[];
extern u8 D_80249A10[];
extern u8 D_80249A1C[];
extern u8 D_80249A34[];
extern u8 D_80249A40[];
extern u8 D_80249A4C[];
extern u8 D_8008DA88[];

#define ZBITS(v) (*(s32 *)&(v))
#define PLAYER ((func_802432CC_StructInner *)D_801BBCD0->unk2C)
#define POINT(n) func_80006214((void *)actor); func_8013A334(&pos, D_8008DA88, *(s32 *)(actor + 0x5C), n); func_80006214(arg0)
#define SOUND(n) func_802467B0(arg0->x, arg0->y, ZBITS(arg0->z), n)

s32 func_802432CC(func_802432CC_StructObj *arg0, void **arg1)
{
    s32 actor;
    f32 out[3];
    struct { f32 x, y, z; } pos;
    s32 hit;
    u8 padBefore[8];
    f32 dest[3];
    u8 pad[16];
    s32 angle;
    s32 timer;
    s32 rem;
    s32 random;

    actor = arg0->actor;
    switch (arg0->state) {
    case 0:
        return 1;
    case 1:
        if (arg0->timer++ >= 30 && func_801517CC(actor)) {
            func_80151430(actor, arg0->ry);
            if (!D_80133A24(0xBE)) {
                arg0->state = 11;
                func_801512CC(actor, arg0->x, arg0->y, arg0->z);
                func_8015115C(actor, D_802499E0);
                func_8013E570(*arg1, 0, &arg0->model->p->x, &arg0->model->p->y, &arg0->model->p->z);
                return 1;
            }
            arg0->state = 8;
            arg0->handle = func_8012C97C(0xF7, 3);
            if (func_8014B4A0(0x8075, dest)) {
                arg0->x = dest[0];
                arg0->z = dest[2];
            }
            func_801512CC(actor, arg0->x, arg0->y, arg0->z);
            func_8015115C(actor, D_80249A4C);
        }
        return 1;
    case 11:
        if (PLAYER->x <= 30.0f && PLAYER->y >= -40.0f && PLAYER->y <= -10.0f) {
            arg0->state = 12;
            arg0->timer = 0;
            func_8015122C(actor, D_80249A04, 20);
            func_80020718(7);
            if (!D_80133A24(0xBE)) {
                func_801C3B2C(2);
                func_801C3B10(1);
            }
        }
        break;
    case 12:
        timer = arg0->timer++;
        if (timer >= 20) {
            if (timer == 20) {
                SOUND(0x17E);
            }
            if (timer >= 30 && timer < 45) {
                if (timer == 30) {
                    SOUND(0x3BF);
                }
                random = func_8012C6B4(40);
                func_80129FB8(arg0->x - 5.0f, arg0->y + 14.0, arg0->z + 4.0f,
                    -1.0f, -(random / 100.0 + 0.8), 1.0f, 0.0f,
                    255, 255, 255, 64, 64, 128, 160, -8,
                    func_8012C6B4(50) / 1000.0 + 0.1, 11, 0);
                random = func_8012C6B4(40);
                func_80129FB8(arg0->x - 5.0f, arg0->y + 14.0, arg0->z - 4.0f,
                    -1.0f, -(random / 100.0 + 0.8), -1.0f, 0.0f,
                    255, 255, 255, 64, 64, 128, 160, -8,
                    func_8012C6B4(50) / 1000.0 + 0.1, 11, 0);
            }
        }
        if (timer >= 60) {
            arg0->state = 13;
            arg0->timer = 0;
            func_8015122C(actor, D_802499EC, 20);
            func_80020718(62);
            if (!D_80133A24(0xBE)) {
                func_80133980(0xBD);
                func_801C2F0C(1, 0);
            }
        }
        break;
    case 13:
        rem = (arg0->timer + 44) % 54;
        if (rem == 12 || rem == 36) {
            SOUND(0x181);
        }
        if (arg0->timer++ >= 60) {
            arg0->state = 9;
            arg0->timer = 0;
            func_8015122C(actor, D_80249A04, 20);
        }
        break;
    case 9:
        if (arg0->timer >= 105) {
            rem = (arg0->timer - 61) % 54;
            if (rem == 12 || rem == 36) {
                SOUND(0x181);
            }
        }
        POINT(6);
        switch (arg0->timer++) {
        case 20:
            SOUND(0x17E);
            break;
        case 45:
        case 60:
        case 75:
        case 90:
            func_80129FB8(arg0->x - 10.0f, arg0->y + 35.0f, arg0->z,
                0.0f, 0.0f, 0.0f, 0.0f, 255, 243, 34, 255, 102, 0, 100, -6, 0.25f, 11, 0);
            func_801FD168(arg0->x - 10.0f, arg0->y + 30.0f, arg0->z,
                0.0f, 0.0f, 0.0f, 0, 0, 0, 9, 0, 0);
            break;
        case 84:
            func_801FD168(pos.x + 6.0f, pos.y - 1.0f, pos.z,
                0.5f, -0.1f, 0.0f, 0, 0, 0, 14, 0, 0);
            break;
        case 105:
            func_8015122C(actor, D_802499F8, 10);
            break;
        case 135:
            arg0->state = 15;
            arg0->timer = 0;
            func_8015122C(actor, D_80249A04, 10);
            func_80380F94(arg0->x + 20.0f, arg0->y + 15.0f, arg0->z, 0.0f, 0.0f, 0.0f, 25);
            SOUND(0x17F);
            break;
        }
        break;
    case 15:
        pos.x = arg0->x + 20.0f;
        pos.y = arg0->y + 10.0f;
        pos.z = arg0->z;
        switch (arg0->timer++) {
        case 60:
            func_801FD168(arg0->x + 15.0f, arg0->y + 15.0f, arg0->z, 0.0f, 0.0f, 0.0f, 0, 0x8B6, 0, 10, 0, 0);
            break;
        case 62:
            func_801FD168(arg0->x + 15.0f, arg0->y + 15.0f, arg0->z, 0.0f, 0.0f, 0.0f, 0, 0x844, 0, 10, 0, 0);
            break;
        case 64:
            func_801FD168(arg0->x + 15.0f, arg0->y + 15.0f, arg0->z, 0.0f, 0.0f, 0.0f, 0, 0x7BB, 0, 10, 0, 0);
            break;
        case 66:
            func_801FD168(arg0->x + 15.0f, arg0->y + 15.0f, arg0->z, 0.0f, 0.0f, 0.0f, 0, 0x749, 0, 10, 0, 0);
            break;
        case 68:
            func_801FD168(arg0->x + 15.0f, arg0->y + 15.0f, arg0->z, 0.0f, 0.0f, 0.0f, 0, 0x6D8, 0, 10, 0, 0);
            break;
        case 70:
            func_801FD168(arg0->x + 15.0f, arg0->y + 15.0f, arg0->z, 0.0f, 0.0f, 0.0f, 0, 0x666, 0, 10, 0, 0);
            break;
        case 75:
            arg0->state = 17;
            arg0->timer = 0;
            func_8015122C(actor, D_80249A34, 10);
            break;
        }
        break;
    case 17:
        timer = arg0->timer++;
        POINT(6);
        if (!(timer % 2)) {
            func_80129FB8(pos.x + 6.0f, pos.y, pos.z, 0.0f, 0.0f, 0.0f, 0.0f,
                255, 255, 255, 255, 0, 0, 160, -2, 0.15f, 9, 0);
            random = func_8012C6B4(160);
            func_801FD168(pos.x, pos.y, pos.z, random / 100.0 + 1.4,
                -1.2f, (func_8012C6B4(180) - 90) / 100.0, 0, 0, 0, 13, 0, 0);
        }
        if (!(timer % 4)) {
            func_801FD168(pos.x, pos.y, pos.z, 6.0f, -0.4f, 0.0f, 0, 0, 0, 13, 0, 0);
        }
        if (timer >= 70) {
            arg0->state = 16;
            arg0->timer = 0;
            func_8015122C(actor, D_802499E0, 10);
        }
        break;
    case 16:
        switch (arg0->timer++) {
        case 12:
            func_8015122C(actor, D_80249A1C, 5);
            break;
        case 37:
            POINT(12);
            func_801FD168(pos.x + 5.0f, pos.y, pos.z + 3.0f, 0.0f, 0.0f, 0.0f, 0, 0, 0, 12, 0, 0);
            func_80380F94(pos.x + 5.0f, pos.y, pos.z + 3.0f, 0.0f, 0.0f, 0.0f, 29);
            break;
        case 57:
            POINT(9);
            func_801FD168(pos.x + 5.0f, pos.y, pos.z - 3.0f, 0.0f, 0.0f, 0.0f, 0, 0, 0, 12, 0, 0);
            func_80380F94(pos.x + 5.0f, pos.y, pos.z - 3.0f, 0.0f, 0.0f, 0.0f, 29);
            break;
        case 75:
            arg0->state = 14;
            arg0->timer = 0;
            func_8015122C(actor, D_802499F8, 10);
            break;
        }
        break;
    case 14:
        rem = (arg0->timer++ + 44) % 54;
        if (rem == 12 || rem == 36) {
            SOUND(0x181);
        }
        if (arg0->x <= -250.0f) {
            arg0->state = 13;
            arg0->timer = 0;
            func_8015122C(actor, D_802499EC, 20);
        }
        break;
    case 18:
        POINT(12);
        if (arg0->timer >= 3) {
            if (!(arg0->timer % 2)) {
                func_80129FB8(pos.x + 6.0f, pos.y, pos.z, 0.0f, 0.0f, 0.0f, 0.0f,
                    255, 255, 255, 0, 255, 0, 180, -6, 0.2f, 11, 0);
            }
            if (func_801FD644(pos.x + 6.0f, pos.y, pos.z, 3.5f, 0x800, 2.5f, 1.0f,
                    (u32)(func_801FD780(arg0->id) * 150.0f)) ||
                func_801FD644(pos.x + 1.0f, pos.y, pos.z, 3.5f, 0x800, 2.5f, 1.0f,
                    (u32)(func_801FD780(arg0->id) * 150.0f))) {
                func_80129FB8((pos.x + 6.0f + PLAYER->x) * 0.5,
                    (PLAYER->y + 9.0f + pos.y) * 0.5, (PLAYER->z + pos.z) * 0.5,
                    0.0f, 0.0f, 0.0f, 0.0f, 255, 255, 255, 255, 0, 0, 210, -6, 0.1f, 22, 0);
                func_802467B0(PLAYER->x, PLAYER->y + 10.0f, ZBITS(PLAYER->z), 0x22D);
            }
        }
        if (arg0->timer++ >= 45) {
            arg0->state = 9;
            arg0->timer = 0;
            func_8015122C(actor, D_80249A04, 20);
        }
        break;
    case 7:
        timer = arg0->timer++;
        if (timer < 15) {
            random = func_8012C6B4(40);
            func_80129FB8(arg0->x - 7.0f, arg0->y + 25.0, arg0->z + 12.0f,
                (random - 20) / 100.0, 0.0f, 1.5f, 0.0f, 255, 255, 255, 64, 64, 128, 160, -8,
                func_8012C6B4(100) / 1000.0 + 0.13, 11, 0);
            random = func_8012C6B4(40);
            func_80129FB8(arg0->x - 7.0f, arg0->y + 25.0, arg0->z - 12.0f,
                (random - 20) / 100.0, 0.0f, -1.5f, 0.0f, 255, 255, 255, 64, 64, 128, 160, -8,
                func_8012C6B4(100) / 1000.0 + 0.13, 11, 0);
        }
        if (timer == 60) {
            func_80020718(7);
        }
        if (timer >= 90) {
            arg0->state = 8;
            arg0->timer = 0;
            func_8014ADB4(arg0->x, arg0->y - 20.0f, arg0->z, 0, 0x8075, 0, 2);
            func_8014ADB4(arg0->x - 18.0f, arg0->y, arg0->z, 0, 0x8074, 12, 0);
            for (angle = 0x400; angle != 0xC80; angle += 0x88) {
                rem = D_801FD168(arg0->x + 5.0f, arg0->y, arg0->z, 0.0f, 0.0f, 0.0f, 0, angle, 0, 32, 2, 0);
                if (rem) {
                    func_801FD260(rem, arg0);
                }
            }
            func_800208C4(54);
            func_800208C4(61);
        }
        break;
    }
    if (!(arg0->ticks % 4) && arg0->state != 11 && arg0->state != 7 && arg0->state != 8) {
        POINT(6);
        func_80129FB8(pos.x + 4.5, pos.y, pos.z, 0.0f, 0.0f, 0.0f, 0.0f,
            255, 0, 0, 255, 0, 0, 240, -10, 0.02f, 21, 0);
    }
    if (arg0->state == 9 || arg0->state == 13 || arg0->state == 14) {
        if (PLAYER->x <= arg0->x + 35.0f) {
            arg0->state = 18;
            arg0->timer = 0;
            func_8015122C(actor, D_80249A10, 10);
            SOUND(0x180);
        }
    }
    hit = func_801FD68C(arg0);
    if (hit && arg0->state != 7 && arg0->state != 8) {
        func_80020718(0x3A9);
        func_80380F94(*(f32 *)(hit + 0x90), *(f32 *)(hit + 0x94), *(f32 *)(hit + 0x98), 0.0f, 0.0f, 0.0f, 17);
        if (--arg0->health == 0) {
            arg0->state = 7;
            arg0->timer = 0;
            func_8015122C(actor, D_80249A40, 30);
            SOUND(0x17D);
            func_80133980(0xBE);
            arg0->handle = func_8012C97C(0xF7, 3);
            func_8013E5C4(*arg1, 0, &arg0->model->p->x, &arg0->model->p->y, &arg0->model->p->z);
        }
        func_801FDB3C(hit);
    }
    if (arg0->state != 0 && arg0->state != 1) {
        func_8015133C(actor, out);
        arg0->x = out[0];
        arg0->y = out[1];
        arg0->z = out[2];
        D_8024F4F0 = out[0];
        arg0->model->p->x = arg0->x;
        arg0->model->p->y = arg0->y;
        arg0->model->p->z = arg0->z;
        arg0->model->p->rx = arg0->rx;
        arg0->model->p->ry = arg0->ry;
        arg0->model->p->rz = arg0->rz;
        arg0->oldx = arg0->x;
        arg0->oldy = arg0->y;
        arg0->oldz = arg0->z;
        arg0->oldrx = arg0->rx;
        arg0->oldry = arg0->ry;
        arg0->oldrz = arg0->rz;
    }
    arg0->ticks++;
    return 1;
}
