#include "common.h"

extern void func_8038BD50(f32, f32, s32);
extern void D_8038BD88(f32, f32, s32);
extern f32 D_801EC50C;
extern f32 D_801EC510;
extern f32 D_801EC514;

s32 func_801E2358(s32 arg0, s32 arg1) {
    func_8038BD50(D_801EC50C, D_801EC510, 0xC1080000);
    D_8038BD88(-2.5f, D_801EC514, 0x40666666);
    return 0x14;
}
