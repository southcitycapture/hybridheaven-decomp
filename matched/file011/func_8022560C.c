#include "context.h"

extern s32 *D_8023C8D0[];

s32 func_8022560C(u8 *arg0) {
    s32 *row;
    s32 var_a1;
    s32 val;

    row = (s32 *)D_8023C8D0[arg0[0x75]];
    val = *(s32 *)(arg0 + 0x1C);
    var_a1 = 0;
    do {
        if (val == row[var_a1]) {
            return var_a1;
        }
        var_a1 = (var_a1 + 1) & 0xFF;
    } while (var_a1 < 0x26);
    return 0xFF;
}
