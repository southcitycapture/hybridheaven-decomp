#include "context.h"

s32 func_801C4700(s32 arg0, s32 arg1, s32 arg2) {
    if (arg0 == arg1) {
        return arg1;
    }
    if (arg0 < arg1) {
        arg0 = arg0 + arg2;
        if (arg0 >= arg1) {
            arg0 = arg1;
        }
        goto block_ret;
    }
    arg0 = arg0 - arg2;
    if (arg1 < arg0) {
        goto block_ret;
    }
    arg0 = arg1;
block_ret:
    return arg0;
}
