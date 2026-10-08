#include "context.h"

extern u8 D_8017DD7C;
extern u8 D_8017DD7D;

u8 func_80152C90(s32 arg0) {
    u8 var_v1;
    s32 *sp;

    sp = &arg0;
    arg0 = arg0 & 0xFF;
    if (arg0 == 0) {
        var_v1 = D_8017DD7C;
    } else {
        var_v1 = D_8017DD7D;
    }
    if ((s32) var_v1 >= 0x64) {
        var_v1 = 0x63;
    }
    return var_v1;
}
