#include "context.h"

extern void D_8038BD88(f32, f32, s32);
extern void func_8038BD50(f32, f32, s32);
extern f32 D_801F46F8;
extern f32 D_801F46FC;
extern f32 D_801F4700;

s32 func_801E3134(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x5B8D80) != 0) {
        func_8038BD50(D_801F46F8, 28.5f, 0xC28B0000);
        D_8038BD88(D_801F46FC, D_801F4700, 0xC2533333);
        return 0x33;
    }
    return 0x32;
}
