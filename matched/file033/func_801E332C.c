#include "common.h"

extern void func_8038BD50(f32, f32, u32);
extern void D_8038BD88(f32, f32, u32);
extern f32 D_801F4728;

s32 func_801E332C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xA7D8C0) != 0) {
        func_8038BD50(-7.5f, D_801F4728, 0xC265999A);
        D_8038BD88(-4.5f, 20.5f, 0xC270CCCD);
        return 0x37;
    }
    return 0x36;
}
