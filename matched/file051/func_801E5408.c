#include "common.h"

extern s32 func_801CC4D8(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);
extern s32 func_801CEDE4();

s32 func_801E5408(s32 arg0, s32 arg1) {
    if (func_801CEDE4() != 0) {
        func_801CC4D8(1, 0x01B8002D, 0, 0, 5.0f);
        return 0x17;
    }
    return 0x16;
}
