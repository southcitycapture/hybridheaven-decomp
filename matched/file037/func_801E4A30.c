#include "context.h"

extern s32 func_801CE284(void);
extern void func_801CC4D8(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);

s32 func_801E4A30(s32 arg0, s32 arg1) {
    if (func_801CE284() != 0) {
        func_801CC4D8(0, 0x0348005E, 0, 0, 8.0f);
        return 8;
    }
    return 7;
}
