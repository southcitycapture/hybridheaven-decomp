#include "common.h"

struct func_801FF3D0_Struct {
    u8 pad0[0x9E];
    u8 unk9E;
    u8 pad9F;
    u16 unkA0;
    u16 unkA2;
    u8 *unkA4;
    u16 unkA8;
};

s32 func_801FF3D0(struct func_801FF3D0_Struct *arg0) {
    u8 *temp_v1;

    if (!(arg0->unkA8 & 2)) {
        return 0;
    }
    if (arg0->unk9E != 2) {
        return 0;
    }
    arg0->unk9E = 3;
    arg0->unkA2 = 0;
    temp_v1 = arg0->unkA4;
    *temp_v1 |= 4;
    temp_v1 = arg0->unkA4;
    *temp_v1 &= 0xFFF7;
    return 1;
}
