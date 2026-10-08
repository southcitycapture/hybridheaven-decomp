#include "common.h"

extern s32 func_801CE274();
extern void func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);

s32 func_801E8850(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x01B8002F, 0, 0, 4.0f);
        return 0x17;
    }
    return 0x16;
}
