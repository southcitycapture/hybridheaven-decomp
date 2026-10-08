#include "common.h"

extern void func_801CC4D8(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);
extern s32 D_801E8220;

s32 func_801E6DD8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x989680) != 0) {
        func_801CC4D8(1, 0x02A8003D, 0, 0, 5.0f);
        D_801E8220 = 0;
        return 0x21;
    }
    return 0x20;
}
