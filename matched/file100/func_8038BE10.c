#include "context.h"

struct func_8038BE10_Inner {
    u8 pad[0x3C];
    f32 unk3C;
    f32 unk40;
    f32 unk44;
};

void func_8038BE10(f32 arg0, f32 arg1, f32 arg2) {
    struct func_8038BE10_Inner *temp_v0;

    temp_v0 = (struct func_8038BE10_Inner *) D_801BBBF0.unkE8->unk2C;
    temp_v0->unk3C = temp_v0->unk3C + arg0;
    temp_v0 = (struct func_8038BE10_Inner *) D_801BBBF0.unkE8->unk2C;
    temp_v0->unk40 = temp_v0->unk40 + arg1;
    temp_v0 = (struct func_8038BE10_Inner *) D_801BBBF0.unkE8->unk2C;
    temp_v0->unk44 = temp_v0->unk44 + arg2;
}
