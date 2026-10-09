#include "context.h"
extern void D_8038BD88(f32, f32, s32);
extern void func_8038BD50(f32, f32, s32);
extern void func_8038BE98(f32);

extern f32 D_801EDB5C;
extern f32 D_801EDB60;
extern f32 D_801EDB64;
extern f32 D_801EDB68;
extern f32 D_801EDB6C;

s32 func_801E1DA8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x5B8D80) != 0) {
        func_8038BE98(D_801EDB5C);
        func_8038BD50(D_801EDB60, D_801EDB64, 0xC18C0000);
        D_8038BD88(D_801EDB68, D_801EDB6C, 0x3ECCCCCD);
        return 4;
    }
    return 3;
}
