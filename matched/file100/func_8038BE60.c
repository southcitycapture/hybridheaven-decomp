#include "context.h"

struct func_8038BE60_Inner {
    u8 pad[0x48];
    f32 unk48;
    f32 unk4C;
    f32 unk50;
};

void func_8038BE60(f32 arg0, f32 arg1, f32 arg2) {
    ((struct func_8038BE60_Inner *) D_801BBBF0.unkE8->unk2C)->unk48 = arg0;
    ((struct func_8038BE60_Inner *) D_801BBBF0.unkE8->unk2C)->unk4C = arg1;
    ((struct func_8038BE60_Inner *) D_801BBBF0.unkE8->unk2C)->unk50 = arg2;
}
