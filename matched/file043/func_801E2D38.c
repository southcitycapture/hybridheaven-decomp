#include "context.h"

extern void func_8038BE98(f32);
extern void func_8038BD50(f32, f32, s32);
extern void D_8038BD88(f32, f32, s32);
extern f32 D_801EA140;
extern f32 D_801EA144;
extern f32 D_801EA148;
extern f32 D_801EA14C;

s32 func_801E2D38(s32 arg0, s32 arg1) {
    func_8038BE98(41.5);
    func_8038BD50(D_801EA140, D_801EA144, 0x42E0CCCD);
    D_8038BD88(D_801EA148, D_801EA14C, 0x42F86666);
    return 0x2B;
}
