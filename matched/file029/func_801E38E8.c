#include "common.h"

extern s32 func_801CE274();
extern void func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f12);
extern void func_801C0D04(s32 a0, s32 a1);

s32 func_801E38E8(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x01680003, 0, 0x1100, 1.0f);
        func_801C0D04(4, 0);
        return 6;
    }
    return 5;
}
