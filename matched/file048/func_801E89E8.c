#include "common.h"

extern void func_801CC470(s32, s32, s32, s32, f32);
extern s32 func_801CE274(void);

s32 func_801E89E8(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x04100043, 0, 0, 7.5f);
        return 0x1D;
    }
    return 0x1C;
}
