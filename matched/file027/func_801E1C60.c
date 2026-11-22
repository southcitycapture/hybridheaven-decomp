#include "common.h"

extern void D_8038BD88(f32, f32, s32);
extern s32 func_801C0B8C(u64);
extern void func_8038BD50(f32, f32, s32);
extern s32 func_8038BEF8(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
s32 func_801E1C60(s32 arg0, s32 arg1) {
    f32 t = 15.3999996f;

    if (func_8038BEF8(0.0f, 4.0f, -19.4f, 7.0f, 4.5999999f, (-11.3000002f), t, -1.5f, 7.5999999f, t, 16.5f, -1.0f, 14.0f, 20.7999992f) != 0 && func_801C0B8C(0x53EC60) != 0) {
        func_8038BD50(5120.0f, 7.0f, 0x40933333);
        D_8038BD88(5120.0f, 15.3999996f, 0x41840000);
        return 2;
    }
    return 1;
}
