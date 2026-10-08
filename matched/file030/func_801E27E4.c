#include "common.h"

extern void func_8038BD50(f32, f32, s32);
extern void D_8038BD88(f32, f32, s32);
extern f32 D_801EC5BC;
extern f32 D_801EC5C0;
extern f32 D_801EC5C4;

s32 func_801E27E4(s32 arg0, s32 arg1) {
    func_8038BD50(48.0f, D_801EC5BC, 0x41A8CCCD);
    D_8038BD88(D_801EC5C0, D_801EC5C4, 0xC0B9999A);
    return 0x1C;
}
