#include "common.h"
#include "functions.h"

extern void func_8038BE98(f32 a0);
extern void func_8038BD50(f32 a0, f32 a1, f32 a2);
extern void D_8038BD88(f32 a0, f32 a1, f32 a2);
extern f32 D_801EA4A0;
extern f32 D_801EA4A4;
extern f32 D_801EA4A8;
extern f32 D_801EA4AC;

s32 func_801E1DE0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x73F780) != 0) {
        func_8038BE98(D_801EA4A0);
        func_8038BD50(-39.0f, D_801EA4A4, -11.0f);
        D_8038BD88(D_801EA4A8, D_801EA4AC, 64.4f);
        return 4;
    }
    return 3;
}
