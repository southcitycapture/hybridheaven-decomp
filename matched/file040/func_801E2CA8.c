#include "context.h"

extern s32 D_8038C17C(f32, f32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
extern f32 D_801E87A8;
extern f32 D_801E87AC;
extern f32 D_801E87B0;
extern f32 D_801E87B4;
extern f32 D_801E87B8;
extern f32 D_801E87BC;
extern f32 D_801E87C0;
extern f32 D_801E87C4;
extern f32 D_801E87C8;
extern f32 D_801E87CC;
extern f32 D_801E87D0;

s32 func_801E2CA8(s32 arg0, s32 arg1) {
    f32 x = D_801E87A8;
    if (D_8038C17C(0.0f, 4.0f, 0xC2600000, 0x434C4CCD, D_801E87AC, D_801E87B0, D_801E87B4, D_801E87B8, D_801E87BC, D_801E87C0, D_801E87C4, D_801E87C8, D_801E87CC, D_801E87D0, x, x) != 0) {
        return 0x18;
    }
    return 0x17;
}
