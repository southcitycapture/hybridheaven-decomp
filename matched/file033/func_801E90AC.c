#include "context.h"

extern void func_8038BED4();
extern void func_8038BE98(f32);
extern f32 D_801F4880;
extern f32 D_801F4884;
extern f32 D_801F4888;
extern f32 D_801F488C;
extern f32 D_801F4890;
extern f32 D_801F4894;
extern f32 D_801F4898;

s32 func_801E90AC(s32 arg0, s32 arg1) {
    if (func_8038BEF8(0.0f, 1.5f, -1.5f, 57.6f, 19.0f, D_801F4880, 34.0f, D_801F4884, 12.0f, D_801F4888, D_801F488C, D_801F4890, D_801F4894, D_801F4898) != 0) {
        func_8038BED4();
        func_8038BE98(31.0f);
        return 0x12;
    }
    return 0x11;
}
