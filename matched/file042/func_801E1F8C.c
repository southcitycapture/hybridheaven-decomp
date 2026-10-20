#include "context.h"

extern s32 D_8038C17C(f32, f32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);

extern f32 D_801E4FE0;
extern f32 D_801E4FE4;
extern f32 D_801E4FE8;
extern f32 D_801E4FEC;
extern f32 D_801E4FF0;
extern f32 D_801E4FF4;
extern f32 D_801E4FF8;
extern f32 D_801E4FFC;
extern f32 D_801E5000;
extern f32 D_801E5004;
extern f32 D_801E5008;
extern f32 D_801E500C;

s32 func_801E1F8C(s32 arg0, s32 arg1) {
    f32 x = D_801E4FE0;
    if (D_8038C17C(0.0f, D_801E4FE4, (s32)0xC36B6666, (s32)0x417B3333,
                   D_801E4FE8, D_801E4FEC, D_801E4FF0, D_801E4FF4,
                   D_801E4FF8, D_801E4FFC, D_801E5000, D_801E5004,
                   D_801E5008, D_801E500C, x, x) != 0) {
        return 8;
    }
    return 7;
}
