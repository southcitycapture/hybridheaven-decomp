#include "context.h"

extern f32 D_801FD098;
extern f32 D_801FD09C;
extern f32 D_801FD0A0;
extern f32 D_801FD0A4;
extern f32 D_801FD0A8;
extern f32 D_801FD0AC;

s32 func_801F2F64(s32 arg0, s32 arg1) {
    struct func_801E7ECC_Struct1 *p;

    if (func_801C0B8C((u64) 0x043440D5) != 0) {
        func_8038BD50(D_801FD098, D_801FD09C, 54.0f);
        D_8038BD88(21.5f, D_801FD0A0, -16.8f);
        return 0x12;
    }
    p = &D_801BBBF0;
    p->unkE8->unk2C->unk30 = p->unkE8->unk2C->unk30 + D_801FD0A4;
    p->unkE8->unk2C->unk34 = p->unkE8->unk2C->unk34 + D_801FD0A8;
    p->unkE8->unk2C->unk38 = p->unkE8->unk2C->unk38 + D_801FD0AC;
    return 0x11;
}
