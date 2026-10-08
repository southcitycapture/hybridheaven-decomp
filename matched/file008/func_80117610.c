#include "common.h"

typedef struct func_80117610_Struct {
    u8 pad0[0x18E];
    u16 unk18E;
    u16 unk190;
    u8 pad1[0x1D8 - 0x192];
    u16 unk1D8;
    u8 pad2[2];
    u16 unk1DC;
} func_80117610_Struct;

extern func_80117610_Struct D_801BBBF0;

s32 func_80117610(s32 arg0) {
    if (D_801BBBF0.unk18E == 0) {
        D_801BBBF0.unk18E = 1;
        D_801BBBF0.unk190 = 3;
        D_801BBBF0.unk1D8 = 1;
        D_801BBBF0.unk1DC = 0;
        return 1;
    }
    return 0;
}
