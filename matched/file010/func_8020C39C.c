#include "context.h"

struct func_8020C39C_StructInner {
    u8 pad0[4];
    f32 x, y, z;
    u8 pad10[2];
    s16 angle;
};
struct func_8020C39C_StructOuter {
    u8 pad0[0x22];
    u8 active;
    u8 pad23[0xD];
    struct func_8020C39C_StructInner *inner;
};
struct func_8020C39C_StructActor {
    u8 pad0[0x3C];
    u16 timer;
    u8 pad3E[0x52];
    u8 state;
    u8 pad91[3];
    f32 x, y, z;
};
struct func_8020C39C_StructPlayer {
    u8 pad0[0x2C];
    struct func_8020C39C_StructInner *inner;
};
extern struct func_8020C39C_StructPlayer *D_801BBCD0;
extern u16 D_80217CB0[];
extern f32 D_8021AA40;
extern s32 func_801C3D20(f32, f32, f32);

s32 func_8020C39C(struct func_8020C39C_StructActor *arg0, struct func_8020C39C_StructOuter **arg1) {
    s32 old;
    struct func_8020C39C_StructInner *inner;
    s32 state;

    state = arg0->state;
    if (state == 2) goto L2;
    if (state != 7) goto end;
    goto L7;
L2:
    if (func_801C3D20(arg0->x, arg0->z, 30.0f)) {
        if (arg0->y <= D_801BBCD0->inner->y && D_801BBCD0->inner->y < arg0->y + 4.0f) {
            arg0->state = 7;
            arg0->timer = 0;
        }
    }
    state = arg0->state;
    if (1) goto end;
L7:
    old = arg0->timer++;
    func_8012CF8C(arg0, (u8 *)arg1[0]->inner + 0x40, 0xD2, D_80217CB0[arg0->timer % 6]);
    if (old == 45) {
        func_80380F94(arg0->x, arg0->y, arg0->z, 0.0f, 0.0f, 0.0f, 4);
        func_801FC830(arg0->x, arg0->y, arg0->z, 400.0f, 0x3D2);
        if (func_80150584() == 0 && func_801FD644(arg0->x, arg0->y, arg0->z, 20.0f, (s16)(D_801BBCD0->inner->angle + 0x1000) & 0x1FFF, 3.0f, D_8021AA40, 15)) {
            func_80380F94(arg0->x, arg0->y, arg0->z, 0.0f, 0.0f, 0.0f, 2);
        }
    }
    if (old >= 47) {
        arg0->state = 0;
        arg1[0]->active = 0;
        arg1[1]->active = 0;
    }
    state = arg0->state;
end:
    if (state) {
        arg1[0]->inner->x = arg0->x;
        arg1[0]->inner->y = arg0->y;
        arg1[0]->inner->z = arg0->z;
        arg1[1]->inner->x = arg0->x;
        arg1[1]->inner->y = arg0->y;
        arg1[1]->inner->z = arg0->z;
        inner = arg1[1]->inner;
        inner->angle = (s16)(inner->angle + 0x5B) & 0x1FFF;
    }
    return 1;
}
