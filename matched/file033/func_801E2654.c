#include "context.h"

extern void func_8038BD50(f32, f32, s32);
extern void D_8038BD88(f32, f32, s32);
extern f32 D_801F45CC;
extern f32 D_801F45D0;
extern f32 D_801F45D4;

s32 func_801E2654(s32 arg0, s32 arg1) {
    func_8038BD50(D_801F45CC, D_801F45D0, 0xC1FC0000);
    D_8038BD88(-3.5f, D_801F45D4, 0xC25D999A);
    return 0x1A;
}
