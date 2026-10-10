#include "context.h"

void func_8037D418(u8 *arg0, u8 *arg1, s32 arg2) {
    s16 temp_a0;
    s16 var_v1;
    u8 var_v0;

    temp_a0 = 0xF5 - (s16) (s32) (func_8037D3A0(arg1) * 10.0f);
    var_v1 = temp_a0;
    var_v0 = *arg1;
    if (var_v0 != 0) {
        do {
            *arg0 = var_v0;
            var_v0 = arg1[1];
            arg0 += 1;
            arg1 += 1;
        } while (var_v0 != 0);
    }
    if ((temp_a0 % 10) == 5) {
        arg0[0] = 0xA1;
        arg0[1] = 0xB8;
        arg0 += 2;
        var_v1 = temp_a0 - 5;
    }
    if (var_v1 > 0) {
        do {
            var_v1 -= 0xA;
            *arg0 = 0x20;
            arg0 += 1;
        } while (var_v1 > 0);
    }
    *arg0 = 0;
}
