#include "context.h"

extern s32 D_8038C17C(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
extern f32 D_801E5048;
extern f32 D_801E504C;
extern f32 D_801E5050;
extern f32 D_801E5054;
extern f32 D_801E5058;
extern f32 D_801E505C;
extern f32 D_801E5060;
extern f32 D_801E5064;
extern f32 D_801E5068;
extern f32 D_801E506C;

s32 func_801E23B4(s32 arg0, s32 arg1) {
    f32 v = D_801E5048;
    if (D_8038C17C(0.0f, 4.0f, 50.9f, -0.9f, D_801E504C, D_801E5050, D_801E5054, D_801E5058, D_801E505C, D_801E5060, 46.0f, D_801E5064, D_801E5068, D_801E506C, v, v) != 0) {
        D_8038C158();
        return 9;
    }
    return 8;
}
