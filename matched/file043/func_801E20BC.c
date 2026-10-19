#include "context.h"

extern s32 D_8038C17C(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
extern f32 D_801EA068;
extern f32 D_801EA06C;
extern f32 D_801EA070;
extern f32 D_801EA074;
extern f32 D_801EA078;
extern f32 D_801EA07C;
extern f32 D_801EA080;
extern f32 D_801EA084;
extern f32 D_801EA088;

s32 func_801E20BC(s32 arg0, s32 arg1) {
    if (D_8038C17C(0.0f, 5.0f, -89.0f, 22.3f, D_801EA068, D_801EA06C, D_801EA070, D_801EA074, D_801EA078, D_801EA07C, 126.5f, D_801EA080, D_801EA084, D_801EA088, 29.5f, 29.5f) != 0) {
        return 0xA;
    }
    return 9;
}
