#include "context.h"
extern struct func_801C3D90_StructA D_801BBBF0;

extern f32 func_8002FC20(f32);

struct func_801C3C60_Vec {
    u8 pad[0x438];
    f32 unk438;
    f32 unk43C;
    f32 unk440;
};

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

s32 func_801C3C60(struct func_801C3C60_Actor *arg0, f32 arg1) {
    f32 temp_fv1;
    f32 temp_fa1;
    f32 temp_ft4;

    temp_fv1 = ((struct func_801C3C60_Vec *) &D_801BBBF0)->unk438;
    temp_fa1 = ((struct func_801C3C60_Vec *) &D_801BBBF0)->unk43C;
    temp_ft4 = ((struct func_801C3C60_Vec *) &D_801BBBF0)->unk440;
    if (func_8002FC20((temp_fv1 * temp_fv1) + (temp_fa1 * temp_fa1) + (temp_ft4 * temp_ft4)) <= arg1) {
        arg0->unk24->unk2C->unk4 = arg0->unk24->unk2C->unk4 + temp_fv1;
        arg0->unk24->unk2C->unk8 = arg0->unk24->unk2C->unk8 + temp_fa1;
        arg0->unk24->unk2C->unkC = arg0->unk24->unk2C->unkC + temp_ft4;
        return 1;
    }
    return 0;
}
