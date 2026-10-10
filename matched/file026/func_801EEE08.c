#include "context.h"

struct func_801EEE08_Node {
    u8 pad0[0x8];
    struct func_801EEE08_Node *unk8;
};
struct func_801EEE08_Root {
    u8 pad0[0x24];
    struct func_801EEE08_Node *unk24;
};
struct func_801EEE08_Tail {
    u8 pad0[0x24];
    struct func_801EEE08_Mid *unk24;
};
struct func_801EEE08_Mid {
    u8 pad0[0x2C];
    struct func_801EEE08_Leaf *unk2C;
};
struct func_801EEE08_Leaf {
    u8 pad0[4];
    f32 unk4;
};

s32 func_801EEE08(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x070EE51A) != 0) {
        ((struct func_801EEE08_Tail *)((struct func_801EEE08_Root *)&func_801DAAF0)->unk24->unk8->unk8->unk8->unk8)->unk24->unk2C->unk4 = 5120.0f;
        return 0x16;
    }
    return 0x15;
}
