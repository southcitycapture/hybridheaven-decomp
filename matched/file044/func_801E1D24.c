#include "context.h"
extern void D_8038BD88(f32, f32, s32);
extern void func_8038BD50(f32, f32, s32);
extern void func_8038BE98(f32);

extern f32 D_801EDB48;
extern f32 D_801EDB4C;
extern f32 D_801EDB50;
extern f32 D_801EDB54;
extern f32 D_801EDB58;

s32 func_801E1D24(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x3D0900) != 0) {
        func_8038BE98(D_801EDB48);
        func_8038BD50(D_801EDB4C, D_801EDB50, 0xC2553333);
        D_8038BD88(D_801EDB54, D_801EDB58, 0xC236CCCD);
        return 3;
    }
    return 2;
}
