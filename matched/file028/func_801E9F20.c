#include "context.h"

extern f32 D_802088F0;
extern f32 D_802088F4;
extern f32 D_802088F8;
extern f32 D_802088FC;
extern f32 D_80208900;
extern f32 D_80208904;

s32 func_801E9F20(s32 arg0, s32 arg1) {
    f32 f0;

    f0 = D_802088F0;
    if (func_8038BEF8(0.0f, 3.0f, -13.9f, 8.9f, -11.5f, D_802088F4, D_802088F8, D_802088FC, -4.5f, D_80208900, f0, -5.5f, D_80208904, f0) != 0) {
        return 0x17;
    }
    return 0x16;
}
