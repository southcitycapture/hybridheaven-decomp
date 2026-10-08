#include "common.h"

extern void func_801CC4D8(s32, s32, s32, s32, f32);
extern void func_801CED5C(s32);
extern s32 func_801CEDE4();

s32 func_801E4C98(s32 arg0, s32 arg1) {
    if (func_801CEDE4() != 0) {
        func_801CC4D8(1, 0x02A80045, 0, 0, 5.0f);
        func_801CED5C(0);
        return 9;
    }
    return 8;
}
