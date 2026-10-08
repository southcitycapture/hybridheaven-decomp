#include "common.h"

extern void func_8038BE98(f32);
extern void func_8038BD50(f32, f32, s32);
extern void D_8038BD88(f32, f32, s32);
extern f32 D_801E9904;
extern f32 D_801E9908;
extern f32 D_801E990C;
extern f32 D_801E9910;
extern f32 D_801E9914;

s32 func_801E20DC(s32 arg0, s32 arg1) {
    func_8038BE98(D_801E9904);
    func_8038BD50(D_801E9908, D_801E990C, 0xC3E20000);
    D_8038BD88(D_801E9910, D_801E9914, 0xC3E8F333);
    return 9;
}
