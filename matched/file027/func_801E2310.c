#include "context.h"

extern f32 D_801F56D0;
extern f32 D_801F56D4;
extern f32 D_801F56D8;
extern f32 D_801F56DC;
extern f32 D_801F56E0;
extern f32 D_801F56E4;
extern f32 D_801F56E8;
extern f32 D_801F56EC;

s32 func_801E2310(s32 arg0, s32 arg1) {
    if (func_8038BEF8(0.0f, 1.0f, -19.5f, 34.7f,
        D_801F56D0, D_801F56D4, D_801F56D8, -5.0f,
        D_801F56DC, D_801F56E0, D_801F56E4, D_801F56E8,
        D_801F56EC, 14.5f) != 0) {
        return 0x12;
    }
    return 0x11;
}
