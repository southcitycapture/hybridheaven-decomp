#include "common.h"
extern u8 D_801BBBF0[];
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
extern s16 func_8001EF38(f32, f32);


struct func_80216550_Struct2 {
    u8 pad0[0x244];
    u16 unk244;
};
extern s32 func_8013D4A0(u8);
extern s32 func_8014B3F0(u16);
extern void func_8014B4A0(u16, f32 *);
extern s32 func_8014BC78(f32, f32, f32, f32);
extern s32 func_8014C068(u16);
extern s32 func_8014C0A8(u16);
extern s32 func_8014C1F0(u16);

#define WRAP(x) (((x) & 0x1000) ? ((x) & 0x1FFF) - 0x2000 : ((x) & 0x1FFF))
#define ABS(x) ((x) < 0 ? -(x) : (x))

s32 func_80216550(void) {
    u16 h;
    s32 v;
    f32 pos[3];
    struct func_8020C39C_StructInner *o;
    s16 ang;
    s16 pad0;
    s16 pad1;
    u8 k;
    s16 r;
    s16 x;
    s16 d;

    o = D_801BBCD0->inner;
    v = func_8014BC78(o->x, o->y, o->z, 5.0f);
    h = v;
    if (v != 0) {
        ((struct func_80216550_Struct2 *)D_801BBBF0)->unk244 = h;
        k = func_8014B3F0(((struct func_80216550_Struct2 *)D_801BBBF0)->unk244);
        if (k != 0) {
        func_8014B4A0(h, pos);
        o = D_801BBCD0->inner;
        r = ABS(o->y - pos[1]);
        if (r < 3.0) {
            ang = (s16)(0x1800 - func_8001EF38(o->z - pos[2], o->x - pos[0])) & 0x1FFF;
            o = D_801BBCD0->inner;
            o->angle = o->angle & 0x1FFF;
            if (func_8014C068(h) != 0) {
                if (func_8014C0A8(h) == 0) {
                o = D_801BBCD0->inner;
                d = ABS(WRAP((s16)(o->angle - ang)));
                if (d < 0x401) {
                    o->angle = ang;
                    if ((u8)func_8014C1F0(h) == 2) {
                        return 2;
                    }
                    return 1;
                }
                }
            } else {
                if (func_8013D4A0(k) < 0x63) {
                    D_801BBCD0->inner->angle = ang;
                    return 1;
                }
                return 0;
            }
        }
        }
    } else {
    o = D_801BBCD0->inner;
    v = func_8014BC78(o->x, o->y, o->z, 8.0f);
    h = v;
    if (v != 0) {
        *(u16 *)(D_801BBBF0 + 0x244) = h;
        k = func_8014B3F0(*(u16 *)(D_801BBBF0 + 0x244));
        if ((k & 0xFF) != 0) {
            if (func_8014C068(h) != 0) {
                if ((u8)func_8014C1F0(h) == 2) {
                    if (func_8014C0A8(h) == 0) {
        func_8014B4A0(h, pos);
        o = D_801BBCD0->inner;
        r = ABS(o->y - pos[1]);
        if (r < 3.0) {
            ang = (s16)(0x1800 - func_8001EF38(o->z - pos[2], o->x - pos[0]));
            ang = ang & 0x1FFF;
            o = D_801BBCD0->inner;
            o->angle = o->angle & 0x1FFF;
            o = D_801BBCD0->inner;
            d = ABS(WRAP((s16)(o->angle - ang)));
            if (d < 0x401) {
                o->angle = ang;
                return 2;
            }
        }
                    }
                }
            }
        }
    }
    }
    return 0;
}
