#include "common.h"
typedef struct func_802474E4_StructNode {
    u8 pad0[0x4];
    f32 unk4;
    u8 pad8[0x4];
    f32 unkC;
    u8 pad10[0x2];
    s16 unk12;
} func_802474E4_StructNode;
typedef struct func_802474E4_StructMid {
    u8 pad0[0x2C];
    func_802474E4_StructNode *unk2C;
} func_802474E4_StructMid;
extern func_802474E4_StructMid *D_801BBCD0;
extern s8 D_8025C704;
extern s16 D_8025C7E6;
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_8037BB4C(s16, f32, f32, s16);


extern u8 D_8025BFC8[];
extern f32 D_8025C580__load;
extern f32 D_8002FC20(f32);
extern void D_80127430(f32, f32, f32, s32, f32, f32);

typedef struct func_80244CEC_StructNode {
    u8 pad[4];
    f32 x, y, z;
    u8 pad10[2];
    s16 id;
} func_80244CEC_StructNode;
typedef struct func_80244CEC_StructMid {
    u8 pad[0x2C];
    func_80244CEC_StructNode *node;
} func_80244CEC_StructMid;
typedef struct func_80244CEC_StructObj {
    u8 pad[0x24];
    func_80244CEC_StructMid *mid;
} func_80244CEC_StructObj;

s32 func_80244CEC(func_80244CEC_StructObj *arg0) {
    s32 pad[3];
    f32 sp50;
    f32 dZ, length, y;
    f32 z;
    f32 x, dx, dy;
    f32 z0, az, ax;
    func_80244CEC_StructNode *p, *q;

    p = ((func_80244CEC_StructMid *)D_801BBCD0)->node;
    x = p->x;
    z0 = p->z;
    length = D_8002FC20(x*x + z0*z0);
    if (*(u8 *)&D_8025C704 != 0) {
        p = ((func_80244CEC_StructMid *)D_801BBCD0)->node;
        x = p->x;
        if (x < 0.0f) ax = -x; else ax = x;
        z0 = p->z;
        if (z0 < 0.0f) az = -z0; else az = z0;
        if (az + ax > 40.0f) {
            func_8011AAF4(D_8025BFC8, 0x169, arg0, 0, 1, 4.0f,
                x / length * -120.0f + x, 270.0f,
                z0 / length * -120.0f + z0, 4294967296.0f,
                x, p->y + 20.0f, z0, 0.0f, 35.0f, -1, -1);
        }
    }
    p = ((func_80244CEC_StructMid *)D_801BBCD0)->node;
    q = arg0->mid->node;
    sp50 = q->x;
    y = q->y;
    dx = p->x - sp50;
    z = q->z;
    dy = p->y - y;
    dZ = p->z - z;
    if (dx*dx + dy*dy + dZ*dZ < 1600.0f) {
        D_80127430(sp50, y, z, 0x6BD, D_8025C580__load, 1.0f);
        func_8037BB4C(arg0->mid->node->id, 2.0f, 2.0f, D_8025C7E6);
        return 0;
    }
    return 0;
}
