#include "common.h"

extern void func_801CC470(s32, s32, s32, s32, f32);
extern s32 func_801D6FB0(void);

s32 func_801E4474(s32 arg0, s32 arg1) {
    if (func_801D6FB0() == 0) {
        func_801CC470(1, 0x01B80041, 0, 0, 6.0f);
        return 0x12;
    }
    return 0x11;
}
