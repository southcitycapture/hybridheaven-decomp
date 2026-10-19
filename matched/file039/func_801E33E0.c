#include "context.h"

extern f32 D_801EB2A0;
extern f32 D_801EB2A4;
extern f32 D_801EB2A8;
extern f32 D_801EB2AC;
extern f32 D_801EB2B0;
extern f32 D_801EB2B4;
extern f32 D_801EB2B8;
extern f32 D_801EB2BC;
extern f32 D_801EB2C0;
extern f32 D_801EB2C4;

s32 func_801E33E0(s32 arg0, s32 arg1) {
    f32 a;
    f32 b;

    a = D_801EB2A0;
    b = D_801EB2A4;
    if (D_8038C17C(0.0f, 2.0f, 0x41566666, 0x4190CCCD, D_801EB2A8, D_801EB2AC,
                   D_801EB2B0, D_801EB2B4, a, D_801EB2B8, D_801EB2BC, a,
                   D_801EB2C0, D_801EB2C4, b, b) != 0) {
        D_8038C158();
        return 0x3B;
    }
    return 0x3A;
}
