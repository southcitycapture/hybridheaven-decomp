#include "context.h"
extern void func_801CC4D8(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);

s32 func_801CE284();

s32 func_801E37E8(s32 arg0, s32 arg1) {
    if (func_801CE284() != 0) {
        func_801CC4D8(0, 0x02A80038, 0, 0, 3.0f);
        return 0x13;
    }
    return 0x12;
}
