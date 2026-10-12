#include "context.h"

struct func_801E6F9C_Leaf {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};
struct func_801E6F9C_L4 {
    u8 pad0[0x2C];
    struct func_801E6F9C_Leaf *unk2C;
};
struct func_801E6F9C_L3 {
    u8 pad0[0x24];
    struct func_801E6F9C_L4 *unk24;
};
struct func_801E6F9C_L2 {
    u8 pad0[8];
    struct func_801E6F9C_L3 *unk8;
};
struct func_801E6F9C_L1 {
    u8 pad0[8];
    struct func_801E6F9C_L2 *unk8;
};

extern f32 D_801E8948;
extern f32 D_801E894C;

s32 func_801E6F9C(s32 arg0, s32 arg1) {
    struct func_801E6F9C_L1 **pp;
    if (func_801C0B8C(0xE4E1C0) != 0) {
        pp = (struct func_801E6F9C_L1 **) func_801DAAF0;
        pp += 9;
        (*pp)->unk8->unk8->unk24->unk2C->unk4 = D_801E8948;
        (*pp)->unk8->unk8->unk24->unk2C->unk8 = D_801E894C;
        (*pp)->unk8->unk8->unk24->unk2C->unkC = 552.0f;
        (*pp)->unk8->unk8->unk24->unk2C->unk12 = 0xABC;
        return 0x26;
    }
    return 0x25;
}
