#include "context.h"

extern u8 D_8004C964[];

s32 func_80016A24(s8 *arg0) {
    s32 temp_a2;
    s32 var_a0;
    s32 var_v0;
    s32 var_v1;
    u8 *table;

    table = D_8004C964;
    var_v1 = 0;
    for (var_v0 = 0; var_v0 != 4; var_v0++) {
        var_a0 = 0;
        do {
            if (*(u8 *)arg0 == table[var_a0]) {
                temp_a2 = ((-var_v0) << 2) + 0xC;
                break;
            }
            var_a0++;
            if (var_a0 == 0x10) {
                return 0x80000000;
            }
        } while (1);
        arg0 += 1;
        var_v1 += var_a0 << temp_a2;
    }
    return var_v1;
}
