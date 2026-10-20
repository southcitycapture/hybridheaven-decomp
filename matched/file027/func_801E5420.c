#include "context.h"
extern void func_801C0D04(s32, s32);
extern s32 func_801C0DE4(s32, s32, s32);
extern void func_801C0EB0(s32, s32);
extern u64 func_801C0F18(s32, s32);
extern f64 D_801F5880;
extern f32 D_801F5A60;

s32 func_801E5420(s32 arg0, s32 arg1) {
    u64 t;
    f32 n = -2.0f;
    if (D_801F3DDC != 0) {
        if (D_801F3DDC == 1) goto c1;
        return 0x11;
    }
    if (func_801CFD50() != 0) {
        D_801F5A60 = *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(D_801DAB14 + 8) + 0x24) + 0x2C) + 8);
        func_801C0D04(4, 0);
        D_801F3DDC = 1;
    }
    goto end;
c1:
    if (func_801C0DE4(4, 0, 0x40400000) != 0) {
        func_801C0EB0(4, 0);
        return 0x12;
    }
    t = func_801C0F18(4, 0);
    *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(D_801DAB14 + 8) + 0x24) + 0x2C) + 8) =
        (func_80034C24(t) / D_801F5880) * (f64)(n / 3.0f) + (f64)D_801F5A60;
end:
    return 0x11;
}
