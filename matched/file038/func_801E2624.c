#include "common.h"
extern void D_8038C158(void);
extern s32 D_8038C17C(f32, f32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);


extern f32 D_801E7104;
extern f32 D_801E7108;
extern f32 D_801E710C;
extern f32 D_801E7110;
extern f32 D_801E7114;
extern f32 D_801E7118;

s32 func_801E2624(s32 arg0, s32 arg1) {
    f32 a = D_801E7104;
    f32 b = D_801E7108;
    f32 c = 40.5f;
    f32 d = D_801E710C;
    if (D_8038C17C(0.0f, 2.0f, 0xC1F00000, 0x40266666, D_801E7110, D_801E7114, 1.5f, D_801E7118, a, b, c, a, b, c, d, d) != 0) {
        D_8038C158();
        return 0x17;
    }
    return 0x16;
}
