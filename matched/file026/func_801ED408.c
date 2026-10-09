#include "context.h"

extern f32 D_801FC8A0;
extern f32 D_801FC8A4;

s32 func_801ED408(s32 arg0, s32 arg1) {
    struct func_801ECF08_Node **p;

    if (func_801C0B8C(0x040D9900) != 0) {
        p = (struct func_801ECF08_Node **)((u32)&func_801DAAF0.unk24);
        (*p)->unk8->unk8->unk24->unk2C->unk4 = D_801FC8A0;
        (*p)->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        (*p)->unk8->unk8->unk24->unk2C->unkC = D_801FC8A4;
        (*p)->unk8->unk8->unk24->unk2C->unk12 = 0x1800;
        func_801CC470(1, 0x01B8000E, 0, 0x100, 6.0f);
        return 0x13;
    }
    return 0x12;
}
