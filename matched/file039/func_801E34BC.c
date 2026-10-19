#include "context.h"

extern s32 D_8038C17C(f32, f32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
extern f32 D_801EB2C8;
extern f32 D_801EB2CC;
extern f32 D_801EB2D0;
extern f32 D_801EB2D4;
extern f32 D_801EB2D8;
extern f32 D_801EB2DC;
extern f32 D_801EB2E0;
extern f32 D_801EB2E4;
extern f32 D_801EB2E8;
extern f32 D_801EB2EC;

s32 func_801E34BC(s32 arg0, s32 arg1) {
    f32 x = D_801EB2C8;
    if (D_8038C17C(0.0f, 2.0f, 0x412B3333, 0x4194CCCD, D_801EB2CC, D_801EB2D0, 19.5f, D_801EB2D4, D_801EB2D8, D_801EB2DC, D_801EB2E0, D_801EB2E4, D_801EB2E8, D_801EB2EC, x, x) != 0) {
        return 0x3C;
    }
    return 0x3B;
}
