#include "context.h"

extern s32 D_8038C17C(f32, f32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
extern f32 D_801E8810;
extern f32 D_801E8814;
extern f32 D_801E8818;
extern f32 D_801E881C;
extern f32 D_801E8820;
extern f32 D_801E8824;
extern f32 D_801E8828;
extern f32 D_801E882C;
extern f32 D_801E8830;
extern f32 D_801E8834;
extern f32 D_801E8838;

s32 func_801E2A60(s32 arg0, s32 arg1) {
    f32 x = D_801E8810;
    if (D_8038C17C(0.0f, 4.0f, 0x43ECC000, 0x442BD99A, D_801E8814, D_801E8818, D_801E881C, D_801E8820, D_801E8824, D_801E8828, D_801E882C, D_801E8830, D_801E8834, D_801E8838, x, x) != 0) {
        return 0x22;
    }
    return 0x21;
}
