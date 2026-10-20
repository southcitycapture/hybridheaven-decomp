#include "context.h"

extern f32 D_801F4A08;
extern f32 D_801F4A0C;
extern f32 D_801F4A10;
extern f32 D_801F4A14;
extern f32 D_801F4A18;
extern f32 D_801F4A1C;
extern f32 D_801F4A20;
extern f32 D_801F4A24;
extern f32 D_801F4A28;

s32 func_801EA6F4(s32 arg0, s32 arg1) {
    if (func_8038BEF8(0.0f, 4.5f, 8.6f, 43.1f,
            D_801F4A08, D_801F4A0C, D_801F4A10, D_801F4A14,
            D_801F4A18, 0.5f, D_801F4A1C, D_801F4A20,
            D_801F4A24, D_801F4A28) != 0) {
        return 0x51;
    }
    return 0x50;
}
