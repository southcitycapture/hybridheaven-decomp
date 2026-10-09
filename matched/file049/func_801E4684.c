#include "context.h"
extern s32 D_801E7144;
extern s32 func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);
extern void func_801CC4D8(s32, s32, s32, s32, f32);
extern s32 func_801CE274();

s32 func_801E4684(s32 arg0, s32 arg1) {
    if (D_801E7144 == 0) {
        goto case0;
    }
    if (D_801E7144 == 1) {
        goto case1;
    }
    return 0x13;
case0:
    if (func_801CE284() != 0) {
        func_801CC4D8(0, 0x0348007B, 0, 0, 5.0f);
        D_801E7144 = 1;
    }
    goto ret13;
case1:
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x0348007B, 0, 0x100, 10.0f);
        D_801E7144 = 0;
        return 0x14;
    }
ret13:
    return 0x13;
}
