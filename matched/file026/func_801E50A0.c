#include "context.h"

s32 func_801CEDE4();
void func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);

s32 func_801E50A0(s32 arg0, s32 arg1) {
    if (func_801CEDE4() != 0) {
        func_801CC470(1, 0x01B80016, 0, 0x10, 1.0f);
        return 3;
    }
    return 2;
}
