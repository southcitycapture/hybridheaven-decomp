#include "context.h"

extern s32 D_8038C17C(f32, f32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
extern f32 D_801E4F70;
extern f32 D_801E4F74;
extern f32 D_801E4F78;
extern f32 D_801E4F7C;
extern f32 D_801E4F80;
extern f32 D_801E4F84;
extern f32 D_801E4F88;
extern f32 D_801E4F8C;

s32 func_801E1C34(s32 arg0, s32 arg1) {
    f32 a = D_801E4F70, b = D_801E4F74, c = D_801E4F78;
    if (D_8038C17C(0.0f, 2.0f, 0x4174CCCD, 0xC20B3333, D_801E4F7C, 18.0f, D_801E4F80, D_801E4F84, a, D_801E4F88, b, a, D_801E4F8C, b, c, c) != 0) {
        return 2;
    }
    return 1;
}
