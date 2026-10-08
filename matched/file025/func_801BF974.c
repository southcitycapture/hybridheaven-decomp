#include "context.h"

s32 func_801BF974(s32 arg0) {
    s32 var_v1;

    if (arg0 == -1) {
        return 0;
    }
    var_v1 = 1;
    if (arg0 != 0) {
        var_v1 = 1 << arg0;
    }
    return var_v1;
}
