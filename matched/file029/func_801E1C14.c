#include "common.h"

extern void func_8038BED4(void);
extern s32 func_8038BEF8(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
extern f32 D_801E6898;
extern f32 D_801E689C;
extern f32 D_801E68A0;
extern f32 D_801E68A4;
extern f32 D_801E68A8;
extern f32 D_801E68AC;
extern f32 D_801E68B0;

s32 func_801E1C14(s32 arg0, s32 arg1) {
    f32 fv0;
    f32 fv1;
    f32 ft4;

    fv0 = D_801E6898;
    fv1 = D_801E689C;
    ft4 = D_801E68A0;
    if (func_8038BEF8(0.0f, 4.0f, -11.5f, 48.5f, D_801E68A4, D_801E68A8, D_801E68AC, D_801E68B0, fv0, fv1, ft4, fv0, fv1, ft4) != 0) {
        func_8038BED4();
        return 2;
    }
    return 1;
}
