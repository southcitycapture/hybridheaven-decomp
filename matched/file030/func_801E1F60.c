#include "context.h"
extern void D_8038BD88(f32, f32, s32);
extern void func_8038BD50(f32, f32, s32);

extern f32 D_801EC4C8;
extern f32 D_801EC4CC;
extern f32 D_801EC4D0;
extern f32 D_801EC4D4;

s32 func_801E1F60(s32 arg0, s32 arg1) {
    func_8038BD50(D_801EC4C8, D_801EC4CC, 0x4265999A);
    D_8038BD88(D_801EC4D0, D_801EC4D4, 0x41D00000);
    return 8;
}
