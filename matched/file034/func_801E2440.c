#include "context.h"

extern s32 func_8038BEF8(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
s32 func_801E2440(s32 arg0, s32 arg1) {
    f32 temp;
    f32 temp2;

    temp = (-457.5f);
    temp2 = (-459.2f);
    if (func_8038BEF8(0.0f, 1.5f, -71.2f, temp, (283.5f), -73.0f, temp, (285.2f), (-54.3f), temp2, (298.5f), (-56.05f), temp2, (300.2f)) != 0) {
        return 0x19;
    }
    return 0x18;
}
