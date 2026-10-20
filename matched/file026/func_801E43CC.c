#include "context.h"

extern f32 D_801FBFC8;

struct func_801E43CC_StructLeaf {
    u8 pad[0x12];
    s16 unk12;
};
struct func_801E43CC_StructMid {
    u8 pad[0x30];
    struct func_801E43CC_StructLeaf *unk30;
};
struct func_801E43CC_StructRoot {
    u8 pad[0x14];
    struct func_801E43CC_StructMid *unk14;
};

s32 func_801E43CC(s32 arg0, s32 arg1) {
    struct func_801E43CC_StructLeaf *temp_v0;

    if (func_801C0B8C(0x069D4490) != 0) {
        temp_v0 = ((struct func_801E43CC_StructRoot *)D_8038D8D0)->unk14->unk30;
        temp_v0->unk12 = (s16)(temp_v0->unk12 + (s16)D_801FBFC8);
        if (func_801C0B8C(0x06CB0B50) != 0) {
            return 3;
        }
    }
    return 2;
}
