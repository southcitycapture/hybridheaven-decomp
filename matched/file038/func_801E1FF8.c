#include "context.h"

extern s32 D_8038C17C(f32, f32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
extern f32 D_801E7050;
extern f32 D_801E7054;
extern f32 D_801E7058;
extern f32 D_801E705C;
extern f32 D_801E7060;
extern f32 D_801E7064;
extern f32 D_801E7068;
extern f32 D_801E706C;
extern f32 D_801E7070;
extern f32 D_801E7074;
extern f32 D_801E7078;
extern f32 D_801E707C;

s32 func_801E1FF8(s32 arg0, s32 arg1) {
    if (D_8038C17C(0.0f, D_801E7050, 0xC199999A, 0x40F9999A, D_801E7054, D_801E7058, D_801E705C, D_801E7060, D_801E7064, D_801E7068, 45.5f, D_801E706C, D_801E7070, D_801E7074, D_801E7078, D_801E707C) != 0) {
        D_8038C158();
        return 7;
    }
    return 6;
}
