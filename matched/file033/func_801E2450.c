#include "common.h"

extern void func_8038BD50(f32, f32, s32);
extern void D_8038BD88(f32, f32, s32);
extern f32 D_801F45B8;
extern f32 D_801F45BC;

s32 func_801E2450(s32 arg0, s32 arg1) {
    func_8038BD50(-3.0f, D_801F45B8, 0xC144CCCD);
    D_8038BD88(D_801F45BC, 18.5f, 0xC264CCCD);
    return 0x14;
}
