#include "context.h"

extern void func_8038BE98(f32);
extern void func_8038BD50(f32, f32, s32);
extern void D_8038BD88(f32, f32, s32);
extern f32 D_801EB084;
extern f32 D_801EB088;
extern f32 D_801EB08C;
extern f32 D_801EB090;
extern f32 D_801EB094;

s32 func_801E1E4C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x4F587F) != 0) {
        func_8038BE98(D_801EB084);
        func_8038BD50(D_801EB088, D_801EB08C, 0x42033333);
        D_8038BD88(D_801EB090, D_801EB094, 0x4207999A);
        return 5;
    }
    return 4;
}
