#include "context.h"

extern s32 func_8038BEF8(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
s32 func_801E233C(s32 arg0, s32 arg1) {
    f32 fa;
    f32 fb;

    fa = (-457.5f);
    fb = (-459.2f);
    if (func_8038BEF8(0.0f, 1.5f, -65.8f, fa, (281.4f), (-71.2f), fa, (283.5f), (-50.8f), fb, (295.2f), (-54.3f), fb, (298.5f)) != 0) {
        return 0x17;
    }
    return 0x16;
}
