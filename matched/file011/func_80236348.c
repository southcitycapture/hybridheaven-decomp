#include "context.h"

struct func_80236348_StructNode {
    u8 pad0[0x30];
    u32 unk30;
};

struct func_80236348_StructArg {
    u8 pad0[0x98];
    struct func_80236348_StructNode *unk98;
};

s32 func_80236348(struct func_80236348_StructArg *arg0) {
    struct func_80236348_StructNode *node;

    node = arg0->unk98;
    if (((u32) (node->unk30 << 0xB) >> 0x1E) != 0) {
        return 1;
    }
    return 0;
}
