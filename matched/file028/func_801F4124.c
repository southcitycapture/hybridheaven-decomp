#include "context.h"

extern void D_8038BD50(f32, f32, f32);

extern f32 D_80208B08;
extern f32 D_80208B0C;
extern f32 D_80208B10;
extern f32 D_80208B14;
extern f32 D_80208B18;
extern f32 D_80208B1C;
extern f32 D_80208B20;
extern f32 D_80208B24;
extern f32 D_80208B28;
extern f32 D_80208B2C;

s32 func_801F4124(s32 arg0, s32 arg1) {
    f32 t = D_80208B08;

    if (func_8038BEF8(0.0f, 4.0f, -175.3f, 16.2f, t, D_80208B0C, D_80208B10, t, D_80208B14, 12.5f, -6.0f, D_80208B18, D_80208B1C, D_80208B20)) {
        D_8038BD50(D_80208B24, D_80208B28, 0.0f);
        D_8038BD88(200.0f, D_80208B2C, 0xBDCCCCCD);
        return 0xA;
    }
    return 9;
}
