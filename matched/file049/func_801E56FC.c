#include "common.h"

extern s32 func_801D2C10();
extern void func_801CC4D8(s32, s32, s32, s32, f32);

s32 func_801E56FC(s32 arg0, s32 arg1) {
    if (func_801D2C10() != 0) {
        func_801CC4D8(2, 0x0320001A, 0, 0, 30.0f);
        return 8;
    }
    return 7;
}
