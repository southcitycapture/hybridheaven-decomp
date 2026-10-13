#include "context.h"

extern void func_8038BE98(f32);
extern void func_8038BD50(f32, f32, s32);
extern void D_8038BD88(f32, f32, s32);
extern f32 D_801EA104;
extern f32 D_801EA108;
extern f32 D_801EA10C;
extern f32 D_801EA110;

s32 func_801E27E8(s32 arg0, s32 arg1) {
    func_8038BE98(41.5f);
    func_8038BD50(D_801EA104, D_801EA108, 0x42EC3333);
    D_8038BD88(D_801EA10C, D_801EA110, 0x42EE6666);
    return 0x1C;
}
