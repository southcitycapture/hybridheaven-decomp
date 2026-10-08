#include "common.h"

extern s32 func_801C1000(s32, s32);
extern s32 func_801CC470(s32, s32, s32, s32, f32);
extern s32 func_801CEDD4(void);

s32 func_801E63C0(s32 arg0, s32 arg1) {
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x02A80050, 0, 0, 3.0f);
        func_801C1000(4, 1);
        return 0x39;
    }
    return 0x38;
}
