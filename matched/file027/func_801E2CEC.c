#include "common.h"

extern void D_8038BD88(f32, f32, s32);
extern s32 func_801C0B8C(u64);
extern void func_8038BD50(f32, f32, s32);
s32 func_801E2CEC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x016E3600) != 0) {
        func_8038BD50(0.899999976f, 12.3999996f, 0xBF666666);
        D_8038BD88(-0.5f, 34.7999992f, 0xC2100000);
        return 0x27;
    }
    return 0x26;
}
