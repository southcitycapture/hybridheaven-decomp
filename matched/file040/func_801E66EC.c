#include "common.h"

extern s32 func_801CE284(void);
extern void func_801CC4D8(s32 a, s32 b, s32 c, s32 d, f32 scale);
extern s32 D_801E83B4;

s32 func_801E66EC(s32 arg0, s32 arg1) {
    if (func_801CE284() != 0) {
        func_801CC4D8(0, 0x0348007B, 0, 0, 5.0f);
        D_801E83B4 = 0;
        return 0x18;
    }
    return 0x17;
}
