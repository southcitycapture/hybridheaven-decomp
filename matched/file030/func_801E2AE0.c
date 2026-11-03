#include "common.h"
extern void func_8038BED4(void);
extern s32 func_8038BEF8(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);


extern const f32 D_801EC614;
extern f32 D_801EC618;
extern f32 D_801EC61C;
extern f32 D_801EC620;

s32 func_801E2AE0(s32 arg0, s32 arg1) {
    f32 height = 30.0f;
    f32 depth = D_801EC614;
    if (height) {}
    if (height) {}
    if (height) {}

    if (func_8038BEF8(0.0f, 7.0f, -8.9f, 30.2f, 5.0f,
                      D_801EC618, D_801EC61C, D_801EC620,
                      0.0f, height, depth,
                      0.0f, height, depth) != 0) {
        func_8038BED4();
        return 0x22;
    }
    return 0x21;
}
