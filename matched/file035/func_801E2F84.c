#include "common.h"
extern s32 D_8038C158();
extern void func_801C7B30(s32);

extern s32 func_8038C17C(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
extern f32 D_801E8B98;
extern f32 D_801E8B9C;
extern f32 D_801E8BA0;
extern f32 D_801E8BA4;
extern f32 D_801E8BA8;
extern f32 D_801E8BAC;
extern f32 D_801E8BB0;

s32 func_801E2F84(s32 arg0, s32 arg1) {
    func_801C7B30(1);
    if (func_8038C17C(0.0f, D_801E8BA0, 2.0f, 5.5f, D_801E8B98, D_801E8BA4, 5.5f, D_801E8B98, D_801E8BA8, D_801E8B9C, D_801E8BAC, -1.0f, D_801E8B9C, 980.0f, 7.0f, D_801E8BB0) != 0) {
        D_8038C158();
        return 0x18;
    }
    return 0x17;
}
