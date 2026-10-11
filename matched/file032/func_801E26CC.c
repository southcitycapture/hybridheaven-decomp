#include "context.h"

extern void func_8038BD50(f32, f32, s32);
extern void D_8038BD88(f32, f32, s32);
extern f32 D_801EB8E0;
extern f32 D_801EB8E4;
extern f32 D_801EB8E8;

s32 func_801E26CC(s32 arg0, s32 arg1) {
    func_8038BD50(D_801EB8E0, D_801EB8E4, 0xC1A80000);
    D_8038BD88(-1.5f, D_801EB8E8, 0xC22B999A);
    return 0x22;
}
