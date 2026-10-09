#include "context.h"

extern f32 D_801EB908;
extern f32 D_801EB90C;
extern f32 D_801EB910;
extern f32 D_801EB914;
extern f32 D_801EB918;
extern f32 D_801EB91C;
extern f32 D_801EB920;

s32 func_801E28C8(s32 arg0, s32 arg1) {
    f32 temp;

    temp = D_801EB908;
    if (func_8038BEF8(0.0f, 6.0f, 0xC32F4CCD, 0x4181999A, temp, D_801EB90C, D_801EB910, temp, D_801EB914, 12.5f, -6.0f, D_801EB918, D_801EB91C, D_801EB920) != 0) {
        return 0x28;
    }
    return 0x27;
}
