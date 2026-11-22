#include "common.h"

extern void func_8038BED4(void);
extern s32 func_8038BEF8(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
s32 func_801E2CA4(s32 arg0, s32 arg1) {
    f32 temp_ab4;
    f32 temp_ab8;
    f32 temp_abc;

    temp_ab4 = (-0.400000006f);
    temp_ab8 = 15.6000004f;
    temp_abc = 0.200000003f;
    if (func_8038BEF8(0.0f, 0.800000191f, 0.6f, 14.9f, (-16.8999996f), 0.5f, 15.0f, (-14.6000004f), temp_ab4, temp_ab8, temp_abc, temp_ab4, temp_ab8, temp_abc) != 0) {
        func_8038BED4();
        return 0x23;
    }
    return 0x22;
}
