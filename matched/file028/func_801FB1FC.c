#include "context.h"

extern f32 D_80208C7C;
extern f32 D_80208C80;
extern f32 D_80208C84;
extern f32 D_80208C88;
extern f32 D_80208C8C;
extern f32 D_80208C90;
extern f32 D_80208C94;

s32 func_801FB1FC(s32 arg0, s32 arg1) {
    f32 a = D_80208C7C;
    f32 b = D_80208C80;

    if (func_8038BEF8(0.0f, 1.0f, a, 44.0f, 19.0f, a, D_80208C84, D_80208C88, b,
                      D_80208C8C, D_80208C90, b, D_80208C94, -23.0f) != 0) {
        func_8038BED4();
        return 9;
    }
    return 8;
}
