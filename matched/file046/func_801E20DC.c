#include "context.h"
extern void D_8038BD88(f32 arg0, f32 arg1, s32 arg2);
extern void func_8038BD50(f32 arg0, f32 arg1, s32 arg2);
extern void func_8038BE98(f32 arg0);

extern f32 D_801EB330;
extern f32 D_801EB334;
extern f32 D_801EB338;

s32 func_801E20DC(s32 arg0, s32 arg1) {
    func_8038BE98(D_801EB330);
    func_8038BD50(18.5f, D_801EB334, 0x4348999A);
    D_8038BD88(D_801EB338, 25.0f, 0x43508000);
    return 0xC;
}
