#include "common.h"

s32 func_801C7C08(f32 a, f32 b, void *c, void *d);
extern u8 D_801E8960[];
extern u8 D_801E89D0[];

s32 func_801E4B44(s32 arg0, s32 arg1) {
    if (func_801C7C08(0.0f, 3.0f, D_801E8960, D_801E89D0) != 0) {
        return 7;
    }
    return 6;
}
