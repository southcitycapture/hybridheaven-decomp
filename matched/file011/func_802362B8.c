#include "context.h"

u8 func_802362B8(void *arg0) {
    u8 spC[10];
    s32 var_v1;
    u8 var_v0;

    var_v0 = ((u8 *) arg0)[0xA7];
    for (var_v1 = 1; var_v1 < 0xA; var_v1 = (var_v1 + 1) & 0xFF) {
        if ((s32) var_v0 < 5) {
            spC[var_v1] = var_v0;
            var_v0 = 0;
        } else {
            var_v0 = (var_v0 - 5) & 0xFF;
            spC[var_v1] = 5;
        }
    }
    return spC[(s8) ((u8 *) arg0)[0xA1]];
}
