#include "common.h"
extern u16 D_801BBBF4;
extern u8 D_801BBF44[];
extern u8 D_801E15E0[];
extern u16 D_801E15E8[][8];
extern u8 D_801E16A0[];
extern u16 func_80011590();
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s32 func_801C5A1C(f32, f32, f32, f32, f32, f32);
void func_801DCCB0(s32 a0, s32 a1, s32 arg2);


typedef struct func_801DCDBC_StructA {
    s32 id;
    u16 k;
    u16 flags;
    f32 scale;
} func_801DCDBC_StructA;
typedef struct func_801DCDBC_Vec {
    f32 x, y, z;
} func_801DCDBC_Vec;
typedef struct func_801DCDBC_StructPos {
    u8 pad0[0x12];
    s16 angle;
} func_801DCDBC_StructPos;
typedef struct func_801DCDBC_StructObj {
    u8 pad0[0x2C];
    func_801DCDBC_StructPos *pos;
} func_801DCDBC_StructObj;
typedef struct func_801DCDBC_StructG {
    u8 pad0[4];
    u16 unk4;
    u8 pad6[0xE0 - 6];
    func_801DCDBC_StructObj *unkE0;
    u8 padE4[0x35B - 0xE4];
    u8 unk35B;
} func_801DCDBC_StructG;

extern func_801DCDBC_StructG D_801BBBF0__func_801DCDBC;
extern func_801DCDBC_StructObj *D_801BBCD0__func_801DCDBC;
#define G2 D_801BBBF0__func_801DCDBC
extern func_801DCDBC_StructG D_801BBBF0__func_801DCDBC2;
#define E8TAB2 (D_801E15E8[D_801E16A0[D_801BBBF0__func_801DCDBC2.unk4]][D_801BBBF0__func_801DCDBC2.unk35B])
#define OBJ D_801BBCD0__func_801DCDBC
#define F(n) func_80011590((u32)((n) * f) & 0xFFFF)
#define I(n) func_80011590(n)
#define E0TAB (*(u16 *)(D_801E15E0 + (D_801E16A0[G2.unk4] * 16 + G2.unk35B * 2)))
#define E8TAB (D_801E15E8[D_801E16A0[G2.unk4]][G2.unk35B])
#define ANGLE (OBJ->pos->angle)
#define RAY10 c = func_8001EAD0(ANGLE); d = func_8001EB64(ANGLE); func_801C5A1C(pos.x, pos.y, pos.z, c * 10.0 + pos.x, pos.y, d * 10.0 + pos.z)
#define SETHIT()                                        \
    switch (D_801BBF44[6]) {                            \
    case 4:                                             \
    case 10:                                            \
        *arg1 = 0x6A7;                                  \
        break;                                          \
    case 3:                                             \
        *arg1 = 0x6A8;                                  \
        break;                                          \
    }

void func_801DCDBC(func_801DCDBC_StructA *anim, u16 *arg1, f32 *arg2, func_801DCDBC_Vec pos) {
    f32 f = anim->scale;
    f32 d, c, b, a;

    switch (anim->id) {
    case 0x01680002:
        if (anim->k == F(13.0f)) {
            *arg1 = D_801E15E8[D_801E16A0[D_801BBBF4]][D_801BBF44[7]];
        }
        break;
    case 0x01680002 + 60:
        if (anim->k == F(10.0f) || anim->k == F(28.0f)) {
            *arg1 = E8TAB;
        }
        break;
    case 0x01680002 + 61:
        if (anim->k == F(9.0f) || anim->k == F(21.0f)) {
            *arg1 = E8TAB;
        }
        *arg2 = 1.1f;
        break;
    case 0x01680002 + 62:
        if (anim->k == F(9.0f) || anim->k == F(18.0f)) {
            *arg1 = E0TAB;
        }
        *arg2 = 1.2f;
        break;
    case 0x01680002 + 74:
        if (anim->k == I(1)) {
            *arg1 = E0TAB;
        }
        *arg2 = 1.2f;
        break;
    case 0x01680002 + 41:
        if (anim->k == I(5)) {
            *arg1 = 0x118;
        }
        break;
    case 0x01680002 + 75:
        if (anim->k == I(1)) {
            *arg1 = E0TAB;
        }
        *arg2 = 1.2f;
        break;
    case 0x01680002 + 76:
        if (anim->k == I(12)) {
            *arg1 = E0TAB;
        }
        *arg2 = 1.2f;
        break;
    case 0x01680002 + 79:
    case 0x01680002 + 80:
        if (anim->k == I(2)) {
            *arg1 = E0TAB;
        }
        *arg2 = 1.2f;
        break;
    case 0x01680002 + 33:
        if (anim->k == I(0x16) || anim->k == I(0x22)) {
            a = func_8001EAD0(ANGLE);
            b = func_8001EB64(ANGLE);
            c = func_8001EAD0(ANGLE);
            d = func_8001EB64(ANGLE);
            if (func_801C5A1C(a * 3.0 + pos.x, pos.y + 20.0, b * 3.0 + pos.z,
                              c * 3.0 + pos.x, pos.y - 10.0, d * 3.0 + pos.z) != 0) {
                *arg1 = E8TAB;
            }
        }
        break;
    case 0x01680002 + 36:
        if (anim->k == I(0x10) || anim->k == I(0x24) || anim->k == I(0x32)) {
            *arg1 = E8TAB;
            a = func_8001EAD0(G2.unkE0->pos->angle);
            b = func_8001EB64(ANGLE);
            c = func_8001EAD0(ANGLE);
            d = func_8001EB64(ANGLE);
            if (func_801C5A1C(a * 5.0 + pos.x, pos.y + 20.0, b * 5.0 + pos.z,
                              c * 5.0 + pos.x, pos.y - 10.0, d * 5.0 + pos.z) != 0) {
                *arg1 = E8TAB2;
            }
        }
        break;
    case 0x01680002 + 47:
        if (anim->k == I(0x1B) || anim->k == I(0x2A) || anim->k == I(0x39)) {
            *arg1 = 0x68C;
        }
        break;
    case 0x01680002 + 19:
        if (anim->k == F(10.0f) || anim->k == F(30.0f)) {
            *arg1 = ((u16 (*)[8])D_801E15E0)[D_801E16A0[D_801BBBF4]][D_801BBF44[7]];
            if (*arg1 == 0x672 || *arg1 == 0x673 || *arg1 == 0x674 || *arg1 == 0x675) {
                *arg1 = 0x68D;
            } else {
                *arg1 = 0x68C;
            }
        }
        break;
    case 0x01680002 + 29:
        if (anim->k == I(1) || anim->k == I(9)) {
            RAY10;
            SETHIT();
        }
        break;
    case 0x01680002 + 28:
        if (anim->k == I(8)) {
            RAY10;
            SETHIT();
        }
        break;
    case 0x01680002 + 45:
        if (anim->k == I(4) || anim->k == I(0xF)) {
            RAY10;
            SETHIT();
        }
        break;
    case 0x01680002 + 30:
        if (anim->k & 2) {
            if (anim->k == I(2) || anim->k == I(0x12)) {
                RAY10;
                SETHIT();
            }
        } else if (anim->k == I(0x14) || anim->k == I(0x18)) {
            *arg1 = E8TAB;
        }
        break;
    case 0x01680002 + 26:
        if (anim->k == F(12.0f) || (anim->k == F(23.0f) && !(anim->flags & 2)) || (anim->k == F(1) && (anim->flags & 2))) {
            *arg1 = 0x677;
        }
        break;
    case 0x01680002 + 23:
    case 0x01680002 + 46:
        if (anim->k == F(22.0f)) {
            *arg1 = 0x677;
        }
        break;
    case 0x01680002 + 22:
    case 0x01680002 + 24:
    case 0x01680002 + 25:
    case 0x01680002 + 27:
        if (anim->k == F(20.0f) || anim->k == F(40.0f)) {
            *arg1 = 0x677;
        }
        break;
    default:
        func_801DCCB0((s32)anim, (s32)arg1, (s32)arg2);
        break;
    }
}
#undef G2
#undef OBJ
#undef F
#undef I
#undef E0TAB
#undef E8TAB
#undef E8TAB2
#undef ANGLE
#undef RAY10
#undef SETHIT
