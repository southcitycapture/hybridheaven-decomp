#include "common.h"

struct func_801C3D90_StructB {
    u8 pad[0x63];
    u8 unk63;
};

struct func_801C3D90_StructA {
    u8 pad[0xDC];
    struct func_801C3D90_StructB *unkDC;
    s32 unkE0;
};

extern struct func_801C3D90_StructA D_801BBBF0;

s32 func_801C3D90(void) {
    if ((D_801BBBF0.unkE0 != 0) && (D_801BBBF0.unkDC->unk63 != 0)) {
        return 1;
    }
    return 0;
}
