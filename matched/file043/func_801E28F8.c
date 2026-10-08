#include "common.h"

extern void func_8038BE98(f32);
extern void func_8038BD50(f32, f32, s32);
extern void D_8038BD88(f32, f32, s32);
extern f32 D_801EA114;
extern f32 D_801EA118;

s32 func_801E28F8(s32 arg0, s32 arg1) {
    func_8038BE98(41.5f);
    func_8038BD50(D_801EA114, 17.5f, 0x42D56666);
    D_8038BD88(-87.5f, D_801EA118, 0x42EE999A);
    return 0x1F;
}
