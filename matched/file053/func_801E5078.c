#include "common.h"

extern s32 func_801CE284();
extern void func_8038D28C(s32 arg0);
extern void func_801CC4D8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);

s32 func_801E5078(s32 arg0, s32 arg1) {
    if (func_801CE284() != 0) {
        func_8038D28C(0x213);
        func_801CC4D8(0, 0x0348007A, 0, 0, 5.0f);
        return 0x2B;
    }
    return 0x2A;
}
