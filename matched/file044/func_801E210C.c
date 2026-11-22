#include "common.h"

extern void D_8038BD88(f32, f32, s32);
extern s32 D_8038C17C(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
extern void func_8038BD50(f32, f32, s32);
extern void func_8038BE98(f32);
s32 func_801E210C(s32 arg0, s32 arg1) {
    f32 a = 47.5999985f;
    f32 b = (-47.9000015f);
    f32 c = 33.2999992f;
    if (D_8038C17C(0.0f, 1.5f, -5.7f, 10.8f, (-24.7999992f), 36.2000008f, 14.1000004f, -43.0f, a, 15.0f, b, a, 16.2999992f, b, c, c) != 0) {
        func_8038BE98(33.2999992f);
        func_8038BD50(36.7000008f, 11.1999998f, 0xC2B03333);
        D_8038BD88(57.4000015f, 11.1999998f, 0xC24C6666);
        return 0x11;
    }
    return 0x10;
}
