#include "context.h"

extern f32 D_801FC8F4;

struct func_801EE9F8_Leaf {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x2];
    s16 unk12;
};
struct func_801EE9F8_Node24 {
    u8 pad0[0x2C];
    struct func_801EE9F8_Leaf *unk2C;
};
struct func_801EE9F8_Node {
    u8 pad0[0x8];
    struct func_801EE9F8_Node *unk8;
    u8 pad1[0x18];
    struct func_801EE9F8_Node24 *unk24;
};
struct func_801EE9F8_Slot {
    struct func_801EE9F8_Node *unk0;
};

s32 func_801EE9F8(s32 arg0, s32 arg1) {
    struct func_801EE9F8_Slot *slot;

    if (func_801C0B8C(0x05F49B7A) != 0) {
        slot = (struct func_801EE9F8_Slot *) &D_801DAB14;
        slot->unk0->unk8->unk8->unk8->unk8->unk24->unk2C->unk4 = -199.0f;
        slot->unk0->unk8->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        slot->unk0->unk8->unk8->unk8->unk8->unk24->unk2C->unkC = D_801FC8F4;
        slot->unk0->unk8->unk8->unk8->unk8->unk24->unk2C->unk12 = 0x800;
        func_801CC470(3, 0x02A8001E, 0x2D, 0x1000, 9.0f);
        return 0xD;
    }
    return 0xC;
}
