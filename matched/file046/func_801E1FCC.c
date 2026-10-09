#include "context.h"
extern void D_8038BD88(f32 arg0, f32 arg1, s32 arg2);
extern void func_8038BD50(f32 arg0, f32 arg1, s32 arg2);
extern void func_8038BE98(f32 arg0);

extern f32 D_801EB320;
extern f32 D_801EB324;
extern f32 D_801EB328;
extern f32 D_801EB32C;

s32 func_801E1FCC(s32 arg0, s32 arg1) {
    func_8038BE98(D_801EB320);
    func_8038BD50(D_801EB324, D_801EB328, 0x42613333);
    D_8038BD88(D_801EB32C, 10.5f, 0x42CA6666);
    return 9;
}
