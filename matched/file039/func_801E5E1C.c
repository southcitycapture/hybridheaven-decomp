#include "context.h"

extern s32 func_801C4028(s32, f32, f32, f32, s32, s32, s32, f32, f32, s32, s32, s32, s32, s32, s32, s32);
extern f32 D_801EB38C;

s32 func_801E5E1C(s32 arg0, s32 arg1) {
    f32 k;
    if (D_801EA694 != 0) {
        if (D_801EA694 == 1) {
            goto case1;
        }
        return 4;
    }
    if (func_801C0B8C(0xB5122A) != 0) {
        func_8038D28C(0x257);
        func_801C4028(1, -61.0f, 9.0f, 62.0f, 0, 0x69, 0, 0.5f, 0.5f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
        D_801EA694 = 1;
    }
    goto end;
case1:
    if (func_801C0B8C(0xB71B00) != 0) {
        k = D_801EB38C;
        func_801C4028(1, -60.0f, 9.0f, 62.0f, 0, 0x69, 0, k, k, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
        return 5;
    }
end:
    return 4;
}
