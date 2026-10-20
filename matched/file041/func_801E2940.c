#include "context.h"

extern s32 D_8038C17C(f32, f32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
extern f32 D_801E87E4;
extern f32 D_801E87E8;
extern f32 D_801E87EC;
extern f32 D_801E87F0;
extern f32 D_801E87F4;
extern f32 D_801E87F8;
extern f32 D_801E87FC;
extern f32 D_801E8800;
extern f32 D_801E8804;
extern f32 D_801E8808;
extern f32 D_801E880C;

s32 func_801E2940(s32 arg0, s32 arg1) {
    f32 x = D_801E87E4;
    if (D_8038C17C(0.0f, 1.0f, 0x43EECCCD, 0x44326CCD, D_801E87E8, D_801E87EC, D_801E87F0, D_801E87F4, D_801E87F8, D_801E87FC, D_801E8800, D_801E8804, D_801E8808, D_801E880C, x, x) != 0) {
        return 0x20;
    }
    return 0x1F;
}
