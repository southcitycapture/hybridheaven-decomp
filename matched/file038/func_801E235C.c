#include "context.h"

extern void func_8038BE98(f32);
extern void func_8038BD50(f32, f32, s32);
extern void D_8038BD88(f32, f32, s32);
extern f32 D_801E70C8;
extern f32 D_801E70CC;
extern f32 D_801E70D0;
extern f32 D_801E70D4;

s32 func_801E235C(s32 arg0, s32 arg1) {
    func_8038BE98(D_801E70C8);
    func_8038BD50(D_801E70CC, 5.5f, 0x41D33333);
    D_8038BD88(D_801E70D0, D_801E70D4, 0x422E0000);
    return 0xE;
}
