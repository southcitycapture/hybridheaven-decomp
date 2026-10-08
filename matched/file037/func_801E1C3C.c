#include "context.h"

extern void D_8038C158(void);
extern s32 D_8038C17C(f32 a0, f32 a1, f32 a2, f32 a3, f32 a4, f32 a5, f32 a6, f32 a7, f32 a8, f32 a9, f32 a10, f32 a11, f32 a12, f32 a13, f32 a14, f32 a15);
extern f32 D_801E6B50;
extern f32 D_801E6B54;
extern f32 D_801E6B58;
extern f32 D_801E6B5C;
extern f32 D_801E6B60;
extern f32 D_801E6B64;
extern f32 D_801E6B68;
extern f32 D_801E6B6C;

s32 func_801E1C3C(s32 arg0, s32 arg1) {
    f32 temp_fv0;
    f32 temp_fv1;

    temp_fv0 = D_801E6B50;
    temp_fv1 = D_801E6B54;
    if (D_8038C17C(0.0f, 3.5f, -52.1f, 303.2f, 72.5f, D_801E6B58, D_801E6B5C, D_801E6B60, temp_fv0, D_801E6B64, D_801E6B68, temp_fv0, D_801E6B6C, -58.5f, temp_fv1, temp_fv1) != 0) {
        D_8038C158();
        return 2;
    }
    return 1;
}
