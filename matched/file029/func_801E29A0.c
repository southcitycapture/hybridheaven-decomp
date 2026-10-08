#include "common.h"

void func_8038BED4(void);
s32 func_8038BEF8(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
extern f32 D_801E6A40;
extern f32 D_801E6A44;
extern f32 D_801E6A48;
extern f32 D_801E6A4C;
extern f32 D_801E6A50;
extern f32 D_801E6A54;
extern f32 D_801E6A58;

s32 func_801E29A0(s32 arg0, s32 arg1) {
    f32 temp_fv0;
    f32 temp_fv1;
    f32 temp_ft4;

    temp_fv0 = D_801E6A40;
    temp_fv1 = D_801E6A44;
    temp_ft4 = D_801E6A48;
    if (func_8038BEF8(0.0f, D_801E6A4C, temp_fv0, 8.8f, D_801E6A50, D_801E6A54, D_801E6A58, -17.0f, temp_fv1, temp_ft4, temp_fv0, temp_fv1, temp_ft4, temp_fv0) != 0) {
        func_8038BED4();
        return 0x1F;
    }
    return 0x1E;
}
