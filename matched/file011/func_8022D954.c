#include "common.h"

f32 func_8001EAD0(s16);
extern u8 D_801BBBF0[];
extern f32 D_8023FA28;
extern f32 D_8023FA2C;

s32 func_8022D954(s32 arg0) {
    s32 var_v0;
    s16 var_a0;

    var_v0 = (s32) D_801BBBF0;
    if (arg0 == var_v0 + 0x44C) {
        var_a0 = *(u16 *) (var_v0 + 0x30) << 7;
        return (s16) (s32) (func_8001EAD0(var_a0) * D_8023FA28);
    } else {
        var_a0 = (*(u16 *) (var_v0 + 0x30) << 7) + 0x1000;
        return (s16) (s32) (func_8001EAD0(var_a0) * D_8023FA2C);
    }
}
