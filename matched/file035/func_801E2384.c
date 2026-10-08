#include "common.h"

extern void D_8038BD88(f32, f32, f32);
extern void func_801CC470(s32, s32, s32, s32, f32);
extern void func_8038BD50(f32, f32, f32);
extern void func_8038BE98(f32);
extern void func_8038BED4(void);
extern f32 D_801E89CC;
extern f32 D_801E89D0;
extern f32 D_801E89D4;
extern f32 D_801E89D8;
extern f32 D_801E89DC;

s32 func_801E2384(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x0115B5BE) != 0) {
        func_8038BE98(D_801E89CC);
        func_8038BD50(D_801E89D0, D_801E89D4, 76.7f);
        D_8038BD88(D_801E89D8, D_801E89DC, -0.1f);
        func_8038BED4();
        func_801CC470(1, 0x03480087, 0, 1, 1.0f);
        return 0xA;
    }
    return 9;
}
