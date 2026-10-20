#include "context.h"

extern f32 D_8038BA70;

u16 func_80379490(u8 *arg0, u16 arg1, u8 arg2, f32 arg3) {
    f32 k = 1.0f;
    if ((D_801BBBF0[0x1033] & 8) && (arg0 == D_801BBBF0 + 0x7E8)) {
        return 0;
    }
    if ((arg0 == D_801BBBF0 + 0x7E8) && (*(u16 *)(D_801BBBF0 + 0x2C) != 0xA)) {
        if (D_801BBBF0[0x1D] == 1) {
            k = D_8038BA70;
        } else if (D_801BBBF0[0x1D] == 2) {
            k = 1.5f;
        }
    }
    return (u32)((((f32)(arg1 * arg2) * k) / 100.0f) * arg3);
}
