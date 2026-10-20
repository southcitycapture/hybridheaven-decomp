#include "common.h"

extern s32 func_801D278C(void);
extern s32 func_801CC470(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);

s32 func_801E7144(s32 arg0, s32 arg1) {
    if (func_801D278C() != 0) {
        func_801CC470(2, 0x03200013, 0, 0x100, 6.0f);
        return 0x26;
    }
    return 0x25;
}
