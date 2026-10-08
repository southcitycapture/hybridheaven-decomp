#include "context.h"

struct func_8038BE98_Inner {
    u8 pad[0x1C];
    f32 unk1C;
};

struct func_8038BE98_Outer {
    u8 pad[0x2C];
    struct func_8038BE98_Inner *unk2C;
};

extern struct func_8038BE98_Outer *D_801BBCD8;

void func_8038BE98(f32 arg0) {
    D_801BBCD8->unk2C->unk1C = arg0;
}
