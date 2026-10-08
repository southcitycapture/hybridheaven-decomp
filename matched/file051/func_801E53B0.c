#include "common.h"

s32 func_801CEDD4();
void func_801CC470(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);

s32 func_801E53B0(s32 arg0, s32 arg1) {
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x01B8002C, 0, 0, 5.0f);
        return 0x16;
    }
    return 0x15;
}
