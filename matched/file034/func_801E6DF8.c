#include "common.h"

extern s32 func_801C1000(s32, s32);
extern s32 func_801CC470(s32, s32, s32, s32, f32);

s32 func_801E6DF8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x5B8D80) != 0) {
        func_801CC470(2, 0x02A80024, 0, 0x1000, 5.0f);
        func_801C1000(4, 2);
        return 0x14;
    }
    return 0x13;
}
