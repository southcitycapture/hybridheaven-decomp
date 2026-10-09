#include "context.h"

extern f32 D_801EB368;
extern f32 D_801EB36C;
extern f32 D_801EB370;
extern f32 D_801EB374;
extern f32 D_801EB378;

extern void func_8038BE98(f32);
extern void func_8038BD50(f32, f32, s32);
extern void D_8038BD88(f32, f32, s32);

s32 func_801E23B4(s32 arg0, s32 arg1) {
    func_8038BE98(D_801EB368);
    func_8038BD50(D_801EB36C, D_801EB370, 0x429C999A);
    D_8038BD88(D_801EB374, D_801EB378, 0x42C80000);
    return 0x16;
}
