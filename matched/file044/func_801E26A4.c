#include "common.h"

extern void D_8038BD88(f32, f32, s32);
extern void func_8038BD50(f32, f32, s32);
extern void func_8038BE98(f32);
s32 func_801E26A4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x192D50) != 0) {
        func_8038BE98(33.2999992f);
        func_8038BD50(100.099998f, 31.1000004f, 0xC2AB0000);
        D_8038BD88(120.300003f, 30.7999992f, 0xC29C999A);
        return 0x20;
    }
    return 0x1F;
}
