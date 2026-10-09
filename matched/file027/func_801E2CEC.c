#include "context.h"

extern f32 D_801F57D8;
extern f32 D_801F57DC;
extern f32 D_801F57E0;

s32 func_801E2CEC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x016E3600) != 0) {
        func_8038BD50(D_801F57D8, D_801F57DC, 0xBF666666);
        D_8038BD88(-0.5f, D_801F57E0, 0xC2100000);
        return 0x27;
    }
    return 0x26;
}
