#include "context.h"
extern void func_801C0D04(s32, s32);
extern s32 func_801C0DE4(s32 arg0, s32 arg1, s32 arg2);
extern void func_801C0EB0(s32 arg0, s32 arg1);
extern u64 func_801C0F18(s32, s32);
extern f64 func_80034C24();

extern f64 D_80208860;

s32 func_801E64E0(s32 arg0, s32 arg1) {
    if (D_80208E20 == 0) {
        goto case0;
    }
    if (D_80208E20 == 1) {
        goto case1;
    }
    return 8;
case0:
    func_801C0D04(4, 6);
    D_80208E20 = 1;
    goto end;
case1:
    if (func_801C0DE4(4, 6, 0x40000000) != 0) {
        func_801C0EB0(4, 6);
        return 9;
    }
    *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(func_801DAAF0 + 0x24) + 8) + 8) + 8) + 8) + 8) + 8) + 8) + 0x24) + 0x2C) + 4) = (f32) (((f32) (func_80034C24(func_801C0F18(4, 6)) / D_80208860) * 0.5f * 18.0f) + -9.0f);
end:
    return 8;
}
