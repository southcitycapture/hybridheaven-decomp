#include "context.h"

extern f32 D_801EA02C;
extern f32 D_801EA030;
extern f32 D_801EA034;
extern f32 D_801EA038;
extern f32 D_801EA03C;

s32 func_801E1E94(s32 arg0, s32 arg1) {
    f32 temp0 = D_801EA02C;
    f32 temp1 = D_801EA030;
    f32 temp2;
    f32 temp3;

    goto l1;
l1:
    temp2 = 166.0f;
    temp3 = 41.5f;
    if (D_8038C17C(0.0f, 2.0f, 29.3f, 6.3f,
                   D_801EA034, 30.5f, D_801EA038, D_801EA03C,
                   temp0, temp1, temp2,
                   temp0, temp1, temp2, temp3, temp3) != 0) {
        return 6;
    }
    return 5;
}
