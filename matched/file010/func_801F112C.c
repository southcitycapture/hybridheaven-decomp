#include "context.h"

extern u16 D_801BCAE0;

s32 func_801F112C(void) {
    s32 var_v1;

    var_v1 = 0;
    if (D_801BCAE0 & 0x10) {
        var_v1 = 1;
    }
    if (D_801BCAE0 & 2) {
        var_v1 = (var_v1 + 1) & 0xFF;
    }
    if (D_801BCAE0 & 4) {
        var_v1 = (var_v1 + 1) & 0xFF;
    }
    if (D_801BCAE0 & 8) {
        var_v1 = (var_v1 + 1) & 0xFF;
    }
    if (D_801BCAE0 & 0x40) {
        var_v1 = (var_v1 + 1) & 0xFF;
    }
    if (D_801BCAE0 & 0x200) {
        var_v1 = (var_v1 + 1) & 0xFF;
    }
    if (D_801BCAE0 & 0x400) {
        var_v1 = (var_v1 + 1) & 0xFF;
    }
    if (D_801BCAE0 & 0x1000) {
        var_v1 = (var_v1 + 1) & 0xFF;
    }
    return var_v1;
}
