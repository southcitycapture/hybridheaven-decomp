#include "context.h"

extern s32 D_8038C17C(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
extern f32 D_801EDC20;
extern f32 D_801EDC24;
extern f32 D_801EDC28;
extern f32 D_801EDC2C;
extern f32 D_801EDC30;
extern f32 D_801EDC34;
extern f32 D_801EDC38;
extern f32 D_801EDC3C;
extern f32 D_801EDC40;
extern f32 D_801EDC44;

s32 func_801E25D0(s32 arg0, s32 arg1) {
    f32 temp = D_801EDC20;
    if (D_8038C17C(0.0f, D_801EDC24, -17.7f, 15.8f,
        D_801EDC28, D_801EDC2C, D_801EDC30, -15.0f,
        D_801EDC34, D_801EDC38, 0.5f, D_801EDC3C,
        D_801EDC40, D_801EDC44, temp, temp) != 0) {
        return 0x1F;
    }
    return 0x1E;
}
