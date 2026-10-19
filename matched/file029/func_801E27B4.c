#include "context.h"

extern f32 D_801E69FC;
extern f32 D_801E6A00;
extern f32 D_801E6A04;
extern f32 D_801E6A08;
extern f32 D_801E6A0C;
extern f32 D_801E6A10;
extern f32 D_801E6A14;
extern f32 D_801E6A18;
extern f32 D_801E6A1C;

extern s32 D_8038C17C(f32, f32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);

s32 func_801E27B4(s32 arg0, s32 arg1) {
    if (D_8038C17C(0.0f, 5.0f, 0x41F33333, 0x40C9999A, -19.0f, D_801E69FC,
                   D_801E6A00, D_801E6A04, D_801E6A08, D_801E6A0C, D_801E6A10,
                   D_801E6A14, 14.0f, D_801E6A18, D_801E6A1C, 40.0f) != 0) {
        return 0x1C;
    }
    return 0x1B;
}
