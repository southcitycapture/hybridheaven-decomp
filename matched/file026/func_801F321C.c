#include "context.h"

extern f32 D_801FD0E4;
extern f32 D_801FD0E8;
extern f32 D_801FD0EC;

s32 func_801F321C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x049F1095) != 0) {
        return 0x14;
    }
    D_801BBBF0.unkE8->unk2C->unk30 += D_801FD0E4;
    D_801BBBF0.unkE8->unk2C->unk34 += D_801FD0E8;
    D_801BBBF0.unkE8->unk2C->unk38 += D_801FD0EC;
    return 0x13;
}
