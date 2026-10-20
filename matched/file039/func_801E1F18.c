#include "context.h"

extern f32 D_801EB098;
extern f32 D_801EB09C;
extern f32 D_801EB0A0;
extern f32 D_801EB0A4;
extern f32 D_801EB0A8;
extern f32 D_801EB0AC;
extern f32 D_801EB0B0;

s32 func_801E1F18(s32 arg0, s32 arg1) {
    f32 x = D_801EB098;
    f32 y = D_801EB09C;
    f32 z = D_801EB0A0;
    f32 w = D_801EB0A4;
    if (D_8038C17C(0.0f, 4.0f, 0xC2346666, 0x4101999A,
        D_801EB0A8, -51.0f, D_801EB0AC, D_801EB0B0,
        x, y, z, x, y, z, w, w) != 0) {
        return 9;
    }
    return 8;
}
