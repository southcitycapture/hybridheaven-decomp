#include "common.h"

extern s32 D_8023C8D0[];

s32 func_8022559C(s32 arg0) {
    s32 *row;
    u16 var_v0;
    u8 var_a0;

    for (var_v0 = 0; var_v0 < 0xA; var_v0++) {
        row = (s32 *) D_8023C8D0[var_v0];
        for (var_a0 = 0; var_a0 < 0x26; var_a0++) {
            if (arg0 == row[var_a0]) {
                return var_a0;
            }
        }
    }
    return 0xFF;
}
