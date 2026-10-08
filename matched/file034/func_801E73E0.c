#include "common.h"

extern s32 func_801CC4D8(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);
extern s32 D_801E8E98;

s32 func_801E73E0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x011BD040) != 0) {
        func_801CC4D8(2, 0x02A80027, 0, 0x1000, 15.0f);
        D_801E8E98 = 0;
        return 0x20;
    }
    return 0x1F;
}
