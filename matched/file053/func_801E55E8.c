#include "common.h"

s32 func_801CEDE4();
void func_801CED5C(s32 arg0);
void func_801CC4D8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);

s32 func_801E55E8(s32 arg0, s32 arg1) {
    if (func_801CEDE4() != 0) {
        func_801CED5C(0);
        func_801CC4D8(1, 0x02A80045, 0, 0, 5.0f);
        return 0xF;
    }
    return 0xE;
}
