#include "context.h"

struct func_801479A8_Sub {
    u8 pad0[0x34];
    s32 unk34;
};

struct func_801479A8_Node {
    u8 pad0[0x10];
    struct func_801479A8_Node *unk10;
    u8 pad1[0x18];
    struct func_801479A8_Sub *unk2C;
};

struct func_801479A8_Arg {
    u8 pad0[0x24];
    struct func_801479A8_Node *unk24;
};

s32 func_801479A8(struct func_801479A8_Arg *arg0) {
    struct func_801479A8_Node *var_v0;

    if (arg0 != NULL) {
        var_v0 = arg0->unk24;
        if (var_v0 != NULL) {
            do {
                var_v0->unk2C->unk34 = 0;
                var_v0 = var_v0->unk10;
            } while (var_v0 != NULL);
        }
        return 1;
    }
    return 0;
}
