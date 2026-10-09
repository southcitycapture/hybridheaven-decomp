#include "context.h"
extern s32 D_801E8500;
extern void func_801CC470(s32, s32, s32, s32, f32);
extern s32 func_801D2C00();

s32 func_801E5CB4(s32 arg0, s32 arg1) {
    if (func_801D2C00() == 0) {
        func_801CC470(2, 0x0320003B, 0, 0, 10.0f);
        D_801E8500 = 0;
        return 8;
    }
    return 7;
}
