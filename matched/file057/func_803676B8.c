#include "context.h"

typedef struct func_803676B8_StructPos {
    u8 pad0[4];
    f32 x;
    f32 y;
    f32 z;
    s16 rx;
    s16 ry;
} func_803676B8_StructPos;

typedef struct func_803676B8_StructLink {
    u8 pad0[0x2C];
    func_803676B8_StructPos *pos;
    func_803676B8_StructPos *other;
} func_803676B8_StructLink;

typedef struct func_803676B8_StructParent {
    u8 pad0[0x24];
    func_803676B8_StructLink *link;
} func_803676B8_StructParent;

typedef struct func_803676B8_Struct {
    u8 pad0[0xC];
    func_803676B8_StructParent *parent;
    u8 pad10[0x38];
    f32 x;
    f32 y;
    f32 z;
    u8 count;
} func_803676B8_Struct;

extern f64 D_8038AA18;
extern void func_80367788(s32 arg0, s32 arg1);

void func_803676B8(func_803676B8_Struct *arg0, func_803676B8_StructLink **arg1) {
    func_803676B8_StructPos *pos;
    f32 x, z;
    u8 *counter;

    pos = (*arg1)->other;
    arg0->y = (f32)((f64)arg0->y - D_8038AA18);
    x = arg0->x;
    z = arg0->z;
    pos->x += x;
    pos->y += arg0->y;
    pos->z += z;
    pos->rx += 0x50;
    pos->ry += 0x70;
    counter = &arg0->count;
    if ((pos->y <= arg0->parent->link->pos->y) ||
        (++*counter >= 0x97)) {
        func_800058DC((s32)arg0, func_80367788);
    }
}
