#include "context.h"
/* starting point: func_801E1CC8 (file029), whose assembly is 96% the same as this function's */

extern void func_8038BED4(void);
extern s32 func_8038BEF8(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);

extern f32 D_801EC488;
extern f32 D_801EC48C;
extern f32 D_801EC490;
extern f32 D_801EC494;
extern f32 D_801EC498;
extern f32 D_801EC49C;
extern f32 D_801EC4A0;
extern f32 D_801EC4A4;

s32 func_801E1CF8(s32 arg0, s32 arg1) {
    if (func_8038BEF8(0.0f, 4.0f, -2.3f, 53.8f, D_801EC488, D_801EC48C, 16.5f,
                      D_801EC490, D_801EC494, D_801EC498, D_801EC49C, -2.5f,
                      D_801EC4A0, D_801EC4A4) != 0) {
        func_8038BED4();
        return 3;
    }
    return 2;
}
