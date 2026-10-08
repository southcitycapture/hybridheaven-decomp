#include "common.h"

extern void func_801C0D04(s32 a0, s32 a1);
extern void func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f12);
extern s32 func_801CE274();

s32 func_801E82F4(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x01B8001B, 0, 0x1100, 1.0f);
        func_801C0D04(4, 0);
        return 0xA;
    }
    return 9;
}
