#include "common.h"

extern void D_8038BD88(f32, f32, f32);
extern void func_8038BD50(f32, f32, f32);
extern void func_8038BEAC(void);
s32 func_801E25F8(s32 arg0, s32 arg1) {
    func_8038BEAC();
    func_8038BD50(0.0f, 0.0f, -14.4f);
    D_8038BD88(0.899999976f, 6.80000019f, 3.2f);
    return 0x16;
}
