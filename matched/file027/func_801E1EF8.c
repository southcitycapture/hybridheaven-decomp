#include "common.h"

extern void *func_801BF6B0(s32);
extern void func_8038BD50(f32, f32, s32);
extern void D_8038BD88(f32, f32, s32);
extern f32 D_801F5688;
extern f32 D_801F568C;
extern f32 D_801F5690;
extern f32 D_801F5694;

s32 func_801E1EF8(s32 arg0, s32 arg1) {
    if (((s32 *)func_801BF6B0(7))[3] >= 0xF) {
        func_8038BD50(D_801F5688, D_801F568C, 0x40D33333);
        D_8038BD88(D_801F5690, D_801F5694, 0xC0C9999A);
        return 8;
    }
    return 7;
}
