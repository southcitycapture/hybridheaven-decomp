#include "common.h"

extern void func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);
extern s32 func_801D3620();

s32 func_801EA170(s32 arg0, s32 arg1) {
    if (func_801D3620() == 0) {
        func_801CC470(2, 0x03200061, 0, 0, 6.0f);
        return 0x17;
    }
    return 0x16;
}
