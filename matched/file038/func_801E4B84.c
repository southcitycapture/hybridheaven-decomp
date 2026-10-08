#include "common.h"

extern s32 func_801CC470(s32, s32, s32, s32, f32);
extern s32 func_801CE274(void);

s32 func_801E4B84(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x03480060, 0, 0, 3.0f);
        return 0xA;
    }
    return 9;
}
