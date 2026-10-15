#include "context.h"

extern s32 D_8038C17C(f32, f32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
extern f32 D_801E8518;
extern f32 D_801E851C;
extern f32 D_801E8520;
extern f32 D_801E8524;
extern f32 D_801E8528;
extern f32 D_801E852C;
extern f32 D_801E8530;
extern f32 D_801E8534;
extern f32 D_801E8538;
extern f32 D_801E853C;
extern f32 D_801E8540;

s32 func_801E1D20(s32 arg0, s32 arg1) {
    if (D_8038C17C(0.0f, D_801E8518, 0xC0133333, 0x40133333, D_801E851C, D_801E8520, D_801E8524, D_801E8528, D_801E852C, D_801E8530, D_801E8534, D_801E8538, D_801E853C, D_801E8540, 25.5f, 20.0f) != 0) {
        D_8038C158();
        return 3;
    }
    return 2;
}
