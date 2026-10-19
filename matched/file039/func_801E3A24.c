#include "context.h"

extern f32 D_801EB328;
extern f32 D_801EB32C;
extern f32 D_801EB330;
extern f32 D_801EB334;
extern f32 D_801EB338;
extern f32 D_801EB33C;
extern f32 D_801EB340;
extern f32 D_801EB344;
extern f32 D_801EB348;
extern f32 D_801EB34C;
extern f32 D_801EB350;
extern f32 D_801EB354;

s32 func_801E3A24(s32 arg0, s32 arg1) {
    if (D_8038C17C(0.0f, 2.0f, 0x41680000, 0x41566666,
        D_801EB328, D_801EB32C, D_801EB330, D_801EB334,
        D_801EB338, D_801EB33C, D_801EB340, D_801EB344,
        D_801EB348, D_801EB34C, D_801EB350, D_801EB354) != 0) {
        return 0x4D;
    }
    return 0x4C;
}
