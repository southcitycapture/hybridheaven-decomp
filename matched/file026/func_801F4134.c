#include "context.h"

typedef struct {
    f32 v[10];
} func_801F4134_Struct;

extern void func_801C0EB0(s32, s32);
extern u64 func_801C0F18(s32, s32);
extern u32 D_801FB874;
extern f32 D_801FB878;
extern func_801F4134_Struct D_801FBC60;
extern func_801F4134_Struct D_801FBC88;
extern f32 D_801FD2A8;
extern f64 D_801FD2B0;
extern f32 D_801FD448;
extern f32 D_801FD44C;
extern f32 D_801FD450;

s32 func_801F4134(s32 arg0, s32 arg1) {

    if (func_801C0B8C(0x01607A5F) != 0) {
        func_801C0EB0(1, 0);
        func_801CCE88(1, 0, 0, 0);
        func_801CCEC8(1, 0, -0x50, 0);
        func_801CCE88(2, 0, 0, 0);
        return 5;
    }
    if (func_801C0B8C(0x0132B39F) != 0) {
        D_801FD448 += 0;
        D_801FD44C += 0;
        D_801FD450 += D_801FD2A8;
        if (D_801FD450 < 0.0f) {
            D_801FD450 = 0.0f;
        }
        func_801CCE88(1, (u32)D_801FD448 & 0xFF, (u32)D_801FD44C & 0xFF, (u32)D_801FD450 & 0xFF);
        func_801CCEC8(1, 0, -0x50, 0);
    }
    if (func_801C0B8C(0x0104ECDF) != 0) {
        f64 d;
        f32 f;
        func_801F4134_Struct a;
        func_801F4134_Struct b;
        s32 c;
        f32 t;

        a = D_801FBC60;
        b = D_801FBC88;
        d = func_80034C24(func_801C0F18(1, 0));
        f = D_801FB878;
        if ((f32)((d / D_801FD2B0) - 1.0) > f) {
            D_801FB874++;
            D_801FB874 %= 10;
            f += a.v[D_801FB874];
            (&D_801FB870)[2] = f;
        }
        t = b.v[D_801FB874] * 100.0f;
        func_801CCE88(2, c = (u32)t & 0xFF, c & 0xFF, (u8)c);
        func_801CCEC8(2, -0x50, -0x14, 0);
    }
    return 4;
}
