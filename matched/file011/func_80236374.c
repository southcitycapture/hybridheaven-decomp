#include "context.h"

struct func_80236374_StructInner {
    u8 pad[0x38];
    s32 unk38;
};

struct func_80236374_StructArg {
    u8 pad[0x98];
    struct func_80236374_StructInner *unk98;
};

s32 func_80236374(struct func_80236374_StructArg *arg0) {
    struct func_80236374_StructInner *temp_v0;

    temp_v0 = arg0->unk98;
    if (((u32) temp_v0->unk38 >> 0x1F) != 0) {
        return 1;
    }
    return 0;
}
