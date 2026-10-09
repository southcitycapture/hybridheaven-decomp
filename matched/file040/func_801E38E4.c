#include "context.h"

extern s32 func_801C0DE4(s32 arg0, s32 arg1, s32 arg2);
extern void func_801C0EB0(s32 arg0, s32 arg1);
extern u64 func_801C0F18(s32 arg0, s32 arg1);
extern f64 func_80034C24(u64 arg0);
extern f64 D_801E87F0;

s32 func_801E38E4(s32 arg0, s32 arg1) {
    f32 divisor;

    divisor = 4.0f;
    if (func_801C0DE4(3, 0, 0x40800000) != 0) {
        func_801C0EB0(3, 0);
        return 8;
    }
    *(f32 *) (*(s32 *) ((s32) *(s32 *) D_8038D8D0 + 0x30) + 8) = (f32) ((((f32) (func_80034C24(func_801C0F18(3, 0)) / D_801E87F0) / divisor) * 121.0f) + 147.0f);
    return 7;
}
