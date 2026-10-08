#include "context.h"

struct func_80234D2C_StructPart {
    u8 pad[4];
    s16 unk4;
    s16 unk6;
};

struct func_80234D2C_StructArg {
    u8 pad0[0x98];
    struct func_80234D2C_StructPart *unk98;
    u8 pad1[0x5];
    s8 unkA1;
    u8 pad2[0x7];
    u8 unkA9;
};

s32 func_80234D2C(struct func_80234D2C_StructArg *arg0) {
    struct func_80234D2C_StructPart *temp_v0;

    temp_v0 = arg0->unk98;
    if ((temp_v0->unk6 == temp_v0->unk4) && (arg0->unkA1 >= 0) && (arg0->unkA9 & 1)) {
        return 1;
    }
    return 0;
}
