#include "context.h"

extern s32 func_801CD378(f32, f32, s32, s32, f32, f32, f32);
extern f32 D_80208BFC;
extern f32 D_80208C00;
extern f32 D_80208C04;
extern f32 D_80208C08;
extern f32 D_80208C0C;

s32 func_801F5C30(s32 arg0, s32 arg1) {
    if (D_80208E2C == 0) {
        if (func_801CD098(0, 0, 0x40400001, 255.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 100.0f, 0.0f, 0.0f, 100.0f) != 0) {
            D_80208E2C = 1;
        }
    }
    if (D_80208E30 == 0) {
        if (func_801CD378(D_80208BFC, D_80208C00, 0x41DA6666, 0x40F66666, D_80208C04, D_80208C08, D_80208C0C) != 0) {
            D_80208E30 = 1;
        }
    }
    if (D_80208E2C != 0 && D_80208E30 != 0) {
        return 8;
    }
    return 7;
}
