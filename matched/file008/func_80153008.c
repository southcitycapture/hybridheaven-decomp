#include "context.h"

u16 func_80153008(void) {
    s32 var_v1;
    s32 stride;

    var_v1 = 0;
    stride = 0xC;
    if ((u16)D_8017DD8E != *(u16 *)((u8 *)&D_80183AD0)) {
        do {
            var_v1 = (var_v1 + 1) & 0xFF;
            stride = 0xC;
            if ((u16)D_8017DD8E == *(u16 *)((u8 *)&D_80183AD0 + var_v1 * stride)) {
                break;
            }
        } while (var_v1 < 0x29);
    }
    return *(u16 *)((u8 *)&D_80183AD0 + var_v1 * stride + 8);
}
