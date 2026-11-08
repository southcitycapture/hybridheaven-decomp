#include "common.h"
extern s32 func_8038BEF8(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);


s32 func_801E2314(s32 arg0, s32 arg1)
{
    f32 temp = 4.7f;

    if (func_8038BEF8(0.0f, 4.000001f, 31.4f, 5.8f, 17.6f, 24.3f, 9.8f, 24.8f, temp, 4.5f, 0.1f, temp, 4.5f, 0.1f) != 0) {
        return 0xF;
    }
    return 0xE;
}
