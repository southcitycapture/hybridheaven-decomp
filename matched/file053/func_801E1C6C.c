#include "common.h"

extern void D_8038BD88(f32, f32, f32);
extern void func_8038BD50(f32, f32, f32);
extern void func_8038BE98(f32);
extern f32 D_801E98B0;
extern f32 D_801E98B4;

s32 func_801E1C6C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xBBAEE0) != 0) {
        func_8038BE98(D_801E98B0);
        func_8038BD50(-4.0f, D_801E98B4, -23.5f);
        D_8038BD88(0.5f, 14.5f, -39.9f);
        return 2;
    }
    return 1;
}
