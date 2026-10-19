#include "context.h"

extern f32 D_801E6B88;
extern f32 D_801E6B8C;
extern f32 D_801E6B90;
extern f32 D_801E6B94;
extern f32 D_801E6B98;
extern f32 D_801E6B9C;
extern f32 D_801E6BA0;
extern f32 D_801E6BA4;
extern f32 D_801E6BA8;
extern f32 D_801E6BAC;

s32 func_801E1DE0(s32 arg0, s32 arg1) {
    f32 temp = D_801E6B88;

    if (D_8038C17C(0.0f, 2.0f, 7.2f, 8.2f,
        D_801E6B8C, D_801E6B90, 7.0f, D_801E6B94,
        D_801E6B98, D_801E6B9C, D_801E6BA0, D_801E6BA4,
        D_801E6BA8, D_801E6BAC, temp, temp) != 0) {
        D_8038C158();
        return 4;
    }
    return 3;
}
