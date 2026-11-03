#include "common.h"
struct func_801C4848_Vec {
    u8 pad0[4];
    f32 x;
    u8 pad1[4];
    f32 y;
};
struct func_801C4848_Obj {
    u8 pad0[0x2C];
    struct func_801C4848_Vec *vec;
};
extern struct func_801C4848_Obj *D_801BBCD0;
struct func_801C3C60_Node {
    u8 pad[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
};
struct func_801C3C60_Mid {
    u8 pad[0x2C];
    struct func_801C3C60_Node *unk2C;
};
struct func_801C3C60_Actor {
    u8 pad[0x24];
    struct func_801C3C60_Mid *unk24;
};


s32 func_801C47E0(struct func_801C3C60_Actor *arg0, f32 arg1) {
    f32 d;

    d = ((arg0->unk24->unk2C->unk4 - D_801BBCD0->vec->x) * (arg0->unk24->unk2C->unk4 - D_801BBCD0->vec->x)) +
        ((arg0->unk24->unk2C->unkC - D_801BBCD0->vec->y) * (arg0->unk24->unk2C->unkC - D_801BBCD0->vec->y));
    if (d < (arg1 * arg1)) {
        return 1;
    }
    return 0;
}
