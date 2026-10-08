#include "common.h"

extern void func_8038BD50(f32, f32, s32);
extern void D_8038BD88(f32, f32, s32);
extern f32 D_801F5734;
extern f32 D_801F5738;

s32 func_801E2734(s32 arg0, s32 arg1) {
    func_8038BD50(D_801F5734, D_801F5738, 0x40E33333);
    D_8038BD88(2.0f, 14.0f, 0xC0866666);
    return 0x1D;
}
