#include "common.h"

extern void func_8038BED4(void);
extern s32 func_8038BEF8(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
s32 func_801E29A0(s32 arg0, s32 arg1) {
    f32 temp_fv0;
    f32 temp_fv1;
    f32 temp_ft4;

    temp_fv0 = 0.400000006f;
    temp_fv1 = (-0.800000012f);
    temp_ft4 = 9.60000038f;
    if (func_8038BEF8(0.0f, 0.800000191f, temp_fv0, 8.8f, (-19.8999996f), 0.200000003f, 8.89999962f, -17.0f, temp_fv1, temp_ft4, temp_fv0, temp_fv1, temp_ft4, temp_fv0) != 0) {
        func_8038BED4();
        return 0x1F;
    }
    return 0x1E;
}
