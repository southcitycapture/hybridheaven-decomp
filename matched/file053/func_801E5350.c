#include "common.h"

extern s32 func_801CEDD4();
extern void func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);

s32 func_801E5350(s32 arg0, s32 arg1) {
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x0410002F, 0, 0, 5.0f);
        return 7;
    }
    return 6;
}
