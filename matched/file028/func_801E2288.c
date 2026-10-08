#include "context.h"

extern f32 D_802087C4;
extern f32 D_802087C8;
extern f32 D_802087CC;
extern f32 D_802087D0;
extern f32 D_802087D4;
extern f32 D_802087D8;
extern f32 D_802087DC;

s32 func_801E2288(s32 arg0, s32 arg1) {
    f32 temp_fv0;
    f32 temp_fv1;

    temp_fv0 = D_802087C4;
    temp_fv1 = D_802087C8;
    if (func_8038BEF8(0.0f, 2.0f, 6.9f, 1.2f, 12.5f, D_802087CC, D_802087D0, D_802087D4, temp_fv0, D_802087D8, temp_fv1, temp_fv0, D_802087DC, temp_fv1) != 0) {
        return 0x12;
    }
    return 0x11;
}
