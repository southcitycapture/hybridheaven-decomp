#include "context.h"

extern f32 D_801EA008;
extern f32 D_801EA00C;
extern f32 D_801EA010;
extern f32 D_801EA014;
extern f32 D_801EA018;
extern f32 D_801EA01C;
extern f32 D_801EA020;
extern f32 D_801EA024;
extern f32 D_801EA028;

s32 func_801E1D74(s32 arg0, s32 arg1) {
    f32 x = 41.5f;
    if (D_8038C17C(0.0f, D_801EA008, -59.8f, 10.7f,
                   D_801EA00C, D_801EA010, 12.5f, D_801EA014,
                   D_801EA018, D_801EA01C, D_801EA020, D_801EA024,
                   7.0f, D_801EA028, x, x) != 0) {
        return 4;
    }
    return 3;
}
