#include "common.h"

extern s32 func_801CC4D8(s32, s32, s32, s32, f32);
extern s32 D_801EA6EC;

s32 func_801E6234(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x4F587F) != 0) {
        func_801CC4D8(0, 0x0348006D, 0, 0, 3.0f);
        D_801EA6EC = 0;
        return 6;
    }
    return 5;
}
