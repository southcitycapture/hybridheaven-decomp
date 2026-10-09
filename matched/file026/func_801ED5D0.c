#include "context.h"

extern f32 D_801FC8B0;
extern f32 D_801FC8B4;

struct func_801ED5D0_Struct3 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};
struct func_801ED5D0_Struct2 {
    u8 pad0[0x2C];
    struct func_801ED5D0_Struct3 *unk2C;
};
struct func_801ED5D0_Node {
    u8 pad0[8];
    struct func_801ED5D0_Node *unk8;
    u8 pad1[0x18];
    struct func_801ED5D0_Struct2 *unk24;
};

s32 func_801ED5D0(s32 arg0, s32 arg1) {
    struct func_801ED5D0_Node **pp;

    if (func_801C0B8C(0x04FFB42A) != 0) {
        pp = (struct func_801ED5D0_Node **)&func_801DAAF0;
        pp += 9;
        (*pp)->unk8->unk8->unk24->unk2C->unk4 = D_801FC8B0;
        (*pp)->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        (*pp)->unk8->unk8->unk24->unk2C->unkC = D_801FC8B4;
        (*pp)->unk8->unk8->unk24->unk2C->unk12 = 0x1800;
        func_801CC470(1, 0x02A80017, 0, 0, 1.0f);
        return 0x15;
    }
    return 0x14;
}
