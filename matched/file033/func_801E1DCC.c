#include "context.h"

extern f32 D_801F4530;
extern f32 D_801F4534;
extern f32 D_801F4538;
extern f32 D_801F453C;
extern f32 D_801F4540;
extern f32 D_801F4544;
extern f32 D_801F4548;
extern f32 D_801F454C;
extern f32 D_801F4550;

s32 func_801E1DCC(s32 arg0, s32 arg1) {
    f32 temp = D_801F4530;
    if (func_8038BEF8(0.0f, 3.5f, -12.4f, 50.7f,
            D_801F4534, D_801F4538, D_801F453C, D_801F4540,
            temp, D_801F4544, D_801F4548, temp,
            D_801F454C, D_801F4550) != 0) {
        func_8038BED4();
        return 4;
    }
    return 3;
}
