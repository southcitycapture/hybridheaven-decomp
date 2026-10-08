#include "context.h"

struct func_8038BEAC_Inner {
    u8 pad[0x1C];
    f32 unk1C;
};

struct func_8038BEAC_Outer {
    u8 pad[0x2C];
    struct func_8038BEAC_Inner *unk2C;
};

extern struct func_8038BEAC_Outer *D_801BBCD8;

void func_8038BEAC(void) {
    D_801BBCD8->unk2C->unk1C = 33.0f;
}
