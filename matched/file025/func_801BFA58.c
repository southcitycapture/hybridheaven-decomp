#include "context.h"

s32 func_801BFAA0();
s32 func_801BFD00();
extern s32 D_801DE828;

s32 func_801BFA58(void) {
    s32 var_v0;

    if (D_801DE828 != 0) {
        var_v0 = func_801BFAA0();
    } else {
        var_v0 = func_801BFD00();
    }
    return var_v0;
}
