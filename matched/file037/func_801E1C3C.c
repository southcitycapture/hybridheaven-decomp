#include "common.h"

extern void D_8038C158(void);
extern s32 D_8038C17C(f32 a0, f32 a1, f32 a2, f32 a3, f32 a4, f32 a5, f32 a6, f32 a7, f32 a8, f32 a9, f32 a10, f32 a11, f32 a12, f32 a13, f32 a14, f32 a15);
s32 func_801E1C3C(s32 arg0, s32 arg1) {
    f32 temp_fv0;
    f32 temp_fv1;

    temp_fv0 = (-4.80000019f);
    temp_fv1 = 28.1000004f;
    if (D_8038C17C(0.0f, 3.5f, -52.1f, 303.2f, 72.5f, 18.7999992f, 226.399994f, 136.899994f, temp_fv0, 42.7999992f, (-49.7000008f), temp_fv0, 11.3000002f, -58.5f, temp_fv1, temp_fv1) != 0) {
        D_8038C158();
        return 2;
    }
    return 1;
}
