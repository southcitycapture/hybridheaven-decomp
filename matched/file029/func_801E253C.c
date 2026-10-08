#include "common.h"

extern void func_8038BE98(f32);
extern void func_8038BD50(f32, f32, f32);
extern void D_8038BD88(f32, f32, f32);
extern f32 D_801E69D0;
extern f32 D_801E69D4;
extern f32 D_801E69D8;
extern f32 D_801E69DC;

s32 func_801E253C(s32 arg0, s32 arg1) {
    func_8038BE98(D_801E69D0);
    func_8038BD50(D_801E69D4, 8.5f, -19.6f);
    D_8038BD88(D_801E69D8, D_801E69DC, 23.3f);
    return 0x14;
}
