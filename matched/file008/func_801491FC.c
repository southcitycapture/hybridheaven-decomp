#include "context.h"

extern u16 D_801BBC1C;

s32 func_801491FC(void) {
    s32 var_s0;
    s32 var_v1;

    var_s0 = func_80126E88(0x125) & 0xFF;
    var_s0 += func_80126E88(0x127);
    var_s0 &= 0xFF;
    if (D_801BBC1C == 0xA) {
        var_s0 += func_80126E88(0x111);
        var_s0 &= 0xFF;
        var_s0 += func_80126E88(0x110);
        var_s0 &= 0xFF;
        var_v1 = 4;
    } else if (func_80236C9C() != 0) {
        var_s0 += func_80126E88(0x10F);
        var_s0 &= 0xFF;
        var_s0 += func_80126E88(0x110);
        var_s0 &= 0xFF;
        var_v1 = 4;
    } else {
        var_s0 += func_80126E88(0x10F);
        var_s0 &= 0xFF;
        var_v1 = 3;
    }
    if (var_v1 == var_s0) {
        return 1;
    }
    return 0;
}
