#include "context.h"
extern s32 D_8038C17C(f32, f32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);

extern f32 D_801E4FB4;
extern f32 D_801E4FB8;
extern f32 D_801E4FBC;
extern f32 D_801E4FC0;
extern f32 D_801E4FC4;
extern f32 D_801E4FC8;
extern f32 D_801E4FCC;
extern f32 D_801E4FD0;
extern f32 D_801E4FD4;
extern f32 D_801E4FD8;
extern f32 D_801E4FDC;

s32 func_801E1E64(s32 arg0, s32 arg1) {
    if (D_8038C17C(0.0f, 2.0f, 0x42BB6666, 0x40A9999A, D_801E4FB4, D_801E4FB8, D_801E4FBC, D_801E4FC0, D_801E4FC4, D_801E4FC8, D_801E4FCC, D_801E4FD0, D_801E4FD4, D_801E4FD8, 50.5f, D_801E4FDC) != 0) {
        return 6;
    }
    return 5;
}
