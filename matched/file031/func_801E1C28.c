#include "context.h"

extern s32 func_8038BEF8(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
s32 func_801E1C28(s32 arg0, s32 arg1) {
    if (func_8038BEF8(0.0f, 4.5f, 78.7f, 113.2f, (13.7f), (44.9f), (94.1f), 30.0f, (7.9f), (57.8f), (-22.3f), (15.7f), (37.3f), (-17.6f)) != 0) {
        return 2;
    }
    return 1;
}
