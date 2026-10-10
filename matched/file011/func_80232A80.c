#include "context.h"

extern u8 D_801BC348;
extern u8 D_801BC338;
extern u16 D_801BC34A;
extern u8 D_801BC314;

u8 func_80232A80(void) {
    s16 var_v1_2;
    u8 temp_a1;
    s16 var_v0_2;
    u16 temp_a0;
    u8 *temp_v0;

    var_v1_2 = 0;
    if (D_801BBBF0[0x1D] == 0) {
        var_v0_2 = ((D_801BC348 * 0x1E) / D_801BC338 - D_801BC34A / 10) + 0x46;
    } else if (D_801BBBF0[0x1D] == 1) {
        var_v0_2 = (D_801BC348 * 4 - D_801BC338 * 2 - D_801BC34A / 10) + 0x5F;
    } else if (D_801BBBF0[0x1D] == 2) {
        var_v0_2 = (D_801BC348 * 2 - D_801BC338 * 2 - D_801BC34A / 5) + 0x5F;
    }
    for (var_v1_2 = 0; var_v1_2 < 0x22; var_v1_2++) {
        if (D_801BC03C[var_v1_2 * 6 + 0xAC] >= 3) {
            var_v0_2 -= 0xA;
        }
    }
    temp_a1 = D_801BC314;
    if ((temp_a1 >= 2) && (temp_a1 < 9)) {
        var_v0_2 += 0x1E;
    }
    if ((temp_a1 == 0xC) || (*(u16 *) &D_801BBBF0[0x886] == 0xFFFF)) {
        var_v0_2 -= 0x1E;
    }
    if (var_v0_2 < 0) {
        var_v0_2 = 0;
    }
    if (var_v0_2 >= 0x5F) {
        var_v1_2 = 0;
    } else if (var_v0_2 >= 0x55) {
        var_v1_2 = 1;
    } else if (var_v0_2 >= 0x46) {
        var_v1_2 = 2;
    } else if (var_v0_2 >= 0x32) {
        var_v1_2 = 3;
    } else if (var_v0_2 >= 0x1E) {
        var_v1_2 = 4;
    } else if (var_v0_2 >= 0xF) {
        var_v1_2 = 5;
    } else {
        var_v1_2 = 6;
    }
    temp_v0 = (u8 *) &D_8017DC40 + var_v1_2 * 2;
    temp_a0 = *(u16 *) (temp_v0 + 0x8E);
    if ((s32) temp_a0 < 0xFFFF) {
        *(u16 *) (temp_v0 + 0x8E) = temp_a0 + 1;
    }
    return var_v1_2;
}
