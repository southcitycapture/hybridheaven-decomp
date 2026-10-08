#include "context.h"

extern u8 D_80176BA8[];
extern u16 D_80178BAC[];

s32 func_80130310(u32 arg0) {
    s32 var_v1;
    s32 var_v1_2;

    var_v1_2 = 0;
    if (arg0 < 0xD42U) {
loop_2:
        if (arg0 < D_80178BAC[var_v1_2]) {
            return (D_80176BA8[arg0] + (var_v1_2 << 8)) & 0xFFFF;
        }
        var_v1_2 = (var_v1_2 + 1) & 0xFF;
        if (var_v1_2 < 0x10) {
            goto loop_2;
        }
    }
    var_v1 = 0x1F;
loop_6:
    if (arg0 >= D_80178BAC[var_v1]) {
        return (D_80176BA8[arg0] + (var_v1 << 8) + 0x100) & 0xFFFF;
    }
    var_v1 = (var_v1 - 1) & 0xFF;
    if (var_v1 < 0x10) {
        return (D_80176BA8[arg0] + 0x1000) & 0xFFFF;
    }
    goto loop_6;
}
