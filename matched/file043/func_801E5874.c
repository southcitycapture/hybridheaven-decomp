#include "common.h"

extern s32 func_801CEDD4();
extern s32 func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f12);
extern s32 D_801E9800;

s32 func_801E5874(s32 arg0, s32 arg1) {
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x02A8002B, 0, 0, 5.0f);
        D_801E9800 = 0;
        return 0x10;
    }
    return 0xF;
}
