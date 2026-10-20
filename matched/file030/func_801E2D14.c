#include "context.h"

extern f32 D_801EC640;
extern f32 D_801EC644;
extern f32 D_801EC648;
extern f32 D_801EC64C;
extern f32 D_801EC650;

s32 func_801E2D14(s32 arg0, s32 arg1) {
    if (func_8038BEF8(0.0f, 2.0f, -13.7f, 10.7f, D_801EC640, D_801EC644, 17.5f, D_801EC648, 0.0f, 30.0f, D_801EC64C, 1.0f, 37.0f, D_801EC650) != 0) {
        func_8038BED4();
        return 0x28;
    }
    return 0x27;
}
