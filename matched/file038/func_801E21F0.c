#include "common.h"
extern s32 D_8038C17C(f32, f32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);


extern f32 D_801E70AC;
extern f32 D_801E70B0;
extern f32 D_801E70B4;
extern f32 D_801E70B8;
extern f32 D_801E70BC;
extern f32 D_801E70C0;
extern f32 D_801E70C4;

s32 func_801E21F0(s32 arg0, s32 arg1) {
    f32 c = -40.0f;
    f32 b = D_801E70B0;
    f32 a = D_801E70AC;
    if (D_8038C17C(0.0f, 4.0f, 0xC20ACCCD, 0x41D73333, D_801E70B4, D_801E70B8, D_801E70BC, 25.0f, c, a, b, c, a, b, D_801E70C0, D_801E70C4) != 0) {
        return 0xB;
    }
    return 0xA;
}
