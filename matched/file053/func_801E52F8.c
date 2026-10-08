#include "common.h"

s32 func_801CEDE4();
void func_801CC4D8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);

s32 func_801E52F8(s32 arg0, s32 arg1) {
    if (func_801CEDE4() != 0) {
        func_801CC4D8(1, 0x0410002F, 0, 0, 30.0f);
        return 6;
    }
    return 5;
}
