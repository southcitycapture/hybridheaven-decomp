#include "common.h"

struct func_802253B8_Struct {
    u8 pad0[0x2C];
    u16 unk2C;
    u8 pad1[0xDC - 0x2E];
    s32 unkDC;
};

extern struct func_802253B8_Struct D_801BBBF0;

s32 func_802253B8(s32 arg0) {
    if ((arg0 == D_801BBBF0.unkDC) && (D_801BBBF0.unk2C != 0xF)) {
        return 0;
    }
    if ((D_801BBBF0.unk2C == 0xA) || (D_801BBBF0.unk2C == 0xB)) {
        return 1;
    }
    return 0x80;
}
