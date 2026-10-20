#include "context.h"

extern f32 D_801F5650;
extern f32 D_801F5654;
extern f32 D_801F5658;
extern f32 D_801F565C;
extern f32 D_801F5660;
extern f32 D_801F5664;

s32 func_801E1C60(s32 arg0, s32 arg1) {
    f32 t = D_801F5650;

    if (func_8038BEF8(0.0f, 4.0f, -19.4f, 7.0f, D_801F5654, D_801F5658, t, -1.5f, D_801F565C, t, 16.5f, -1.0f, 14.0f, D_801F5660) != 0 && func_801C0B8C(0x53EC60) != 0) {
        func_8038BD50(5120.0f, 7.0f, 0x40933333);
        D_8038BD88(5120.0f, D_801F5664, 0x41840000);
        return 2;
    }
    return 1;
}
