#include "context.h"
extern void D_8038BD88(f32, f32, s32);
extern void func_8038BD50(f32, f32, s32);
extern void func_8038BE98(f32);

extern f32 D_801EA0E4;
extern f32 D_801EA0E8;
extern f32 D_801EA0EC;
extern f32 D_801EA0F0;

s32 func_801E25C8(s32 arg0, s32 arg1) {
    func_8038BE98(41.5f);
    func_8038BD50(D_801EA0E4, D_801EA0E8, 0x42E2CCCD);
    D_8038BD88(D_801EA0EC, D_801EA0F0, 0x42F9CCCD);
    return 0x16;
}
