#include "context.h"

extern f32 D_801F46D4;
extern f32 D_801F46D8;
extern f32 D_801F46DC;
extern f32 D_801F46E0;
extern f32 D_801F46E4;
extern f32 D_801F46E8;
extern f32 D_801F46EC;
extern f32 D_801F46F0;
extern f32 D_801F46F4;

s32 func_801E3074(s32 arg0, s32 arg1) {
    if (func_8038BEF8(0.0f, 1.0f, -4.6f, 10.0f,
            D_801F46D4, D_801F46D8, D_801F46DC, D_801F46E0,
            D_801F46E4, D_801F46E8, D_801F46EC, D_801F46F0,
            2.5f, D_801F46F4) != 0) {
        return 0x32;
    }
    return 0x31;
}
