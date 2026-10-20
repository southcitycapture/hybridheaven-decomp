#include "context.h"
extern f32 D_801E4FF0;
extern f32 D_801E4FF4;
extern f32 D_801E4FF8;
extern f32 D_801E4FFC;
extern f32 D_801E5000;
extern f32 D_801E5004;
extern f32 D_801E5008;
extern f32 D_801E500C;
extern f32 D_801E5010;
extern f32 D_801E5014;
extern f32 D_801E5018;

s32 func_801E2168(s32 arg0, s32 arg1) {
    f32 k = D_801E4FF0;
    if (D_8038C17C(0.0f, 2.0f, 42.8f, 24.4f, D_801E4FF4, D_801E4FF8, D_801E4FFC, D_801E5000, D_801E5004, 25.5f, D_801E5008, 38.0f, D_801E500C, D_801E5010, k, k) != 0) {
        ((f32 *)&D_801E5200)[1] = 50.0f;
        ((f32 *)&D_801E5200)[2] = 50.0f;
        ((f32 *)&D_801E5200)[0] = 40.0f;
        ((f32 *)&D_801E5200)[3] = 0.5f;
        ((f32 *)&D_801E5200)[5] = D_801E5014;
        ((f32 *)&D_801E5200)[6] = D_801E5018;
        func_801C7A74(&D_801E5200);
        D_8038C158();
        return 7;
    }
    return 6;
}
