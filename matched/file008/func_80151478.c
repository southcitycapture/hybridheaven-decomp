#include "common.h"

s32 func_801517CC();

struct func_80151478_Struct2 {
    u8 pad[0x12];
    u16 unk12;
};

struct func_80151478_Struct1 {
    u8 pad[0x2C];
    struct func_80151478_Struct2 *unk2C;
};

struct func_80151478_Struct0 {
    u8 pad[0x24];
    struct func_80151478_Struct1 *unk24;
};

u16 func_80151478(struct func_80151478_Struct0 *arg0) {
    if (func_801517CC() != 0) {
        return arg0->unk24->unk2C->unk12;
    }
    return 0xFFFFU;
}
