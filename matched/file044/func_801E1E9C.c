#include "common.h"

extern void func_8038BE98(f32);
extern void func_8038BD50(f32, f32, s32);
extern void D_8038BD88(f32, f32, s32);
extern f32 D_801EDB70;
extern f32 D_801EDB74;
extern f32 D_801EDB78;
extern f32 D_801EDB7C;

s32 func_801E1E9C(s32 arg0, s32 arg1) {
    func_8038BE98(D_801EDB70);
    func_8038BD50(-16.5f, D_801EDB74, 0x41840000);
    D_8038BD88(D_801EDB78, D_801EDB7C, 0xBF666666);
    return 8;
}
