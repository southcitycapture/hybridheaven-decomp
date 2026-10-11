#include "context.h"

extern f32 D_801EB384;
extern f32 D_801EB388;
extern f32 D_801EB38C;
extern f32 D_801EB390;
extern f32 D_801EB394;

extern void func_8038BE98(f32);
extern void func_8038BD50(f32, f32, s32);
extern void D_8038BD88(f32, f32, s32);

s32 func_801E25C8(s32 arg0, s32 arg1) {
    func_8038BE98(D_801EB384);
    func_8038BD50(D_801EB388, D_801EB38C, 0x429C999A);
    D_8038BD88(D_801EB390, D_801EB394, 0x42C80000);
    return 0x1C;
}
