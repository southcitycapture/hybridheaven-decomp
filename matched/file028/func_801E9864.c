#include "context.h"

extern f32 D_80208888;
extern f32 D_8020888C;
extern f32 D_80208890;
extern f32 D_80208894;
extern f32 D_80208898;
extern f32 D_8020889C;

s32 func_801E9864(s32 arg0, s32 arg1) {
    f32 temp_a;
    f32 temp_b;

    temp_a = D_80208888;
    temp_b = D_8020888C;
    if (func_8038BEF8(0.0f, 1.5f, -0.9f, 5.7f, D_80208890, D_80208894, D_80208898, D_8020889C, 0.0f, temp_a, temp_b, 0.0f, temp_a, temp_b) != 0) {
        return 4;
    }
    return 3;
}
