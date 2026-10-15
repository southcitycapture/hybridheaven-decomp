#include "context.h"
extern s32 D_8038C17C(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);

extern f32 D_801FBDF0;
extern f32 D_801FBDF4;
extern f32 D_801FBDF8;
extern f32 D_801FBDFC;
extern f32 D_801FBE00;
extern f32 D_801FBE04;
extern f32 D_801FBE08;
extern f32 D_801FBE0C;

s32 func_801E2BC4(s32 arg0, s32 arg1) {
    f32 k;

    if (func_801C0B8C(0x069D4490) != 0) {
        return 0xA;
    }
    k = D_801FBDF0;
    D_8038C17C(0.0f, 19.5f, 70.2f, 10.1f, D_801FBDF4, D_801FBDF8, D_801FBDFC, D_801FBE00, 50.0f, 15.5f, D_801FBE04, 50.5f, D_801FBE08, D_801FBE0C, k, k);
    return 9;
}
