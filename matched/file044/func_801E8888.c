#include "common.h"

extern s32 func_801CEDD4(void);
extern void func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);

s32 func_801E8888(s32 arg0, s32 arg1) {
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x02A80054, 0, 0x100, 7.0f);
        return 0x1B;
    }
    return 0x1A;
}
