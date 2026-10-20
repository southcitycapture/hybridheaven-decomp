#include "context.h"
extern s32 D_8038C17C(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
extern f32 D_801E4FC4, D_801E4FC8, D_801E4FCC, D_801E4FD0, D_801E4FD4, D_801E4FD8, D_801E4FDC, D_801E4FE0, D_801E4FE4, D_801E4FE8, D_801E4FEC;

s32 func_801E2048(s32 arg0, s32 arg1) {
    f32 a = D_801E4FC4, b = D_801E4FC8, c = D_801E4FCC;
    if (D_8038C17C(0.0f, 4.5f, 58.6f, b, D_801E4FD0, D_801E4FD4, b, a, D_801E4FD8, c, D_801E4FDC, D_801E4FE0, c, D_801E4FE4, a, a) != 0) {
        D_801E5200.unk0 = 40.0f;
        D_801E5200.unk4 = 50.0f;
        D_801E5200.unk8 = -100.0f;
        D_801E5200.unkC = 1.0f;
        D_801E5200.unk14 = D_801E4FE8;
        D_801E5200.unk18 = D_801E4FEC;
        func_801C7A74(&D_801E5200);
        D_8038C158();
        return 6;
    }
    return 5;
}
