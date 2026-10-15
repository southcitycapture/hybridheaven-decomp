#include "context.h"

extern s32 D_8038C17C(f32, f32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
extern f32 D_801E8594;
extern f32 D_801E8598;
extern f32 D_801E859C;
extern f32 D_801E85A0;
extern f32 D_801E85A4;
extern f32 D_801E85A8;
extern f32 D_801E85AC;
extern f32 D_801E85B0;
extern f32 D_801E85B4;
extern f32 D_801E85B8;

s32 func_801E1FC8(s32 arg0, s32 arg1) {
    if (D_8038C17C(0.0f, 2.0f, 0x41566666, 0x40266666, D_801E8594, D_801E8598, D_801E859C, D_801E85A0, D_801E85A4, D_801E85A8, D_801E85AC, D_801E85B0, 17.5f, D_801E85B4, 13.5f, D_801E85B8) != 0) {
        D_8038C158();
        return 6;
    }
    return 5;
}
