#include "context.h"
extern s32 func_801CC4D8(s32 a, s32 b, s32 c, s32 d, f32 e);
extern s32 func_801CE284(void);

s32 func_801E48F0(s32 arg0, s32 arg1) {
    if (func_801CE284() != 0) {
        func_801CC4D8(0, 0x0348005E, 0, 0, 20.0f);
        return 4;
    }
    return 3;
}
