#include "common.h"

s32 func_801CEDD4(void);
void func_801CC470(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);

s32 func_801E3B74(s32 arg0, s32 arg1) {
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x02A80035, 0, 0, 3.0f);
        return 6;
    }
    return 5;
}
