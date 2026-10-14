#include "context.h"

struct func_8038BD88_Inner {
    u8 pad[0x3C];
    f32 unk3C;
    f32 unk40;
    f32 unk44;
};

struct func_8038BD88_Outer {
    u8 pad[0x2C];
    struct func_8038BD88_Inner *unk2C;
};

struct func_8038BD88_Glob {
    u8 pad[0xE8];
    struct func_8038BD88_Outer *unkE8;
};

void func_8038BD88(f32 arg0, f32 arg1, f32 arg2) {
    ((struct func_8038BD88_Glob *) &D_801BBBF0)->unkE8->unk2C->unk3C = arg0;
    ((struct func_8038BD88_Glob *) &D_801BBBF0)->unkE8->unk2C->unk40 = arg1;
    ((struct func_8038BD88_Glob *) &D_801BBBF0)->unkE8->unk2C->unk44 = arg2;
}
