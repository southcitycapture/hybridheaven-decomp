#include "common.h"
extern u8 D_801BBBF0[];
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);


typedef struct func_801C8E84_Obj {
    u8 pad0[4];
    f32 x;
    f32 y;
    f32 z;
    u8 pad10[2];
    s16 unk12;
} func_801C8E84_Obj;
typedef struct func_801C8E84_Mid {
    u8 pad0[0x2C];
    func_801C8E84_Obj *unk2C;
} func_801C8E84_Mid;
typedef struct func_801C8E84_Anim {
    u32 id;
    u16 frame;
} func_801C8E84_Anim;
typedef struct func_801C8E84_Inner {
    f32 x;
    f32 y;
    u8 pad8[0x1C - 8];
    func_801C8E84_Anim aa[1];
    f32 speed;
} func_801C8E84_Inner;
typedef struct func_801C8E84_Top {
    u8 pad0[0x5C];
    func_801C8E84_Inner *unk5C;
} func_801C8E84_Top;
typedef struct func_801C8E84_G {
    u8 pad0[4];
    u16 unk4;
    u8 pad6[0xDC - 6];
    func_801C8E84_Top *unkDC;
    func_801C8E84_Mid *unkE0;
    u8 padE4[0x35B - 0xE4];
    u8 unk35B;
} func_801C8E84_G;
typedef struct func_801C8E84_Pair {
    f32 x;
    f32 y;
} func_801C8E84_Pair;
typedef struct func_801C8E84_Init {
    func_801C8E84_Pair e[3];
} func_801C8E84_Init;
extern func_801C8E84_Init D_801E0C88;
extern u8 func_8012C6B4(s32);
extern s32 func_801C5A1C(f32, f32, f32, f32, f32, f32);
extern s32 func_801E02DC(f32, f32, f32, f32, f32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32, s32);
#define GX ((func_801C8E84_G *)&D_801BBBF0)
#define ANG (GX->unkE0->unk2C->unk12)

#define P (GX->unkE0->unk2C)
#define SMOKE(s) \
    p = P; \
    func_801E02DC(p->x, p->y + 3.0, p->z, 0.0f, 0.0f, 0.0f, 0.0f, 0xA0, 0xA0, 0xA0, 0x80, 0x80, 0x80, 0x50, -1, s, 0, 0)
#define DUST(off, d) \
    p = P; \
    func_801E02DC(func_8001EAD0(ANG + off) * d + p->x, s2->y + p->y, func_8001EB64(ANG + off) * d + p->z, 0.0f, 0.0f, 0.0f, 0.0f, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x96, -2, s2->x, 1, 0)
#define ANGS(off) \
    fs2 = func_8001EAD0(ANG + (off)); \
    fs1 = func_8001EB64(ANG + (off)); \
    fs0 = func_8001EAD0(ANG + (off)); \
    t0 = func_8001EB64(ANG + (off)); \
    p = P
#define SPARK(off, d, v) ANGS(off); SPARK2(d, v)
#define SPARK2(d, v) \
    func_801E02DC(fs2 * d + p->x, s2->y + p->y, fs1 * d + p->z, fs0 * v, 0.0f, t0 * v, 0.0f, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x96, -2, s2->x, 1, 0)

void func_801C8E84(s32 arg0, s32 arg1) {
    func_801C8E84_Obj *p;
    func_801C8E84_Inner *s2;
    f32 spEC;
    u8 spEB;
    func_801C8E84_Init spD0;
    func_801C8E84_Anim *anim;
    f32 fs0;
    f32 fs1;
    f32 fs2;
    f32 t0;
    u8 i;
    s16 a;

    s2 = GX->unkDC->unk5C;
    spEC = s2->speed;
    spD0 = D_801E0C88;
    p = P;
    if (func_801C5A1C(p->x, p->y + 0.5, p->z, p->x, p->y - 1.0, p->z) == 0) {
        fs2 = func_8001EAD0(ANG);
        fs1 = func_8001EB64(ANG);
        fs0 = func_8001EAD0(ANG);
        t0 = func_8001EB64(ANG);
        if (p = P, func_801C5A1C(fs2 * 5.00 + p->x, p->y + 0.5, fs1 * 5.00 + p->z, fs0 * 5.00 + p->x, p->y - 1.0, t0 * 5.00 + p->z) == 0) {
            return;
        }
    }
    if (spEC == 5.0) {}
    if (((GX->unk4 == 0x4D || GX->unk4 == 0x50) && GX->unk35B >= 2) || (GX->unk4 == 0x51 && GX->unk35B == 2)) {
        spEB = func_8012C6B4(3);
        anim = &s2->aa[0];
        s2 = 0;
        switch (anim->id) {
        case 0x1680002:
            if (anim->frame == (u16)(13.0f * spEC)) {
                SMOKE(0.02f);
            }
            break;
        case 0x168003E:
            if (anim->frame == (u16)(10.0f * spEC) || anim->frame == (u16)(28.0f * spEC)) {
                fs0 = func_8001EAD0(ANG);
                t0 = func_8001EB64(ANG);
                p = P;
                func_801E02DC(2.0 * fs0 + p->x, p->y + 3.0, 2.0 * t0 + p->z, 0.0f, 0.0f, 0.0f, 0.0f, 0xA0, 0xA0, 0xA0, 0x80, 0x80, 0x80, 0x50, -1, 0.02f, 0, 0);
            }
            break;
        case 0x168003F:
            if (anim->frame == (u16)(9.0f * spEC) || anim->frame == (u16)(18.0f * spEC)) {
                fs0 = func_8001EAD0(ANG + 0x100);
                t0 = func_8001EB64(ANG + 0x100);
                s2 = (void *)&spD0.e[spEB];
                p = P, func_801E02DC(fs0 * 3.0 + p->x, s2->y + p->y, t0 * 3.0 + p->z, 0.0f, 0.0f, 0.0f, 0.0f, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x96, -2, s2->x, 1, 0);
                SMOKE(0.02f);
            }
            if (anim->frame == (u16)(6.0f * spEC) || anim->frame == (u16)(15.0f * spEC)) {
                s2 = (void *)&spD0.e[spEB];
                fs0 = func_8001EAD0(ANG - 0x100);
                t0 = func_8001EB64(ANG - 0x100);
                p = P, func_801E02DC(fs0 * 3.0 + p->x, s2->y + p->y, t0 * 3.0 + p->z, 0.0f, 0.0f, 0.0f, 0.0f, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x96, -2, s2->x, 1, 0);
                SMOKE(0.02f);
            }
            break;
        case 0x1680040:
        case 0x168004E:
            if (anim->frame == (u16)(8.0f * spEC) || anim->frame == (u16)(17.0f * spEC)) {
                ANGS(0x280);
                s2 = (void *)&spD0.e[spEB];
                SPARK2(3.0, 0.3);
            }
            if (anim->frame == (u16)(9.0f * spEC) || anim->frame == (u16)(18.0f * spEC)) {
                s2 = (void *)&spD0.e[spEB];
                SPARK(0x100, 7.0, 0.5);
                SMOKE(0.02f);
            }
            if (anim->frame == (u16)(10.0f * spEC) || anim->frame == (u16)(19.0f * spEC)) {
                s2 = (void *)&spD0.e[spEB];
                SPARK(0x400, 3.0, 0.3);
            }
            if (anim->frame == (u16)(5.0f * spEC) || anim->frame == (u16)(14.0f * spEC)) {
                s2 = (void *)&spD0.e[spEB];
                SPARK(-0x280, 3.0, 0.3);
            }
            if (anim->frame == (u16)(6.0f * spEC) || anim->frame == (u16)(15.0f * spEC)) {
                s2 = (void *)&spD0.e[spEB];
                SPARK(-0x100, 7.0, 0.5);
                SMOKE(0.02f);
            }
            if (anim->frame == (u16)(7.0f * spEC) || anim->frame == (u16)(16.0f * spEC)) {
                s2 = (void *)&spD0.e[spEB];
                SPARK(-0x400, 3.0, 0.3);
            }
            break;
        case 0x1680015:
            if (anim->frame == (u16)(10.0f * spEC) || anim->frame == (u16)(30.0f * spEC)) {
                SMOKE(0.05f);
            }
        case 0x1680017:
        case 0x1680037:
        case 0x1680038:
            if (func_8012C6B4(0x1E) == 0) {
                SMOKE(0.05f);
            }
            break;
        case 0x168004C:
            s2 = (void *)&spD0.e[spEB];
            for (i = 0; i < 3; i++) {
                a = (func_8012C6B4(9) << 8) - 0x400;
                SPARK(a, 3.0, 0.5);
            }
            if (func_8012C6B4(2) == 0) {
                SMOKE(0.02f);
            }
            break;
        case 0x1900045:
        case 0x1900046:
        case 0x1900047:
        case 0x1900048:
        case 0x1900049:
        case 0x190004A:
        case 0x190004B:
        case 0x190004C:
        case 0x190006A:
        case 0x190006B:
        case 0x190006D:
        case 0x190006E:
        case 0x190006F:
        case 0x1900070:
        case 0x1900071:
        case 0x1900072:
            if (anim->frame < (u16)(5.0f * spEC)) {
                if (func_8012C6B4(3) == 0) {
                    SMOKE(0.02f);
                }
                s2 = (void *)&spD0.e[spEB];
                for (i = 0; i < 4; i++) {
                    a = func_8012C6B4(0x20) << 8;
                    SPARK(a, 5.0, 0.5);
                }
            }
            break;
        case 0x168004D:
        case 0x1680050:
        case 0x1680051:
        case 0x1680052:
            if (anim->frame < (u16)(5.0f * spEC)) {
                if (func_8012C6B4(2) == 0) {
                    SMOKE(0.02f);
                }
                s2 = (void *)&spD0.e[spEB];
                for (i = 0; i < 4; i++) {
                    a = func_8012C6B4(0x20) << 8;
                    SPARK(a, 2.0, 0.3);
                }
            }
        case 0x1680058:
        default:
            if (func_8012C6B4(0x1E) == 0) {
                SMOKE(0.02f);
            }
            break;
        }
    }
}
