#include "context.h"

extern f32 D_80208BB0;
extern f32 D_80208BB4;
extern f32 D_80208BB8;
extern f32 D_80208BBC;
extern f32 D_80208BC0;
extern f32 D_80208BC4;
extern f32 D_80208BC8;
extern f32 D_80208BCC;
extern f32 D_80208BD0;

s32 func_801F5630(s32 arg0, s32 arg1) {
    f32 temp = D_80208BB0;

    if (func_8038BEF8(0.0f, D_80208BB4, 22.7f, -6.0f, D_80208BB8, D_80208BBC, D_80208BC0, D_80208BC4, 0.0f, temp, D_80208BC8, D_80208BCC, temp, D_80208BD0) != 0) {
        return 0xC;
    }
    return 0xB;
}
