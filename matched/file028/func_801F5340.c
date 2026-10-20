#include "context.h"

extern f32 D_80208B5C;
extern f32 D_80208B60;
extern f32 D_80208B64;
extern f32 D_80208B68;
extern f32 D_80208B6C;
extern f32 D_80208B70;
extern f32 D_80208B74;
extern f32 D_80208B78;

s32 func_801F5340(s32 arg0, s32 arg1) {
    if (func_8038BEF8(0.0f, 1.5f, 10.5f, 1.0f, D_80208B5C, D_80208B60, D_80208B64, D_80208B68, D_80208B6C, D_80208B70, D_80208B74, D_80208B78, 9.5f, -28.0f) != 0) {
        func_8038BED4();
        return 7;
    }
    return 6;
}
