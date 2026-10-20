#include "context.h"
s32 func_801E22AC(s32 arg0, s32 arg1);
extern f32 D_801E6C30;
extern f32 D_801E6C34;
extern f32 D_801E6C38;
extern f32 D_801E6C3C;
extern f32 D_801E6C40;
extern f32 D_801E6C44;
extern f32 D_801E6C48;
extern f32 D_801E6C4C;

s32 func_801E22AC(s32 arg0, s32 arg1) {
    f32 a = D_801E6C30;
    f32 b = D_801E6C34;
    f32 c = D_801E6C38;
    f32 d = D_801E6C3C;
    if (D_8038C17C(0.0f, 2.0f, -68.0f, 27.9f, D_801E6C40, D_801E6C44, D_801E6C48, D_801E6C4C, a, b, c, a, b, c, d, d) != 0) {
        D_8038C158();
        return 9;
    }
    return 8;
}
