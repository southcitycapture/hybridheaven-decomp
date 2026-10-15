#include "context.h"

extern f32 D_801E9490;
extern f32 D_801E9494;
extern f32 D_801E9498;
extern f32 D_801E949C;
extern f32 D_801E94A0;
extern f32 D_801E94A4;
extern f32 D_801E94A8;
extern f32 D_801E94AC;
extern f32 D_801E94B0;
extern f32 D_801E94B4;
extern f32 D_801E94B8;
extern f32 D_801E94BC;
extern f32 D_801E94C0;

s32 func_801E2544(s32 arg0, s32 arg1) {
    f32 v0;
    f32 v1;

    v0 = D_801E9490;
    v1 = D_801E9494;
    if (func_8038BEF8(0.0f, 0.5f, -73.0f, v0, D_801E9498, D_801E949C, v0, D_801E94A0, D_801E94A4, v1, D_801E94A8, D_801E94AC, v1, D_801E94B0) != 0) {
        func_8038BD50(D_801E94B4, D_801E94B8, 345.8f);
        D_8038BD88(D_801E94BC, D_801E94C0, 298.6f);
        return 0x1B;
    }
    return 0x1A;
}
