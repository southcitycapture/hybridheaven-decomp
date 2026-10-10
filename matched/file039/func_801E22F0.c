#include "context.h"

extern void func_8038BE98(f32);
extern f32 D_801EB0DC;
extern f32 D_801EB0E0;
extern f32 D_801EB0E4;
extern f32 D_801EB0E8;

s32 func_801E22F0(s32 arg0, s32 arg1) {
    func_8038BE98(D_801EB0DC);
    func_8038BD50(D_801EB0E0, 36.5f, 0x418C0000);
    D_8038BD88(D_801EB0E4, D_801EB0E8, 0x4215999A);
    return 0x14;
}
