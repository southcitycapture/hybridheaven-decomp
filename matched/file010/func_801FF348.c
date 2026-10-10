#include "context.h"

extern void (*D_8021793C[])();

struct func_801FF348_Struct {
    u8 pad0[0x9E];
    u8 unk9E;
    u8 pad9F;
    u16 unkA0;
    u16 unkA2;
    u8 *unkA4;
    u16 unkA8;
};

extern void (*D_80217948[])();

s32 func_801FF348(struct func_801FF348_Struct *arg0) {
    void (*temp_v1)();
    u8 *temp_v0;

    if (!(arg0->unkA8 & 2)) {
        return 0;
    }
    if (arg0->unk9E != 0) {
        return 0;
    }
    arg0->unk9E = 1;
    temp_v0 = arg0->unkA4;
    arg0->unkA2 = 0;
    *temp_v0 |= 0xC;
    temp_v1 = D_80217948[arg0->unkA0];
    if (temp_v1 != NULL) {
        temp_v1();
    }
    return 1;
}
