#include "common.h"

struct func_8038BDC0_Inner {
    u8 pad[0x30];
    f32 unk30;
    f32 unk34;
    f32 unk38;
};

struct func_8038BDC0_Outer {
    u8 pad[0x2C];
    struct func_8038BDC0_Inner *unk2C;
};

struct func_8038BDC0_Glob {
    u8 pad[0xE8];
    struct func_8038BDC0_Outer *unkE8;
};

extern struct func_8038BDC0_Glob D_801BBBF0;

void func_8038BDC0(f32 arg0, f32 arg1, f32 arg2) {
    struct func_8038BDC0_Inner *temp_v0;

    temp_v0 = D_801BBBF0.unkE8->unk2C;
    temp_v0->unk30 = temp_v0->unk30 + arg0;
    temp_v0 = D_801BBBF0.unkE8->unk2C;
    temp_v0->unk34 = temp_v0->unk34 + arg1;
    temp_v0 = D_801BBBF0.unkE8->unk2C;
    temp_v0->unk38 = temp_v0->unk38 + arg2;
}
