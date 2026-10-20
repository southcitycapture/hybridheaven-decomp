#include "context.h"
extern f32 D_801E8984;
extern f32 D_801E8988;
extern f32 D_801E898C;
extern f32 D_801E8990;
extern f32 D_801E8994;
extern f32 D_801E8998;
extern f32 D_801E899C;
extern f32 D_801E89A0;
extern f32 D_801E89A4;
extern f32 D_801E89A8;
extern f32 D_801E89AC;

s32 func_801E21B0(s32 arg0, s32 arg1) {
    if (func_8038BEF8(0.0f, D_801E8984, -0.3f, 12.9f, 81.5f, D_801E8988, D_801E898C, 81.5f, D_801E8990, D_801E8994, 0.0f, 2.0f, D_801E8998, D_801E899C) != 0) {
        func_8038BE98(D_801E89A0);
        func_8038BD50(D_801E89A4, D_801E89A8, 70.0f);
        D_8038BD88(D_801E89AC, 12.5f, -0.1f);
        func_8038BED4();
        func_801CC470(0, 0x03480056, 0, 1, 1.0f);
        return 8;
    }
    return 7;
}
