#include "context.h"

extern s32 func_801CEEF4();
extern void D_801CEF10(s32);

s32 func_801E6140(s32 arg0, s32 arg1) {
    s32 sp1C;
    s32 sp18;
    s32 temp_v0;
    f32 q;

    sp1C = func_801CEDE4();
    sp18 = func_801CEEF4();
    temp_v0 = func_801C1088(3, 0x2673, 0x4B);
    if ((sp1C != 0) && (sp18 != 0) && (temp_v0 != 0)) {
        func_801C10D8(3, 0x2673);
        return 0x14;
    }
    if (temp_v0 == 0) {
        q = (f32) func_801C1134(3, 0x2673) / 75.0f;
        D_801CEF10((u32) ((-255.0f * q) + 255.0f) & 0xFF);
    }
    return 0x13;
}
