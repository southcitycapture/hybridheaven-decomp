#include "common.h"

extern void D_8038BD88(f32, f32, s32);
extern void func_8038BD50(f32, f32, s32);
extern void func_8038BE98(f32);
extern void func_8038C4D8(s32, s32);
s32 func_801E2228(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x3F79FF) != 0) {
        func_8038BE98(33.2999992f);
        func_8038BD50(100.099998f, 31.1000004f, 0xC2AB0000);
        D_8038BD88(120.300003f, 30.7999992f, 0xC29C999A);
        func_8038C4D8(2, 0);
        return 0x13;
    }
    return 0x12;
}
