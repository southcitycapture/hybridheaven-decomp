#include "common.h"

void func_801CC4D8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);
extern s32 D_801E8220;

s32 func_801E6C6C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0) != 0) {
        func_801CC4D8(1, 0x02A8003F, 0, 0, 5.0f);
        D_801E8220 = 0;
        return 0x1F;
    }
    return 0x1E;
}
