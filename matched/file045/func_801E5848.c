#include "common.h"

extern void func_801CC470(s32, s32, s32, s32, f32);
extern s32 func_801CEDD4(void);
extern s32 D_801E84B8;

s32 func_801E5848(s32 arg0, s32 arg1) {
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x02A8004D, 0, 0, 5.0f);
        D_801E84B8 = 0;
        return 8;
    }
    return 7;
}
