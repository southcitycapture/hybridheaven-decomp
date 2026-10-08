#include "common.h"

extern void func_801CC470(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);
extern s32 func_801CE274(void);

s32 func_801E3A24(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x03480051, 0, 0, 8.0f);
        return 6;
    }
    return 5;
}
