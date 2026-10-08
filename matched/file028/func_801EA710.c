#include "context.h"

extern f32 D_8020894C;
extern f32 D_80208950;
extern f32 D_80208954;
extern f32 D_80208958;
extern f32 D_8020895C;
extern f32 D_80208960;

s32 func_801EA710(s32 arg0, s32 arg1) {
    f32 tmp;

    tmp = D_8020894C;
    if (func_8038BEF8(0.0f, 3.0f, 20.4f, 4.7f, D_80208950, D_80208954, D_80208958, D_8020895C, 4.5f, 10.0f, tmp, D_80208960, 11.0f, tmp) != 0) {
        return 0x2C;
    }
    return 0x2B;
}
