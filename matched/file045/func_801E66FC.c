#include "context.h"

extern s32 D_801E8570;
extern s32 func_801D2F30();
extern void func_801CC470(s32, s32, s32, s32, f32);

s32 func_801E66FC(s32 arg0, s32 arg1) {
    if (func_801D2F30() == 0) {
        func_801CC470(3, 0x03200039, 0, 0, 3.0f);
        D_801E8570 = 0;
        return 0xD;
    }
    return 0xC;
}
