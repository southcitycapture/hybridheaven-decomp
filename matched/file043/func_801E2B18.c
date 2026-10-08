#include "common.h"

extern void func_8038BE98(f32);
extern void func_8038BD50(f32, f32, s32);
extern void D_8038BD88(f32, f32, s32);
extern f32 D_801EA128;
extern f32 D_801EA12C;
extern f32 D_801EA130;
extern f32 D_801EA134;

s32 func_801E2B18(s32 arg0, s32 arg1) {
    func_8038BE98(41.5);
    func_8038BD50(D_801EA128, D_801EA12C, 0x42ECCCCD);
    D_8038BD88(D_801EA130, D_801EA134, 0x42EE6666);
    return 0x25;
}
