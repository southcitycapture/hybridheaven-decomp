#include "context.h"
extern void D_8038BD88(f32, f32, s32);
extern void func_8038BD50(f32, f32, s32);

extern f32 D_801F45AC;
extern f32 D_801F45B0;
extern f32 D_801F45B4;

s32 func_801E234C(s32 arg0, s32 arg1) {
    func_8038BD50(D_801F45AC, D_801F45B0, 0xC2BA999A);
    D_8038BD88(D_801F45B4, 17.0f, 0xC25D999A);
    return 0x11;
}
