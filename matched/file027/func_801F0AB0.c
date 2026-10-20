#include "context.h"

struct func_801F0AB0_StructLeaf {
    u8 pad[0x12];
    s16 unk12;
};
struct func_801F0AB0_StructMid {
    u8 pad[0x2C];
    struct func_801F0AB0_StructLeaf *unk2C;
};
struct func_801F0AB0_StructNode {
    u8 pad[8];
    struct func_801F0AB0_StructNode *unk8;
    u8 padC[0x18];
    struct func_801F0AB0_StructMid *unk24;
};
extern s32 D_801F4D08;

s32 func_801F0AB0(s32 arg0, s32 arg1) {
    (*(struct func_801F0AB0_StructNode **)(func_801DAAF0 + 0x24))->unk8->unk8->unk8->unk24->unk2C->unk12 = 0xB8E;
    D_801F4D08 = 0;
    return 9;
}
