#include "context.h"

extern s32 func_801C80CC();
extern void func_8037BB4C(s16, s32, s32, s16);

s32 func_801FD644(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s16 arg4, s32 arg5, s32 arg6, s16 arg7) {
    if (func_801C80CC(arg0, arg1) != 0) {
        func_8037BB4C(arg4, arg5, arg6, arg7);
        return 1;
    }
    return 0;
}
