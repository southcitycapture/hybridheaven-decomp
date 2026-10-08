#include "context.h"

extern u16 D_8017DCDC;
extern u16 D_8017DDA4;

s32 func_801CA574(void) {
    return (D_8017DCDC + D_8017DDA4) & 0xFFFF;
}
