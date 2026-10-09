#include "context.h"

extern u16 D_800CBABE;
extern u16 D_800CBAC2;
extern u32 D_801B5520;

s32 func_80020D6C(void) {
    s32 var_v1;

    var_v1 = D_800CBABE + D_800CBAC2;
    if ((var_v1 == 0) && (D_801B5520 != 0) && ((u32) D_801B5520 < 0x100U)) {
        var_v1 = -1;
    }
    return var_v1;
}
