#include "context.h"

extern f32 D_801E9FE0;
extern f32 D_801E9FE4;
extern f32 D_801E9FE8;
extern f32 D_801E9FEC;
extern f32 D_801E9FF0;
extern f32 D_801E9FF4;
extern f32 D_801E9FF8;
extern f32 D_801E9FFC;
extern f32 D_801EA000;
extern f32 D_801EA004;

s32 func_801E1C54(s32 arg0, s32 arg1) {
    f32 x = D_801E9FE0;
    if (D_8038C17C(0.0f, 4.0f, 16.3f, 2.6f, 157.0f, D_801E9FE4, D_801E9FE8, D_801E9FEC, D_801E9FF0, D_801E9FF4, D_801E9FF8, D_801E9FFC, D_801EA000, D_801EA004, x, x) != 0) {
        return 2;
    }
    return 1;
}
