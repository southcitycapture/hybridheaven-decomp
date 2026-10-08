#include "common.h"

extern s32 func_801D278C();
extern s32 func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);

s32 func_801E7144(s32 arg0, s32 arg1) {
    if (func_801D278C() != 0) {
        func_801CC470(2, 0x03200013, 0, 0x100, 6.0f);
        return 0x26;
    }
    return 0x25;
}
