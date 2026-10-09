#include "context.h"
extern void D_8038BD88(f32, f32, s32);
extern void func_8038BD50(f32, f32, s32);
extern void func_8038BE98(f32);

extern f32 D_801EA0F4;
extern f32 D_801EA0F8;
extern f32 D_801EA0FC;
extern f32 D_801EA100;

s32 func_801E26D8(s32 arg0, s32 arg1) {
    func_8038BE98(41.5f);
    func_8038BD50(D_801EA0F4, D_801EA0F8, 0x42D33333);
    D_8038BD88(D_801EA0FC, D_801EA100, 0x42F86666);
    return 0x19;
}
