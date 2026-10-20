#include "common.h"

s32 func_801CEDD4();
extern s32 func_801CC470(s32, s32, s32, s32, f32);

s32 func_801E54EC(s32 arg0, s32 arg1) {
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x0348008B, 0, 0, 1.0f);
        return 0x13;
    }
    return 0x12;
}
