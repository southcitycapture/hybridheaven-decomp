#include "common.h"

s32 func_801CC4D8(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);
extern s32 D_801E83B4;
extern s32 D_801E83BC;

s32 func_801E6A38(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x01D8838B) != 0) {
        func_801CC4D8(0, 0x03480047, 0, 0, 15.0f);
        D_801E83B4 = 0;
        D_801E83BC = 0;
        return 0x27;
    }
    return 0x26;
}
